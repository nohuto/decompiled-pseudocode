/*
 * XREFs of _pGetAdditionalTiming @ 0x1C0200D18
 * Callers:
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C0200BA0 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 * Callees:
 *     _pGetAdditionalModeEntry @ 0x1C0200CD8 (_pGetAdditionalModeEntry.c)
 *     _pLoadAdditinalMode @ 0x1C0200EA0 (_pLoadAdditinalMode.c)
 */

__int64 __fastcall pGetAdditionalTiming(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *AdditionalModeEntry; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _DWORD *v21; // [rsp+48h] [rbp+10h] BYREF

  v3 = (int)a1;
  LODWORD(v4) = 0;
  if ( (_DWORD)a1 == -2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (_DWORD)v3 == 15 )
  {
    *a2 = 0;
    *a3 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C0061C48, 0LL);
    AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v3);
    if ( !AdditionalModeEntry )
    {
      ExReleasePushLockEx(&qword_1C0061C48, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C0061C48, 0LL);
      v21 = pGetAdditionalModeEntry((unsigned int)v3);
      AdditionalModeEntry = v21;
      if ( !v21 )
      {
        v12 = pLoadAdditinalMode((unsigned int)v3, &v21);
        v4 = v12;
        if ( v12 == -1073741275 || v12 == -1073741772 )
        {
          v17 = WdLogNewEntry5_WdDmmEvent(v14);
          *(_QWORD *)(v17 + 24) = v3;
          WdLogEvent5_WdDmmEvent(v17);
        }
        else if ( v12 < 0 )
        {
          v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
          *(_QWORD *)(v16 + 24) = v3;
          *(_QWORD *)(v16 + 32) = v4;
          WdLogEvent5_WdWarning(v16);
        }
        AdditionalModeEntry = v21;
      }
    }
    ExReleasePushLockEx(&qword_1C0061C48, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v4 < 0 )
    {
      if ( AdditionalModeEntry )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v20);
      }
    }
    else
    {
      if ( !AdditionalModeEntry )
      {
        v19 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v19);
      }
      *a2 = AdditionalModeEntry[3];
      *a3 = AdditionalModeEntry + 4;
    }
    return (unsigned int)v4;
  }
}
