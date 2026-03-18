/*
 * XREFs of NtSetCompositionSurfaceDirectFlipState @ 0x1C0151FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0021950 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0038C24 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceDirectFlipState(void *a1, __int64 *a2, int a3)
{
  int Buffer; // ebx
  __int64 v5; // rdi
  __int64 v6; // r8
  struct CCompositionBuffer *v8; // [rsp+28h] [rbp-30h] BYREF
  CCompositionSurface *v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v10 = a3;
  Buffer = 0;
  v5 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v5 = *a2;
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
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v6, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v9 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v9);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v9, v5, &v8);
          if ( Buffer >= 0 )
            _guard_dispatch_icall_fptr();
          CInputSink::UnlockAndRelease(v9);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)Buffer;
}
