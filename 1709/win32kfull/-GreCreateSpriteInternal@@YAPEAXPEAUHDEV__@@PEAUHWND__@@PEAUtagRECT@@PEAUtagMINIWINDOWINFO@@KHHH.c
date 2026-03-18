/*
 * XREFs of ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEAG@Z @ 0x1C008F420
 * Callers:
 *     GreCreateSprite @ 0x1C008BF64 (GreCreateSprite.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00E4100 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z @ 0x1C0009EC8 (-GdiCreateSprite@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     DwmAsyncCreateSprite @ 0x1C008C024 (DwmAsyncCreateSprite.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C008C1C8 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C008E7F0 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z @ 0x1C008E9C4 (-vUpdateDpiScaling@DWMSPRITE@@QEAAXPEAG@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C0091F38 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0091F74 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0092094 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C00927C8 (DwmAsyncZorderSprite.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C01083FC (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C011F38C (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct SPRITE *__fastcall GreCreateSpriteInternal(
        HDEV a1,
        struct PDEVOBJ *a2,
        struct _RECTL *a3,
        struct tagMINIWINDOWINFO *a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned __int16 *a11)
{
  unsigned __int16 *v11; // r14
  __int64 v16; // rdx
  HSPRITE DwmSpriteObj; // rax
  DWMSPRITE *v18; // rdi
  __int64 *v19; // rbx
  unsigned __int16 *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  HSPRITE NeighborSprite; // r12
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // ebx
  void *v28; // rax
  unsigned __int16 *v29; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  void *v35; // rax
  struct DWMSPRITE *v36; // r8
  struct tagMINIWINDOWINFO *v37; // [rsp+28h] [rbp-99h]
  HWND v38; // [rsp+48h] [rbp-79h] BYREF
  DWMSPRITE *v39; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v40[8]; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int16 *v41; // [rsp+60h] [rbp-61h]
  __int64 v42; // [rsp+68h] [rbp-59h] BYREF
  int v43; // [rsp+70h] [rbp-51h]
  _BYTE v44[56]; // [rsp+78h] [rbp-49h] BYREF

  v11 = 0LL;
  v38 = (HWND)a2;
  v41 = a11;
  if ( !a6 || !g_pDwmState )
    return GdiCreateSprite(a1, (HWND)a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v40, a2, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  memset(v44, 0, sizeof(v44));
  if ( a4 )
    v16 = *((_QWORD *)a4 + 6);
  else
    v16 = gdwRitInputDesktopId;
  DwmSpriteObj = (HSPRITE)hspCreateDwmSpriteObj((HWND)a2, v16, a1, a8);
  v39 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v39, DwmSpriteObj);
  v18 = v39;
  if ( v39 )
  {
    v19 = (__int64 *)*((_QWORD *)v39 + 24);
    if ( a3 )
      *(struct _RECTL *)((char *)v39 + 56) = *a3;
    v20 = v41;
    *((_DWORD *)v18 + 50) = (2 * (a8 & 1)) | *((_DWORD *)v18 + 50) & 0xFFFFFFFC | (a7 != 0);
    *((_DWORD *)v19 + 64) = (*((_DWORD *)v19 + 64) ^ (4 * a9)) & 4 ^ (v19[32] & 0xFFFFFFEF | (16 * (a8 & 1)));
    *((_DWORD *)v18 + 50) ^= (*((_DWORD *)v18 + 50) ^ (8 * a10)) & 8;
    DWMSPRITE::vUpdateDpiScaling(v18, v20);
    v41 = *(unsigned __int16 **)v18;
    NeighborSprite = hspGetNeighborSprite((HSPRITE)v41, 0, 1);
    if ( !v38 && !a4 )
    {
      vSpDwmGetMiniWinInfoForNonWindowSprite(v44, (char *)v18 + 56);
      a4 = (struct tagMINIWINDOWINFO *)v44;
    }
    if ( (v19[32] & 4) != 0 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
      v24 = *v19;
      v19[11] = v42;
      EtwTraceLifetimeAccum(v24, 1LL);
      if ( v43 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
    }
    v25 = v19[32] & 1;
    v26 = *((_DWORD *)v18 + 50) & 1;
    v27 = v26 | v19[32] & 0xC | (2 * (v25 | (4 * (*((_DWORD *)v18 + 50) & 0xE))));
    v28 = (void *)UserReferenceDwmApiPort(v26, v25, v21, v22);
    v37 = a4;
    v29 = v41;
    if ( (int)DwmAsyncCreateSprite(v28, (__int64)v41, (__int64)v38, a3, v27, (__int64)v37, a5) < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
      v36 = v18;
      v18 = 0LL;
      v39 = 0LL;
      vspDestroyDwmSpriteObjInternal(a1, 0, v36);
    }
    else
    {
      if ( NeighborSprite )
      {
        if ( *((_QWORD *)g_pDwmState + 18) )
        {
          v38 = 0LL;
          DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)&v38, NeighborSprite);
          v35 = (void *)UserReferenceDwmApiPort(v32, v31, v33, v34);
          DwmAsyncZorderSprite(v35);
          if ( v38 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
            v18 = v39;
          }
        }
      }
      v11 = v29;
      *((_DWORD *)v18 + 28) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
    }
    if ( v18 )
      _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v40);
  return (struct SPRITE *)v11;
}
