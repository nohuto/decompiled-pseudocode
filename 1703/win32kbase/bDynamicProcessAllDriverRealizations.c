/*
 * XREFs of bDynamicProcessAllDriverRealizations @ 0x1C0077950
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C005C288 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     bDynamicModeChange @ 0x1C00F2CAC (bDynamicModeChange.c)
 * Callees:
 *     HmgSafeNextObjt @ 0x1C0032440 (HmgSafeNextObjt.c)
 *     pProcessDfbSurfaces2 @ 0x1C0077AB0 (pProcessDfbSurfaces2.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDynamicProcessAllDriverRealizations(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // r14d
  _BOOL8 v7; // rsi
  __int64 v8; // rbp
  __int64 Objt; // rax
  void (__fastcall *v10)(__int64); // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v16 = a1;
  v6 = 1;
  v7 = (*(_DWORD *)(a1 + 2144) & 0x10000) != 0 && a2 && (*(_DWORD *)(a2 + 2144) & 0x10000) != 0;
  LODWORD(v8) = 0;
  while ( 1 )
  {
    Objt = HmgSafeNextObjt(v8, 5);
    if ( !Objt )
      break;
    v8 = *(_QWORD *)Objt;
    if ( *(_QWORD *)(Objt + 48) == a1
      && (*(_DWORD *)(Objt + 112) & 0x800000) != 0
      && !*(_QWORD *)(Objt + 488)
      && *(_QWORD *)(Objt + 40)
      && (a3 || (*(_DWORD *)(Objt + 116) & 1) == 0)
      && (!v7 || (*(_DWORD *)(Objt + 116) & 4) == 0)
      && !pProcessDfbSurfaces2((SURFACE *)Objt, a2) )
    {
      v6 = 0;
    }
  }
  vDynamicConvertNewSurfaceDCs(a1, 0LL);
  if ( v6 )
  {
    v10 = *(void (__fastcall **)(__int64))(v16 + 3048);
    if ( v10 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 3536) + 1536LL);
      else
        v14 = *(_QWORD *)(a1 + 1536);
      while ( v14 )
      {
        v10(v14);
        *(_QWORD *)(v14 + 48) = 0LL;
        v14 = *(_QWORD *)(v14 + 504);
      }
      if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 3536) + 1528LL);
      else
        v15 = *(_QWORD *)(a1 + 1528);
      while ( v15 )
      {
        v10(v15);
        *(_QWORD *)(v15 + 48) = 0LL;
        v15 = *(_QWORD *)(v15 + 504);
      }
    }
    LODWORD(v11) = 0;
    while ( 1 )
    {
      v12 = HmgSafeNextObjt(v11, 16);
      if ( !v12 )
        break;
      v11 = *(_QWORD *)v12;
      *(_DWORD *)(v12 + 120) = -1;
      *(_DWORD *)(v12 + 52) = _InterlockedIncrement((volatile signed __int32 *)&BRUSH::_ulGlobalBrushUnique);
    }
    if ( *(_QWORD *)(a1 + 1520) && (int)IsPDEVOBJ_bDisableHalftoneSupported(0LL) >= 0 )
      PDEVOBJ_bDisableHalftoneWrap(&v16);
  }
  return v6;
}
