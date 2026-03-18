/*
 * XREFs of NtGdiGetEudcTimeStampEx @ 0x1C0278360
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C002B64C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     __report_rangecheckfailure @ 0x1C0195CE0 (__report_rangecheckfailure.c)
 */

__int64 __fastcall NtGdiGetEudcTimeStampEx(char *Src, unsigned int a2, int a3)
{
  size_t v4; // rdi
  unsigned __int16 v5[40]; // [rsp+30h] [rbp-68h] BYREF

  if ( a3 )
    return (unsigned int)dword_1C032C960;
  if ( !Src || !a2 )
    return (unsigned int)dword_1C032C95C;
  if ( a2 > 0x20 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v4 = 2LL * a2;
    if ( v4 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&Src[v4] > W32UserProbeAddress || &Src[v4] < Src )
        *W32UserProbeAddress = 0;
    }
    memmove(v5, Src, v4);
    if ( v4 >= 0x42 )
      _report_rangecheckfailure();
    v5[v4 / 2] = 0;
  }
  return 0LL;
}
