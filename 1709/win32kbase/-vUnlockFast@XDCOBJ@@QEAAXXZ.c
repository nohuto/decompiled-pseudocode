/*
 * XREFs of ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224
 * Callers:
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00551C0 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C0055B60 (GreGetClipBox.c)
 *     GreGetDCPoint @ 0x1C005B500 (GreGetDCPoint.c)
 *     GreGetDeviceCaps @ 0x1C005CBF0 (GreGetDeviceCaps.c)
 *     NtGdiDdDDIOpenAdapterFromHdc @ 0x1C005E800 (NtGdiDdDDIOpenAdapterFromHdc.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 *     GreGetNearestColor @ 0x1C00634D0 (GreGetNearestColor.c)
 *     NtGdiGetGammaRampCapability @ 0x1C00764C0 (NtGdiGetGammaRampCapability.c)
 *     GreCleanDC @ 0x1C0080350 (GreCleanDC.c)
 *     GreSetLayout @ 0x1C00852F0 (GreSetLayout.c)
 *     NtGdiCreateMetafileDC @ 0x1C008E550 (NtGdiCreateMetafileDC.c)
 *     GreSelectBrush @ 0x1C00948A0 (GreSelectBrush.c)
 *     GreSelectPen @ 0x1C00ED9A0 (GreSelectPen.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C00F7F08 (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C00FAC60 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C00FB0B0 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     GreSetMagicColors @ 0x1C00FB5EC (GreSetMagicColors.c)
 * Callees:
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C004C3D0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     bDeleteDCInternalEx @ 0x1C0054EF0 (bDeleteDCInternalEx.c)
 *     ??0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z @ 0x1C00A9698 (--0HANDLELOCK@@QEAA@PEAVOBJECT@@HHH@Z.c)
 */

void __fastcall XDCOBJ::vUnlockFast(XDCOBJ *this)
{
  __int64 v2; // rsi
  HDC v3; // rbp
  int v4; // ebx
  GdiHandleManager *v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // r9
  _DWORD *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r10
  unsigned int v15; // edx
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // r10
  __int64 v19; // [rsp+30h] [rbp-28h] BYREF
  int v20; // [rsp+38h] [rbp-20h]

  XDCOBJ::RestoreAttributes(this);
  v2 = *(_QWORD *)this;
  v3 = **(HDC **)this;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v19, *(struct OBJECT **)this, 0, *((_DWORD *)this + 3), 1);
  if ( v20 )
  {
    if ( (*(_BYTE *)(v19 + 15) & 8) == 0 || *(_DWORD *)(v2 + 8) || (v4 = 1, *(_WORD *)(v2 + 12) != 1) )
      v4 = 0;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 12));
    v5 = gpHandleManager;
    v6 = GdiHandleManager::DecodeIndex(gpHandleManager, *(_DWORD *)v19 & 0xFFFFFF);
    v7 = *((_QWORD *)v5 + 2);
    v8 = v6;
    v9 = *(_DWORD *)(v7 + 2056);
    if ( v6 >= v9 + ((*(unsigned __int16 *)(v7 + 2) + 0xFFFF) << 16) )
      goto LABEL_23;
    if ( v6 >= v9 )
      v10 = ((v6 - v9) >> 16) + 1;
    else
      v10 = 0;
    v11 = *(_QWORD *)(v7 + 8LL * v10 + 8);
    if ( v10 )
      v8 = ((1 - v10) << 16) - v9 + v6;
    if ( (unsigned int)v8 >= *(_DWORD *)(v11 + 20) )
LABEL_23:
      v12 = 0LL;
    else
      v12 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v11 + 24) + 8 * (v8 >> 8)) + 16LL * (unsigned __int8)v8 + 8);
    v13 = GdiHandleManager::DecodeIndex(v5, (unsigned __int16)*v12 | (*v12 >> 8) & 0xFF0000);
    v14 = *((_QWORD *)v5 + 2);
    v15 = v13;
    v16 = *(_DWORD *)(v14 + 2056);
    if ( v13 < v16 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16) )
    {
      if ( v13 >= v16 )
        v17 = ((v13 - v16) >> 16) + 1;
      else
        v17 = 0;
      v18 = *(_QWORD *)(v14 + 8LL * v17 + 8);
      if ( v17 )
        v15 = ((1 - v17) << 16) - v16 + v13;
      *(_DWORD *)(*(_QWORD *)v18 + 24LL * v15 + 8) &= ~1u;
      ExReleasePushLockExclusiveEx(
        *(_QWORD *)(**(_QWORD **)(v18 + 24) + 8 * ((unsigned __int64)v15 >> 8)) + 16LL * (unsigned __int8)v15,
        0LL);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegion();
    if ( v4 )
      bDeleteDCInternalEx(v3, 0LL);
  }
}
