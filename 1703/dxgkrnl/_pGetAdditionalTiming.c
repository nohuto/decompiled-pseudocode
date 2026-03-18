/*
 * XREFs of _pGetAdditionalTiming @ 0x1C01E65A0
 * Callers:
 *     ?_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E6428 (-_GetAdditionalTiming@DXGMONITOR@@QEAAJPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z.c)
 * Callees:
 *     _pGetAdditionalModeEntry @ 0x1C01E6560 (_pGetAdditionalModeEntry.c)
 *     _pLoadAdditinalMode @ 0x1C01E6728 (_pLoadAdditinalMode.c)
 */

__int64 __fastcall pGetAdditionalTiming(__int64 a1, _DWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  _DWORD *AdditionalModeEntry; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // [rsp+48h] [rbp+10h] BYREF

  v4 = (int)a1;
  LODWORD(v5) = 0;
  if ( (_DWORD)a1 == -2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( (_DWORD)v4 == 15 )
  {
    *a2 = 0;
    *a3 = 0LL;
    return 0LL;
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&qword_1C0070D98, 0LL);
    AdditionalModeEntry = pGetAdditionalModeEntry((unsigned int)v4, v12, v13, v14);
    if ( !AdditionalModeEntry )
    {
      ExReleasePushLockEx(&qword_1C0070D98, 0LL);
      ExAcquirePushLockExclusiveEx(&qword_1C0070D98, 0LL);
      v32 = pGetAdditionalModeEntry((unsigned int)v4, v16, v17, v18);
      AdditionalModeEntry = v32;
      if ( !v32 )
      {
        v19 = pLoadAdditinalMode((unsigned int)v4, &v32);
        v5 = v19;
        if ( v19 == -1073741275 || v19 == -1073741772 )
        {
          v25 = WdLogNewEntry5_WdDmmEvent(v21, v20, v22, v23);
          *(_QWORD *)(v25 + 24) = v4;
          WdLogEvent5_WdDmmEvent(v25);
        }
        else if ( v19 < 0 )
        {
          v24 = WdLogNewEntry5_WdWarning(v21, v20, v22, v23);
          *(_QWORD *)(v24 + 24) = v4;
          *(_QWORD *)(v24 + 32) = v5;
          WdLogEvent5_WdWarning(v24);
        }
        AdditionalModeEntry = v32;
      }
    }
    ExReleasePushLockEx(&qword_1C0070D98, 0LL);
    KeLeaveCriticalRegion();
    if ( (int)v5 < 0 )
    {
      if ( AdditionalModeEntry )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        WdLogEvent5_WdAssertion(v31);
      }
    }
    else
    {
      if ( !AdditionalModeEntry )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
        WdLogEvent5_WdAssertion(v30);
      }
      *a2 = AdditionalModeEntry[3];
      *a3 = AdditionalModeEntry + 4;
    }
    return (unsigned int)v5;
  }
}
