/*
 * XREFs of GreSaveScreenBits @ 0x1C027A0D8
 * Callers:
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     ?SpbApc@@YAXPEAX00@Z @ 0x1C01EF8E0 (-SpbApc@@YAXPEAX00@Z.c)
 *     FreeSpb @ 0x1C01EFB8C (FreeSpb.c)
 *     RestoreSpb @ 0x1C01EFD48 (RestoreSpb.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020E20C (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, _QWORD *); // rbp
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-50h] BYREF

  v6 = 0LL;
  v20[0] = 0LL;
  v20[1] = 0LL;
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v19, ghsemDynamicModeChange);
  v18 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( (*(_DWORD *)(a1 + 32) & 0x400) == 0 )
  {
    v17 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD *))(a1 + 3024);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 2568);
      v11 = v20;
      v12 = v10 + 24;
      v13 = -v10;
      if ( a2 != 2 )
        v11 = a4;
      v14 = 0LL;
      v15 = v12 & -(__int64)(v13 != 0);
      if ( v15
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12 & -(__int64)(v13 != 0)) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v15) + 112) & 0x200) == 0 )
      {
        v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
        GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
      }
      v6 = v9(v15, a2, a3, v11);
      if ( v14 )
        GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v19);
  return v6;
}
