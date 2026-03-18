/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x1402674B4
 * Callers:
 *     KiDisplayBlueScreen @ 0x1402000B4 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x140140A34 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140140DD4 (BgpGetBitsPerPixel.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     BcpDisplayCriticalCharacter @ 0x1402666B0 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140266788 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x140266AE4 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x140266DD0 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x140266FC4 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x14026715C (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140838C80 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(__int64 a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int DisplayType; // esi
  unsigned int v9; // r8d
  int *v10; // rax
  int v11; // ecx
  int v12; // eax
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // r8d
  char v16; // r15
  UNICODE_STRING *v17; // rax
  UNICODE_STRING *v18; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v20; // r8
  int v21; // ecx
  int ComponentOffsets; // r12d
  unsigned int v23; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-20h] BYREF
  int v26; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  int v28; // [rsp+48h] [rbp-8h]
  int v29; // [rsp+90h] [rbp+40h]

  v29 = a1;
  if ( (dword_140341A30 & 4) != 0 )
  {
    if ( (dword_140341A30 & 0x400000) == 0 )
      return BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
    goto LABEL_31;
  }
  if ( (dword_140341A30 & 0x400000) != 0 || (dword_140341A30 & 0x10) == 0 )
  {
LABEL_31:
    BgpClearScreen(0xFF000000);
    return 0LL;
  }
  v27 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v28 = HIDWORD(BgInternal);
  DisplayType = BcpGetDisplayType(&v27);
  BgpClearScreen(*(_DWORD *)(*(_QWORD *)(qword_14036EB40 + 24) + 40LL));
  v10 = &dword_14033FBD0[18 * DisplayType + 5];
  LODWORD(BcpCursor) = dword_14033FBD0[18 * DisplayType + 4];
  v11 = *v10;
  HIDWORD(BcpCursor) = *v10;
  if ( v10 )
    dword_14036B980 = v11;
  if ( (dword_140341A30 & 0x20000) == 0 )
    BcpDisplayCriticalString(word_14028C210, dword_14033FBD0[18 * DisplayType + 3], v9, DisplayType);
  v12 = dword_14033FBD0[18 * DisplayType + 4] + dword_14033FBD0[18 * DisplayType + 8];
  v13 = dword_14033FBD0[18 * DisplayType + 2];
  HIDWORD(BcpCursor) = dword_14036B980 + dword_14033FBD0[18 * DisplayType + 9];
  LODWORD(BcpCursor) = v12;
  BcpDisplayCriticalString((__int16 *)&stru_14036EA70, v13, v9, DisplayType);
  BcpDisplayCriticalCharacter(v14, dword_14033FBD0[18 * DisplayType + 2]);
  v16 = 1;
  if ( (a5 & 1) == 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      v17 = &stru_14036EAA0;
      v18 = &stru_14036EAC0;
    }
    else
    {
      v18 = &stru_14036EAB0;
      v17 = &stru_14036EA90;
    }
    if ( (a5 & 4) == 0 )
      v18 = v17;
    BcpDisplayCriticalString((__int16 *)v18, dword_14033FBD0[18 * DisplayType + 2], v15, DisplayType);
  }
  if ( qword_140341AB8
    && ((BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v20 + 8) >= BitsPerPixel) || (dword_140341A30 & 0xC00) == 0) )
  {
    v21 = *(_DWORD *)(v20 + 4);
  }
  else
  {
    v16 = 0;
    v21 = 0;
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       &v26,
                       DisplayType,
                       v21,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    dword_14036B980 = dword_140341988;
    BcpCursor = BcpErrorMessageOffset;
    BcpDisplayErrorInformation(DisplayType, v29, a2, a3, (__int64)a4, a5);
    if ( v16 )
      BgpGxDrawRectangle(qword_140341AB8, (__int64)&v26);
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
      dword_14036B980 = dword_140341958;
      BcpDisplayProgress(0, DisplayType, v23);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_14036EA70;
    a4[1] = &stru_14036EA80;
  }
  return (unsigned int)ComponentOffsets;
}
