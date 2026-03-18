/*
 * XREFs of BgpFwDisplayBugCheckScreen @ 0x1402C7278
 * Callers:
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x140165060 (BgpClearScreen.c)
 *     BgpGxDrawRectangle @ 0x1401651B0 (BgpGxDrawRectangle.c)
 *     BgpGetBitsPerPixel @ 0x140165560 (BgpGetBitsPerPixel.c)
 *     IoSaveBugCheckProgress @ 0x140233B00 (IoSaveBugCheckProgress.c)
 *     BcpDisplayCriticalCharacter @ 0x1402C64F8 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1402C65C0 (BcpDisplayCriticalString.c)
 *     BcpDisplayErrorInformation @ 0x1402C6914 (BcpDisplayErrorInformation.c)
 *     BcpDisplayProgress @ 0x1402C6B94 (BcpDisplayProgress.c)
 *     BcpGetComponentOffsets @ 0x1402C6D88 (BcpGetComponentOffsets.c)
 *     BcpGetDisplayType @ 0x1402C6F18 (BcpGetDisplayType.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x1408E4F10 (BcpDisplayEarlyBugCheckScreen.c)
 */

__int64 __fastcall BgpFwDisplayBugCheckScreen(unsigned int a1, unsigned __int64 *a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 DisplayType; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  int *v14; // rax
  int v15; // ecx
  __int16 *v16; // rcx
  int v17; // eax
  unsigned int v18; // r8d
  int v19; // ecx
  int v20; // edx
  UNICODE_STRING *v21; // rcx
  __int16 v22; // cx
  unsigned int v23; // r8d
  char v24; // r15
  UNICODE_STRING *v25; // rcx
  UNICODE_STRING *v26; // rdx
  int v27; // r9d
  unsigned int BitsPerPixel; // eax
  __int64 v29; // r8
  int ComponentOffsets; // r12d
  __int64 v31; // r8
  unsigned int v32; // r8d
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-20h] BYREF
  int v35; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v36; // [rsp+40h] [rbp-10h] BYREF
  int v37; // [rsp+48h] [rbp-8h]

  if ( (dword_14039D7F0 & 4) != 0 )
  {
    if ( (dword_14039D7F0 & 0x400000) == 0 )
    {
      v7 = BcpDisplayEarlyBugCheckScreen(a1, a2, a4);
      IoSaveBugCheckProgress(0x83u);
      return v7;
    }
    goto LABEL_43;
  }
  if ( (dword_14039D7F0 & 0x400000) != 0 || (dword_14039D7F0 & 0x10) == 0 )
  {
LABEL_43:
    BgpClearScreen(4278190080LL, (__int64)a2);
    IoSaveBugCheckProgress(0x84u);
    return 0LL;
  }
  v36 = __PAIR64__(DWORD1(BgInternal), DWORD2(BgInternal));
  v37 = HIDWORD(BgInternal);
  DisplayType = (int)BcpGetDisplayType(&v36);
  v11 = *(_QWORD *)(qword_1403D1060 + 24);
  if ( a1 == 456 )
  {
    v12 = 4278190080LL;
    *(_DWORD *)(v11 + 40) = -16777216;
  }
  else
  {
    v12 = *(unsigned int *)(v11 + 40);
  }
  BgpClearScreen(v12, v9);
  IoSaveBugCheckProgress(0x85u);
  LODWORD(BcpCursor) = dword_14039B810[18 * DisplayType + 4];
  v14 = &dword_14039B810[18 * DisplayType + 5];
  v15 = *v14;
  HIDWORD(BcpCursor) = *v14;
  if ( v14 )
    dword_1403CADF8 = v15;
  if ( (dword_14039D7F0 & 0x20000) == 0 )
  {
    v16 = (__int16 *)&unk_1402F12F0;
    if ( a1 == 456 )
      v16 = (__int16 *)&unk_1402F4008;
    BcpDisplayCriticalString(v16, dword_14039B810[18 * DisplayType + 3], v13, DisplayType);
  }
  v17 = dword_14039B810[18 * DisplayType + 8];
  v18 = dword_14039B810[18 * DisplayType + 4];
  v19 = dword_14039B810[18 * DisplayType + 9];
  v20 = dword_14039B810[18 * DisplayType + 2];
  if ( a1 == 456 )
  {
    HIDWORD(BcpCursor) = dword_1403CADF8 + v19;
    v21 = &stru_1403D1040;
    LODWORD(BcpCursor) = v18 + v17;
  }
  else
  {
    HIDWORD(BcpCursor) = dword_1403CADF8 + v19;
    v21 = &stru_1403D1030;
    LODWORD(BcpCursor) = v18 + v17;
    if ( (dword_14039D7F0 & 0x10000000) == 0 )
      v21 = &stru_1403D0F50;
  }
  BcpDisplayCriticalString((__int16 *)v21, v20, v18, DisplayType);
  BcpDisplayCriticalCharacter(v22, dword_14039B810[18 * DisplayType + 2]);
  v24 = 1;
  if ( a1 == 456 )
  {
    v25 = &stru_1403D1050;
  }
  else
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_28;
    if ( (a5 & 2) != 0 )
    {
      v26 = &stru_1403D0F80;
      v25 = &stru_1403D0FA0;
    }
    else
    {
      v25 = &stru_1403D0F90;
      v26 = &stru_1403D0F70;
    }
    if ( (a5 & 4) == 0 )
      v25 = v26;
  }
  BcpDisplayCriticalString((__int16 *)v25, dword_14039B810[18 * DisplayType + 2], v23, DisplayType);
LABEL_28:
  v27 = 0;
  if ( !qword_14039D878
    || (BitsPerPixel = BgpGetBitsPerPixel(), *(_DWORD *)(v29 + 8) < BitsPerPixel) && (dword_14039D7F0 & 0xC00) != 0 )
  {
    v24 = 0;
  }
  else
  {
    v27 = *(_DWORD *)(v29 + 4);
  }
  ComponentOffsets = BcpGetComponentOffsets(
                       &BcpProgressOffset,
                       &BcpErrorMessageOffset,
                       &v35,
                       DisplayType,
                       v27,
                       (a5 & 4) == 0);
  if ( ComponentOffsets >= 0 )
  {
    BcpCursor = BcpErrorMessageOffset;
    dword_1403CADF8 = dword_14039D708;
    if ( a1 != 456 )
    {
      BcpDisplayErrorInformation(DisplayType, a1, a2, a3, (__int64)a4, a5);
      if ( v24 )
        BgpGxDrawRectangle(qword_14039D878, (__int64)&v35, v31);
    }
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
      dword_1403CADF8 = dword_14039D748;
      BcpDisplayProgress(0, DisplayType, v32);
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      BcpLastProgressDisplayed = 0;
      BcpStartTicks = PerformanceCounter.QuadPart;
      BcpLastProgressUpdateTicks = PerformanceCounter.QuadPart;
    }
    *a4 = &stru_1403D0F50;
    a4[1] = &stru_1403D0F60;
  }
  return (unsigned int)ComponentOffsets;
}
