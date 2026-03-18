/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x1402917C8
 * Callers:
 *     KiDisplayBlueScreen @ 0x140206534 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x14013BCD8 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x14013C074 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x1401F67F0 (IoSaveBugCheckProgress.c)
 *     BgpClearScreen @ 0x140290508 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x1402909DC (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140290AA4 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x140290DF8 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x1402910E0 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x1402912D4 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14029146C (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1408700C0 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v7; // ebx
  unsigned int DisplayType; // esi
  unsigned int v10; // r8d
  int *v11; // rdx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  UNICODE_STRING *v15; // rcx
  __int16 v16; // cx
  unsigned int v17; // r8d
  char v18; // r15
  UNICODE_STRING *v19; // rax
  UNICODE_STRING *v20; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v22; // r8
  int v23; // ecx
  int ComponentOffsets; // r12d
  unsigned int v25; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-20h] BYREF
  int v28; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-10h] BYREF
  int v30; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+90h] [rbp+40h]

  v31 = a1;
  if ( (dword_14035A1B0 & 4) != 0 )
  {
    if ( (dword_14035A1B0 & 0x400000) == 0 )
    {
      v7 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
      IoSaveBugCheckProgress(0x83u);
      return v7;
    }
    goto LABEL_33;
  }
  if ( (dword_14035A1B0 & 0x400000) != 0 || (dword_14035A1B0 & 0x10) == 0 )
  {
LABEL_33:
    BgpClearScreen(0xFF000000);
    IoSaveBugCheckProgress(0x84u);
    return 0LL;
  }
  v29 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v30 = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(&v29);
  BgpClearScreen(*(_DWORD *)(*(_QWORD *)(qword_14038CD70 + 24) + 40LL));
  IoSaveBugCheckProgress(0x85u);
  v11 = &dword_140358260[18 * DisplayType + 5];
  LODWORD(BcpCursor) = dword_140358260[18 * DisplayType + 4];
  v12 = *v11;
  HIDWORD(BcpCursor) = *v11;
  if ( v11 )
    dword_140387EC8 = v12;
  if ( (dword_14035A1B0 & 0x20000) == 0 )
    BcpDisplayCriticalString(word_1402B6910, dword_140358260[18 * DisplayType + 3], v10, DisplayType);
  v13 = dword_140358260[18 * DisplayType + 4] + dword_140358260[18 * DisplayType + 8];
  v14 = dword_140358260[18 * DisplayType + 2];
  HIDWORD(BcpCursor) = dword_140387EC8 + dword_140358260[18 * DisplayType + 9];
  v15 = &stru_14038CD60;
  LODWORD(BcpCursor) = v13;
  if ( (dword_14035A1B0 & 0x10000000) == 0 )
    v15 = &stru_14038CC90;
  BcpDisplayCriticalString((__int16 *)v15, v14, (unsigned int)&stru_14038CC90, DisplayType);
  BcpDisplayCriticalCharacter(v16, dword_140358260[18 * DisplayType + 2]);
  v18 = 1;
  if ( (a5 & 1) == 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      v19 = &stru_14038CCC0;
      v20 = &stru_14038CCE0;
    }
    else
    {
      v20 = &stru_14038CCD0;
      v19 = &stru_14038CCB0;
    }
    if ( (a5 & 4) == 0 )
      v20 = v19;
    BcpDisplayCriticalString((__int16 *)v20, dword_140358260[18 * DisplayType + 2], v17, DisplayType);
  }
  if ( !qword_14035A238
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v22 + 8) < BitsPerPixel) && (dword_14035A1B0 & 0xC00) != 0 )
  {
    v23 = 0;
    v18 = 0;
  }
  else
  {
    v23 = *(_DWORD *)(v22 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       &v28,
                       DisplayType,
                       v23,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    dword_140387EC8 = dword_14035A118;
    BcpCursor = BcpErrorMessageOffset;
    BcpDisplayErrorInformation(DisplayType, v31, a2, a3, (__int64)a4, a5);
    if ( v18 )
      BgpGxDrawRectangle(qword_14035A238, (__int64)&v28);
    IoSaveBugCheckProgress(0x86u);
    if ( (a5 & 4) != 0 )
    {
      if ( (a5 & 2) == 0 )
      {
        KeQueryPerformanceCounter(&PerformanceFrequency);
        KeStallExecutionProcessor(10000000 * PerformanceFrequency.QuadPart / PerformanceFrequency.QuadPart);
      }
    }
    else
    {
      BcpCursor = BcpProgressOffset;
      dword_140387EC8 = dword_14035A0D8;
      BcpDisplayProgress(0, DisplayType, v25);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_14038CC90;
    a4[1] = &stru_14038CCA0;
  }
  return (unsigned int)ComponentOffsets;
}
