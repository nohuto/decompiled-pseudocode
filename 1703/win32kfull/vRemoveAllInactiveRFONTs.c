/*
 * XREFs of vRemoveAllInactiveRFONTs @ 0x1C02873A0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00326B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0032E14 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C008F5E0 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C008F6E4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall vRemoveAllInactiveRFONTs(struct _FONTOBJ *a1)
{
  __int64 v2; // rsi
  struct RFONT *v3; // r14
  struct RFONT *v4; // rbx
  __int64 v5; // rbx
  struct RFONT *v6; // r11
  struct _FONTOBJ **v7; // rbx
  _QWORD *v8; // rdi
  struct _FONTOBJ *v9; // [rsp+28h] [rbp-E0h] BYREF
  struct RFONT *v10; // [rsp+30h] [rbp-D8h] BYREF
  struct RFONT *v11; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v14[40]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v15[66]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  v13 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v12 = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  v9 = a1;
  v3 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v9);
  while ( v3 )
  {
    v15[v2] = v3;
    v4 = v3;
    v2 = (unsigned int)(v2 + 1);
    v3 = (struct RFONT *)*((_QWORD *)v3 + 63);
    v11 = v4;
    v10 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v9);
    RFONTOBJ::vRemove((__int64)&v11, &v10, 1);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v9, v10);
    v5 = *((_QWORD *)v4 + 15);
    v10 = *(struct RFONT **)(v5 + 72);
    RFONTOBJ::vRemove((__int64)&v11, &v10, 0);
    v6 = v10;
    --*(_DWORD *)(v5 + 68);
    v11 = 0LL;
    *(_QWORD *)(v5 + 72) = v6;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
  }
  if ( (a1->sizLogResPpi.cx & 0x800000) != 0 )
    *(_DWORD *)(a1[55].iTTUniq + 1544) = 0;
  else
    a1[24].cxMax = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  v15[v2] = 0LL;
  if ( (_DWORD)v2 )
  {
    v7 = (struct _FONTOBJ **)v15;
    v8 = v15;
    do
    {
      v9 = *v7;
      memset(v14, 0, 0x20uLL);
      PushThreadGuardedObject(v14, v8, vRestartRemoveAllInactiveRFONTs);
      RFONTOBJ::vDeleteRFONT(&v9, 0LL, 0LL, 1);
      PopThreadGuardedObject(v14);
      v9 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
      ++v8;
      ++v7;
      --v2;
    }
    while ( v2 );
  }
}
