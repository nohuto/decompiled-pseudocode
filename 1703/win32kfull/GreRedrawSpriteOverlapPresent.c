/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x1C0024790
 * Callers:
 *     ?zzzBltValidBits@@YAHPEAUtagSMWP@@@Z @ 0x1C00636D0 (-zzzBltValidBits@@YAHPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C002483C (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C002532C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  GreIncNonRBLockCount(ghsemSprite);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 140) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v2);
      v5 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v7, ghsemSprite, v5);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8 * v2));
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v7);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 72);
    v3 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7);
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v6, ghsemSprite, v3);
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 72));
    EtwTraceGreLockReleaseSemaphore(L"hsem", v6);
    GreReleaseSemaphoreInternal(v6);
  }
  return GreDecNonRBLockCount(ghsemSprite);
}
