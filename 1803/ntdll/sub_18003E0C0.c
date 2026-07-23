/*
 * XREFs of sub_18003E0C0 @ 0x18003E0C0
 * Callers:
 *     sub_18003D640 @ 0x18003D640 (sub_18003D640.c)
 *     RtlIsDosDeviceName_U @ 0x18003FA40 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x180076700 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_18003E414 @ 0x18003E414 (sub_18003E414.c)
 *     iswdigit @ 0x18008E9F0 (iswdigit.c)
 */

__int64 __fastcall sub_18003E0C0(__int64 a1)
{
  int v1; // ebp
  __int16 v2; // di
  int v3; // eax
  __m128i *v4; // r11
  unsigned __int16 v5; // r8
  unsigned __int16 v6; // r9
  unsigned __int16 v7; // dx
  PWCH Buffer; // rbx
  WCHAR i; // cx
  WCHAR *v10; // rax
  WCHAR v11; // cx
  WCHAR *v12; // rcx
  __int16 v13; // ax
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  int v17; // ecx
  PWCH v18; // rcx
  WCHAR *v19; // rdx
  PWCH v20; // rax
  __int64 v21; // rcx
  int v22; // esi
  __int16 v23; // di
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  _UNICODE_STRING *v27; // rdx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = sub_18003E414(a1);
  if ( v3 < 6 && v3 >= 2 || v3 < 0 || v3 != 6 && v3 > 1 )
  {
    v5 = _mm_cvtsi128_si32(*v4);
    String1 = (_UNICODE_STRING)*v4;
    v6 = v5;
    v7 = v5 >> 1;
    if ( !(v5 >> 1) )
      return 0LL;
    Buffer = String1.Buffer;
    if ( String1.Buffer[v7 - 1] == 58 )
    {
      v5 -= 2;
      --v7;
      v2 = 1;
    }
    if ( !v7 )
      return 0LL;
    for ( i = String1.Buffer[v7 - 1]; i == 46 || i == 32; i = String1.Buffer[v7 - 1] )
    {
      v5 -= 2;
      ++v2;
      if ( !--v7 )
        break;
    }
    if ( v7 )
    {
      v10 = &String1.Buffer[v7 - 1];
      if ( v10 >= String1.Buffer )
      {
        while ( 1 )
        {
          v11 = *v10;
          if ( *v10 == 92 || v11 == 47 || v11 == 58 && v10 == String1.Buffer + 1 )
            break;
          if ( --v10 < String1.Buffer )
            goto LABEL_25;
        }
        v12 = v10 + 1;
        if ( v10 + 1 >= (PWCH)((char *)String1.Buffer + (v6 & 0xFFFE)) )
          return 0LL;
        v13 = *v12 | 0x20;
        if ( v13 != 112 && v13 != 97 && v13 != 99 && v13 != 110 && v13 != 108 )
          return 0LL;
        v1 = (_DWORD)v12 - LODWORD(String1.Buffer);
        v15 = v6 + LOWORD(String1.Buffer) - (_WORD)v12;
        String1.Buffer = v12;
        Buffer = v12;
        v7 = (v15 >> 1) - v2;
        String1.Length = v15 - 2 * v2;
      }
LABEL_25:
      v16 = *Buffer;
      LOWORD(v16) = (v16 | 0x20) - 97;
      if ( (unsigned __int16)v16 > 0xFu )
        return 0LL;
      v17 = 43013;
      if ( !_bittest(&v17, v16) )
        return 0LL;
    }
    v18 = Buffer;
    v19 = &Buffer[v7];
    if ( Buffer < v19 )
    {
      do
      {
        if ( *v18 == 46 )
          break;
        if ( *v18 == 58 )
          break;
        ++v18;
      }
      while ( v18 < v19 );
      if ( v18 > Buffer )
      {
        do
        {
          v20 = v18 - 1;
          if ( *(v18 - 1) != 32 )
            break;
          --v18;
        }
        while ( v20 > Buffer );
      }
    }
    v21 = v18 - Buffer;
    v22 = (unsigned __int16)v21;
    v23 = 2 * v21;
    String1.Length = 2 * v21;
    if ( (unsigned __int16)v21 == 5 )
      return 0LL;
    v24 = (unsigned __int16)v21 - 3;
    if ( v22 == 3 )
    {
      if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_180110390, 1u)
        || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_180110380, 1u)
        || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_180110370, 1u)
        || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_1801103A0, 1u) )
      {
        return (v1 << 16) | (unsigned int)(2 * v22);
      }
    }
    else
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 2;
        if ( v26 )
        {
          if ( v26 != 1 )
            return 0LL;
          v27 = (_UNICODE_STRING *)&stru_180110000;
        }
        else
        {
          v27 = (_UNICODE_STRING *)&unk_180110010;
        }
      }
      else
      {
        if ( !iswdigit(Buffer[3]) || Buffer[3] == 48 )
          return 0LL;
        String1.Length = v23 - 2;
        if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&stru_180110088, 1u) )
          return (v1 << 16) | (unsigned int)(2 * v22);
        v27 = (_UNICODE_STRING *)&unk_180110098;
      }
      if ( RtlEqualUnicodeString(&String1, v27, 1u) )
        return (v1 << 16) | (unsigned int)(2 * v22);
    }
    return 0LL;
  }
  return 0LL;
}
