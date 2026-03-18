/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x140640180
 * Callers:
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140005230 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140005480 (KeSetSystemGroupAffinityThread.c)
 *     KeCountSetBitsAffinityEx @ 0x1400A4080 (KeCountSetBitsAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x1400C5EE0 (KeFirstGroupAffinityEx.c)
 *     PpmQueryTime @ 0x1400D3EE0 (PpmQueryTime.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(_WORD *a1, LARGE_INTEGER **a2, LARGE_INTEGER **a3)
{
  ULONG v6; // esi
  unsigned int v7; // ebp
  LARGE_INTEGER *PoolWithTag; // rbx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  v6 = KeCountSetBitsAffinityEx(a1);
  v7 = KeFirstGroupAffinityEx(&Affinity, a1);
  if ( a3 && (PoolWithTag = *a3) != 0LL && v6 == PoolWithTag[1].LowPart )
  {
    *a3 = 0LL;
  }
  else
  {
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v6 + 40, 0x704D5050u);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v6 + 40);
      PoolWithTag->QuadPart = 0LL;
      PoolWithTag[1].LowPart = v6;
      PoolWithTag[2] = PpmQueryTime();
    }
    else
    {
      v7 = -1073741670;
    }
  }
  *a2 = PoolWithTag;
  return v7;
}
