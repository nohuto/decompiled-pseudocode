/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x1C006CC80
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00686F4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     bDynamicModeChange @ 0x1C006BCF4 (bDynamicModeChange.c)
 * Callees:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C006BC10 (vDynamicConvertNewSurfaceDCs.c)
 *     HmgSafeNextObjt @ 0x1C006CDD0 (HmgSafeNextObjt.c)
 *     pProcessDfbSurfaces2 @ 0x1C006CF70 (pProcessDfbSurfaces2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  unsigned int v6; // r14d
  _BOOL8 v7; // rsi
  __int64 v8; // rbp
  __int64 Objt; // rax
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64); // rsi
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v17 = a1;
  v5 = a2;
  v6 = 1;
  v7 = (*(_DWORD *)(a1 + 2144) & 0x10000) != 0 && a2 && (*(_DWORD *)(a2 + 2144) & 0x10000) != 0;
  v8 = 0LL;
  while ( 1 )
  {
    LOBYTE(a2) = 5;
    Objt = HmgSafeNextObjt(v8, a2);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1
      && (*(_DWORD *)(Objt + 112) & 0x800000) != 0
      && !*(_QWORD *)(Objt + 488)
      && *(_QWORD *)(Objt + 40)
      && (a3 || (*(_DWORD *)(Objt + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(Objt + 116) & 4) == 0)
      && !pProcessDfbSurfaces2((struct OBJECT *)Objt, v5) )
    {
      v6 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    v11 = *(void (__fastcall **)(__int64))(v17 + 3048);
    if ( v11 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3536) + 1536LL);
      else
        v15 = *(_QWORD *)(a1 + 1536);
      while ( v15 )
      {
        v11(v15);
        *(_QWORD *)(v15 + 48) = 0LL;
        v15 = *(_QWORD *)(v15 + 504);
      }
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
        v16 = *(_QWORD *)(*(_QWORD *)(a1 + 3536) + 1528LL);
      else
        v16 = *(_QWORD *)(a1 + 1528);
      while ( v16 )
      {
        v11(v16);
        *(_QWORD *)(v16 + 48) = 0LL;
        v16 = *(_QWORD *)(v16 + 504);
      }
    }
    v12 = 0LL;
    while ( 1 )
    {
      LOBYTE(v10) = 16;
      v13 = HmgSafeNextObjt(v12, v10);
      if ( !v13 )
        break;
      v12 = *(_QWORD *)v13;
      *(_DWORD *)(v13 + 120) = -1;
      *(_DWORD *)(v13 + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    }
    if ( *(_QWORD *)(a1 + 1520) && (int)IsPDEVOBJ_bDisableHalftoneSupported(0LL) >= 0 )
      PDEVOBJ_bDisableHalftoneWrap(&v17);
  }
  return v6;
}
