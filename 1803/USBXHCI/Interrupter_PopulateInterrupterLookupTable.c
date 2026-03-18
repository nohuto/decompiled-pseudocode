/*
 * XREFs of Interrupter_PopulateInterrupterLookupTable @ 0x1C00596B0
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C00597B8 (Interrupter_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0002D40 (memset.c)
 */

__int64 __fastcall Interrupter_PopulateInterrupterLookupTable(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  SIZE_T v4; // rsi
  PVOID PoolWithTag; // rax
  __int16 v6; // r8
  unsigned int v7; // r9d
  __int16 v8; // dx
  unsigned __int16 v9; // r8
  unsigned int v10; // ecx

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 532LL) == 1 && *(_DWORD *)(a1 + 24) == 2 || *(_DWORD *)(a1 + 24) == 1 )
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
      v7 = 0;
      while ( v7 < *(_DWORD *)(a1 + 48) )
      {
        v8 = v6;
        *(_WORD *)(*(_QWORD *)(a1 + 56) + 2LL * v7) = v6;
        v9 = v6 + 1;
        if ( v9 != *(_DWORD *)(a1 + 64) )
          v9 = v8;
        ++v7;
        v10 = (unsigned __int16)(v9 + 1);
        v6 = 1;
        if ( v10 < *(_DWORD *)(a1 + 24) )
          v6 = v10;
      }
    }
    else
    {
      v2 = -1073741670;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        9u,
        0x3Cu,
        (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids);
    }
  }
  return v2;
}
