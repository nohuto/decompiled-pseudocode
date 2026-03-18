/*
 * XREFs of GreLockDisplayArea @ 0x1C000CF60
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0071F0C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00ECBB4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreLockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  int v4; // r14d
  __int64 v5; // rsi
  struct tagRECT v6; // xmm6
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  void (__fastcall *v10)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v11)(_QWORD, struct tagRECT *); // rsi
  struct tagRECT v12; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v13; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-30h] BYREF

  v12 = *a2;
  ERECTL::vOrder((ERECTL *)&v12);
  if ( !(unsigned int)IsRectEmptyInl(&v12) )
  {
    if ( *(_DWORD *)(a1 + 140) )
    {
      v4 = 0;
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v4 = 1;
      }
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
            if ( v4 )
              SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v7 + 200));
            v10 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v7 + 3512);
            if ( v10 )
              v10(*(_QWORD *)(v7 + 1816), &v14);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 140) );
      }
    }
    else
    {
      v11 = *(void (__fastcall **)(_QWORD, struct tagRECT *))(a1 + 3512);
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 200));
      }
      if ( v11 )
        v11(*(_QWORD *)(a1 + 1816), a2);
    }
  }
}
