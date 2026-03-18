/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C0017320
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        char *Src,
        _DWORD *a8)
{
  __int64 *v8; // r10
  int Buffer; // ebx
  __int64 v11; // r14
  unsigned int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx
  size_t v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  CCompositionSurface *v19; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A0h]
  void *v22; // [rsp+60h] [rbp-98h]
  _DWORD *v23; // [rsp+68h] [rbp-90h]
  struct CCompositionBuffer *v24; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v25[64]; // [rsp+80h] [rbp-78h] BYREF

  v8 = a2;
  v22 = a1;
  v23 = a8;
  Buffer = 0;
  v11 = 0LL;
  v21 = 0LL;
  if ( a2
    && Src
    && a6
    && (v12 = (((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) & 0x33333333)
            + ((((a6 & 0x55555555) + ((a6 >> 1) & 0x55555555)) >> 2) & 0x33333333),
        v13 = (((v12 & 0xF0F0F0F) + ((v12 >> 4) & 0xF0F0F0F)) & 0xFF00FF)
            + ((((v12 & 0xF0F0F0F) + ((v12 >> 4) & 0xF0F0F0F)) >> 8) & 0xFF00FF),
        v14 = (unsigned __int16)v13 + HIWORD(v13),
        v14 < 0x10) )
  {
    if ( v8 + 1 < v8 || (unsigned __int64)(v8 + 1) > MmUserProbeAddress )
      v8 = (__int64 *)MmUserProbeAddress;
    v11 = *v8;
    v21 = *v8;
    v15 = 4LL * v14;
    if ( &Src[v15] < Src || (unsigned __int64)&Src[v15] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, Src, v15);
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    DXGGLOBAL::GetGlobal(v16);
    if ( (unsigned int)_guard_dispatch_icall_fptr() )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2u, v17, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v19 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v19);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v19, v11, &v24);
          if ( Buffer >= 0 )
            Buffer = _guard_dispatch_icall_fptr();
          CCompositionSurface::UnlockAndRelease(v19);
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
      Buffer = -1073741811;
    }
  }
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
