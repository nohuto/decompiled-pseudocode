/*
 * XREFs of GreProtectSpriteContent @ 0x1C0250440
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z @ 0x1C0212BC8 (-ProtectWindowBitmap@@YAHPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C008EDF8 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00E7400 (DwmAsyncUpdateSprite.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, int a4)
{
  unsigned int v4; // r12d
  __int64 v7; // rdi
  SFMLOGICALSURFACE *v8; // r14
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  void *v19; // rax
  int v21; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v22[4]; // [rsp+64h] [rbp-34h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+18h] BYREF

  v24 = a1;
  v4 = 0;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v22, a2, 0LL, 0LL);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v23, (HWND)a2);
    v7 = v23;
    if ( v23 )
    {
      v4 = 1;
      v8 = *(SFMLOGICALSURFACE **)(v23 + 192);
      if ( ((*(_DWORD *)(v23 + 200) >> 3) & 1) != a4 )
      {
        *(_DWORD *)(v23 + 200) ^= ((unsigned __int8)*(_DWORD *)(v23 + 200) ^ (unsigned __int8)(8 * a4)) & 8;
        SFMLOGICALSURFACE::GetRedirectionInfo(
          v8,
          (enum _HLSURF_REDIRECTIONSTYLE *)&v21,
          (unsigned int *)&v24,
          &v25,
          0LL,
          0LL);
        v9 = *((_DWORD *)v8 + 64);
        v10 = *(_DWORD *)(v7 + 200);
        v11 = *(_QWORD *)(v7 + 152);
        *(_QWORD *)(v7 + 152) = 0LL;
        v12 = *(_QWORD *)v8;
        v13 = v9 & 1;
        v14 = *(_QWORD *)v7;
        v15 = v9 & 0xC;
        v16 = v15 | v10 & 1 | (2 * (v13 | (4 * (v10 & 0xE))));
        v19 = (void *)UserReferenceDwmApiPort(v15, v13, v17, v18);
        DwmAsyncUpdateSprite(v19, v14, v12, v16, v7 + 72, 0LL, v21, v24, v25, *(_DWORD *)(v7 + 128), v11);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v22);
  }
  return v4;
}
