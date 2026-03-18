/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C0003420
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0010660 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        CCompositionSurface *a1,
        unsigned __int64 *a2,
        _DWORD *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  CCompositionSurface *v6; // r13
  int Buffer; // ebx
  unsigned __int64 v8; // r15
  int v9; // edi
  char v10; // r8
  CCompositionSurface *v11; // r13
  PVOID Object; // [rsp+28h] [rbp-80h] BYREF
  CCompositionSurface *v14; // [rsp+30h] [rbp-78h] BYREF
  struct CCompositionBuffer *v15; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-68h]
  struct CCompositionBuffer *v17; // [rsp+48h] [rbp-60h] BYREF
  struct CCompositionBuffer *v18; // [rsp+50h] [rbp-58h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]
  __int64 v20; // [rsp+68h] [rbp-40h]
  int v21; // [rsp+70h] [rbp-38h]

  v6 = a1;
  v14 = a1;
  Object = a3;
  v15 = (struct CCompositionBuffer *)a5;
  Buffer = 0;
  v8 = 0LL;
  v16 = 0LL;
  v9 = 0;
  v19 = 0uLL;
  v20 = 0LL;
  v21 = 0;
  if ( a2 )
  {
    a1 = (CCompositionSurface *)(a2 + 1);
    if ( a2 + 1 < a2 || (unsigned __int64)a1 > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v16 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 )
  {
    if ( !(unsigned int)UserIsCurrentProcessDwm(a1, a2, a3) )
      Buffer = -1073741790;
    if ( Buffer >= 0 )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(v6, 1u, v10, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v14 = 0LL;
        Buffer = CompositionInputObject::LockForRead(Object, &v14);
        if ( Buffer >= 0 )
        {
          v11 = v14;
          Buffer = CCompositionSurface::FindBuffer(v14, v8, &v15);
          if ( Buffer >= 0 )
          {
            v9 = _guard_dispatch_icall_fptr();
            if ( v9 )
            {
              if ( v9 == 1 )
              {
                Buffer = CCompositionSurface::FindBuffer(v11, v8, &v17);
                if ( Buffer >= 0 )
                  Buffer = _guard_dispatch_icall_fptr();
              }
              else
              {
                Buffer = -1073741811;
              }
            }
          }
          if ( (int)CCompositionSurface::FindBuffer(v11, v8, &v18) >= 0 )
            *((_DWORD *)v18 + 41) &= ~0x800u;
          CInputSink::UnlockAndRelease(v11);
        }
        ObfDereferenceObject(Object);
      }
    }
  }
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
    if ( v9 == 1 )
    {
      if ( a4 < 0x1C )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        if ( a5 + 28 < a5 || a5 + 28 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a5 = v19;
        *(_QWORD *)(a5 + 16) = v20;
        *(_DWORD *)(a5 + 24) = v21;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}
