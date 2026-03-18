/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C0008554
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C0008520 (NtGdiCreateBitmapFromDxSurface2.c)
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C0289AC0 (NtGdiCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AAD4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C001AB14 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     hsurfCreateCompatibleSurface @ 0x1C0041524 (hsurfCreateCompatibleSurface.c)
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
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r8
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v16; // [rsp+88h] [rbp-41h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v18[2]; // [rsp+98h] [rbp-31h] BYREF
  _BYTE v19[80]; // [rsp+A8h] [rbp-21h] BYREF
  char v20; // [rsp+120h] [rbp+57h] BYREF

  CompatibleSurface = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    v11 = v18[0];
    if ( v18[0] )
    {
      if ( *(_DWORD *)(v18[0] + 32LL) != 1 )
      {
        v12 = *(_QWORD *)(v18[0] + 48LL);
        v16 = v12;
        if ( (*(_DWORD *)(v12 + 32) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v17, (struct XDCOBJ *)v18);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v16);
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            LODWORD(v13) = 0;
            if ( (*(_DWORD *)(v12 + 2188) & 0x100) == 0 )
              v13 = **(_QWORD **)(v12 + 1824);
            CompatibleSurface = hsurfCreateCompatibleSurface(
                                  *(_QWORD *)(v18[0] + 48LL),
                                  *(_DWORD *)(v12 + 2124),
                                  v13,
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
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v17);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
        }
        if ( !(unsigned int)GreSetBitmapOwner(CompatibleSurface, 2147483650LL) )
        {
          bDeleteSurface(CompatibleSurface);
          CompatibleSurface = 0LL;
        }
        v11 = v18[0];
      }
      if ( v11 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    }
    return CompatibleSurface;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
