/*
 * XREFs of ?PreInitClass@Time@@SAJXZ @ 0x180183530
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x180155E60 (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 Time::PreInitClass(void)
{
  signed int LastError; // eax
  signed int v1; // ebx
  signed int v2; // eax
  unsigned int v4; // [rsp+20h] [rbp-18h]

  SetLastError(0);
  if ( !QueryPerformanceFrequency(&Time::s_luFreq) )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v4 = 34;
LABEL_5:
    if ( v1 >= 0 )
      v1 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v1, v4);
    return (unsigned int)v1;
  }
  SetLastError(0);
  if ( !QueryPerformanceCounter(&Time::s_luBegin) )
  {
    v2 = GetLastError();
    v1 = v2;
    if ( v2 > 0 )
      v1 = (unsigned __int16)v2 | 0x80070000;
    v4 = 35;
    goto LABEL_5;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / Time::s_luFreq.QuadPart < 0x12C )
    return 2147549183LL;
  return 0;
}
