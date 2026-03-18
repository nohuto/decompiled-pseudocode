/*
 * XREFs of ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1C0060944
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     UnlinkWindow @ 0x1C0062338 (UnlinkWindow.c)
 *     GetStyleWindow @ 0x1C006B4B0 (GetStyleWindow.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     UnredirectDCEs @ 0x1C008FFB4 (UnredirectDCEs.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

void __fastcall xxxFW_DestroyAllChildren(struct tagWND *a1)
{
  __int64 i; // rbx
  __int64 StyleWindow; // rax
  BOOL v4; // esi
  struct tagTHREADINFO *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v8[4]; // [rsp+40h] [rbp-28h] BYREF

  for ( i = *((_QWORD *)a1 + 14); i; i = *((_QWORD *)a1 + 14) )
  {
    v8[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v8;
    v8[1] = i;
    _InterlockedAdd((volatile signed __int32 *)(i + 8), 1u);
    if ( (*(_BYTE *)(i + 71) & 0x10) != 0 )
      SetVisible((struct tagWND *)i);
    StyleWindow = GetStyleWindow(i, 2848LL);
    v4 = StyleWindow && StyleWindow != i;
    UnlinkWindow(i, a1);
    if ( v4 )
      UnredirectDCEs((struct tagWND *)i);
    SetOrClrWF(1LL, i, 1152LL, 1LL);
    SetOrClrWF(1LL, i, 896LL, 1LL);
    v5 = *(struct tagTHREADINFO **)(i + 16);
    if ( v5 == (struct tagTHREADINFO *)gptiCurrent )
    {
      xxxFreeWindow((struct tagWND *)i);
    }
    else
    {
      PostEventMessageEx(v5, 0, *(_QWORD *)i, 0LL, 0LL);
      ThreadUnlock1(v7, v6);
    }
  }
}
