/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x180066E90
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180066AA0 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlExpandEnvironmentStrings_U @ 0x18004D1D0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlpQueryRegistryDirect @ 0x180067234 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x1800672DC (RtlpValidateKeyTrust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        _WORD *a6,
        char a7)
{
  unsigned int v8; // ebx
  __int64 v9; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  int v13; // esi
  unsigned int v14; // r15d
  int v15; // ecx
  int v16; // eax
  char *v17; // r12
  _WORD *v18; // rsi
  unsigned int v19; // edi
  int v20; // ecx
  __int64 v21; // rdx
  __int64 result; // rax
  unsigned int v23; // eax
  _WORD *v24; // rcx
  bool v25; // cf
  __int64 v26; // rax
  unsigned int v27; // ecx
  int v28; // edi
  unsigned int v29; // eax
  _WORD *v30; // rcx
  unsigned __int64 v31; // r13
  int v32; // ecx
  _WORD *i; // rdi
  __int64 v35; // rdx
  unsigned int v36; // r15d
  int RegistryDirect; // eax
  unsigned __int16 v40; // [rsp+40h] [rbp-28h] BYREF
  __int16 v41; // [rsp+42h] [rbp-26h]
  _WORD *v42; // [rsp+48h] [rbp-20h]
  unsigned __int16 v43[4]; // [rsp+50h] [rbp-18h] BYREF
  _WORD *v44; // [rsp+58h] [rbp-10h]
  unsigned int v46; // [rsp+B8h] [rbp+50h] BYREF
  _DWORD *v47; // [rsp+C0h] [rbp+58h]
  _DWORD *v48; // [rsp+C8h] [rbp+60h]

  v48 = a4;
  v8 = 0;
  v9 = *a4;
  *a4 = 0;
  v11 = (unsigned __int64)a3;
  v12 = a1;
  v47 = a3;
  v13 = v9 + (_DWORD)a3;
  v14 = *(unsigned __int8 *)(a2 + 32);
  if ( a3[1] )
  {
    v15 = a3[2];
    if ( v15 != -1 )
    {
      v16 = a3[3];
      if ( v16 || a3[1] != v14 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v17 = *(char **)(a2 + 16);
LABEL_6:
          v14 = a3[1];
          v18 = (_WORD *)((char *)a3 + (unsigned int)a3[2]);
          v19 = a3[3];
          goto LABEL_7;
        }
        if ( v16 )
          v26 = (unsigned int)(v15 + v16);
        else
          v26 = (unsigned int)(a3[4] + 20);
        v27 = a3[4];
        v17 = (char *)(((unsigned __int64)a3 + v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v28 = v27 + 2;
        if ( v27 + 2 >= 2 )
        {
          if ( v13 - (int)v17 < v28 )
          {
            result = 3221225507LL;
            *a4 = v28 + (_DWORD)v17 - (_DWORD)a3;
            return result;
          }
          memmove(v17, a3 + 5, v27);
          v12 = a1;
          *(_WORD *)&v17[a3[4]] = 0;
          v11 = (unsigned __int64)&v17[v28 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v47 = (_DWORD *)v11;
          v9 = (unsigned int)(v13 - v11);
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !*(_BYTE *)(a2 + 32) )
  {
    v25 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v25 ? 0xC0000034 : 0;
  }
  v19 = *(_DWORD *)(a2 + 48);
  v17 = *(char **)(a2 + 16);
  v18 = *(_WORD **)(a2 + 40);
  if ( !v19 )
  {
    v24 = *(_WORD **)(a2 + 40);
    if ( v14 - 1 <= 1 )
    {
      if ( !v18 )
        return 3221225532LL;
      while ( *v24++ )
        ;
      v19 = (_DWORD)v24 - (_DWORD)v18;
    }
    else if ( v14 == 7 )
    {
      if ( !v18 )
        return 3221225532LL;
      if ( *v18 )
      {
        do
        {
          while ( *v24++ )
            ;
        }
        while ( *v24 );
      }
      v19 = (_DWORD)v24 - (_DWORD)v18 + 2;
    }
  }
LABEL_7:
  v20 = *(_DWORD *)(a2 + 8);
  if ( (v20 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v20 & 0x100) == 0 )
  {
    if ( (v20 & 0x80u) == 0 || v14 - 1 > 1 && v14 != 7 )
      goto LABEL_10;
    v25 = (v20 & 4) != 0;
    return v25 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v14 )
    return 3221225508LL;
LABEL_10:
  if ( (v20 & 0x10) == 0 )
  {
    if ( v14 == 7 )
    {
      v31 = (unsigned __int64)v18 + v19 - 4;
      v32 = 0;
      for ( i = v18; (unsigned __int64)i < v31; v18 = i )
      {
        while ( *i++ )
          ;
        v35 = *(unsigned int *)(a2 + 8);
        v36 = (_DWORD)i - (_DWORD)v18;
        if ( (v35 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v32 = RtlpValidateKeyTrust(v12, v35, v9);
            if ( v32 < 0 )
              return (unsigned int)v32;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v18, v36, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v17,
                             1LL,
                             v18,
                             v36,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v32 = 0;
        if ( RegistryDirect != -1073741789 )
          v32 = RegistryDirect;
        if ( v32 < 0 )
          break;
        v12 = a1;
      }
      return (unsigned int)v32;
    }
    if ( v14 == 2 )
    {
      v29 = v19 - 2;
      if ( v19 - 2 <= 0xFFFA )
      {
        v30 = v18;
        if ( v19 != 2 )
        {
          while ( *v30 != 37 )
          {
            ++v30;
            v29 -= 2;
            if ( !v29 )
              goto LABEL_13;
          }
          v44 = v18;
          v43[1] = v19;
          v43[0] = v19 - 2;
          v42 = (_WORD *)v11;
          v40 = 0;
          if ( (int)v9 <= 0 )
          {
            v41 = 0;
          }
          else if ( (unsigned __int64)(int)v9 > 0xFFFE )
          {
            v41 = -2;
            *(_WORD *)(v11 + 65532) = 0;
          }
          else
          {
            v41 = v9;
            *(_WORD *)(v11 + 2 * ((unsigned __int64)(int)v9 >> 1) - 2) = 0;
          }
          result = RtlExpandEnvironmentStrings_U(a6, v43, (__int64)&v40, &v46);
          v14 = 1;
          if ( (int)result < 0 )
          {
            if ( (_DWORD)result == -1073741789 )
              *v48 = v46 + (_DWORD)v47 - (_DWORD)a3;
            if ( (_DWORD)result != -2147483643 && ((_DWORD)result != -1073741789 || v41 != -2 && v46 <= 0xFFFC) )
              return result;
          }
          else
          {
            v18 = v42;
            v19 = v40 + 2;
          }
        }
      }
    }
  }
LABEL_13:
  v21 = *(unsigned int *)(a2 + 8);
  if ( (v21 & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1, v21, v9);
      if ( (int)result < 0 )
        return result;
    }
    v23 = RtlpQueryRegistryDirect(v14, v18, v19, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v17,
            v14,
            v18,
            v19,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v23 != -1073741789 )
    return v23;
  return v8;
}
