/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x180033BC0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180033160 (RtlGetFullPathName_Ustr.c)
 *     RtlIsDosDeviceName_U @ 0x180035B10 (RtlIsDosDeviceName_U.c)
 *     RtlSetCurrentDirectory_U @ 0x18007A610 (RtlSetCurrentDirectory_U.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x18002E610 (RtlEqualUnicodeString.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x180033F0C (RtlDetermineDosPathNameType_Ustr.c)
 *     iswdigit @ 0x180094490 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int16 v5; // di
  int v6; // eax
  __m128i *v7; // r11
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r8
  wchar_t *Buffer; // rbx
  wchar_t i; // cx
  wchar_t *v13; // rax
  wchar_t v14; // cx
  int v15; // r9d
  wchar_t *v16; // rax
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // ax
  wchar_t *v20; // rcx
  wchar_t *v21; // rdx
  wchar_t *v22; // rax
  __int64 v23; // rcx
  int v24; // esi
  __int16 v25; // di
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  _UNICODE_STRING *v30; // rdx
  _UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = RtlDetermineDosPathNameType_Ustr(a1, a2, a3, a4);
  if ( v6 < 6 && v6 >= 2 || v6 < 0 || v6 != 6 && v6 > 1 )
  {
    v8 = _mm_cvtsi128_si32(*v7);
    String1 = (_UNICODE_STRING)*v7;
    v9 = v8;
    v10 = v8 >> 1;
    if ( v8 >> 1 )
    {
      Buffer = String1.Buffer;
      if ( String1.Buffer[v10 - 1] == 58 )
      {
        v8 -= 2;
        --v10;
        v5 = 1;
      }
      if ( v10 )
      {
        for ( i = String1.Buffer[v10 - 1]; i == 46 || i == 32; i = String1.Buffer[v10 - 1] )
        {
          v8 -= 2;
          ++v5;
          if ( !--v10 )
            break;
        }
        if ( !v10 )
        {
LABEL_24:
          v20 = Buffer;
          v21 = &Buffer[v10];
          if ( Buffer < v21 )
          {
            do
            {
              if ( *v20 == 46 )
                break;
              if ( *v20 == 58 )
                break;
              ++v20;
            }
            while ( v20 < v21 );
            if ( v20 > Buffer )
            {
              do
              {
                v22 = v20 - 1;
                if ( *(v20 - 1) != 32 )
                  break;
                --v20;
              }
              while ( v22 > Buffer );
            }
          }
          v23 = v20 - Buffer;
          v24 = (unsigned __int16)v23;
          v25 = 2 * v23;
          String1.Length = 2 * v23;
          if ( (unsigned __int16)v23 == 5 )
            return 0LL;
          v27 = (unsigned __int16)v23 - 3;
          if ( v24 == 3 )
          {
            if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosPRNDevice, 1u)
              || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosAUXDevice, 1u)
              || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosNULDevice, 1u)
              || RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosCONDevice, 1u) )
            {
              return (v4 << 16) | (unsigned int)(2 * v24);
            }
          }
          else
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 2;
              if ( v29 )
              {
                if ( v29 != 1 )
                  return 0LL;
                v30 = (_UNICODE_STRING *)&RtlpDosCONOUTDevice;
              }
              else
              {
                v30 = (_UNICODE_STRING *)&RtlpDosCONINDevice;
              }
            }
            else
            {
              if ( !iswdigit(Buffer[3]) || Buffer[3] == 48 )
                return 0LL;
              String1.Length = v25 - 2;
              if ( RtlEqualUnicodeString(&String1, (PUNICODE_STRING)&RtlpDosLPTDevice, 1u) )
                return (v4 << 16) | (unsigned int)(2 * v24);
              v30 = (_UNICODE_STRING *)&RtlpDosCOMDevice;
            }
            if ( RtlEqualUnicodeString(&String1, v30, 1u) )
              return (v4 << 16) | (unsigned int)(2 * v24);
          }
          return 0LL;
        }
        v13 = &String1.Buffer[v10 - 1];
        if ( v13 < String1.Buffer )
        {
LABEL_16:
          v15 = 43013;
        }
        else
        {
          while ( 1 )
          {
            v14 = *v13;
            if ( *v13 == 92 || v14 == 47 || v14 == 58 && v13 == String1.Buffer + 1 )
              break;
            if ( --v13 < String1.Buffer )
              goto LABEL_16;
          }
          v16 = v13 + 1;
          if ( v16 >= (wchar_t *)((char *)String1.Buffer + (v9 & 0xFFFE)) )
            return 0LL;
          v17 = (*v16 | 0x20) - 97;
          if ( v17 > 0xFu )
            return 0LL;
          v15 = 43013;
          if ( !_bittest(&v15, v17) )
            return 0LL;
          v4 = (_DWORD)v16 - LODWORD(String1.Buffer);
          v18 = v9 + LOWORD(String1.Buffer) - (_WORD)v16;
          String1.Buffer = v16;
          Buffer = v16;
          v10 = (v18 >> 1) - v5;
        }
        v19 = (*Buffer | 0x20) - 97;
        if ( v19 <= 0xFu && _bittest(&v15, v19) )
          goto LABEL_24;
      }
    }
    return 0LL;
  }
  return 0LL;
}
