/*
 * XREFs of Pdcv2ActivationClientRegister @ 0x18002488C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180021BD0 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx @ 0x180021110 (TraceLoggingRegisterEx.c)
 *     PdcCancelWatchdogAroundClientCall @ 0x180024A38 (PdcCancelWatchdogAroundClientCall.c)
 *     PdcReleaseRwLockExclusive2 @ 0x180024A54 (PdcReleaseRwLockExclusive2.c)
 *     McGenEventRegister @ 0x180024AC0 (McGenEventRegister.c)
 *     PdcPortOpen @ 0x180024AEC (PdcPortOpen.c)
 *     PdcGetModuleName @ 0x180024DE4 (PdcGetModuleName.c)
 *     PdcAcquireRwLockExclusive2 @ 0x180024E4C (PdcAcquireRwLockExclusive2.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x180024EBC (PdcCreateWatchdogAroundClientCall.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     McTemplateU0qqqqzr3 @ 0x18004AE44 (McTemplateU0qqqqzr3.c)
 */

__int64 __fastcall Pdcv2ActivationClientRegister(int a1, __int128 *a2, _QWORD *a3)
{
  bool v4; // zf
  char *Heap; // rax
  char *v7; // rbx
  HANDLE MutexW; // rax
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 v11; // rcx
  int ModuleName; // eax
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // edi
  signed __int32 v16; // ecx
  __int64 v18; // rax
  _BYTE v19[88]; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+A0h] [rbp+8h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+B0h] [rbp+18h] BYREF

  v20 = a1;
  v4 = *(_DWORD *)a2 == 1;
  LOBYTE(v20) = 0;
  *a3 = 0LL;
  if ( v4 && *((_QWORD *)a2 + 1) )
  {
    PdcCreateWatchdogAroundClientCall(v19);
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xF8uLL);
    v7 = Heap;
    if ( Heap )
    {
      memset_0(Heap, 0, 0xF8uLL);
      *((_QWORD *)v7 + 1) = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      MutexW = CreateMutexW(0LL, 0, 0LL);
      *((_QWORD *)v7 + 1) = MutexW;
      if ( !MutexW )
        GetLastError();
      PdcAcquireRwLockExclusive2(v7 + 8, &v20);
      v9 = *a2;
      *((_DWORD *)v7 + 6) = 100;
      v10 = *((_QWORD *)a2 + 2);
      *(_DWORD *)v7 = 843138128;
      v7[64] = 1;
      *((_QWORD *)v7 + 10) = v7 + 72;
      *((_QWORD *)v7 + 9) = v7 + 72;
      *(_OWORD *)(v7 + 40) = v9;
      v21 = Pdcv2pActivationClientCallback;
      *((_QWORD *)v7 + 7) = v10;
      ModuleName = PdcGetModuleName(v11, v7 + 92);
      v14 = 0;
      if ( ModuleName >= 0 )
        v14 = (_DWORD)v7 + 92;
      v15 = PdcPortOpen(v14, v13, (_DWORD)v7, (unsigned int)&v21);
      if ( !v15 )
      {
        *a3 = v7;
        v16 = _InterlockedIncrement(&g_RegistrationCount);
        if ( v16 == 1 )
        {
          McGenEventRegister();
          TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_180067100, 0LL, 0LL);
        }
        if ( (Microsoft_Windows_PDCEnableBits & 0x200000) != 0 )
        {
          v18 = -1LL;
          do
            ++v18;
          while ( *(_WORD *)&v7[2 * v18 + 92] );
          McTemplateU0qqqqzr3(v16, (unsigned int)&PDCV2_ACTIVATION_REGISTER, *((_DWORD *)v7 + 6), 0);
        }
        PdcReleaseRwLockExclusive2(v7 + 8, &v20);
        v7 = 0LL;
      }
      if ( v7 )
      {
        if ( (_BYTE)v20 )
          PdcReleaseRwLockExclusive2(v7 + 8, &v20);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    else
    {
      v15 = -1073741801;
    }
  }
  else
  {
    v15 = -1073741584;
  }
  PdcCancelWatchdogAroundClientCall(v19);
  return v15;
}
