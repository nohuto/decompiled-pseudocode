/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C024ECC8
 * Callers:
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0025370 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00473F0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C005F374 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C0081670 (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0081720 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00E8F78 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, int a2, HDC a3, float a4, int a5, int a6, int a7, int a8)
{
  BOOL updated; // ebx
  __int64 v11; // rcx
  HSURF v12; // rdi
  int v13; // eax
  __int64 v15; // [rsp+58h] [rbp-99h] BYREF
  __int64 v16; // [rsp+60h] [rbp-91h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-89h] BYREF
  __int64 v18; // [rsp+78h] [rbp-79h] BYREF
  int v19; // [rsp+80h] [rbp-71h]
  int v20; // [rsp+84h] [rbp-6Dh]
  _BYTE v21[32]; // [rsp+88h] [rbp-69h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-49h]
  __int64 v23; // [rsp+B0h] [rbp-41h]
  struct tagRECT v24; // [rsp+D8h] [rbp-19h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v17, a3);
  updated = 0;
  if ( v17[0] )
  {
    *(_QWORD *)&v24.left = *(_QWORD *)(((*(_BYTE *)(v17[0] + 40LL) & 1) != 0 ? 8 : 0) + v17[0] + 1432LL);
    v24.bottom = v24.top + a8;
    v24.right = v24.left + a7;
    ERECTL::vOrder((ERECTL *)&v24);
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v16, ghsemDynamicModeChange);
    v15 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v22 = 0LL;
    v23 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v17, 0);
    if ( (v21[24] & 1) != 0 && (v11 = *(_QWORD *)(v17[0] + 512LL)) != 0 )
    {
      v12 = *(HSURF *)(v11 + 32);
      v19 = *(_DWORD *)(v11 + 56);
      v13 = *(_DWORD *)(v11 + 60);
      v18 = 0LL;
      v20 = v13;
      ERECTL::operator*=(&v24, &v18);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
      if ( !IsRectEmptyInl(&v24) && !KeAreApcsDisabled() )
        updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v17, v12, a4, a5, a6, (struct ERECTL *)&v24, 0LL);
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
      SEMOBJ::vUnlock((SEMOBJ *)&v15);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  return updated;
}
