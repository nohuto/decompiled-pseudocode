/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C00C1950
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C001D71C (xxxGetWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00C352C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C020DA24 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxClientCopyImage @ 0x1C00C36B4 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C00C3ABC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(_DWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 v7; // r15
  int v8; // esi
  int v9; // r8d
  __int64 v10; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  v6 = 0LL;
  v7 = HMValidateHandleNoRip(v4, a2);
  if ( v7 )
  {
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v8 = *(_DWORD *)(gpsi + 2080LL);
    else
      v8 = *(_DWORD *)(gpsi + 2468LL);
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v9 = *(_DWORD *)(gpsi + 2076LL);
    else
      v9 = *(_DWORD *)(gpsi + 2464LL);
    v10 = xxxClientCopyImage(*(_QWORD *)v7, (unsigned int)(*(_WORD *)(v7 + 74) != 3) + 1, v9, v8, a3 != 0 ? 0x4000 : 0);
    if ( v10 )
    {
      v6 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 )
      {
        *(_DWORD *)(v10 + 80) |= 0x80u;
        InternalSetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1356LL), v6, 5);
        if ( !a3 )
          SetOrClrWF(1, a1, 0x720u, 1);
      }
    }
  }
  return v6;
}
