/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0038824
 * Callers:
 *     DrvEnableMDEV @ 0x1C005B3E4 (DrvEnableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C005EFF0 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvDisableMDEV @ 0x1C0098680 (DrvDisableMDEV.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C009BB08 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00F836C (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C008CA98 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 Objt; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 32LL), 0x400u);
  if ( a2 || (v6 = *(_QWORD *)this, v4 = 0x20000, (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x20000) != 0) )
  {
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v6 + 16);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 32) & 0x20000) != 0 && !*(_QWORD *)(v6 + 24) )
      {
        v5 = *(_QWORD *)(v11 + 1816);
        v12 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
        if ( v6 != v12 )
          *(_QWORD *)(v6 + 24) = v12;
      }
    }
  }
  v7 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore(v5, v4, v6);
  LODWORD(v8) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v8, 1);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v7 )
    {
      if ( a2 )
        *(_DWORD *)(Objt + 36) |= 0x1000u;
      else
        *(_DWORD *)(Objt + 36) &= ~0x1000u;
    }
  }
  v13 = *(_DWORD *)(*(_QWORD *)this + 32LL) & 0x400;
  GreReleaseHmgrSemaphore(v10);
  return v13;
}
