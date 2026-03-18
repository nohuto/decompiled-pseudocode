/*
 * XREFs of ??0CHidInput@@IEAA@XZ @ 0x1C004EE9C
 * Callers:
 *     CHidInput_CreateInstance @ 0x1C006DE50 (CHidInput_CreateInstance.c)
 * Callees:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C004FDD4 (--0CBaseInput@@IEAA@K@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C006F770 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

CHidInput *__fastcall CHidInput::CHidInput(CHidInput *this)
{
  int v2; // eax
  int v3; // edx
  _DWORD v5[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  char v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+50h] [rbp-28h] BYREF

  CBaseInput::CBaseInput(this, 0x3Cu);
  *((_DWORD *)this + 160) = 0;
  v6 = 0LL;
  v5[1] = 0;
  *(_QWORD *)this = &CHidInput::`vftable';
  v8 = 16;
  v5[0] = 48;
  pszDest[0] = 0;
  v7 = 0;
  v5[2] = 4096;
  v5[3] = 819;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%ws", L"CHidInput");
  v2 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v5, (char *)this + 592);
  if ( v2 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(gBaseLog, v3, 3, 10, (__int64)&WPP_8b16f5b88e933a800b65a74dea699925_Traceguids, v2);
    *((_QWORD *)this + 74) = gBaseLog;
  }
  return this;
}
