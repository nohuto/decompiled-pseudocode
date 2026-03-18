/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C005D85C
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     UnredirectDCEs @ 0x1C0022A58 (UnredirectDCEs.c)
 *     PostEventMessageEx @ 0x1C0049DE8 (PostEventMessageEx.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     UnlinkWindow @ 0x1C005FA3C (UnlinkWindow.c)
 *     GetStyleWindow @ 0x1C0067050 (GetStyleWindow.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 StyleWindow; // rax
  BOOL v4; // esi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+40h] [rbp-28h] BYREF

  for ( i = *((_QWORD *)a1 + 14); i; i = *((_QWORD *)a1 + 14) )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v8;
    v8[1] = i;
    ++*(_DWORD *)(i + 8);
    if ( (*(_BYTE *)(i + 71) & 0x10) != 0 )
      SetVisible((_QWORD *)i, 0);
    StyleWindow = GetStyleWindow(i, 2848LL);
    v4 = StyleWindow && StyleWindow != i;
    UnlinkWindow(i, a1);
    if ( v4 )
      UnredirectDCEs((struct tagWND *)i);
    SetOrClrWF(1, (_DWORD *)i, 0x480u, 1);
    SetOrClrWF(1, (_DWORD *)i, 0x380u, 1);
    v5 = *(_QWORD *)(i + 16);
    if ( v5 == gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)i);
    }
    else
    {
      PostEventMessageEx(v5, *(_QWORD *)(v5 + 384), 8u, 0LL, 0, *(_QWORD *)i, 0LL, 0LL);
      ThreadUnlock1(v7, v6);
    }
  }
}
