/*
 * XREFs of ACPIInterruptDispatchEventDpc @ 0x1C002B850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C001F1BC (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeIndexToByteIndex @ 0x1C001F28C (ACPIGpeIndexToByteIndex.c)
 *     ACPIWriteGpeStatusRegister @ 0x1C00204B0 (ACPIWriteGpeStatusRegister.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051AC0 (OSNotifyDeviceWakeByGPEEvent.c)
 */

void __fastcall ACPIInterruptDispatchEventDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  size_t v4; // r15
  char v5; // r14
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 v9; // si
  unsigned __int8 v10; // r10
  unsigned int i; // ebx
  __int64 v12; // rdx
  size_t v13; // r8
  char v14; // al
  _BYTE *v15; // rcx
  unsigned __int8 v16; // r12
  unsigned int v17; // r13d
  unsigned int v18; // edx
  __int64 v19; // rcx
  int v20; // r13d
  __int64 v21; // rdx
  unsigned int v22; // r8d
  int v23; // edx
  unsigned __int8 v24; // cl
  unsigned int v25; // edi
  int v26; // eax
  unsigned __int8 v27; // [rsp+38h] [rbp-69h]
  unsigned int v28; // [rsp+3Ch] [rbp-65h]
  __int64 *v29; // [rsp+48h] [rbp-59h] BYREF
  _QWORD v30[12]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v31[32]; // [rsp+B0h] [rbp+Fh] BYREF

  HIBYTE(v28) = 0;
  v4 = *((unsigned __int16 *)AcpiInformation + 51);
  KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  v5 = 0;
  AcpiGpeDpcScheduled = 0;
  if ( AcpiGpeDpcRunning )
    goto LABEL_5;
  AcpiGpeDpcRunning = 1;
  memset(v30, 0, 0x20uLL);
  do
  {
    AcpiGpeWorkDone = 0;
    if ( (_DWORD)v4 )
    {
      v12 = 0LL;
      v13 = v4;
      do
      {
        v14 = *((_BYTE *)GpeRunMethod + v12);
        *((_BYTE *)GpeRunMethod + v12) = 0;
        *((_BYTE *)&v30[8] + v12) = v14;
        *((_BYTE *)&v30[4] + v12) = *((_BYTE *)GpeIsLevel + v12);
        v15 = GpeComplete;
        *((_BYTE *)v30 + v12) |= *((_BYTE *)GpeComplete + v12);
        v15[v12++] = 0;
        --v13;
      }
      while ( v13 );
    }
    memmove(v31, GpeWakeEnable, v4);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
    for ( i = 0; i < (unsigned int)v4; v5 = 0 )
    {
      v10 = *((_BYTE *)&v30[4] + i);
      v16 = *((_BYTE *)&v30[8] + i);
      v27 = v10;
      while ( v16 )
      {
        v22 = *((unsigned __int16 *)AcpiInformation + 43);
        v23 = FirstSetLeftBit[v16];
        v24 = FirstSetLeftBit[v16];
        v25 = 1 << v24;
        v16 &= ~(unsigned __int8)(1 << v24);
        if ( i >= v22 + *((unsigned __int16 *)AcpiInformation + 49) )
          KeBugCheckEx(0xA5u, 0x17uLL, v23 + 8 * i, 2uLL, 0LL);
        if ( i >= v22 )
          v26 = *((unsigned __int16 *)AcpiInformation + 50) + 8 * (i - v22);
        else
          v26 = 8 * i;
        v17 = v26 + v23;
        if ( ((unsigned __int8)v25 & *((_BYTE *)GpeHandlerType + i)) != 0 )
        {
          v29 = 0LL;
          LOBYTE(v28) = i;
          BYTE1(v28) = 1 << v24;
          BYTE2(v28) = v10;
          byte_1C00763B7 = (v10 & (unsigned __int8)v25) != 0 ? 76 : 69;
          byte_1C00763B8 = HexDigit[(unsigned __int64)v17 >> 4];
          byte_1C00763B9 = HexDigit[v17 & 0xF];
          if ( (int)AMLIGetNameSpaceObject(byte_1C00763B0, 0LL, &v29) >= 0 )
          {
            v20 = AMLIAsyncEvalObject(v29, 0LL, 0, 0LL, ACPIInterruptEventCompletion, v28);
            AMLIDereferenceHandleEx((volatile signed __int32 *)v29, v21);
            if ( v20 >= 0 )
            {
              if ( v20 != 259 )
                v5 |= v25;
            }
            else
            {
              KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
              *((_BYTE *)GpeRunMethod + i) |= v25;
              if ( !AcpiGpeDpcScheduled )
              {
                AcpiGpeDpcScheduled = 1;
                KeSetTimer(&AcpiGpeTimer, (LARGE_INTEGER)-20000000LL, &AcpiGpeDpc);
              }
              KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
            }
          }
        }
        else
        {
          if ( ((unsigned __int8)v25 & v31[i]) != 0 )
          {
            OSNotifyDeviceWakeByGPEEvent(v17, i, v25);
LABEL_9:
            v5 |= v25;
            goto LABEL_10;
          }
          v18 = *(unsigned __int8 *)((unsigned int)ACPIGpeIndexToByteIndex(v17) + GpeMap);
          if ( v18 < GpeVectorTableSize )
          {
            _mm_lfence();
            v19 = *((_QWORD *)GpeVectorTable + 2 * v18 + 1);
            if ( v19 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(v19 + 8))(v19, *(_QWORD *)(v19 + 16));
            }
            else
            {
              LOBYTE(v18) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v18,
                22,
                10,
                (__int64)&WPP_2cee4fc8e8723a7ea5fe8d3ee4650d77_Traceguids,
                v17);
            }
            goto LABEL_9;
          }
        }
LABEL_10:
        v10 = v27;
      }
      *((_BYTE *)v30 + i++) |= v5;
    }
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
  }
  while ( AcpiGpeWorkDone );
  v6 = 0;
  if ( (_DWORD)v4 )
  {
    v8 = 0LL;
    do
    {
      v9 = *((_BYTE *)v30 + v8);
      if ( (v9 & *((_BYTE *)&v30[4] + v8)) != 0 )
        ACPIWriteGpeStatusRegister(v6, v9 & *((_BYTE *)&v30[4] + v8));
      ++v6;
      *((_BYTE *)GpePending + v8) &= ~v9;
      LOBYTE(v7) = *((_BYTE *)GpeWakeEnable + v8) | *((_BYTE *)GpeEnable + v8);
      *((_BYTE *)GpeCurEnable + v8) |= v9 & v7 & ~(~*((_BYTE *)GpeWakeEnable + v8) & *((_BYTE *)GpeWakeHandler + v8));
      ++v8;
    }
    while ( v6 < (unsigned int)v4 );
  }
  AcpiGpeDpcRunning = 0;
  ACPIGpeEnableDisableEvents(1, v7);
LABEL_5:
  KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
}
