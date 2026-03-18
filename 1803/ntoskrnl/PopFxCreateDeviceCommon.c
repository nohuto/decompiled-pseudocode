/*
 * XREFs of PopFxCreateDeviceCommon @ 0x14016F048
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140283060 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140614C84 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x1401636D0 (IoInitializeRemoveLockEx.c)
 *     PopFxDuplicateUniqueId @ 0x14016F1E0 (PopFxDuplicateUniqueId.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
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
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x318uLL, 0x4D584650u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x318uLL);
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
      *((_QWORD *)v8 + 54) = &PopFxIdleTimeoutDpcRoutine;
      *((_DWORD *)v8 + 102) = 275;
      *((_QWORD *)v8 + 55) = v8;
      *((_QWORD *)v8 + 58) = 0LL;
      *((_QWORD *)v8 + 53) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 216), 0x4D584650u, 0, 0, 0x20u);
      *((_QWORD *)v8 + 38) = v8;
      *((_QWORD *)v8 + 37) = PopFxDeviceWork;
      *((_QWORD *)v8 + 35) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 248), 0x4D584650u, 0, 0, 0x20u);
      *((_DWORD *)v8 + 176) = a4;
      *a5 = v8;
      return (unsigned int)v6;
    }
    v6 = -1073741670;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x4D584650u);
  return (unsigned int)v6;
}
