/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0013790
 * Callers:
 *     VidSchEnqueueCpuEvent @ 0x1C0072F20 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     memset @ 0x1C0018400 (memset.c)
 */

__int64 __fastcall NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  void *v4; // rcx

  v2 = a2;
  if ( a2 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    *(_QWORD *)a1 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x6E795356u);
  }
  else
  {
    *(_QWORD *)a1 = a1 + 2;
  }
  v4 = *(void **)a1;
  a1[6] = v2;
  if ( v4 )
    memset(v4, 0, 8 * v2);
  return *(_QWORD *)a1;
}
