/*
 * XREFs of ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x18005AAA8
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180058CE4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18005AC54 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 */

MPCThrottleableInputHelper *__fastcall MPCThrottleableInputHelper::MPCThrottleableInputHelper(
        MPCThrottleableInputHelper *this,
        unsigned int a2,
        const unsigned __int16 *a3)
{
  bool v5; // di
  char v6; // si
  int v7; // ebx
  const char *v8; // r9
  const char *v10; // [rsp+30h] [rbp-20h]
  DWORD v11; // [rsp+40h] [rbp-10h] BYREF
  LARGE_INTEGER Frequency; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v14; // [rsp+80h] [rbp+30h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h] BYREF
  int v17; // [rsp+94h] [rbp+44h]
  int v18; // [rsp+98h] [rbp+48h] BYREF

  v17 = HIDWORD(a3);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v16 = 0;
  *(_BYTE *)this = 0;
  v11 = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\DWM",
          L"TouchHoverReportThrottleTimeInMs",
          0x10u,
          0LL,
          &v16,
          &v11) )
    a2 = v16;
  QueryPerformanceFrequency(&Frequency);
  v18 = 0;
  v15 = 4;
  v5 = 0;
  *((_QWORD *)this + 2) = Frequency.QuadPart * a2 / 1000;
  v6 = 1;
  v7 = NtQueryWnfStateData(&WNF_HOLO_DISPLAY_QUALITY_LEVEL, 0LL, 0LL, &v14, &v18, &v15) | 0x10000000;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -805306333 )
  {
    if ( v14 && v15 != 4 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1512,
        (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
        v8);
      JUMPOUT(0x18005AC50LL);
    }
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x1513,
      (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      v10);
    v5 = v14 && v15 == 4;
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1511,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v7);
  }
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcthrottleableinputhelper.cpp",
      (const char *)(unsigned int)v7);
  if ( !v5 || (unsigned int)v18 >= 2 )
    v6 = 0;
  *(_BYTE *)this = v6;
  return this;
}
