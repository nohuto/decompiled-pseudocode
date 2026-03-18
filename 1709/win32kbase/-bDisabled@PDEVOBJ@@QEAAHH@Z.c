/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C003CEA8
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C003D3C0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C005DFCC (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0060708 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     DrvEnableMDEV @ 0x1C0060B04 (DrvEnableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 *     DrvDisableMDEV @ 0x1C00A27D0 (DrvDisableMDEV.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00A5B48 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C0093DD0 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 Objt; // rax
  unsigned int v8; // ebx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 32LL), 0x400u);
  if ( a2 || (v10 = *(_QWORD *)this, (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x20000) != 0) )
  {
    *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
  }
  else
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
    {
      if ( (*(_DWORD *)(v11 + 32) & 0x20000) != 0 && !*(_QWORD *)(v10 + 24) )
      {
        v12 = *(_QWORD *)(**(_QWORD **)(v11 + 1816) + 48LL);
        if ( v10 != v12 )
          *(_QWORD *)(v10 + 24) = v12;
      }
    }
  }
  v4 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore();
  v6 = 0LL;
  while ( 1 )
  {
    LOBYTE(v5) = 1;
    Objt = HmgSafeNextObjt(v6, v5);
    if ( !Objt )
      break;
    v6 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v4 )
    {
      if ( a2 )
        *(_DWORD *)(Objt + 36) |= 0x1000u;
      else
        *(_DWORD *)(Objt + 36) &= ~0x1000u;
    }
  }
  v8 = *(_DWORD *)(*(_QWORD *)this + 32LL) & 0x400;
  GreReleaseHmgrSemaphore();
  return v8;
}
