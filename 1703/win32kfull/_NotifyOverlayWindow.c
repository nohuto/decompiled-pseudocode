/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01B5980
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C003C9B0 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B4430 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C024BA64 (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r8
  int v4; // edi
  __int64 v5; // r9
  unsigned int v6; // eax
  bool v7; // zf
  void *v8; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = (unsigned int)gcOverlays;
  v4 = 0;
  v5 = 0LL;
  if ( (_DWORD)a2 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x400) == 0 )
    {
      v6 = gcOverlays + 1;
      a2 = 0xFFFFFFFFLL;
      if ( gcOverlays + 1 >= (unsigned int)gcOverlays )
        a2 = v6;
      gcOverlays = a2;
      if ( v6 < (unsigned int)v3 )
        goto LABEL_13;
      *(_DWORD *)(a1 + 304) |= 0x400u;
      v2 = 1;
      v7 = (_DWORD)v3 == 0;
      goto LABEL_11;
    }
  }
  else if ( (*(_DWORD *)(a1 + 304) & 0x400) != 0 )
  {
    if ( !gcOverlays )
    {
      a2 = 0xFFFFFFFFLL;
      gcOverlays = -1;
      goto LABEL_13;
    }
    v2 = 1;
    --gcOverlays;
    *(_DWORD *)(a1 + 304) &= ~0x400u;
    v7 = (_DWORD)v3 == 1;
LABEL_11:
    LOBYTE(v4) = v7;
LABEL_13:
    v5 = v2;
    goto LABEL_15;
  }
  v2 = 1;
LABEL_15:
  if ( v2 )
  {
    if ( (_DWORD)v5 )
      FixupOverlayWindowAttributes((struct tagWND *)a1);
    if ( v4 )
    {
      v8 = (void *)ReferenceDwmApiPort(a1, a2, v3, v5);
      DwmAsyncNotifyWindowShadowChange(v8);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
