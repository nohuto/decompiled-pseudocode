/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C004FF00
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C0010514 (ACPIGpeIndexToByteIndex.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C00105AC (ACPIWriteGpeStatusRegister.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C0013D1C (ACPIGpeEnableDisableEvents.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0052500 (OSNotifyDeviceWakeByGPEEvent.c)
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
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int8 v15; // cl
  unsigned int v16; // edi
  int v17; // eax
  unsigned int v18; // r12d
  int v19; // r12d
  unsigned int v20; // edx
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // rbx
  unsigned __int8 v24; // si
  unsigned __int8 v25; // [rsp+38h] [rbp-69h]
  unsigned int v26; // [rsp+3Ch] [rbp-65h]
  __int64 *v27; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v28[96]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v29[32]; // [rsp+B0h] [rbp+Fh] BYREF

  HIBYTE(v26) = 0;
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
        v25 = v11;
        while ( v12 )
        {
          v13 = *((unsigned __int16 *)AcpiInformation + 43);
          v14 = FirstSetLeftBit[v12];
          v15 = FirstSetLeftBit[v12];
          v16 = 1 << v15;
          v12 &= ~(unsigned __int8)(1 << v15);
          if ( i >= (unsigned int)v13 + *((unsigned __int16 *)AcpiInformation + 49) )
            KeBugCheckEx(0xA5u, 0x17uLL, (unsigned int)v14 + 8 * i, 2uLL, 0LL);
          if ( i >= (unsigned int)v13 )
            v17 = *((unsigned __int16 *)AcpiInformation + 50) + 8 * (i - v13);
          else
            v17 = 8 * i;
          v18 = v17 + v14;
          if ( ((unsigned __int8)v16 & *((_BYTE *)GpeHandlerType + i)) != 0 )
          {
            v27 = 0LL;
            LOBYTE(v26) = i;
            BYTE1(v26) = 1 << v15;
            BYTE2(v26) = v11;
            byte_1C0078567 = ((unsigned __int8)v16 & v11) != 0 ? 76 : 69;
            byte_1C0078568 = HexDigit[(unsigned __int64)v18 >> 4];
            byte_1C0078569 = HexDigit[v18 & 0xF];
            if ( (int)AMLIGetNameSpaceObject(byte_1C0078560, 0LL, (__int64 *)&v27, 0) >= 0 )
            {
              v19 = AMLIAsyncEvalObject(v27, 0LL, 0, 0LL, ACPIInterruptEventCompletion, v26);
              AMLIDereferenceHandleEx((__int64)v27);
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
              v20 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(v18, v14, v13) + GpeMap);
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
                  (__int64)&WPP_2cee4fc8e8723a7ea5fe8d3ee4650d77_Traceguids,
                  v18);
              }
            }
            v5 |= v16;
          }
LABEL_27:
          v11 = v25;
        }
        v28[i++] |= v5;
      }
      KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    }
    while ( AcpiGpeWorkDone );
    v22 = 0;
    if ( (_DWORD)v4 )
    {
      v23 = 0LL;
      do
      {
        v24 = v28[v23];
        if ( (v24 & v28[v23 + 32]) != 0 )
          ACPIWriteGpeStatusRegister(v22, v24 & v28[v23 + 32]);
        ++v22;
        *((_BYTE *)GpePending + v23) &= ~v24;
        *((_BYTE *)GpeCurEnable + v23) |= v24 & (*((_BYTE *)GpeWakeEnable + v23) | *((_BYTE *)GpeEnable + v23)) & ~(~*((_BYTE *)GpeWakeEnable + v23) & *((_BYTE *)GpeWakeHandler + v23));
        ++v23;
      }
      while ( v22 < (unsigned int)v4 );
    }
    AcpiGpeDpcRunning = 0;
    ACPIGpeEnableDisableEvents(1);
  }
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
