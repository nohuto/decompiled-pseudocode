/*
 * XREFs of sub_18010CB98 @ 0x18010CB98
 * Callers:
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18003BB30 (RtlDosPathNameToNtPathName_U.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     RtlSetLastWin32Error @ 0x18005D580 (RtlSetLastWin32Error.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenFile @ 0x1800A5960 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x1800A59A0 (ZwQueryDirectoryFile.c)
 *     RtlCompareMemory @ 0x1800A9760 (RtlCompareMemory.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_18010BC9C @ 0x18010BC9C (sub_18010BC9C.c)
 */

unsigned __int64 __fastcall sub_18010CB98(PCWSTR SourceString, __int64 a2, __int64 a3)
{
  int v3; // ebx
  wchar_t v5; // r12
  unsigned __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // ax
  int v12; // r8d
  char v13; // bl
  int v14; // eax
  unsigned int v15; // edx
  _WORD *v16; // rcx
  int DirectoryFile; // ebx
  size_t v18; // r8
  unsigned __int16 v19; // [rsp+60h] [rbp-A0h]
  void *Source1[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 v21; // [rsp+78h] [rbp-88h] BYREF
  __int16 v22; // [rsp+7Ah] [rbp-86h]
  unsigned __int64 v23; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  int v25; // [rsp+A8h] [rbp-58h]
  __int64 v26; // [rsp+B0h] [rbp-50h]
  __int16 *v27; // [rsp+B8h] [rbp-48h]
  int v28; // [rsp+C0h] [rbp-40h]
  __int128 v29; // [rsp+C8h] [rbp-38h]
  __int64 v30; // [rsp+E8h] [rbp-18h]
  __int64 v31; // [rsp+F0h] [rbp-10h]
  __int64 v32; // [rsp+F8h] [rbp-8h]
  int v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+10Ch] [rbp+Ch]
  int v35; // [rsp+118h] [rbp+18h]
  unsigned int Size; // [rsp+11Ch] [rbp+1Ch]
  int Size_4; // [rsp+120h] [rbp+20h]
  char v38; // [rsp+124h] [rbp+24h]
  _BYTE v39[24]; // [rsp+126h] [rbp+26h] BYREF
  _BYTE Src[530]; // [rsp+13Eh] [rbp+3Eh] BYREF

  v3 = (int)SourceString;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = DestinationString.Buffer[(DestinationString.Length >> 1) - 1];
  if ( !RtlDosPathNameToNtPathName_U(v3, (int)&v21, (__int64)Source1, 0LL) )
  {
    RtlSetLastWin32Error(3u);
    return -1LL;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)Source1[0] + v7) );
  v8 = v23;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(v23 + 2 * v9) );
  v10 = 2 * v9;
  v21 = v10;
  v22 = v10 + 2;
  if ( Source1[0] )
    v11 = v10 + v23 - LOWORD(Source1[0]);
  else
    v11 = 0;
  v19 = v11;
  if ( Source1[0] )
  {
    v10 = LOWORD(Source1[0]) - v23;
    v21 = LOWORD(Source1[0]) - v23;
    v22 = LOWORD(Source1[0]) - v23;
  }
  v12 = v10 >> 1;
  if ( *(_WORD *)(v23 + 2LL * (v12 - 2)) == 58 || *(_WORD *)(v23 + 2LL * (v12 - 1)) == 92 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    v21 = v10 - 2;
  }
  v27 = (__int16 *)&v21;
  v25 = 48;
  v26 = 0LL;
  v28 = 64;
  v29 = 0LL;
  v14 = ZwOpenFile();
  if ( (v14 == -1073741811 || v14 == -1073741565) && v13 )
  {
    v21 += 2;
    v14 = ZwOpenFile();
    v21 -= 2;
  }
  if ( v14 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return -1LL;
  }
  if ( !v19 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
LABEL_46:
    ZwClose();
    return -1LL;
  }
  if ( v19 != 6 || RtlCompareMemory(Source1[0], L"*.*", 6uLL) != 6 )
  {
    v15 = 0;
    v16 = Source1[0];
    if ( (v19 & 0xFFFE) != 0 )
    {
      while ( 1 )
      {
        if ( v15 && *v16 == 46 && *(v16 - 1) == 42 )
          *(v16 - 1) = 60;
        if ( *v16 == 63 )
          break;
        if ( *v16 == 42 )
          goto LABEL_35;
LABEL_38:
        ++v15;
        ++v16;
        if ( v15 >= v19 >> 1 )
          goto LABEL_39;
      }
      *v16 = 62;
LABEL_35:
      if ( v15 && *(v16 - 1) == 46 )
        *(v16 - 1) = 34;
      goto LABEL_38;
    }
LABEL_39:
    if ( v5 == 46 && *(v16 - 1) == 42 )
      *(v16 - 1) = 60;
  }
  DirectoryFile = ZwQueryDirectoryFile();
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( DirectoryFile < 0 )
    goto LABEL_46;
  v18 = Size;
  *(_DWORD *)a3 = v35;
  *(_QWORD *)(a3 + 4) = v30;
  *(_QWORD *)(a3 + 12) = v31;
  *(_QWORD *)(a3 + 20) = v32;
  *(_DWORD *)(a3 + 28) = v34;
  *(_DWORD *)(a3 + 32) = v33;
  memmove((void *)(a3 + 44), Src, v18);
  *(_WORD *)(a3 + 2 * ((unsigned __int64)Size >> 1) + 44) = 0;
  memmove((void *)(a3 + 564), v39, v38);
  *(_WORD *)(a3 + 2 * ((__int64)v38 >> 1) + 564) = 0;
  if ( (v35 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = Size_4;
  result = sub_18010BC9C((__int64)Source1[1]);
  if ( !result )
    goto LABEL_46;
  return result;
}
