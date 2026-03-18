/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C000E0A0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0010660 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010C04 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0010D50 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C00118F8 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  char v7; // r8
  int v8; // ebx
  _OWORD *v9; // rdi
  _OWORD v11[13]; // [rsp+30h] [rbp-D8h] BYREF
  CInputSink *v12; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  Object = 0LL;
  memset(v11, 0, 0xC8uLL);
  if ( (unsigned int)UserIsCurrentProcessDwm(v5, v4, v6) )
  {
    v8 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v7, (struct CompositionSurfaceObject **)&Object);
    if ( v8 >= 0 )
    {
      v12 = 0LL;
      v8 = CompositionInputObject::LockForRead(Object, &v12);
      if ( v8 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v12, (struct CSM_SURFACE_UPDATE *)v11);
        CInputSink::UnlockAndRelease(v12);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v8 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v11[0];
    a2[1] = v11[1];
    a2[2] = v11[2];
    a2[3] = v11[3];
    a2[4] = v11[4];
    a2[5] = v11[5];
    a2[6] = v11[6];
    v9 = a2 + 8;
    *(v9 - 1) = v11[7];
    *v9 = v11[8];
    v9[1] = v11[9];
    v9[2] = v11[10];
    v9[3] = v11[11];
    *((_QWORD *)v9 + 8) = *(_QWORD *)&v11[12];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v8;
}
