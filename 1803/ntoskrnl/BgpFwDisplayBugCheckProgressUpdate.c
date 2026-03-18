/*
 * XREFs of BgpFwDisplayBugCheckProgressUpdate @ 0x1402C70B0
 * Callers:
 *     KiBugCheckProgress @ 0x140243BF0 (KiBugCheckProgress.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402C70B0 (BgpFwDisplayBugCheckProgressUpdate.c)
 * Callees:
 *     BcpConvertProgressToString @ 0x1402C6404 (BcpConvertProgressToString.c)
 *     BcpDisplayProgress @ 0x1402C6B94 (BcpDisplayProgress.c)
 *     BcpGetDisplayType @ 0x1402C6F18 (BcpGetDisplayType.c)
 *     BgpFwDisplayBugCheckProgressUpdate @ 0x1402C70B0 (BgpFwDisplayBugCheckProgressUpdate.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckProgressUpdate(unsigned int a1, UNICODE_STRING **a2, char a3)
{
  LARGE_INTEGER v5; // rax
  unsigned int v6; // ebp
  LONGLONG v7; // rdx
  LONGLONG v8; // r8
  LARGE_INTEGER v9; // rdi
  __int64 v10; // rbx
  int DisplayType; // eax
  unsigned int v12; // r8d
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // r8
  UNICODE_STRING *v15; // rax
  UNICODE_STRING *v16; // rcx
  UNICODE_STRING *v17; // rax
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+28h] [rbp-20h]
  LARGE_INTEGER v23; // [rsp+68h] [rbp+20h] BYREF

  if ( (dword_14039D7F0 & 0x400000) != 0 || (dword_14039D7F0 & 0x10) == 0 )
    return 0LL;
  v5 = KeQueryPerformanceCounter(&v23);
  v6 = 0;
  v7 = v5.QuadPart - BcpStartTicks;
  v8 = 10 * v23.QuadPart;
  v9.QuadPart = 2 * v23.QuadPart;
  if ( a3 && v7 < v8 )
    v10 = 100 * v7 / v8;
  else
    LODWORD(v10) = 100;
  if ( a1 <= (unsigned int)v10 )
    LODWORD(v10) = a1;
  if ( v5.QuadPart - BcpLastProgressUpdateTicks < v9.QuadPart || (unsigned int)v10 < BcpLastProgressDisplayed )
  {
    LODWORD(v10) = BcpLastProgressDisplayed;
  }
  else
  {
    v19 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
    v20 = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(&v19);
    dword_1403CADF8 = dword_14039D748;
    BcpCursor = BcpProgressOffset;
    BcpDisplayProgress(v10, DisplayType, v12);
    BcpLastProgressUpdateTicks = KeQueryPerformanceCounter(0LL).QuadPart;
    BcpLastProgressDisplayed = v10;
  }
  if ( a1 != 100 || (_DWORD)v10 == 100 )
  {
    v15 = &stru_1403D0F70;
    if ( !a3 )
      v15 = &stru_1403D0F80;
    *a2 = v15;
    BcpConvertProgressToString(v10, (__int64)(a2 + 3));
    v16 = &stru_1403D0FC0;
    if ( a1 != 1 )
      v16 = &stru_1403D0FE0;
    v17 = &stru_1403D0FB0;
    if ( a1 != 1 )
      v17 = &stru_1403D0FD0;
    a2[1] = v17;
    a2[2] = v16;
  }
  else
  {
    v13.QuadPart = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - BcpLastProgressUpdateTicks;
    if ( v13.QuadPart < v9.QuadPart )
      KeStallExecutionProcessor(1000000 * (v9.QuadPart - v13.QuadPart) / v23.QuadPart);
    LOBYTE(v14.LowPart) = a3;
    return (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgpFwDisplayBugCheckProgressUpdate)(
                           100LL,
                           a2,
                           (LARGE_INTEGER)v14.QuadPart);
  }
  return v6;
}
