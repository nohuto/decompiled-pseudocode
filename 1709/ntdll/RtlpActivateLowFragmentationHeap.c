/*
 * XREFs of RtlpActivateLowFragmentationHeap @ 0x180006DF0
 * Callers:
 *     RtlpPerformHeapMaintenance @ 0x180006DA4 (RtlpPerformHeapMaintenance.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F0CD0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpCreateLowFragHeap @ 0x180006FD8 (RtlpCreateLowFragHeap.c)
 *     RtlGetSuiteMask @ 0x180007D20 (RtlGetSuiteMask.c)
 *     RtlpExtendListLookup @ 0x180007DA4 (RtlpExtendListLookup.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180009E20 (RtlpExtendFrontEndUsageArray.c)
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall RtlpActivateLowFragmentationHeap(__int64 a1)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  int v5; // edi
  __int64 LowFragHeap; // r14
  __int64 v7; // rcx
  char v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+21h] [rbp-27h]

  v10 = 0;
  v9 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x75010F61) == 0
    && (*(_BYTE *)(a1 + 112) & 2) != 0
    && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
  {
    RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
    v9 = 1;
    if ( *(_BYTE *)(a1 + 386) == 2 )
      v3 = *(_QWORD *)(a1 + 376);
    else
      v3 = 0LL;
    if ( v3 )
    {
      v5 = 0;
    }
    else if ( *(_WORD *)(a1 + 384) )
    {
      v5 = -1073741794;
    }
    else
    {
      *(_WORD *)(a1 + 384) = 1;
      v10 = 1;
      v4 = (unsigned __int64)RtlpLargestLfhBlock >> 4;
      LOWORD(v4) = ((unsigned __int64)RtlpLargestLfhBlock >> 4) + 2;
      v5 = RtlpExtendFrontEndUsageArray(a1, v4);
      if ( v5 >= 0 )
      {
        RtlpExtendListLookup(a1, *(_QWORD *)(a1 + 312));
        *(_QWORD *)(a1 + 376) = 0LL;
        *(_BYTE *)(a1 + 386) = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
        LowFragHeap = RtlpCreateLowFragHeap(a1);
        RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
        if ( LowFragHeap )
        {
          *(_QWORD *)(a1 + 376) = LowFragHeap;
          *(_WORD *)(a1 + 386) = 514;
          if ( (RtlGetSuiteMask(v7) & 0x10000) == 0 )
            *(_QWORD *)(a1 + 176) = (unsigned __int64)RtlpLargestLfhBlock >> 4;
        }
        else
        {
          v5 = -1073741801;
        }
        --*(_WORD *)(a1 + 384);
        v10 = 0;
        v9 = 0;
        RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      }
    }
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v9 )
    RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
  if ( v10 )
    --*(_WORD *)(a1 + 384);
  return (unsigned int)v5;
}
