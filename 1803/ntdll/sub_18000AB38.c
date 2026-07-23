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

NTSTATUS __fastcall sub_18000AB38(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v7; // r10d
  int v8; // ebx
  unsigned int v10; // r13d
  __int64 v11; // r11
  unsigned int v12; // edx
  _DWORD *v13; // r12
  int v14; // esi
  unsigned int v15; // eax
  unsigned int v16; // edi
  char *v17; // r15
  PWCH Buffer; // rsi
  int v19; // ecx
  NTSTATUS result; // eax
  int v21; // eax
  bool v22; // cf
  unsigned int v23; // ecx
  unsigned int v24; // edx
  signed int v25; // edi
  __int64 v26; // rax
  unsigned __int64 v27; // r8
  unsigned int v28; // eax
  PWCH v29; // rcx
  unsigned __int64 v30; // r13
  int v31; // ecx
  WCHAR *i; // rdi
  unsigned int v34; // r12d
  int v35; // eax
  _WORD *v36; // rdi
  _WORD *v38; // rdi
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+50h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v44; // [rsp+C0h] [rbp+58h]
  _DWORD *v45; // [rsp+C8h] [rbp+60h]

  v45 = a4;
  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = a1;
  v12 = *(unsigned __int8 *)(a2 + 32);
  v13 = (_DWORD *)a3;
  v44 = a3;
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
          Buffer = (PWCH)((char *)v13 + v15);
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
            result = -1073741789;
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
          v44 = a3;
          v7 = v14 - a3;
          goto LABEL_6;
        }
        return -1073741764;
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
  Buffer = *(PWCH *)(a2 + 40);
  if ( !v16 )
  {
    if ( v12 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      v38 = *(_WORD **)(a2 + 40);
      while ( *v38++ )
        ;
      v16 = (_DWORD)v38 - (_DWORD)Buffer;
    }
    else if ( v12 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      LODWORD(v36) = *(_QWORD *)(a2 + 40);
      if ( *Buffer )
      {
        v36 = *(_WORD **)(a2 + 40);
        do
        {
          while ( *v36++ )
            ;
        }
        while ( *v36 );
      }
      v16 = (_DWORD)v36 - (_DWORD)Buffer + 2;
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
    return -1073741788;
LABEL_10:
  if ( (v19 & 0x10) == 0 )
  {
    if ( v10 == 7 )
    {
      v30 = (unsigned __int64)Buffer + v16 - 4;
      v31 = 0;
      for ( i = Buffer; (unsigned __int64)i < v30; Buffer = i )
      {
        while ( *i++ )
          ;
        v34 = (_DWORD)i - (_DWORD)Buffer;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v31 = sub_18000AF00(v11);
            if ( v31 < 0 )
              return v31;
          }
          v35 = sub_18000AE4C(1LL, Buffer, v34, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          v35 = (*(__int64 (__fastcall **)(char *, __int64, PWCH, _QWORD, __int64, _QWORD))a2)(
                  v17,
                  1LL,
                  Buffer,
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
      return v31;
    }
    if ( v10 == 2 )
    {
      v28 = v16 - 2;
      if ( v16 - 2 <= 0xFFFA )
      {
        v29 = Buffer;
        if ( v16 != 2 )
        {
          while ( *v29 != 37 )
          {
            ++v29;
            v28 -= 2;
            if ( !v28 )
              goto LABEL_13;
          }
          Source.Buffer = Buffer;
          Source.MaximumLength = v16;
          Source.Length = v16 - 2;
          Destination.Buffer = (PWCH)a3;
          Destination.Length = 0;
          if ( v7 <= 0 )
          {
            Destination.MaximumLength = 0;
          }
          else if ( (unsigned __int64)v7 > 0xFFFE )
          {
            Destination.MaximumLength = -2;
            *(_WORD *)(a3 + 65532) = 0;
          }
          else
          {
            Destination.MaximumLength = v7;
            *(_WORD *)(a3 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
          v10 = 1;
          if ( result < 0 )
          {
            if ( result == -1073741789 )
              *v45 = ReturnedLength + v44 - (_DWORD)v13;
            if ( result != -2147483643
              && (result != -1073741789 || Destination.MaximumLength != 0xFFFE && ReturnedLength <= 0xFFFC) )
            {
              return result;
            }
          }
          else
          {
            Buffer = Destination.Buffer;
            v16 = Destination.Length + 2;
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
      if ( result < 0 )
        return result;
    }
    v21 = sub_18000AE4C(v10, Buffer, v16, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(char *, _QWORD, PWCH, _QWORD, __int64, _QWORD))a2)(
            v17,
            v10,
            Buffer,
            v16,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v21 != -1073741789 )
    return v21;
  return v8;
}
