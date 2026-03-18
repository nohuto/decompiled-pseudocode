/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C0151150
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010890 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C015137C (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  __int64 v7; // r8
  CInputSink *v8; // rdi
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  CCompositionSurface *v12; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v6 = a3[1];
    v10[0] = *a3;
    v10[1] = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v7, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v12 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v12);
        if ( v4 >= 0 )
        {
          v8 = v12;
          if ( *((_BYTE *)v12 + 88) )
            CCompositionSurface::SetSurfaceStats(v12, v5, (const struct DXGI_FRAME_STATISTICS *)v10);
          else
            v4 = -1073741823;
          CInputSink::UnlockAndRelease(v8);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v4;
}
