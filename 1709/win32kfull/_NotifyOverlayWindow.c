/*
 * XREFs of _NotifyOverlayWindow @ 0x1C01B8C10
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C009E0C0 (xxxSendNotifyMessage.c)
 *     ?FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z @ 0x1C01B73A0 (-FixupOverlayWindowAttributes@@YAHPEAUtagWND@@@Z.c)
 *     DwmAsyncNotifyWindowShadowChange @ 0x1C024D424 (DwmAsyncNotifyWindowShadowChange.c)
 */

__int64 __fastcall NotifyOverlayWindow(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r8d
  int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // eax
  int v7; // edx
  bool v8; // zf
  void *v9; // rax

  v2 = 0;
  if ( !a1 )
    return v2;
  v3 = gcOverlays;
  v4 = 0;
  v5 = 0;
  if ( a2 )
  {
    if ( (*(_DWORD *)(a1 + 304) & 0x400) == 0 )
    {
      v6 = gcOverlays + 1;
      v7 = -1;
      if ( gcOverlays + 1 >= (unsigned int)gcOverlays )
        v7 = gcOverlays + 1;
      gcOverlays = v7;
      if ( v6 < v3 )
        goto LABEL_13;
      *(_DWORD *)(a1 + 304) |= 0x400u;
      v2 = 1;
      v8 = v3 == 0;
      goto LABEL_11;
    }
  }
  else if ( (*(_DWORD *)(a1 + 304) & 0x400) != 0 )
  {
    if ( !gcOverlays )
    {
      gcOverlays = -1;
      goto LABEL_13;
    }
    v2 = 1;
    --gcOverlays;
    *(_DWORD *)(a1 + 304) &= ~0x400u;
    v8 = v3 == 1;
LABEL_11:
    LOBYTE(v4) = v8;
LABEL_13:
    v5 = v2;
    goto LABEL_15;
  }
  v2 = 1;
LABEL_15:
  if ( v2 )
  {
    if ( v5 )
      FixupOverlayWindowAttributes((struct tagWND *)a1);
    if ( v4 )
    {
      v9 = (void *)ReferenceDwmApiPort(a1);
      DwmAsyncNotifyWindowShadowChange(v9);
      xxxSendNotifyMessage((struct tagWND *)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x1025uLL, 0LL, 1);
    }
  }
  return v2;
}
