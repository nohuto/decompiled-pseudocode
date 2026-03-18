/*
 * XREFs of ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C003D6FC
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C00AFB20 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C024B69C (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C024B9FC (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C0299C00 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 *     GetFontResourceInfoInternalW @ 0x1C02B0488 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0039370 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C00393A4 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::QueryFontFile(struct PDEV **this, __int64 a2, __int64 a3, __int64 a4, unsigned int *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, unsigned int *); // rbx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-88h] BYREF
  __int64 v12; // [rsp+68h] [rbp-50h]
  int v13; // [rsp+70h] [rbp-48h]
  char v14; // [rsp+74h] [rbp-44h]

  v6 = -1;
  v7 = a4;
  v8 = a3;
  v9 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, unsigned int *))*((_QWORD *)*this + 389);
  if ( gpepCSRSS )
  {
    v12 = 0LL;
    v13 = 0;
    v14 = 0;
    ATTACHOBJ::Initialize(&ApcState, this, a3, a4);
    v6 = v9(a2, v8, v7, a5);
    ATTACHOBJ::~ATTACHOBJ(&ApcState);
  }
  return v6;
}
