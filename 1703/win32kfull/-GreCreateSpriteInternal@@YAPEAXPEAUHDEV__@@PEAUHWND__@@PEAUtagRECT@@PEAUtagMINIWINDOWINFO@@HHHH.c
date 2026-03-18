/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHHHHPEAG@Z @ 0x1C0020FA4
 * Callers:
 *     GreCreateSprite @ 0x1C001E1B4 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00A0800 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C001E2A4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C001E508 (DwmAsyncCreateSprite.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002574C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?bValid@DWMSPRITEREF@@QEAAHXZ @ 0x1C0025780 (-bValid@DWMSPRITEREF@@QEAAHXZ.c)
 *     DwmAsyncZorderSprite @ 0x1C0025DBC (DwmAsyncZorderSprite.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C00264A0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z @ 0x1C0026680 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C006A07C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C006A0B8 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C00FC7FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0116020 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C02572D8 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 */

unsigned __int16 *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct tagRECT *a3,
        struct tagMINIWINDOWINFO *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        unsigned __int16 *a10)
{
  unsigned __int16 *v10; // r14
  HWND v13; // rbx
  __int64 v15; // rdx
  HSPRITE DwmSpriteObj; // rax
  int v17; // eax
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  HSPRITE NeighborSprite; // r12
  __int64 v22; // rcx
  int v23; // ebx
  void *v24; // rax
  unsigned __int16 *v25; // rbx
  void *v26; // rax
  struct DWMSPRITE *v27; // r8
  int v28; // edi
  int v30; // [rsp+20h] [rbp-91h]
  DWMSPRITE *v31; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int16 *v32; // [rsp+38h] [rbp-79h] BYREF
  int v33; // [rsp+40h] [rbp-71h]
  HWND v34; // [rsp+48h] [rbp-69h]
  char v35[8]; // [rsp+50h] [rbp-61h] BYREF
  __int64 v36; // [rsp+58h] [rbp-59h] BYREF
  int v37; // [rsp+60h] [rbp-51h]
  _BYTE v38[56]; // [rsp+68h] [rbp-49h] BYREF

  v10 = 0LL;
  v13 = (HWND)a2;
  v34 = (HWND)a2;
  v32 = a10;
  if ( !a5 || !g_pDwmState )
    return (unsigned __int16 *)GdiCreateSprite(a1, v13, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v35, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v38, 0, sizeof(v38));
  v33 = 0;
  if ( a4 )
    v15 = *((_QWORD *)a4 + 6);
  else
    v15 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj(v13, v15, a1, a7);
  v31 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v31, DwmSpriteObj);
  v17 = DWMSPRITEREF::bValid((DWMSPRITEREF *)&v31);
  v18 = v31;
  if ( v17 )
  {
    v19 = (__int64 *)*((_QWORD *)v31 + 24);
    if ( a3 )
      *(struct tagRECT *)((char *)v31 + 56) = *a3;
    v20 = v32;
    *((_DWORD *)v18 + 50) = (2 * (a7 & 1)) | *((_DWORD *)v18 + 50) & 0xFFFFFFFC | (a6 != 0);
    *((_DWORD *)v19 + 64) = (*((_DWORD *)v19 + 64) ^ (4 * a8)) & 4 ^ ((16 * (a7 & 1)) | v19[32] & 0xFFFFFFEF);
    *((_DWORD *)v18 + 50) ^= (*((_DWORD *)v18 + 50) ^ (8 * a9)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v32 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v32, 0, 1);
    if ( !v34 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v38, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v38;
    }
    if ( (v19[32] & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
      v22 = *v19;
      v19[11] = v36;
      EtwTraceLifetimeAccum(v22, 1LL);
      if ( v37 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
    }
    v23 = *((_DWORD *)v18 + 50) & 1 | v19[32] & 0xC | (2 * (v19[32] & 1 | (4 * (*((_DWORD *)v18 + 50) & 0xE))));
    v24 = (void *)UserReferenceDwmApiPort();
    v30 = v23;
    v25 = v32;
    if ( (int)DwmAsyncCreateSprite(v24, (__int64)v32, (__int64)v34, a3, v30, (__int64)a4) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      v27 = v18;
      v18 = 0LL;
      v31 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0, v27);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v32 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v32, NeighborSprite);
          v26 = (void *)UserReferenceDwmApiPort();
          DwmAsyncZorderSprite(v26);
          if ( v32 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v32 + 3);
            v18 = v31;
          }
        }
      }
      v10 = v25;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    v13 = v34;
  }
  if ( v18 )
    _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
  v28 = v33;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v35);
  if ( v28 )
    return (unsigned __int16 *)GdiCreateSprite(a1, v13, a3);
  return v10;
}
