/*
 * XREFs of GreUnlockDisplayArea @ 0x1C000CEC8
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreUnlockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  __int64 v3; // r8
  BOOL v4; // esi
  __int64 v5; // r14
  struct tagRECT v6; // xmm6
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  void (__fastcall *v10)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v11)(_QWORD, __int64); // rax
  struct tagRECT v12; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-30h] BYREF

  v12 = *a2;
  ERECTL::vOrder((ERECTL *)&v12);
  if ( (unsigned int)IsRectEmptyInl(&v12) )
    return;
  if ( *(_DWORD *)(a1 + 140) )
  {
    v4 = GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) != 0;
    v5 = 0LL;
    if ( *(_DWORD *)(a1 + 140) )
    {
      v6 = v12;
      do
      {
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v5);
        v13 = v6;
        v8 = *(_DWORD *)(v7 + 2600);
        v9 = *(_DWORD *)(v7 + 2604);
        v13.right = v6.right - v8;
        v13.top = v6.top - v9;
        v13.bottom = v6.bottom - v9;
        v13.left = v12.left - v8;
        if ( bIntersect((const struct _RECTL *)&v13, (const struct _RECTL *)(v7 + 120), &v14) )
        {
          v10 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v7 + 3520);
          if ( v10 )
            v10(*(_QWORD *)(v7 + 1816), &v14);
          if ( v4 )
            SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v7 + 200));
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *(_DWORD *)(a1 + 140) );
    }
    if ( v4 )
      goto LABEL_18;
  }
  else
  {
    v11 = *(void (__fastcall **)(_QWORD, __int64))(a1 + 3520);
    if ( v11 )
      v11(*(_QWORD *)(a1 + 1816), v3);
    if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
    {
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 200));
LABEL_18:
      EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
      GreReleaseSemaphoreInternal(ghsemSprite);
    }
  }
}
