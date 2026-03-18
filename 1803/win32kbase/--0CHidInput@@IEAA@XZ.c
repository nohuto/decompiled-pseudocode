/*
 * XREFs of ??0CHidInput@@IEAA@XZ @ 0x1C0126C08
 * Callers:
 *     CHidInput_CreateInstance @ 0x1C0127E60 (CHidInput_CreateInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RtlStringCchPrintfA @ 0x1C00AA79C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C012184C (--0CBaseInput@@IEAA@K@Z.c)
 */

CHidInput *__fastcall CHidInput::CHidInput(CHidInput *this)
{
  int v2; // eax
  int v4; // [rsp+28h] [rbp-50h]
  _DWORD v5[4]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v6; // [rsp+40h] [rbp-38h]
  char v7; // [rsp+48h] [rbp-30h]
  int v8; // [rsp+4Ch] [rbp-2Ch]
  char pszDest[16]; // [rsp+50h] [rbp-28h] BYREF

  CBaseInput::CBaseInput(this, 0x3Cu);
  *((_DWORD *)this + 272) = 0;
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
  v2 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, v5, (char *)this + 1040);
  if ( v2 < 0 )
  {
    v4 = v2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Blink,
      2u,
      3u,
      0xAu,
      (__int64)&WPP_726d3488521737edca1da5806cd573ab_Traceguids,
      v4);
    *((_QWORD *)this + 130) = WPP_MAIN_CB.Queue.ListEntry.Blink;
  }
  return this;
}
