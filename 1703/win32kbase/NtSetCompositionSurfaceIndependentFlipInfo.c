/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0150F60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010890 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  int Buffer; // ebx
  __int64 v10; // rsi
  __int64 v11; // r8
  CCompositionSurface *v13; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  __int64 v15; // [rsp+58h] [rbp-40h]
  struct CCompositionBuffer *v16; // [rsp+60h] [rbp-38h] BYREF

  Buffer = 0;
  v10 = 0LL;
  v15 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v10 = *a2;
    v15 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v11, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v13 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v13);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v13, v10, &v16);
          if ( Buffer >= 0 )
            Buffer = _guard_dispatch_icall_fptr();
          CInputSink::UnlockAndRelease(v13);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( Buffer >= 0 )
  {
    if ( a8 )
    {
      if ( a8 + 1 < a8 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a8 = 0;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}
