/*
 * XREFs of NtBindCompositionSurface @ 0x1C000C700
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000A6A0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C000D38C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0012034 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z @ 0x1C0012064 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N1PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, __int64 a3, _OWORD *a4, _QWORD *a5)
{
  int v7; // ebx
  PVOID v8; // r15
  CCompositionSurface *v9; // r14
  char v10; // r12
  _OWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // r8
  PVOID Object; // [rsp+40h] [rbp-898h] BYREF
  CCompositionSurface *v19; // [rsp+48h] [rbp-890h] BYREF
  unsigned __int64 v20[3]; // [rsp+50h] [rbp-888h] BYREF
  _BYTE v21[1048]; // [rsp+68h] [rbp-870h] BYREF
  _QWORD v22[130]; // [rsp+480h] [rbp-458h] BYREF

  v20[1] = (unsigned __int64)a1;
  v20[2] = (unsigned __int64)a5;
  v7 = 0;
  memset(v22, 0, sizeof(v22));
  v20[0] = 0LL;
  v8 = 0LL;
  Object = 0LL;
  v9 = 0LL;
  v19 = 0LL;
  v10 = 0;
  if ( a4 )
  {
    if ( a4 + 65 < a4 || (unsigned __int64)(a4 + 65) > MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    v11 = v21;
    v12 = 8LL;
    v13 = 8LL;
    do
    {
      *v11 = *a4;
      v11[1] = a4[1];
      v11[2] = a4[2];
      v11[3] = a4[3];
      v11[4] = a4[4];
      v11[5] = a4[5];
      v11[6] = a4[6];
      v11 += 8;
      *(v11 - 1) = a4[7];
      a4 += 8;
      --v13;
    }
    while ( v13 );
    *v11 = *a4;
    v14 = v22;
    v15 = v21;
    do
    {
      *v14 = *v15;
      v14[1] = v15[1];
      v14[2] = v15[2];
      v14[3] = v15[3];
      v14[4] = v15[4];
      v14[5] = v15[5];
      v14[6] = v15[6];
      v14 += 8;
      *(v14 - 1) = v15[7];
      v15 += 8;
      --v12;
    }
    while ( v12 );
    *v14 = *v15;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v16, (struct CompositionSurfaceObject **)&Object);
  v8 = Object;
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = CompositionSurfaceObject::LockForWrite(Object, &v19);
  v9 = v19;
  if ( v7 < 0 )
    goto LABEL_33;
  v7 = CCompositionSurface::Bind(v19, (const struct CSM_BUFFER_INFO *)v22, a2 != 0, 0, v20);
  if ( v7 < 0 )
    goto LABEL_33;
  v10 = 1;
  if ( v22[17] )
  {
    DXGGLOBAL::GetGlobal();
    if ( !(unsigned int)_guard_dispatch_icall_fptr() )
      v7 = -1073741790;
  }
  if ( v7 < 0 )
  {
LABEL_33:
    if ( v10 )
      _guard_dispatch_icall_fptr();
  }
  if ( v9 )
    CCompositionSurface::UnlockAndRelease(v9);
  if ( v8 )
    ObfDereferenceObject(v8);
  KeLeaveCriticalRegion();
  if ( a5 )
  {
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v20[0];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
