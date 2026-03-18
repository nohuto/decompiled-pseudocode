/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x1C005D454
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C024F820 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C005D5E0 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7860 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00A7DF4 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0263E60 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  HDEV v3; // rbp
  int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // r15
  struct _PRESENT *Present; // rdx
  HDEV v10; // rcx
  __int64 v11; // rdx
  struct _PRESENT *v12; // rdx
  HDEV v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi

  v2 = 0;
  v3 = a1 + 18;
  v6 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v7);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v8 + 200));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)v3 + 9) + 8LL * v7), a2);
      if ( Present )
      {
        vSpRemovePresent(v10, Present);
        Win32FreePool(v11);
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v8 + 200));
      ++v7;
    }
    while ( v7 < *((_DWORD *)v3 + 17) );
  }
  else
  {
    GreAcquireSemaphore(*((_QWORD *)a1 + 25));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_QWORD *)v3 + 16), 8LL);
    v12 = pSpGetPresent(a1, a2);
    if ( v12 )
    {
      vSpRemovePresent(v13, v12);
      Win32FreePool(v14);
      v6 = 1;
    }
    EtwTraceGreLockReleaseSemaphore(L"hsem", *((_QWORD *)v3 + 16));
    GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 16));
  }
  if ( v6 )
  {
    if ( *((_DWORD *)v3 + 17) )
    {
      do
      {
        v15 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v15 + 200));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v2) + 72LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v15 + 200));
        ++v2;
      }
      while ( v2 < *((_DWORD *)v3 + 17) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v3 + 32));
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)v3, 0);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 32));
    }
  }
}
