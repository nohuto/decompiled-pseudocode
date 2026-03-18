/*
 * XREFs of ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C01327C8
 * Callers:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C010C7C4 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??0CPTPProcessor@@AEAA@XZ @ 0x1C0124EA8 (--0CPTPProcessor@@AEAA@XZ.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1C01339CC (--0CMouseProcessor@@IEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RtlStringCchPrintfA @ 0x1C00AA79C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
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
    WPP_RECORDER_SF_d(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      7u,
      0xAu,
      (__int64)&WPP_1b713a9412b63e75823a1d5d7f7f056b_Traceguids,
      v4);
    *((_QWORD *)this + 1) = WPP_MAIN_CB.Queue.ListEntry.Blink;
  }
}
