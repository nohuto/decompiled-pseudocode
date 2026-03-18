/*
 * XREFs of PopFxCreateDeviceCommon @ 0x14015EDB8
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140238218 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405BE6E4 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x140036220 (IoInitializeRemoveLockEx.c)
 *     PopFxDuplicateUniqueId @ 0x14015EF50 (PopFxDuplicateUniqueId.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopFxCreateDeviceCommon(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  P[1] = 0LL;
  v6 = PopFxDuplicateUniqueId(a1, P);
  if ( v6 >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x2A0uLL, 0x4D584650u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x2A0uLL);
      *(_OWORD *)(v8 + 200) = *(_OWORD *)P;
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
      *((_QWORD *)v8 + 24) = v8 + 184;
      *((_QWORD *)v8 + 23) = v8 + 184;
      *((_WORD *)v8 + 272) = 0;
      v8[546] = 6;
      *((_DWORD *)v8 + 137) = 1;
      *((_QWORD *)v8 + 70) = v8 + 552;
      *((_QWORD *)v8 + 69) = v8 + 552;
      *((_QWORD *)v8 + 42) = 0LL;
      *((_QWORD *)v8 + 43) = 0LL;
      v8[344] = 9;
      *((_QWORD *)v8 + 45) = v8 + 352;
      *((_QWORD *)v8 + 44) = v8 + 352;
      *((_QWORD *)v8 + 46) = 0LL;
      *((_QWORD *)v8 + 50) = 0LL;
      *((_QWORD *)v8 + 54) = PopFxIdleTimeoutDpcRoutine;
      *((_DWORD *)v8 + 102) = 275;
      *((_QWORD *)v8 + 55) = v8;
      *((_QWORD *)v8 + 58) = 0LL;
      *((_QWORD *)v8 + 53) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 216), 0x4D584650u, 0, 0, 0x20u);
      *((_QWORD *)v8 + 38) = v8;
      *((_QWORD *)v8 + 37) = PopFxDeviceWork;
      *((_QWORD *)v8 + 35) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 248), 0x4D584650u, 0, 0, 0x20u);
      *((_DWORD *)v8 + 156) = a4;
      *a5 = v8;
      return (unsigned int)v6;
    }
    v6 = -1073741670;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x4D584650u);
  return (unsigned int)v6;
}
