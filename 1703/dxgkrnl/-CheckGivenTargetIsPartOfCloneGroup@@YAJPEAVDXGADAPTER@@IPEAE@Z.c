/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00A701C
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00F0750 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DmmGetSourceConnectedToTargetInClientVidPn @ 0x1C00A6F38 (DmmGetSourceConnectedToTargetInClientVidPn.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00A9380 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E90A4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(ADAPTER_DISPLAY **a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // esi
  int v10; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v13; // rax
  unsigned int v14; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  if ( (int)DmmGetSourceConnectedToTargetInClientVidPn((DXGADAPTER *)a1, a2, &v14) < 0 )
    return (unsigned int)-1073741275;
  v9 = v14;
  if ( v14 >= *((_DWORD *)a1[285] + 20) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v13 + 24) = 5344LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v10 = DmmEnumClientVidPnPathTargetsFromSource(a1, v9, 1LL, &v14);
  if ( v10 < 0 || v14 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[285], v9);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v10;
  }
  *a3 = 1;
  return 0LL;
}
