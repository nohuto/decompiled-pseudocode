/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C0283ED0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C00354E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0035608 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C003D7D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C003DE98 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(struct _FONTOBJ *a1)
{
  __int64 v2; // rsi
  struct RFONT *v3; // r14
  struct RFONT *v4; // rbx
  __int64 v5; // rbx
  struct RFONT *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _FONTOBJ **v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _FONTOBJ *v13; // [rsp+28h] [rbp-E0h] BYREF
  struct RFONT *v14; // [rsp+30h] [rbp-D8h] BYREF
  struct RFONT *v15; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v18[40]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v19[130]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  v17 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v16 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v13 = a1;
  v3 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13);
  while ( v3 )
  {
    v19[v2] = v3;
    v4 = v3;
    v2 = (unsigned int)(v2 + 1);
    v3 = (struct RFONT *)*((_QWORD *)v3 + 63);
    v15 = v4;
    v14 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v13);
    RFONTOBJ::vRemove((__int64)&v15, (unsigned __int64 *)&v14, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v13, v14);
    v5 = *((_QWORD *)v4 + 15);
    v14 = *(struct RFONT **)(v5 + 72);
    RFONTOBJ::vRemove((__int64)&v15, (unsigned __int64 *)&v14, 0);
    v6 = v14;
    --*(_DWORD *)(v5 + 68);
    v15 = 0LL;
    *(_QWORD *)(v5 + 72) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15, v7, v8);
  }
  if ( (a1->sizLogResPpi.cx & 0x800000) != 0 )
    *(_DWORD *)(a1[55].iTTUniq + 1544) = 0;
  else
    a1[24].cxMax = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  SEMOBJ::vUnlock((SEMOBJ *)&v17);
  v19[v2] = 0LL;
  if ( (_DWORD)v2 )
  {
    v9 = (struct _FONTOBJ **)v19;
    v10 = v19;
    do
    {
      v13 = *v9;
      memset(v18, 0, 0x20uLL);
      PushThreadGuardedObject(v18, v10, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v13, 0LL, 0LL, 1);
      PopThreadGuardedObject(v18);
      v13 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13, v11, v12);
      ++v10;
      ++v9;
      --v2;
    }
    while ( v2 );
  }
}
