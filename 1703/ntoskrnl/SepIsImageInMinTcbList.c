/*
 * XREFs of SepIsImageInMinTcbList @ 0x1404F70A4
 * Callers:
 *     SepIsMinTCB @ 0x1405454E0 (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlpOpenImageFileOptionsKey @ 0x140443B68 (RtlpOpenImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x1404497B8 (RtlQueryImageFileKeyOption.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x140545CB0 (SeCompareSigningLevels.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        _BYTE *a6,
        _BYTE *a7,
        unsigned __int8 *a8)
{
  unsigned int v8; // edi
  unsigned int v13; // ebx
  int v14; // r15d
  _DWORD *i; // rsi
  __int64 *v16; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // bl
  _BYTE *v20; // rsi
  char v21; // al
  _BYTE *v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned __int8 *v26; // rsi
  ULONG v27; // ecx
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  ULONG v29; // [rsp+78h] [rbp+10h] BYREF

  v8 = 0;
  v13 = 0;
  if ( !a2 )
    return (unsigned int)-1073741275;
  v14 = dword_140344B30;
  for ( i = (_DWORD *)(a1 + 20);
        !RtlEqualUnicodeString(a3, (PCUNICODE_STRING)(a1 + 24LL * v13), 1u) || *i && *i != v14;
        i += 6 )
  {
    if ( ++v13 >= a2 )
      return (unsigned int)-1073741275;
  }
  v18 = 3LL * v13;
  v19 = *(_BYTE *)(a1 + 24LL * v13 + 18);
  if ( !v19 )
  {
    if ( !a5 )
    {
      v20 = a6;
      *a6 = *(_BYTE *)(a1 + 8 * v18 + 16);
      v21 = *(_BYTE *)(a1 + 8 * v18 + 17);
      goto LABEL_10;
    }
    v19 = a5;
  }
  v20 = a6;
  v16 = SeProtectedMapping;
  v18 = (unsigned __int64)v19 >> 4;
  *a6 = *((_BYTE *)SeProtectedMapping + 2 * v18);
  v21 = *((_BYTE *)SeProtectedMapping + 2 * v18 + 1);
LABEL_10:
  v22 = a7;
  *a7 = v21;
  LOBYTE(v16) = SeILSigningPolicy;
  LOBYTE(v18) = *v20;
  if ( !(unsigned int)SeCompareSigningLevels(v18, v16) )
    *v20 = SeILSigningPolicy;
  LOBYTE(v23) = SeILSigningPolicy;
  LOBYTE(v24) = *v22;
  if ( !(unsigned int)SeCompareSigningLevels(v24, v23) )
    *v22 = SeILSigningPolicy;
  if ( (v19 & 7) != 1 && ((a4 & 1) != 0 || (v19 & 7) == 2) )
  {
    if ( (*v22 & 0xFu) < 4 )
      *v22 = *v20;
    v26 = a8;
    *a8 = v19 & 0xF2 | *a8 & 8 | 2;
  }
  else
  {
    v26 = a8;
    *a8 = v19;
  }
  if ( !*v26 && !*v22 && RtlpOpenImageFileOptionsKey(&a3->Length, v25, &Handle) >= 0 )
  {
    if ( RtlQueryImageFileKeyOption(Handle, L"AuditLevel", 4, &v29, 4u, 0LL) >= 0 )
    {
      v27 = v29 & 0xF;
      if ( v27 - 2 <= 0xD )
      {
        *v22 = v27;
        *v26 = 8;
      }
    }
    ZwClose(Handle);
  }
  return v8;
}
