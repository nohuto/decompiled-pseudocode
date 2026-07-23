/*
 * XREFs of ViThunkCreateSharedExportInformation @ 0x140761F14
 * Callers:
 *     VfThunkAddTargetNotify @ 0x140761E3C (VfThunkAddTargetNotify.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x14006E260 (RtlNumberOfClearBits.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ViThunkSnapSharedExports @ 0x140761FD0 (ViThunkSnapSharedExports.c)
 *     ViThunkFreeSharedThunksArray @ 0x140762178 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall ViThunkCreateSharedExportInformation(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _RTL_BITMAP *a4,
        _QWORD *a5)
{
  unsigned int v9; // ebx
  ULONG v10; // eax
  ULONG v11; // esi
  PVOID PoolWithTag; // rax

  v9 = 1;
  v10 = RtlNumberOfClearBits(a4);
  v11 = v10;
  if ( v10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v10, 0x54496656u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( !(unsigned int)ViThunkSnapSharedExports(a1, a2, a3, a4, v11, PoolWithTag) )
        ViThunkFreeSharedThunksArray(a5);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a5 = 0LL;
  }
  return v9;
}
