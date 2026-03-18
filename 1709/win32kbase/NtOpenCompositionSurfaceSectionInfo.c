/*
 * XREFs of NtOpenCompositionSurfaceSectionInfo @ 0x1C0151D70
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001F380 (UserIsCurrentProcessDwm.c)
 *     ?LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z @ 0x1C0021700 (-LockForRead@CompositionInputObject@@QEBAJPEAPEBVCInputSink@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00252F4 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0038F40 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C01526B0 (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSectionInfo(
        void *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4)
{
  int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  CInputSink *v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+20h]

  v16 = a4;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v11 = 0LL;
  v13 = 0uLL;
  v14 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v11 = *a2;
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v12 = *a3;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v8, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v15 = 0LL;
        v6 = CompositionInputObject::LockForRead((char *)Object, &v15);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenSectionInfo(
                 v15,
                 v7,
                 (const struct CSM_SYSMEM_REALIZATION *)&v12,
                 (struct CSM_SYSMEM_SECTION_INFO *)&v13);
          CInputSink::UnlockAndRelease(v15);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = v13;
    *(_QWORD *)(a4 + 16) = v14;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
