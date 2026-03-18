/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C005C5C0
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C005C6A0 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  SIZE_T v4; // rsi
  PVOID PoolWithTag; // rax
  unsigned __int16 v6; // dx
  unsigned int i; // r8d

  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    return 0;
  }
  else
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(a1 + 48) = ActiveProcessorCount;
    v4 = 2 * ActiveProcessorCount;
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v4, 0x49434858u);
    v2 = 0;
    *(_QWORD *)(a1 + 56) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v4);
      v6 = 1;
      for ( i = 0; i < *(_DWORD *)(a1 + 48); ++i )
      {
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * i) = v6++;
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 24) || v6 == *(_DWORD *)(a1 + 64) )
          v6 = 1;
      }
    }
    else
    {
      v2 = -1073741670;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        9u,
        0x37u,
        (__int64)&WPP_60775dc5c6563f4bce38ccb49f22c6c0_Traceguids);
    }
  }
  return v2;
}
