/*
 * XREFs of ExpInitializeSvm @ 0x140854F50
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1408429B0 (ExpInitSystemPhase1.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 *ExpInitializeSvm()
{
  unsigned int v0; // r8d
  bool v1; // zf
  PVOID PoolWithTag; // rax
  char *v3; // rdx
  unsigned int i; // r9d
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 (__fastcall **v7)(); // rax
  __int64 *result; // rax
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  ((void (__fastcall *)(_QWORD, unsigned int *, int *, __int64 *))HalIommuDispatch[1])(
    0LL,
    &v9,
    &ExpSvmAgents,
    &ExpSvmIommuSystemContext);
  v0 = v9;
  v1 = v9 == 1;
  if ( v9 > 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 104LL * v9, 0x76537845u);
    v0 = v9;
    v1 = v9 == 1;
    ExpSvmWorkQueues = (__int64)PoolWithTag;
  }
  if ( v1 || (v3 = (char *)ExpSvmWorkQueues) == 0LL )
  {
    v3 = (char *)&ExpSvmStaticWorkQueue;
    v0 = 1;
    ExpSvmWorkQueues = (__int64)&ExpSvmStaticWorkQueue;
  }
  ExpSvmNumberOfWorkQueues = v0;
  for ( i = 0; i < v0; *(_DWORD *)&v3[v6 + 96] = 0 )
  {
    v5 = i;
    v6 = 104LL * i++;
    *(_QWORD *)&v3[v6 + 16] = ExpSvmWorkerThread;
    *(_QWORD *)&v3[v6 + 24] = v5;
    *(_QWORD *)&v3[v6] = 0LL;
    *(_QWORD *)&v3[v6 + 56] = ExpSvmDpcRoutine;
    *(_DWORD *)&v3[v6 + 32] = 275;
    *(_QWORD *)&v3[v6 + 64] = v5;
    *(_QWORD *)&v3[v6 + 88] = 0LL;
    *(_QWORD *)&v3[v6 + 48] = 0LL;
  }
  v7 = HalIommuDispatch;
  HalIommuDispatch[12] = (__int64 (__fastcall *)())ExpSvmFaultRoutine;
  v7[13] = (__int64 (__fastcall *)())ExpSvmReferenceAsid;
  v7[14] = (__int64 (__fastcall *)())ExpSvmDereferenceAsid;
  v7[15] = (__int64 (__fastcall *)())ExpSvmServicePageFault;
  result = &ExpSvmDevices;
  qword_14035B4F8 = (__int64)&ExpSvmDevices;
  ExpSvmDevices = (__int64)&ExpSvmDevices;
  qword_14035B5B8 = 0LL;
  ExpSvmDeviceListLock = 0LL;
  return result;
}
