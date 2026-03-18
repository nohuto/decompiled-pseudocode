/*
 * XREFs of HUBPDO_RecordFailure @ 0x1C0012298
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00141E0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001EA8 (WPP_RECORDER_SF_dD.c)
 *     memmove @ 0x1C0038E80 (memmove.c)
 */

__int64 __fastcall HUBPDO_RecordFailure(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int *v4; // r14
  unsigned __int16 v5; // r9
  SIZE_T v6; // rbp
  PVOID PoolWithTag; // rax

  v2 = 0;
  v4 = *(unsigned int **)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( *(_QWORD *)(a1 + 56) )
  {
    v5 = 14;
LABEL_3:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v5,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( !v4 )
  {
    v5 = 15;
    goto LABEL_3;
  }
  v6 = *v4;
  if ( (unsigned int)v6 > 0x1000 )
  {
    v6 = 4096LL;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x10u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
  }
  if ( (unsigned int)v6 >= 0x14 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x64334855u);
    *(_QWORD *)(a1 + 56) = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, v4, v6);
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1424LL) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 12LL);
    }
    else
    {
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        2u,
        5u,
        0x12u,
        (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids);
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      2u,
      5u,
      0x11u,
      (__int64)&WPP_0b66e4f802c5396ff2319e1600a602db_Traceguids,
      v6,
      20);
    return (unsigned int)-1073741789;
  }
  return v2;
}
