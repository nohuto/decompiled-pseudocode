/*
 * XREFs of sub_1800FA6F0 @ 0x1800FA6F0
 * Callers:
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 * Callees:
 *     sub_180030EF0 @ 0x180030EF0 (sub_180030EF0.c)
 *     RtlInitUnicodeString @ 0x1800369B0 (RtlInitUnicodeString.c)
 *     sub_18006FD80 @ 0x18006FD80 (sub_18006FD80.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800F965C @ 0x1800F965C (sub_1800F965C.c)
 *     sub_1800FAA50 @ 0x1800FAA50 (sub_1800FAA50.c)
 */

__int64 __fastcall sub_1800FA6F0(__int64 a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *a5)
{
  __int16 v5; // bx
  char v8; // r15
  wchar_t *v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // r9
  __int64 v12; // r9
  int v13; // r12d
  int v14; // r13d
  int v15; // eax
  char v16; // di
  __int16 v17; // r12
  int v18; // ecx
  int v19; // eax
  __int16 v20; // r8
  wchar_t *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  _WORD *v24; // rcx
  char v26; // [rsp+30h] [rbp-61h] BYREF
  char v27; // [rsp+31h] [rbp-60h]
  __int16 v28[2]; // [rsp+34h] [rbp-5Dh] BYREF
  char v29; // [rsp+38h] [rbp-59h] BYREF
  char v30; // [rsp+39h] [rbp-58h]
  int v31; // [rsp+3Ch] [rbp-55h] BYREF
  int v32; // [rsp+40h] [rbp-51h]
  wchar_t *String2; // [rsp+48h] [rbp-49h]
  int v34; // [rsp+50h] [rbp-41h]
  signed int v35; // [rsp+54h] [rbp-3Dh]
  __int64 v36; // [rsp+58h] [rbp-39h]
  _WORD *v37; // [rsp+60h] [rbp-31h]
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  _WORD v39[2]; // [rsp+78h] [rbp-19h] BYREF
  __int16 v40; // [rsp+7Ch] [rbp-15h]
  __int16 v41; // [rsp+7Eh] [rbp-13h]
  __int16 v42; // [rsp+80h] [rbp-11h]
  _WORD v43[10]; // [rsp+84h] [rbp-Dh] BYREF

  v5 = 0;
  v35 = a3;
  v37 = a2;
  v36 = a1;
  v8 = 0;
  String2 = a5;
  v26 = 0;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v9 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v9 || (v27 = 1, !*v9) )
      v27 = 0;
    v10 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    LOWORD(v31) = *(_WORD *)(a4 + 2 * v10 + 20);
    *(_WORD *)(a4 + 2 * v10 + 20) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v28[0] = 0;
    if ( v27 )
    {
      v9[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      v34 = sub_1800FAA50(a1, v39);
      v13 = v34;
      if ( v34 < 0 )
        return (unsigned int)v13;
      v30 = 0;
      v39[0] ^= (LOBYTE(v39[0]) ^ (unsigned __int8)*v37) & 0x18;
      *(_WORD *)(a4 + 2 * v10 + 20) = v31;
      v14 = 0;
      if ( String2 && *String2 && sub_180030EF0(v9, String2) )
      {
        v15 = sub_18006FD80(v36, String2, &v29, v12, (__int16 *)&v31);
        v16 = v29;
        if ( v15 < 0 )
        {
          v32 = (unsigned __int16)v31;
        }
        else
        {
          v14 = 1;
          v30 = 1;
          v32 = (unsigned __int16)v31;
          v43[0] = v31;
          v42 = v42 & 0xFFFC | v29 & 3;
        }
      }
      else
      {
        v32 = 0;
        v16 = 0;
      }
      if ( v9 )
      {
        v17 = v32;
        v18 = 2 * v14;
        v31 = 2 * v14;
        String2 = &v43[v14];
        do
        {
          if ( !*v9 || v18 >= 8 )
            break;
          v19 = sub_18006FD80(v36, v9, &v26, v12, v28);
          v8 = v26;
          v5 = v28[0];
          if ( v19 < 0 || v30 && v16 == v26 && v17 == v28[0] )
          {
            v18 = v31;
          }
          else
          {
            ++v14;
            v18 = v31 + 2;
            v20 = ((v26 & 3) << v31) | v42 & ~(3 << v31);
            v31 += 2;
            v21 = String2;
            v42 = v20;
            *String2 = v28[0];
            String2 = v21 + 1;
          }
          v22 = -1LL;
          do
            ++v22;
          while ( v9[v22] );
          v9 += v22 + 1;
        }
        while ( v9 );
        v13 = v34;
      }
      if ( v14 < 0 )
      {
        v5 = v40;
        if ( v40 )
        {
          v8 = 1;
LABEL_43:
          v23 = v35;
          v24 = v37;
          v37[4] = v37[4] & ~(3 << (2 * v35)) | ((v8 & 3) << (2 * v35));
          v24[v23 + 6] = v5;
          return (unsigned int)v13;
        }
        v5 = v41;
        if ( v41 > 0 )
        {
          v8 = 3;
          goto LABEL_43;
        }
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v13 = sub_18006FD80(a1, DestinationString.Buffer, &v26, v11, v28);
      if ( v13 < 0 )
        return (unsigned int)v13;
      v8 = v26;
      v5 = v28[0];
    }
    if ( !v27 )
      goto LABEL_43;
    v39[0] &= ~0x20u;
    v13 = sub_1800F965C((__int64 *)(v36 + 24), (__int64)v39, v28);
    if ( v13 >= 0 )
    {
      v5 = v28[0];
      v8 = 2;
      goto LABEL_43;
    }
    return (unsigned int)v13;
  }
  return 3221225485LL;
}
