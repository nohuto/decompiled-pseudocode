/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C0003F2C
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C0003F20 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C028CF80 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024718 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0024758 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     hsurfCreateCompatibleSurface @ 0x1C009F8A0 (hsurfCreateCompatibleSurface.c)
 */

__int64 __fastcall GreCreateBitmapFromDxSurface(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 CompatibleSurface; // rdi
  __int64 v11; // rbx
  __int64 v12; // r8
  DYNAMICMODECHANGESHARELOCK *v13; // rcx
  __int64 v15; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v16[8]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v17[2]; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v18[80]; // [rsp+A8h] [rbp-21h] BYREF
  char v19; // [rsp+120h] [rbp+57h] BYREF

  CompatibleSurface = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v17, a1);
    if ( v17[0] && *(_DWORD *)(v17[0] + 32LL) != 1 )
    {
      v11 = *(_QWORD *)(v17[0] + 48LL);
      v15 = v11;
      if ( (*(_DWORD *)(v11 + 32) & 0x8000) == 0 )
      {
        DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v19);
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v16, (struct XDCOBJ *)v17);
        GreAcquireSemaphoreSharedInternal(ghsemDwmState);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18, (struct PDEVOBJ *)&v15);
        if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
        {
          LODWORD(v12) = 0;
          if ( (*(_DWORD *)(v11 + 2188) & 0x100) == 0 )
            v12 = **(_QWORD **)(v11 + 1824);
          CompatibleSurface = hsurfCreateCompatibleSurface(
                                *(_QWORD *)(v17[0] + 48LL),
                                *(_DWORD *)(v11 + 2124),
                                v12,
                                a2,
                                a3,
                                1,
                                0,
                                0,
                                0,
                                1,
                                a6,
                                0,
                                a4,
                                a5,
                                a7);
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
        GreReleaseSemaphoreInternal(ghsemDwmState);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v16);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v13);
      }
      if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
      {
        bDeleteSurface(CompatibleSurface);
        CompatibleSurface = 0LL;
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
    return CompatibleSurface;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
