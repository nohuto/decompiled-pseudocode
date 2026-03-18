/*
 * XREFs of MiGetPageTablePages @ 0x1400716C0
 * Callers:
 *     MiCreateSystemPageTable @ 0x140070FD0 (MiCreateSystemPageTable.c)
 *     MiDemoteValidLargePageOneLevel @ 0x14017B0D8 (MiDemoteValidLargePageOneLevel.c)
 *     MmCreateShadowMapping @ 0x14062B744 (MmCreateShadowMapping.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 *     MiSetPfnTbFlushStamp @ 0x1400562B4 (MiSetPfnTbFlushStamp.c)
 *     MiObtainSystemCharges @ 0x1400717C0 (MiObtainSystemCharges.c)
 *     MiSufficientAvailablePages @ 0x1400FF320 (MiSufficientAvailablePages.c)
 *     MiReturnSystemCharges @ 0x1401377CC (MiReturnSystemCharges.c)
 *     MiReleaseFreshPage @ 0x14013A6E0 (MiReleaseFreshPage.c)
 */

__int64 __fastcall MiGetPageTablePages(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  int v3; // eax
  _QWORD *v4; // rsi
  __int64 v6; // r14
  int v9; // r15d
  unsigned __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 Page; // rax
  _QWORD *v13; // rbx
  _QWORD *v15; // rbx

  v3 = *(_DWORD *)(a1 + 52);
  v4 = 0LL;
  *a3 = 0LL;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (v3 & 8) != 0 || !*(_QWORD *)(v6 + 7528) )
  {
    v9 = 0;
  }
  else
  {
    if ( !(unsigned int)MiObtainSystemCharges(*(_QWORD *)(a1 + 24), a2, *(unsigned int *)(a1 + 48)) )
      return 3221225773LL;
    *(_QWORD *)(a1 + 32) += a2;
    v9 = 1;
  }
  v10 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = *(unsigned __int16 *)(a1 + 266) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                   *(volatile signed __int32 **)(a1 + 256),
                                                                   1u) & *(_WORD *)(a1 + 264));
      Page = MiGetPage(v6, v11, 0x830Au);
      if ( Page == -1 )
      {
        if ( (*(_DWORD *)(a1 + 52) & 0x10) == 0 )
          break;
        if ( !(unsigned int)MiSufficientAvailablePages(v6, 96LL) )
          break;
        Page = MiGetPage(v6, v11, 0x830Eu);
        if ( Page == -1 )
          break;
      }
      v13 = (_QWORD *)(48 * Page - 0x58000000000LL);
      MiSetPfnTbFlushStamp((__int64)v13, 0, 0);
      ++v10;
      *v13 = v4;
      v4 = v13;
      if ( v10 >= a2 )
        goto LABEL_8;
    }
    if ( v9 )
    {
      MiReturnCommit(v6, a2);
      MiReturnSystemCharges(v6, a2, *(unsigned int *)(a1 + 48));
      *(_QWORD *)(a1 + 32) -= a2;
    }
    if ( v4 )
    {
      do
      {
        v15 = (_QWORD *)*v4;
        MiReleaseFreshPage(v4);
        v4 = v15;
      }
      while ( v15 );
    }
    return 3221225495LL;
  }
  else
  {
LABEL_8:
    *a3 = v4;
    return 0LL;
  }
}
