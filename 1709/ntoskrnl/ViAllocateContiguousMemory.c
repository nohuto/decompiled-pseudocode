/*
 * XREFs of ViAllocateContiguousMemory @ 0x1407ACDAC
 * Callers:
 *     ViHookDmaAdapter @ 0x1407AE4B8 (ViHookDmaAdapter.c)
 * Callees:
 *     RtlClearAllBits @ 0x140016020 (RtlClearAllBits.c)
 *     RtlSetBits @ 0x1400A1A30 (RtlSetBits.c)
 *     MmAllocateContiguousNodeMemory @ 0x140119380 (MmAllocateContiguousNodeMemory.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall ViAllocateContiguousMemory(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdi
  PVOID PoolWithTag; // rax
  ULONG v5; // ebp
  __int64 v6; // r14
  __int64 v7; // [rsp+50h] [rbp+8h]

  HIDWORD(v7) = 0;
  v2 = 0xFFFF;
  if ( *(_BYTE *)(a1 + 203) )
  {
    v3 = -1LL;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 200) )
    {
      LODWORD(v7) = -1;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 212) == 1 )
        v2 = 0xFFFFFF;
      LODWORD(v7) = v2;
    }
    v3 = v7;
  }
  *(_DWORD *)(a1 + 296) = 32;
  *(_QWORD *)(a1 + 304) = a1 + 288;
  RtlClearAllBits((PRTL_BITMAP)(a1 + 296));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x566C6148u);
  *(_QWORD *)(a1 + 264) = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = 0;
    v6 = 0LL;
    do
    {
      *(_QWORD *)(v6 + *(_QWORD *)(a1 + 264)) = MmAllocateContiguousNodeMemory(12288, 0LL, v3, 0, 4u, 0x80000000);
      if ( *(_QWORD *)(v6 + *(_QWORD *)(a1 + 264)) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 272));
      }
      else
      {
        RtlSetBits((PRTL_BITMAP)(a1 + 296), v5, 1u);
        _InterlockedIncrement((volatile signed __int32 *)(a1 + 276));
      }
      ++v5;
      v6 += 8LL;
    }
    while ( v5 < 0x20 );
  }
}
