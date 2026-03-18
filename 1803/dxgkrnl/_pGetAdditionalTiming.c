/*
 * XREFs of _pGetAdditionalTiming @ 0x1C023475C
 * Callers:
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0234570 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 * Callees:
 *     _pGetAdditionalModeEntry @ 0x1C023470C (_pGetAdditionalModeEntry.c)
 *     _pLoadAdditinalMode @ 0x1C0234914 (_pLoadAdditinalMode.c)
 */

__int64 __fastcall pGetAdditionalTiming(__int64 a1, char a2, _DWORD *a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *AdditionalModeEntry; // rbx
  int AdditinalMode; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax

  v4 = (int)a1;
  LODWORD(v5) = 0;
  if ( (_DWORD)a1 == -2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( (_DWORD)v4 == 15 )
  {
    *a3 = 0;
    *a4 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C007BB78, 0LL);
    AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, a2);
    if ( !AdditionalModeEntry )
    {
      ExReleasePushLockEx(&qword_1C007BB78, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C007BB78, 0LL);
      AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, a2);
      if ( !AdditionalModeEntry )
      {
        AdditinalMode = pLoadAdditinalMode((unsigned int)v4);
        v5 = AdditinalMode;
        if ( AdditinalMode == -1073741275 || AdditinalMode == -1073741772 )
        {
          v21 = WdLogNewEntry5_WdDmmEvent(v16);
          *(_QWORD *)(v21 + 24) = v4;
          WdLogEvent5_WdDmmEvent(v21);
        }
        else if ( AdditinalMode >= 0 )
        {
          AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, a2);
          if ( !AdditionalModeEntry )
          {
            v20 = WdLogNewEntry5_WdDmmEvent(v19);
            *(_QWORD *)(v20 + 24) = v4;
            WdLogEvent5_WdDmmEvent(v20);
            LODWORD(v5) = -1073741275;
          }
        }
        else
        {
          v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
          *(_QWORD *)(v18 + 24) = v4;
          *(_QWORD *)(v18 + 32) = v5;
          WdLogEvent5_WdWarning(v18);
        }
      }
    }
    ExReleasePushLockEx(&qword_1C007BB78, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v5 < 0 )
    {
      if ( AdditionalModeEntry )
      {
        v24 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v24);
      }
    }
    else
    {
      if ( !AdditionalModeEntry )
      {
        v23 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v23);
      }
      *a3 = AdditionalModeEntry[4];
      *a4 = AdditionalModeEntry + 5;
    }
    return (unsigned int)v5;
  }
}
