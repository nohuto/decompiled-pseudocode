/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C000C400
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C000D3F4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        CCompositionSurface *a1,
        unsigned __int64 *a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int Buffer; // ebx
  unsigned __int64 v8; // r15
  int v9; // r14d
  __int64 v10; // r8
  CCompositionSurface *v11; // r13
  int v12; // r14d
  __m128i v13; // xmm1
  PVOID Object; // [rsp+28h] [rbp-C0h] BYREF
  CCompositionSurface *v16; // [rsp+30h] [rbp-B8h] BYREF
  struct CCompositionBuffer *v17; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-A8h]
  struct CCompositionBuffer *v19; // [rsp+48h] [rbp-A0h] BYREF
  struct CCompositionBuffer *v20; // [rsp+50h] [rbp-98h] BYREF
  __int128 v21; // [rsp+60h] [rbp-88h]
  __m128i v22; // [rsp+70h] [rbp-78h]
  __int128 v23; // [rsp+80h] [rbp-68h]
  __int128 v24; // [rsp+90h] [rbp-58h]
  __int64 v25; // [rsp+A0h] [rbp-48h]

  v16 = a1;
  Object = a3;
  v17 = (struct CCompositionBuffer *)a5;
  Buffer = 0;
  v8 = 0LL;
  v18 = 0LL;
  v9 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v18 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( Buffer >= 0 )
  {
    DXGGLOBAL::GetGlobal();
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
      Buffer = -1073741790;
    if ( Buffer >= 0 )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v16 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead(Object, &v16);
        if ( Buffer < 0 )
        {
LABEL_15:
          ObfDereferenceObject(Object);
          goto LABEL_16;
        }
        v11 = v16;
        Buffer = CCompositionSurface::FindBuffer(v16, v8, &v17);
        if ( Buffer < 0 || (v9 = _guard_dispatch_icall_fptr()) == 0 )
        {
LABEL_14:
          CCompositionSurface::UnlockAndRelease(v11);
          goto LABEL_15;
        }
        if ( v9 == 1 )
        {
          Buffer = CCompositionSurface::FindBuffer(v11, v8, &v20);
          if ( Buffer < 0 )
            goto LABEL_14;
        }
        else
        {
          if ( v9 != 2 )
          {
            Buffer = -1073741811;
            goto LABEL_14;
          }
          Buffer = CCompositionSurface::FindBuffer(v11, v8, &v19);
          if ( Buffer < 0 )
            goto LABEL_14;
        }
        Buffer = _guard_dispatch_icall_fptr();
        goto LABEL_14;
      }
    }
  }
LABEL_16:
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v9;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 && a5 && v9 )
  {
    v12 = v9 - 1;
    if ( v12 )
    {
      if ( v12 != 1 )
      {
        Buffer = -1073741811;
        goto LABEL_39;
      }
      if ( a4 >= 0x48 )
      {
        if ( a5 + 72 < a5 || a5 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a5 = v21;
        *(__m128i *)(a5 + 16) = v22;
        *(_OWORD *)(a5 + 32) = v23;
        *(_OWORD *)(a5 + 48) = v24;
        *(_QWORD *)(a5 + 64) = v25;
        goto LABEL_39;
      }
LABEL_38:
      Buffer = -1073741789;
      goto LABEL_39;
    }
    if ( a4 < 0x1C )
      goto LABEL_38;
    if ( a5 + 28 < a5 || a5 + 28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a5 = v21;
    v13 = v22;
    *(_QWORD *)(a5 + 16) = v22.m128i_i64[0];
    *(_DWORD *)(a5 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v13, 8));
  }
LABEL_39:
  KeLeaveCriticalRegion();
  return (unsigned int)Buffer;
}
