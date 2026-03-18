/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x1402672F8
 * Callers:
 *     KiBugCheckProgress @ 0x1401FFF90 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402672F8 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     BcpConvertProgressToString @ 0x1402665BC (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x140266DD0 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x14026715C (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402672F8 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  LARGE_INTEGER v6; // rax
  LONGLONG v7; // r9
  LONGLONG v8; // rdx
  LARGE_INTEGER v9; // rsi
  LONGLONG v10; // r8
  __int64 v11; // rdi
  int v12; // eax
  int DisplayType; // eax
  unsigned int v14; // r8d
  LARGE_INTEGER v15; // rax
  LARGE_INTEGER v16; // r8
  UNICODE_STRING *v18; // rax
  UNICODE_STRING *v19; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+20h] BYREF

  if ( (dword_140341A30 & 0x400000) != 0 || (dword_140341A30 & 0x10) == 0 )
    return 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = v6.QuadPart - BcpLastProgressUpdateTicks;
  v8 = v6.QuadPart - BcpStartTicks;
  v9.QuadPart = 2 * PerformanceFrequency.QuadPart;
  v10 = 10 * PerformanceFrequency.QuadPart;
  if ( a3 && v8 < v10 )
    v11 = 100 * v8 / v10;
  else
    LODWORD(v11) = 100;
  v12 = BcpLastProgressDisplayed;
  if ( a1 <= (unsigned int)v11 )
    LODWORD(v11) = a1;
  if ( v7 < v9.QuadPart || (unsigned int)v11 < BcpLastProgressDisplayed )
  {
    LODWORD(v11) = BcpLastProgressDisplayed;
  }
  else
  {
    v20 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v21 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v20);
    dword_14036B980 = dword_140341958;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v11, DisplayType, v14);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    v12 = v11;
    BcpLastProgressDisplayed = v11;
  }
  if ( a1 != 100 || v12 == 100 )
  {
    v18 = &stru_14036EA90;
    if ( !a3 )
      v18 = &stru_14036EAA0;
    *a2 = v18;
    BcpConvertProgressToString(v11, (__int64)(a2 + 3));
    if ( a1 == 1 )
    {
      a2[1] = &stru_14036EAD0;
      v19 = &stru_14036EAE0;
    }
    else
    {
      a2[1] = &stru_14036EAF0;
      v19 = &stru_14036EB00;
    }
    a2[2] = v19;
    return 0LL;
  }
  v15.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
  if ( v15.QuadPart < v9.QuadPart )
    KeStallExecutionProcessor(1000000 * (v9.QuadPart - v15.QuadPart) / PerformanceFrequency.QuadPart);
  LOBYTE(v16.LowPart) = a3;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
           100LL,
           a2,
           (LARGE_INTEGER)v16.QuadPart);
}
