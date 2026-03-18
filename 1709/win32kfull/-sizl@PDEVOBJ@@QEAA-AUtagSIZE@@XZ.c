/*
 * XREFs of ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C02516E4
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED218 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C00ED2CC (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0250D90 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C02515A0 (-OverlapCheck@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagSIZE __fastcall PDEVOBJ::sizl(PDEVOBJ *this, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x20000) != 0 )
    v3 = *(_QWORD *)(v2 + 1736);
  else
    v3 = *(_QWORD *)(v2 + 2168);
  *a2 = v3;
  return (struct tagSIZE)a2;
}
