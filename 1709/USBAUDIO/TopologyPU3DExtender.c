/*
 * XREFs of TopologyPU3DExtender @ 0x1C0016BF0
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x1C0019C64 (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPU3DExtender(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  NTSTATUS ProcessControlRange; // ebx
  PVOID PoolWithTag; // rax
  void *v7; // rdi

  *(_DWORD *)(a3 + 76) = 18;
  v3 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_STEREO_WIDE;
  ProcessControlRange = -1073741670;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_STEREO_WIDE;
  if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x41627845u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 3, 2, 655, (__int64)PoolWithTag + 20);
      if ( ProcessControlRange < 0
        || (ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v7, ExFreePool),
            ProcessControlRange < 0) )
      {
        ExFreePool(v7);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessControlRange;
}
