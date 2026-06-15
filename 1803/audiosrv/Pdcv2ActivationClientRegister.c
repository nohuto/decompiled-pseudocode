/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x18005AC90
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180059134 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180017D54 (TraceLoggingRegisterEx.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x18005A6DC (PdcCreateWatchdogAroundClientCall.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18005A720 (PdcAcquireRwLockExclusive2.c)
 *     PdcGetModuleName @ 0x18005A794 (PdcGetModuleName.c)
 *     PdcPortOpen @ 0x18005A7FC (PdcPortOpen.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x18005AAF8 (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18005AC04 (PdcReleaseRwLockExclusive2.c)
 *     PdcCancelWatchdogAroundClientCall @ 0x18005AC74 (PdcCancelWatchdogAroundClientCall.c)
 *     McGenEventRegister @ 0x18005B90C (McGenEventRegister.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     PdcRwLockUninitialize2 @ 0x18010C69C (PdcRwLockUninitialize2.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(__int64 a1, __int64 a2, RTL_SRWLOCK ***a3)
{
  char v3; // bp
  RTL_SRWLOCK **Heap; // rax
  RTL_SRWLOCK **v7; // rsi
  int v8; // edi
  RTL_SRWLOCK *MutexW; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int ModuleName; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  TLG_PENABLECALLBACK v16; // rdx
  PVOID v17; // r8
  signed int LastError; // eax
  int v20; // [rsp+20h] [rbp-68h]
  int v21; // [rsp+28h] [rbp-60h]
  PTP_TIMER v22[6]; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = 0;
  if ( *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 8) )
  {
    PdcCreateWatchdogAroundClientCall(v22, a2, 40, (struct _TP_TIMER *)"Pdcv2ActivationClientRegister");
    Heap = (RTL_SRWLOCK **)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xF8uLL);
    v7 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0xF8uLL);
      v7[1] = 0LL;
      v7[2] = 0LL;
      v8 = 0;
      MutexW = (RTL_SRWLOCK *)CreateMutexW(0LL, 0, 0LL);
      v7[1] = MutexW;
      if ( !MutexW )
      {
        LastError = GetLastError();
        v8 = LastError;
        if ( LastError > 0 )
          v8 = (unsigned __int16)LastError | 0xC0070000;
      }
      if ( v8 >= 0 )
      {
        v3 = 1;
        PdcAcquireRwLockExclusive2((__int64)(v7 + 1), 0LL);
        *(_DWORD *)v7 = 843138128;
        *((_DWORD *)v7 + 6) = 40;
        *((_BYTE *)v7 + 64) = 1;
        v7[10] = (RTL_SRWLOCK *)(v7 + 9);
        v7[9] = (RTL_SRWLOCK *)(v7 + 9);
        v10 = *(_OWORD *)a2;
        v23 = Pdcv2pActivationClientCallback;
        *(_OWORD *)(v7 + 5) = v10;
        v7[7] = *(RTL_SRWLOCK **)(a2 + 16);
        ModuleName = PdcGetModuleName(v11, (WCHAR *)v7 + 46);
        v14 = 0LL;
        if ( ModuleName >= 0 )
          v14 = (__int64)v7 + 92;
        v8 = PdcPortOpen(v14, v13, v7, (PVOID *)&v23, v20, v21, v14, v7 + 4);
        if ( !v8 )
        {
          *a3 = v7;
          if ( _InterlockedIncrement(&g_RegistrationCount) == 1 )
          {
            McGenEventRegister(&PDC_EVENT_PROVIDER, v15, PDC_EVENT_PROVIDER_Context, PDC_EVENT_PROVIDER_Context);
            TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180188510, v16, v17);
          }
          Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER((__int64)v7, 0);
          PdcReleaseRwLockExclusive2((__int64)(v7 + 1), 0LL);
          v7 = 0LL;
        }
      }
      if ( v7 )
      {
        if ( v3 )
        {
          PdcReleaseRwLockExclusive2((__int64)(v7 + 1), 0LL);
          PdcRwLockUninitialize2(v7 + 1);
        }
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741584;
  }
  PdcCancelWatchdogAroundClientCall(v22);
  return (unsigned int)v8;
}
