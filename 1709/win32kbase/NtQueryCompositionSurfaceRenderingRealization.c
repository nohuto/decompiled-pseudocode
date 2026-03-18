/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C00211C0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0021700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0039134 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  char v4; // r8
  int v5; // ebx
  _OWORD *v6; // rdi
  _OWORD v8[13]; // [rsp+30h] [rbp-D8h] BYREF
  CInputSink *v9; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  Object = 0LL;
  memset(v8, 0, 0xC8uLL);
  if ( UserIsCurrentProcessDwm() )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 1u, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v9 = 0LL;
      v5 = CompositionInputObject::LockForRead(Object, &v9);
      if ( v5 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v9, (struct CSM_SURFACE_UPDATE *)v8);
        CInputSink::UnlockAndRelease(v9);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v5 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v8[0];
    a2[1] = v8[1];
    a2[2] = v8[2];
    a2[3] = v8[3];
    a2[4] = v8[4];
    a2[5] = v8[5];
    a2[6] = v8[6];
    v6 = a2 + 8;
    *(v6 - 1) = v8[7];
    *v6 = v8[8];
    v6[1] = v8[9];
    v6[2] = v8[10];
    v6[3] = v8[11];
    *((_QWORD *)v6 + 8) = *(_QWORD *)&v8[12];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
