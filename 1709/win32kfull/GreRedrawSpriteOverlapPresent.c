/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x1C0065D98
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0065E58 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0092018 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  __int64 v2; // rsi
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  char v6; // [rsp+38h] [rbp+10h] BYREF

  GreIncNonRBLockCount(ghsemSprite);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 140) )
  {
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2);
      v4 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v6, ghsemSprite, v4);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8 * v2));
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v6);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 72);
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v5) == 1 )
    {
      GreAcquireSemaphoreSharedInternal(ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(ghsemSprite);
    }
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 72));
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemSprite);
    GreReleaseSemaphoreInternal(ghsemSprite);
  }
  return GreDecNonRBLockCount(ghsemSprite);
}
