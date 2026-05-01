/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x180038768
 * Callers:
 *     ?HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18003B304 (-HampManagerAllocateState@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     PdcCancelWatchdogAroundClientCall @ 0x180035CCC (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180035CE8 (PdcReleaseRwLockExclusive2.c)
 *     PdcAcquireRwLockExclusive2 @ 0x18003604C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1800360BC (PdcCreateWatchdogAroundClientCall.c)
 *     TraceLoggingRegisterEx @ 0x1800376E4 (TraceLoggingRegisterEx.c)
 *     Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER @ 0x18003891C (Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER.c)
 *     McGenEventRegister @ 0x180038A20 (McGenEventRegister.c)
 *     PdcPortOpen @ 0x180038C28 (PdcPortOpen.c)
 *     PdcGetModuleName @ 0x180038E98 (PdcGetModuleName.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     PdcRwLockUninitialize2 @ 0x18006BEBC (PdcRwLockUninitialize2.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v3; // bp
  char *Heap; // rax
  char *v7; // rsi
  int v8; // edi
  HANDLE MutexW; // rax
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  __int64 v12; // rcx
  signed int LastError; // eax
  PTP_TIMER v15[6]; // [rsp+40h] [rbp-48h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+A0h] [rbp+18h] BYREF

  *a3 = 0LL;
  v3 = 0;
  if ( *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 8) )
  {
    PdcCreateWatchdogAroundClientCall(v15, a2, 100, (struct _TP_TIMER *)"Pdcv2ActivationClientRegister");
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xF8uLL);
    v7 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0xF8uLL);
      *((_QWORD *)v7 + 1) = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      v8 = 0;
      MutexW = CreateMutexW(0LL, 0, 0LL);
      *((_QWORD *)v7 + 1) = MutexW;
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
        PdcAcquireRwLockExclusive2((__int64)(v7 + 8), 0LL);
        v10 = *(_OWORD *)a2;
        *(_DWORD *)v7 = 843138128;
        v11 = *(_QWORD *)(a2 + 16);
        *((_DWORD *)v7 + 6) = 100;
        v7[64] = 1;
        *((_QWORD *)v7 + 10) = v7 + 72;
        *((_QWORD *)v7 + 9) = v7 + 72;
        *(_OWORD *)(v7 + 40) = v10;
        v16 = Pdcv2pActivationClientCallback;
        *((_QWORD *)v7 + 7) = v11;
        PdcGetModuleName(v12, v7 + 92);
        v8 = PdcPortOpen(100, 7, (_DWORD)v7, (unsigned int)&v16);
        if ( !v8 )
        {
          *a3 = v7;
          if ( _InterlockedIncrement(&g_RegistrationCount) == 1 )
          {
            McGenEventRegister();
            TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180092170, 0LL, 0LL);
          }
          Pdcv2EventWrite_ACTIVATION_CLIENT_REGISTER(v7, 0LL);
          PdcReleaseRwLockExclusive2((__int64)(v7 + 8), 0LL);
          v7 = 0LL;
        }
      }
      if ( v7 )
      {
        if ( v3 )
        {
          PdcReleaseRwLockExclusive2((__int64)(v7 + 8), 0LL);
          PdcRwLockUninitialize2(v7 + 8);
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
  PdcCancelWatchdogAroundClientCall(v15);
  return (unsigned int)v8;
}
