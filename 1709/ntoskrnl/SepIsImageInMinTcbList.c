/*
 * XREFs of SepIsImageInMinTcbList @ 0x140580228
 * Callers:
 *     SepIsMinTCB @ 0x14053AAD0 (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     RtlEqualUnicodeString @ 0x140483080 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x1405040A0 (SeCompareSigningLevels.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x14057E328 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x140584CF0 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // edi
  unsigned int v14; // ebx
  _DWORD *i; // r15
  __int64 v16; // r14
  unsigned __int8 v18; // bl
  _BYTE *v19; // r15
  unsigned __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int8 *v24; // rsi
  int ImageFileKeyOption; // eax
  int v26; // edx
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  char v28; // [rsp+78h] [rbp+10h]

  v9 = 0;
  v14 = 0;
  if ( !a2 )
    return (unsigned int)-1073741275;
  for ( i = (_DWORD *)(a1 + 20); ; i += 6 )
  {
    v16 = v14;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)(a1 + 24LL * v14), 1u) )
    {
      if ( !*i || *i == dword_14035E690 )
        break;
    }
    if ( ++v14 >= a2 )
      return (unsigned int)-1073741275;
  }
  v18 = *(_BYTE *)(a1 + 24LL * v14 + 18);
  if ( !v18 )
  {
    if ( !a5 )
    {
      v19 = a7;
      *a7 = *(_BYTE *)(a1 + 24 * v16 + 16);
      v21 = *(_BYTE *)(a1 + 24 * v16 + 17);
      goto LABEL_10;
    }
    v18 = a5;
  }
  v19 = a7;
  v20 = (unsigned __int64)v18 >> 4;
  *a7 = *((_BYTE *)SeProtectedMapping + 2 * v20);
  v21 = *((_BYTE *)SeProtectedMapping + 2 * v20 + 1);
LABEL_10:
  *a8 = v21;
  if ( !(unsigned int)SeCompareSigningLevels() )
    *v19 = a6;
  if ( !(unsigned int)SeCompareSigningLevels() )
    *a8 = a6;
  if ( (v18 & 7) != 1 && ((a4 & 1) != 0 || (v18 & 7) == 2) )
  {
    if ( (*a8 & 0xFu) < 4 )
      *a8 = *v19;
    v24 = a9;
    *a9 = v18 & 0xF2 | *a9 & 8 | 2;
  }
  else
  {
    v24 = a9;
    *a9 = v18;
  }
  if ( !*v24 && !*a8 && (int)RtlpOpenImageFileOptionsKeyEx(&a3->Length, v22, v23, &Handle) >= 0 )
  {
    ImageFileKeyOption = RtlQueryImageFileKeyOption(Handle, 4, 0LL);
    if ( ImageFileKeyOption >= 0 )
    {
      v26 = v28 & 0xF;
      if ( (unsigned int)(v26 - 2) <= 0xD )
      {
        *a8 = v26;
        *v24 = 8;
      }
    }
    ZwClose(Handle);
  }
  return v9;
}
