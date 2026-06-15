/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x1800DE140
 * Callers:
 *     ??0CPdcActivationClient@@QEAA@XZ @ 0x18009C87C (--0CPdcActivationClient@@QEAA@XZ.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x18002BC90 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x18002BD50 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18002C1D0 (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x18002C2E0 (PdcCreateWatchdogAroundClientCall.c)
 *     memset @ 0x180033A5A (memset.c)
 *     TraceLoggingRegisterEx @ 0x18005A060 (TraceLoggingRegisterEx.c)
 *     McGenEventRegister @ 0x1800ACF40 (McGenEventRegister.c)
 *     PdcPortOpen @ 0x1800DE938 (PdcPortOpen.c)
 *     PdcGetModuleName @ 0x1800DEF2C (PdcGetModuleName.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x1800DFA5C (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(int a1, __int64 a2, _QWORD *a3)
{
  bool v4; // zf
  unsigned int v6; // ebx
  char *Heap; // rax
  char *v8; // rdi
  HANDLE MutexW; // rax
  __int128 v10; // xmm0
  __int64 v11; // rcx
  int ModuleName; // eax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // rdx
  TLG_PENABLECALLBACK v16; // rdx
  PVOID v17; // r8
  __int64 v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+28h] [rbp-60h]
  PTP_TIMER pv[9]; // [rsp+40h] [rbp-48h] BYREF
  int v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 (__fastcall *v23)(); // [rsp+A0h] [rbp+18h] BYREF

  v22 = a1;
  *a3 = 0LL;
  v4 = *(_DWORD *)a2 == 1;
  LOBYTE(v22) = 0;
  if ( v4 && *(_QWORD *)(a2 + 8) )
  {
    PdcCreateWatchdogAroundClientCall(pv, a2, 40, (struct _TP_TIMER *)"Pdcv2ActivationClientRegister");
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xF8uLL);
    v8 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0xF8uLL);
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      MutexW = CreateMutexW(0LL, 0, 0LL);
      *((_QWORD *)v8 + 1) = MutexW;
      if ( !MutexW )
        GetLastError();
      PdcAcquireRwLockExclusive2((__int64)(v8 + 8), &v22);
      *(_DWORD *)v8 = 843138128;
      *((_DWORD *)v8 + 6) = 40;
      v8[64] = 1;
      *((_QWORD *)v8 + 10) = v8 + 72;
      *((_QWORD *)v8 + 9) = v8 + 72;
      v10 = *(_OWORD *)a2;
      v23 = Pdcv2pActivationClientCallback;
      *(_OWORD *)(v8 + 40) = v10;
      *((_QWORD *)v8 + 7) = *(_QWORD *)(a2 + 16);
      ModuleName = PdcGetModuleName(v11, v8 + 92);
      v14 = 0;
      if ( ModuleName >= 0 )
        v14 = (_DWORD)v8 + 92;
      v6 = PdcPortOpen(v14, v13, (_DWORD)v8, (unsigned int)&v23);
      if ( !v6 )
      {
        *a3 = v8;
        if ( _InterlockedIncrement(&g_RegistrationCount) == 1 )
        {
          McGenEventRegister(
            (__int64)&PDC_EVENT_PROVIDER,
            v15,
            (__int64)PDC_EVENT_PROVIDER_Context,
            PDC_EVENT_PROVIDER_Context,
            v19,
            v20);
          TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_18014A430, v16, v17);
        }
        Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER(v8, 0LL);
        PdcReleaseRwLockExclusive2((__int64)(v8 + 8), &v22);
        v8 = 0LL;
      }
      if ( v8 )
      {
        if ( (_BYTE)v22 )
          PdcReleaseRwLockExclusive2((__int64)(v8 + 8), &v22);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
      }
    }
    else
    {
      v6 = -1073741801;
    }
  }
  else
  {
    v6 = -1073741584;
  }
  PdcCancelWatchdogAroundClientCall(pv);
  return v6;
}
