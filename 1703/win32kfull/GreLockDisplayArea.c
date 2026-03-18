/*
 * XREFs of GreLockDisplayArea @ 0x1C0007E18
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C006CCF4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00A7860 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreLockDisplayArea(__int64 a1, struct tagRECT *a2)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  LONG bottom; // r15d
  LONG right; // r12d
  LONG top; // r13d
  struct tagRECT v9; // xmm6
  __int64 v10; // rbx
  int v11; // ecx
  int v12; // edx
  void (__fastcall *v13)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v14)(_QWORD, struct tagRECT *); // rsi
  struct tagRECT v15; // [rsp+20h] [rbp-50h] BYREF
  struct tagRECT v16; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v17; // [rsp+40h] [rbp-30h] BYREF

  v15 = *a2;
  ERECTL::vOrder((ERECTL *)&v15);
  if ( !(unsigned int)IsRectEmptyInl(&v15) )
  {
    if ( *(_DWORD *)(a1 + 140) )
    {
      v4 = 0LL;
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v4 = 1LL;
      }
      v5 = 0LL;
      if ( *(_DWORD *)(a1 + 140) )
      {
        bottom = v15.bottom;
        right = v15.right;
        top = v15.top;
        v9 = v15;
        do
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v5);
          v16 = v9;
          v11 = -*(_DWORD *)(v10 + 2600);
          v12 = -*(_DWORD *)(v10 + 2604);
          v16.left = v15.left - *(_DWORD *)(v10 + 2600);
          v16.right = v11 + right;
          v16.top = v12 + top;
          v16.bottom = v12 + bottom;
          if ( bIntersect((const struct _RECTL *)&v16, (const struct _RECTL *)(v10 + 120), &v17) )
          {
            if ( v4 )
              SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v10 + 200));
            v13 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v10 + 3512);
            if ( v13 )
              v13(*(_QWORD *)(v10 + 1816), &v17);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 140) );
      }
    }
    else
    {
      v14 = *(void (__fastcall **)(_QWORD, struct tagRECT *))(a1 + 3512);
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 200));
      }
      if ( v14 )
        v14(*(_QWORD *)(a1 + 1816), a2);
    }
  }
}
