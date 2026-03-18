/*
 * XREFs of ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F36A0 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02555A8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02988B8 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C0298974 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C0298AC0 (NtGdiSetPixelFormat.c)
 *     NtGdiSwapBuffers @ 0x1C0298CD0 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?bValid@EWNDOBJ@@QEAAHXZ @ 0x1C02677DC (-bValid@EWNDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall hdevFindDeviceHdev(_QWORD *a1, struct _RECTL *a2, struct EWNDOBJ *a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  int v9; // esi

  v4 = (_QWORD *)a1[227];
  v5 = 0LL;
  if ( a3 && EWNDOBJ::bValid(a3) )
  {
    v7 = (_QWORD *)*v4;
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 21) + 32LL) + 48LL);
    while ( v7 )
    {
      if ( v5 == v7[6] )
        return v5;
      v7 = (_QWORD *)*v7;
    }
  }
  v8 = (_QWORD *)*v4;
  v9 = 0;
  if ( v8 )
  {
    do
    {
      if ( *((_DWORD *)v8 + 7) <= a2->left
        && *((_DWORD *)v8 + 9) >= a2->right
        && *((_DWORD *)v8 + 8) <= a2->top
        && *((_DWORD *)v8 + 10) >= a2->bottom )
      {
        return v8[6];
      }
      if ( (unsigned int)bIntersect((char *)v8 + 28, a2, a3, a4) )
      {
        v5 = v8[6];
        if ( (*(_DWORD *)(v5 + 2144) & 0x100) != 0 )
          return v5;
        ++v9;
      }
      v8 = (_QWORD *)*v8;
    }
    while ( v8 );
    if ( v9 == 1 )
      return v5;
  }
  return 0LL;
}
