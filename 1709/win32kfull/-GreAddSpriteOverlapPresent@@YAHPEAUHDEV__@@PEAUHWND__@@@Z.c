/*
 * XREFs of ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0259C84
 * Callers:
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0251270 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ?pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0060614 (-pSpGetPresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C00ED218 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C025DD80 (-pSpCreatePresent@@YAPEAU_PRESENT@@PEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0263228 (-vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z.c)
 */

__int64 __fastcall GreAddSpriteOverlapPresent(_DWORD *a1, HWND a2)
{
  unsigned int v2; // esi
  HDEV v3; // rbp
  BOOL v6; // edi
  unsigned int v7; // r12d
  HWND v8; // rdx
  HDEV v9; // rcx
  struct _PRESENT *Present; // r14
  unsigned int v11; // r12d
  struct _PRESENT *v12; // rax
  HDEV v13; // rcx
  __int64 v14; // rdx
  HWND v15; // rdx
  HDEV v16; // rcx
  unsigned int v17; // r12d
  __int64 v18; // rdi
  SPRITERANGELOCK *v20; // [rsp+50h] [rbp+8h]
  SPRITERANGELOCK *v21; // [rsp+50h] [rbp+8h]

  v2 = 0;
  v3 = (HDEV)(a1 + 18);
  v6 = 0;
  if ( a1[35] )
  {
    v7 = 0;
    while ( 1 )
    {
      v20 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v7) + 200LL);
      SPRITERANGELOCK::vLockExclusive(v20);
      Present = pSpGetPresent(*(_QWORD **)(*((_QWORD *)v3 + 9) + 8LL * v7), a2);
      if ( !Present )
      {
        Present = pSpCreatePresent(v9, v8);
        if ( !Present )
        {
          SPRITERANGELOCK::vUnlock(v20);
          v6 = 0;
          v11 = 0;
          if ( *((_DWORD *)v3 + 17) )
          {
            do
            {
              v21 = (SPRITERANGELOCK *)(*(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v11) + 200LL);
              SPRITERANGELOCK::vLockExclusive(v21);
              v12 = pSpGetPresent(*(_QWORD **)(*((_QWORD *)v3 + 9) + 8LL * v11), a2);
              Present = v12;
              if ( v12 )
              {
                vSpRemovePresent(v13, v12);
                Win32FreePool(v14, v14);
              }
              SPRITERANGELOCK::vUnlock(v21);
              ++v11;
            }
            while ( v11 < *((_DWORD *)v3 + 17) );
            goto LABEL_16;
          }
          goto LABEL_22;
        }
        v6 = 1;
      }
      SPRITERANGELOCK::vUnlock(v20);
      if ( ++v7 >= *((_DWORD *)v3 + 17) )
        goto LABEL_16;
    }
  }
  SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
  Present = pSpGetPresent(a1, a2);
  if ( !Present )
  {
    Present = pSpCreatePresent(v16, v15);
    v6 = Present != 0LL;
  }
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 32));
LABEL_16:
  if ( v6 )
  {
    if ( *((_DWORD *)v3 + 17) )
    {
      v17 = 0;
      do
      {
        v18 = *(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v17);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v18 + 200));
        vSpComputeNoPresentRegion((struct _SPRITESTATE *)(*(_QWORD *)(*((_QWORD *)v3 + 9) + 8LL * v17) + 72LL), 0);
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v18 + 200));
        ++v17;
      }
      while ( v17 < *((_DWORD *)v3 + 17) );
    }
    else
    {
      SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v3 + 32));
      vSpComputeNoPresentRegion((struct _SPRITESTATE *)v3, 0);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v3 + 32));
    }
  }
LABEL_22:
  LOBYTE(v2) = Present != 0LL;
  return v2;
}
