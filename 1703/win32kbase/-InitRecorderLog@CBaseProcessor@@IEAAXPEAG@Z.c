/*
 * XREFs of ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C006F548
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C0047534 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C006E1C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C012AD38 (--0CPTPProcessor@@AEAA@XZ.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RtlStringCchPrintfA @ 0x1C006F770 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

void __fastcall CBaseProcessor::InitRecorderLog(CBaseProcessor *this, unsigned __int16 *a2)
{
  int v3; // eax
  int v4; // [rsp+28h] [rbp-50h]
  _DWORD v5[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  char v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+50h] [rbp-28h] BYREF

  v6 = 0LL;
  v5[1] = 0;
  v5[0] = 48;
  pszDest[0] = 0;
  v8 = 16;
  v7 = 0;
  v5[2] = 4096;
  v5[3] = 819;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%ws", a2);
  v3 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v5, (char *)this + 8);
  if ( v3 < 0 )
  {
    v4 = v3;
    WPP_RECORDER_SF_D(gBaseLog, 2u, 7u, 0xAu, (__int64)&WPP_0239f7da4493345cc423b0d84f1989a5_Traceguids, v4);
    *((_QWORD *)this + 1) = gBaseLog;
  }
}
