/*
 * XREFs of NtSetCompositionSurfaceHDRMetaData @ 0x1C0152110
 * Callers:
 *     <none>
 * Callees:
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceHDRMetaData(void *a1, __int64 *a2, ULONG64 a3, ULONG64 a4)
{
  int v4; // edi
  int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // xmm1_8
  int v9; // eax
  int Buffer; // ebx
  bool v11; // zf
  CCompositionSurface *v12; // rdi
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  CCompositionSurface *v15; // [rsp+30h] [rbp-48h] BYREF
  struct CCompositionBuffer *v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int128 v18; // [rsp+48h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-20h]
  int v20; // [rsp+60h] [rbp-18h]

  v4 = a3;
  Object = a1;
  v6 = 0;
  v7 = 0LL;
  v17 = 0LL;
  v18 = 0uLL;
  v19 = 0LL;
  v20 = 0;
  if ( a2 )
  {
    a3 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || a3 > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v7 = *a2;
    v17 = *a2;
    if ( v4 )
    {
      if ( v4 == 1 && a4 )
      {
        if ( a4 + 28 < a4 || a4 + 28 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v8 = *(_QWORD *)(a4 + 16);
        v9 = *(_DWORD *)(a4 + 24);
        v18 = *(_OWORD *)a4;
        v19 = v8;
        v20 = v9;
      }
      else
      {
        v6 = -1073741811;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    Object = 0LL;
    Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2LL, a3, (struct CompositionSurfaceObject **)&Object);
    if ( Buffer >= 0 )
    {
      v15 = 0LL;
      Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v15);
      if ( Buffer >= 0 )
      {
        if ( v4 )
        {
          v11 = v4 == 1;
          v12 = v15;
          if ( v11 )
          {
            Buffer = CCompositionSurface::FindBuffer(v15, v7, &v16);
            if ( Buffer >= 0 )
              Buffer = _guard_dispatch_icall_fptr();
          }
          else
          {
            Buffer = -1073741811;
          }
        }
        else
        {
          v12 = v15;
          Buffer = CCompositionSurface::FindBuffer(v15, v7, &v16);
          if ( Buffer >= 0 )
            _guard_dispatch_icall_fptr();
        }
        CInputSink::UnlockAndRelease(v12);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)Buffer;
}
