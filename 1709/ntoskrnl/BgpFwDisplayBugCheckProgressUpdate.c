/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x140291608
 * Callers:
 *     KiBugCheckProgress @ 0x140206410 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140291608 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     BcpConvertProgressToString @ 0x1402908E8 (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x1402910E0 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x14029146C (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x140291608 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  LARGE_INTEGER v6; // rax
  LONGLONG v7; // rdx
  LARGE_INTEGER v8; // rsi
  LONGLONG v9; // r8
  __int64 v10; // rdi
  int DisplayType; // eax
  unsigned int v12; // r8d
  int v13; // eax
  LARGE_INTEGER v14; // rax
  LARGE_INTEGER v15; // r8
  UNICODE_STRING *v17; // rax
  UNICODE_STRING *v18; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+20h] BYREF

  if ( (dword_14035A1B0 & 0x400000) != 0 || (dword_14035A1B0 & 0x10) == 0 )
    return 0LL;
  v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v7 = v6.QuadPart - BcpStartTicks;
  v8.QuadPart = 2 * PerformanceFrequency.QuadPart;
  v9 = 10 * PerformanceFrequency.QuadPart;
  if ( a3 && v7 < v9 )
    v10 = 100 * v7 / v9;
  else
    LODWORD(v10) = 100;
  if ( a1 <= (unsigned int)v10 )
    LODWORD(v10) = a1;
  if ( v6.QuadPart - BcpLastProgressUpdateTicks < v8.QuadPart || (unsigned int)v10 < BcpLastProgressDisplayed )
  {
    v13 = BcpLastProgressDisplayed;
    LODWORD(v10) = BcpLastProgressDisplayed;
  }
  else
  {
    v19 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v20 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v19);
    dword_140387EC8 = dword_14035A0D8;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v10, DisplayType, v12);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    v13 = v10;
    BcpLastProgressDisplayed = v10;
  }
  if ( a1 != 100 || v13 == 100 )
  {
    v17 = &stru_14038CCB0;
    if ( !a3 )
      v17 = &stru_14038CCC0;
    *a2 = v17;
    BcpConvertProgressToString(v10, (__int64)(a2 + 3));
    if ( a1 == 1 )
    {
      a2[1] = &stru_14038CCF0;
      v18 = &stru_14038CD00;
    }
    else
    {
      a2[1] = &stru_14038CD10;
      v18 = &stru_14038CD20;
    }
    a2[2] = v18;
    return 0LL;
  }
  v14.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
  if ( v14.QuadPart < v8.QuadPart )
    KeStallExecutionProcessor(1000000 * (v8.QuadPart - v14.QuadPart) / PerformanceFrequency.QuadPart);
  LOBYTE(v15.LowPart) = a3;
  return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
           100LL,
           a2,
           (LARGE_INTEGER)v15.QuadPart);
}
