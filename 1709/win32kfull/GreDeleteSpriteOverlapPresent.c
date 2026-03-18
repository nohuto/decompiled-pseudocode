/*
 * XREFs of GreDeleteSpriteOverlapPresent @ 0x1C0060550
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0251270 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0060614 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED218 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0263228 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

void __fastcall GreDeleteSpriteOverlapPresent(HDEV a1, HWND a2)
{
  unsigned int v2; // esi
  HDEV v3; // rbp
  int v6; // r14d
  struct _PRESENT *v7; // rdx
  HDEV v8; // rcx
  unsigned int v9; // edi
  __int64 v10; // r15
  struct _PRESENT *Present; // rdx
  HDEV v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdi

  v2 = 0;
  v3 = a1 + 18;
  v6 = 0;
  if ( *((_DWORD *)a1 + 35) )
  {
    v9 = 0;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v9);
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v10 + 200));
      Present = pSpGetPresent(*(HDEV *)(*((_QWORD *)v3 + 9) + 8LL * v9), a2);
      if ( Present )
      {
        vSpRemovePresent(v12, Present);
        Win32FreePool(v13, v13, v14);
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v10 + 200));
      ++v9;
    }
    while ( v9 < *((_DWORD *)v3 + 17) );
  }
  else
  {
    GreAcquireSemaphore(*((_QWORD *)a1 + 25));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *((_QWORD *)v3 + 16), 8LL);
    v7 = pSpGetPresent(a1, a2);
    if ( v7 )
    {
      vSpRemovePresent(v8, v7);
      Win32FreePool(v15, v15, v16);
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
        v17 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v2);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v17 + 200));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v2) + 72LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v17 + 200));
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
