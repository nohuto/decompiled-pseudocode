/*
 * XREFs of ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C020FAD0
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C0086E20 (_SetSystemTimer.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C020FBDC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     xxxTrackBox @ 0x1C0211A90 (xxxTrackBox.c)
 */

void __fastcall xxxContScroll(struct tagWND *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  struct tagWND *v4; // rdx

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL);
  if ( v2 )
  {
    xxxTrackBox(a1);
    if ( v2 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 688LL) && (*(_DWORD *)v2 & 1) != 0 )
    {
      v3 = SetSystemTimer((__int64)a1, 65534, *(_DWORD *)(gpsi + 4972LL) >> 3, (int)xxxContScroll, 0);
      v4 = *(struct tagWND **)(v2 + 24);
      *(_QWORD *)(v2 + 64) = v3;
      if ( v4 )
        xxxDoScroll(*(struct tagWND **)(v2 + 16), v4, *(_DWORD *)(v2 + 56), 0, (*(_DWORD *)v2 >> 1) & 1);
    }
  }
}
