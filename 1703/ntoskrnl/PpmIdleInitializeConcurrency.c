/*
 * XREFs of PpmIdleInitializeConcurrency @ 0x1405BFF64
 * Callers:
 *     PpmParkRegisterParking @ 0x14015FC70 (PpmParkRegisterParking.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140026160 (KeRevertToUserGroupAffinityThread.c)
 *     KeFirstGroupAffinityEx @ 0x14002FE30 (KeFirstGroupAffinityEx.c)
 *     PpmQueryTime @ 0x140087060 (PpmQueryTime.c)
 *     KeSetSystemGroupAffinityThread @ 0x140112860 (KeSetSystemGroupAffinityThread.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmIdleInitializeConcurrency(_WORD *a1, LARGE_INTEGER **a2, LARGE_INTEGER **a3)
{
  ULONG v6; // esi
  unsigned int v7; // ebp
  LARGE_INTEGER *PoolWithTag; // rbx
  unsigned int v10; // edi
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
    v10 = 8 * v6 + 40;
    PoolWithTag = (LARGE_INTEGER *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x704D5050u);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v10);
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
