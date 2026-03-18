/*
 * XREFs of EngpMovePointer @ 0x1C024D92C
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00BCBF4 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     EngMovePointer @ 0x1C024D910 (EngMovePointer.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C00A0C2C (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C0257CEC (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  struct _RECTL *v8; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RECTL *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  if ( g_pDwmState )
  {
    v9 = *((_QWORD *)a1->hdev + 6);
    GreAcquireSemaphore(v9);
    v10 = (struct _RECTL *)ghsemSprite;
    GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"hsem", ghsemSprite);
    DwmMovePointer(a1, a2, a3, v8, a5);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
  else
  {
    GdiMovePointer(a1, a2, a3, a4, 0);
  }
}
