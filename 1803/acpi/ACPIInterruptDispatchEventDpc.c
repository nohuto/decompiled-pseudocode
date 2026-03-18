/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C002A900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00279A4 (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0027A9C (ACPIGpeIndexToByteIndex.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C002F100 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C0034ADC (ACPIWriteGpeStatusRegister.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  size_t v4; // r15
  char v5; // r14
  __int64 v6; // rdx
  size_t v7; // r8
  char v8; // al
  _BYTE *v9; // rcx
  unsigned int i; // ebx
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r13
  unsigned int v13; // r8d
  int v14; // edx
  unsigned __int8 v15; // cl
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // r12d
  int v19; // r12d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // edi
  __int64 v24; // rbx
  unsigned __int8 v25; // si
  unsigned __int8 v26; // [rsp+38h] [rbp-69h]
  unsigned int v27; // [rsp+3Ch] [rbp-65h]
  _BYTE v28[96]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v29[32]; // [rsp+A8h] [rbp+7h] BYREF

  HIBYTE(v27) = 0;
  v4 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v5 = 0;
  AcpiGpeDpcScheduled = 0;
  if ( !AcpiGpeDpcRunning )
  {
    AcpiGpeDpcRunning = 1;
    memset(v28, 0, 0x20uLL);
    do
    {
      AcpiGpeWorkDone = 0;
      if ( (_DWORD)v4 )
      {
        v6 = 0LL;
        v7 = v4;
        do
        {
          v8 = *((_BYTE *)GpeRunMethod + v6);
          *((_BYTE *)GpeRunMethod + v6) = 0;
          v28[v6 + 64] = v8;
          v28[v6 + 32] = *((_BYTE *)GpeIsLevel + v6);
          v9 = GpeComplete;
          v28[v6] |= *((_BYTE *)GpeComplete + v6);
          v9[v6++] = 0;
          --v7;
        }
        while ( v7 );
      }
      memmove(v29, GpeWakeEnable, v4);
      KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
      for ( i = 0; i < (unsigned int)v4; v5 = 0 )
      {
        v11 = v28[i + 32];
        v12 = v28[i + 64];
        v26 = v11;
        while ( v12 )
        {
          v13 = *((unsigned __int16 *)AcpiInformation + 43);
          v14 = FirstSetLeftBit[v12];
          v15 = FirstSetLeftBit[v12];
          v16 = 1 << v15;
          v12 &= ~(unsigned __int8)(1 << v15);
          if ( i >= v13 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, v14 + 8 * i, 2uLL, 0LL);
          if ( i >= v13 )
            v17 = *((unsigned __int16 *)AcpiInformation + 50) + 8 * (i - v13);
          else
            v17 = 8 * i;
          v18 = v17 + v14;
          if ( ((unsigned __int8)v16 & *((_BYTE *)GpeHandlerType + i)) != 0 )
          {
            LOBYTE(v27) = i;
            BYTE1(v27) = 1 << v15;
            BYTE2(v27) = v11;
            byte_1C006637F = ((unsigned __int8)v16 & v11) != 0 ? 76 : 69;
            byte_1C0066380 = HexDigit[(unsigned __int64)v18 >> 4];
            byte_1C0066381 = HexDigit[v18 & 0xF];
            if ( (int)AMLIGetNameSpaceObject(&unk_1C0066378) >= 0 )
            {
              v19 = AMLIAsyncEvalObject(0LL, 0LL, 0LL, 0LL, ACPIInterruptEventCompletion, v27);
              AMLIDereferenceHandleEx(0LL);
              if ( v19 < 0 )
              {
                KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
                *((_BYTE *)GpeRunMethod + i) |= v16;
                if ( !AcpiGpeDpcScheduled )
                {
                  AcpiGpeDpcScheduled = 1;
                  KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
                }
                KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
              }
              else if ( v19 != 259 )
              {
                v5 |= v16;
              }
            }
          }
          else
          {
            if ( ((unsigned __int8)v16 & v29[i]) != 0 )
            {
              OSNotifyDeviceWakeByGPEEvent(v18, i, v16);
            }
            else
            {
              v20 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(v18) + GpeMap);
              if ( v20 >= GpeVectorTableSize )
                goto LABEL_27;
              _mm_lfence();
              v21 = *((_QWORD *)GpeVectorTable + 2 * v20 + 1);
              if ( v21 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(v21 + 8))(v21, *(_QWORD *)(v21 + 16));
              }
              else
              {
                LOBYTE(v20) = 2;
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v20,
                  22,
                  10,
                  (__int64)&WPP_3996193b02d13572b086e0504ab0692c_Traceguids,
                  v18);
              }
            }
            v5 |= v16;
          }
LABEL_27:
          v11 = v26;
        }
        v28[i++] |= v5;
      }
      KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    }
    while ( AcpiGpeWorkDone );
    v23 = 0;
    if ( (_DWORD)v4 )
    {
      v24 = 0LL;
      do
      {
        v25 = v28[v24];
        if ( (v25 & v28[v24 + 32]) != 0 )
        {
          LOBYTE(v22) = v25 & v28[v24 + 32];
          ACPIWriteGpeStatusRegister(v23, v22);
        }
        ++v23;
        *((_BYTE *)GpePending + v24) &= ~v25;
        LOBYTE(v22) = *((_BYTE *)GpeWakeEnable + v24) | *((_BYTE *)GpeEnable + v24);
        *((_BYTE *)GpeCurEnable + v24) |= v25 & v22 & ~(~*((_BYTE *)GpeWakeEnable + v24) & *((_BYTE *)GpeWakeHandler
                                                                                           + v24));
        ++v24;
      }
      while ( v23 < (unsigned int)v4 );
    }
    AcpiGpeDpcRunning = 0;
    ACPIGpeEnableDisableEvents(1, v22);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
