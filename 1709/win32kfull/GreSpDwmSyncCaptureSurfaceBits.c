/*
 * XREFs of GreSpDwmSyncCaptureSurfaceBits @ 0x1C025073C
 * Callers:
 *     xxxPrintWindow @ 0x1C01C53F8 (xxxPrintWindow.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z @ 0x1C00182EC (--XERECTL@@QEAAAEAV0@AEAU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0018340 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0018368 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C004C00C (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C00898B0 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00898E4 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

_BOOL8 __fastcall GreSpDwmSyncCaptureSurfaceBits(HWND a1, int a2, HDC a3, float a4, int a5, int a6, int a7, int a8)
{
  BOOL updated; // ebx
  __int64 v11; // rcx
  int v12; // eax
  HSURF v13; // rbx
  _QWORD v15[2]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v16; // [rsp+68h] [rbp-79h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp-71h] BYREF
  _DWORD v18[4]; // [rsp+78h] [rbp-69h] BYREF
  _BYTE v19[32]; // [rsp+88h] [rbp-59h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-39h]
  int v21; // [rsp+B0h] [rbp-31h]
  int v22; // [rsp+B4h] [rbp-2Dh]
  struct tagRECT v23; // [rsp+D8h] [rbp-9h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v15, a3);
  if ( !v15[0] )
    return 0;
  *(_QWORD *)&v23.left = *(_QWORD *)(v15[0] + 8LL * (*(_DWORD *)(v15[0] + 40LL) & 1) + 1432);
  v23.bottom = v23.top + a8;
  v23.right = v23.left + a7;
  ERECTL::vOrder((ERECTL *)&v23);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v17, ghsemDynamicModeChange);
  v16 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)v15, 0);
  if ( (v19[24] & 1) != 0 && (v11 = *(_QWORD *)(v15[0] + 512LL)) != 0 )
  {
    v12 = *(_DWORD *)(v11 + 56);
    v13 = *(HSURF *)(v11 + 32);
    v18[0] = 0;
    v18[1] = 0;
    v18[2] = v12;
    v18[3] = *(_DWORD *)(v11 + 60);
    ERECTL::operator*=(&v23, v18);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v17);
    if ( !IsRectEmptyInl(&v23) && !KeAreApcsDisabled() )
    {
      updated = bSpDwmUpdateSurface(a1, a2, 0LL, (struct XDCOBJ *)v15, v13, a4, a5, a6, (struct ERECTL *)&v23, 0LL);
      goto LABEL_10;
    }
  }
  else
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v17);
  }
  updated = 0;
LABEL_10:
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return updated;
}
