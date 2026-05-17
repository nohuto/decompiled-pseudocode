/*
 * XREFs of sub_18000AB38 @ 0x18000AB38
 * Callers:
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 * Callees:
 *     sub_18000AE4C @ 0x18000AE4C (sub_18000AE4C.c)
 *     sub_18000AF00 @ 0x18000AF00 (sub_18000AF00.c)
 *     RtlExpandEnvironmentStrings_U @ 0x18000B090 (RtlExpandEnvironmentStrings_U.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_18000AB38(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v7; // r10d
  unsigned int v8; // ebx
  unsigned int v10; // r13d
  __int64 v11; // r11
  unsigned int v12; // edx
  _DWORD *v13; // r12
  int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // edi
  char *v17; // r15
  _WORD *v18; // rsi
  int v19; // ecx
  __int64 result; // rax
  unsigned int v21; // eax
  bool v22; // cf
  unsigned int v23; // ecx
  unsigned int v24; // edx
  signed int v25; // edi
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned int v28; // eax
  _WORD *v29; // rcx
  unsigned __int64 v30; // r13
  int v31; // ecx
  _WORD *i; // rdi
  unsigned int v34; // r12d
  int v35; // eax
  _WORD *v36; // rdi
  _WORD *v38; // rdi
  unsigned __int16 v40; // [rsp+40h] [rbp-28h] BYREF
  __int16 v41; // [rsp+42h] [rbp-26h]
  _WORD *v42; // [rsp+48h] [rbp-20h]
  _WORD v43[4]; // [rsp+50h] [rbp-18h] BYREF
  _WORD *v44; // [rsp+58h] [rbp-10h]
  unsigned int v46; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v47; // [rsp+C0h] [rbp+58h]
  _DWORD *v48; // [rsp+C8h] [rbp+60h]

  v48 = a4;
  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = a1;
  v12 = *(unsigned __int8 *)(a2 + 32);
  v13 = (_DWORD *)a3;
  v47 = a3;
  v14 = a3 + v7;
  if ( v10 )
  {
    v15 = *(_DWORD *)(a3 + 8);
    if ( v15 != -1 )
    {
      v16 = *(_DWORD *)(a3 + 12);
      if ( v16 || v10 != v12 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v17 = *(char **)(a2 + 16);
LABEL_6:
          v18 = (_WORD *)((char *)v13 + v15);
          goto LABEL_7;
        }
        v23 = *(_DWORD *)(a3 + 16);
        v24 = v16 + v15;
        if ( !v16 )
          v24 = v23 + 20;
        v25 = v23 + 2;
        v17 = (char *)((v24 + a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v23 < 0xFFFFFFFE )
        {
          if ( v14 - (int)v17 < v25 )
          {
            result = 3221225507LL;
            *a4 = v25 + (_DWORD)v17 - a3;
            return result;
          }
          memmove(v17, (const void *)(a3 + 20), v23);
          v11 = a1;
          *(_WORD *)&v17[v13[4]] = 0;
          v10 = v13[1];
          v26 = v25;
          v16 = v13[3];
          v27 = (unsigned __int64)&v17[v26 + 7];
          v15 = v13[2];
          a3 = v27 & 0xFFFFFFFFFFFFFFF8uLL;
          v47 = a3;
          v7 = v14 - a3;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !v12 )
  {
    v22 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v22 ? 0xC0000034 : 0;
  }
  v16 = *(_DWORD *)(a2 + 48);
  v10 = v12;
  v17 = *(char **)(a2 + 16);
  v18 = *(_WORD **)(a2 + 40);
  if ( !v16 )
  {
    if ( v12 - 1 <= 1 )
    {
      if ( !v18 )
        return 3221225532LL;
      v38 = *(_WORD **)(a2 + 40);
      while ( *v38++ )
        ;
      v16 = (_DWORD)v38 - (_DWORD)v18;
    }
    else if ( v12 == 7 )
    {
      if ( !v18 )
        return 3221225532LL;
      LODWORD(v36) = *(_QWORD *)(a2 + 40);
      if ( *v18 )
      {
        v36 = *(_WORD **)(a2 + 40);
        do
        {
          while ( *v36++ )
            ;
        }
        while ( *v36 );
      }
      v16 = (_DWORD)v36 - (_DWORD)v18 + 2;
    }
  }
LABEL_7:
  v19 = *(_DWORD *)(a2 + 8);
  if ( (v19 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v19 & 0x100) == 0 )
  {
    if ( (v19 & 0x80u) == 0 || v10 - 1 > 1 && v10 != 7 )
      goto LABEL_10;
    v22 = (v19 & 4) != 0;
    return v22 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v10 )
    return 3221225508LL;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v10 == 7 )
    {
      v30 = (unsigned __int64)v18 + v16 - 4;
      v31 = 0;
      for ( i = v18; (unsigned __int64)i < v30; v18 = i )
      {
        while ( *i++ )
          ;
        v34 = (_DWORD)i - (_DWORD)v18;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v31 = sub_18000AF00(v11);
            if ( v31 < 0 )
              return (unsigned int)v31;
          }
          v35 = sub_18000AE4C(1LL, v18, v34, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          v35 = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                  v17,
                  1LL,
                  v18,
                  v34,
                  a5,
                  *(_QWORD *)(a2 + 24));
        }
        v31 = 0;
        if ( v35 != -1073741789 )
          v31 = v35;
        if ( v31 < 0 )
          break;
        v11 = a1;
      }
      return (unsigned int)v31;
    }
    if ( v10 == 2 )
    {
      v28 = v16 - 2;
      if ( v16 - 2 <= 0xFFFA )
      {
        v29 = v18;
        if ( v16 != 2 )
        {
          while ( *v29 != 37 )
          {
            ++v29;
            v28 -= 2;
            if ( !v28 )
              goto LABEL_13;
          }
          v44 = v18;
          v43[1] = v16;
          v43[0] = v16 - 2;
          v42 = (_WORD *)a3;
          v40 = 0;
          if ( v7 <= 0 )
          {
            v41 = 0;
          }
          else if ( (unsigned __int64)v7 > 0xFFFE )
          {
            v41 = -2;
            *(_WORD *)(a3 + 65532) = 0;
          }
          else
          {
            v41 = v7;
            *(_WORD *)(a3 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          result = RtlExpandEnvironmentStrings_U(a6, v43, &v40, &v46);
          v10 = 1;
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result == -1073741789 )
              *v48 = v46 + v47 - (_DWORD)v13;
            if ( (_DWORD)result != -2147483643 && ((_DWORD)result != -1073741789 || v41 != -2 && v46 <= 0xFFFC) )
              return result;
          }
          else
          {
            v18 = v42;
            v16 = v40 + 2;
          }
        }
      }
    }
  }
LABEL_13:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = sub_18000AF00(a1);
      if ( (int)result < 0 )
        return result;
    }
    v21 = sub_18000AE4C(v10, v18, v16, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v17,
            v10,
            v18,
            v16,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v21 != -1073741789 )
    return v21;
  return v8;
}
