/*
 * XREFs of DWP_SetHotKey @ 0x1C00FC924
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C00FC9BC (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     HotKeyToWindow @ 0x1C020DE70 (HotKeyToWindow.c)
 */

__int64 __fastcall DWP_SetHotKey(struct tagWND *a1, unsigned int a2)
{
  int v2; // esi
  __int64 v5; // rcx
  struct tagHOTKEYSTRUCT **v6; // r14
  struct tagHOTKEYSTRUCT *v7; // rdi
  struct tagWND *v9; // rax
  __int64 v10; // rax
  struct tagHOTKEYSTRUCT *v11; // rdi
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (unsigned __int8)a2 <= 0x20u )
  {
    v5 = 0x108000200LL;
    if ( _bittest64(&v5, a2) )
      return 0xFFFFFFFFLL;
  }
  if ( (_BYTE)a2 == 0xE7 )
    return 0xFFFFFFFFLL;
  if ( (*((_BYTE *)a1 + 71) & 0x40) != 0 )
    return 0LL;
  if ( a2 )
  {
    v9 = (struct tagWND *)HotKeyToWindow(a2);
    if ( v9 )
    {
      if ( v9 != a1 )
        v2 = 1;
    }
  }
  v6 = HotKeyHelper(a1);
  v7 = *v6;
  if ( *v6 )
  {
    if ( a2 )
    {
      *((_DWORD *)v7 + 2) = a2;
    }
    else
    {
      *v6 = (struct tagHOTKEYSTRUCT *)*((_QWORD *)v7 + 2);
      HMAssignmentUnlock(v7);
      Win32FreePool(v7);
      --gcHotKey;
    }
    return (unsigned int)(v2 + 1);
  }
  if ( !a2 )
    return 1LL;
  v10 = Win32AllocPool(24LL, 1802007381LL);
  v11 = (struct tagHOTKEYSTRUCT *)v10;
  if ( !v10 )
    return 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)v10 = 0LL;
  v12[0] = v10;
  v12[1] = a1;
  *(_DWORD *)(v10 + 8) = a2;
  HMAssignmentLock(v12);
  ++gcHotKey;
  *v6 = v11;
  return (unsigned int)(v2 + 1);
}
