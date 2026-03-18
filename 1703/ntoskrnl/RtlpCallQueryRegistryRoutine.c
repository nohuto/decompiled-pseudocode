/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1405568D4
 * Callers:
 *     RtlpQueryRegistryValues @ 0x14055642C (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x140556DEC (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x140556FB0 (RtlpValidateKeyTrust.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v7; // r10d
  unsigned int v8; // ebx
  unsigned int v11; // ebp
  int v13; // eax
  int v14; // r12d
  unsigned __int64 v15; // r11
  int v16; // edx
  int v17; // ecx
  char *v18; // r15
  _WORD *v19; // rdi
  unsigned int v20; // esi
  int v21; // edx
  unsigned int v22; // eax
  __int64 result; // rax
  __int64 v24; // r15
  unsigned int v25; // ecx
  signed int v26; // edi
  _WORD *v27; // rcx
  bool v28; // cf
  unsigned __int64 v29; // r12
  int v30; // ecx
  _WORD *i; // rsi
  unsigned int v33; // ebp
  int RegistryDirect; // eax
  unsigned int v36; // eax
  _WORD *v37; // rcx

  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v11 = (unsigned __int8)*(_DWORD *)(a2 + 32);
  v13 = a3[1];
  v14 = (_DWORD)a3 + v7;
  v15 = (unsigned __int64)a3;
  if ( v13 )
  {
    v16 = a3[2];
    if ( v16 != -1 )
    {
      v17 = a3[3];
      if ( v17 || v13 != v11 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v18 = *(char **)(a2 + 16);
LABEL_6:
          v11 = a3[1];
          v19 = (_WORD *)((char *)a3 + (unsigned int)a3[2]);
          v20 = a3[3];
          goto LABEL_7;
        }
        if ( v17 )
          v24 = (unsigned int)(v17 + v16);
        else
          v24 = (unsigned int)(a3[4] + 20);
        v25 = a3[4];
        v18 = (char *)(((unsigned __int64)a3 + v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = v25 + 2;
        if ( v25 < 0xFFFFFFFE )
        {
          if ( v14 - (int)v18 < v26 )
          {
            result = 3221225507LL;
            *a4 = v26 + (_DWORD)v18 - (_DWORD)a3;
            return result;
          }
          memmove(v18, a3 + 5, v25);
          v15 = (unsigned __int64)&v18[v26 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          *(_WORD *)&v18[a3[4]] = 0;
          v7 = v14 - v15;
          goto LABEL_6;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !v11 )
  {
    v28 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v28 ? 0xC0000034 : 0;
  }
  v20 = *(_DWORD *)(a2 + 48);
  v18 = *(char **)(a2 + 16);
  v19 = *(_WORD **)(a2 + 40);
  if ( !v20 )
  {
    v27 = *(_WORD **)(a2 + 40);
    if ( v11 - 1 <= 1 )
    {
      if ( !v19 )
        return 3221225532LL;
      while ( *v27++ )
        ;
      v20 = (_DWORD)v27 - (_DWORD)v19;
    }
    else if ( v11 == 7 )
    {
      if ( !v19 )
        return 3221225532LL;
      if ( *v19 )
      {
        do
        {
          while ( *v27++ )
            ;
        }
        while ( *v27 );
      }
      v20 = (_DWORD)v27 - (_DWORD)v19 + 2;
    }
  }
LABEL_7:
  v21 = *(_DWORD *)(a2 + 8);
  if ( (v21 & 0x20) == 0 )
    goto LABEL_10;
  if ( (v21 & 0x100) == 0 )
  {
    if ( (v21 & 0x80u) == 0 || v11 - 1 > 1 && v11 != 7 )
      goto LABEL_10;
    v28 = (v21 & 4) != 0;
    return v28 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v11 )
    return 3221225508LL;
LABEL_10:
  if ( (v21 & 0x10) == 0 )
  {
    if ( v11 == 7 )
    {
      v29 = (unsigned __int64)v19 + v20 - 4;
      v30 = 0;
      for ( i = v19; (unsigned __int64)i < v29; v19 = i )
      {
        while ( *i++ )
          ;
        v33 = (_DWORD)i - (_DWORD)v19;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v30 = RtlpValidateKeyTrust(a1);
            if ( v30 < 0 )
              return (unsigned int)v30;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v19, v33, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v18,
                             1LL,
                             v19,
                             v33,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v30 = 0;
        if ( RegistryDirect != -1073741789 )
          v30 = RegistryDirect;
        if ( v30 < 0 )
          break;
      }
      return (unsigned int)v30;
    }
    if ( v11 == 2 )
    {
      v36 = v20 - 2;
      if ( v20 - 2 <= 0xFFFA )
      {
        v37 = v19;
        if ( v20 != 2 )
        {
          while ( *v37 != 37 )
          {
            ++v37;
            v36 -= 2;
            if ( !v36 )
              goto LABEL_13;
          }
          if ( v7 > 0 )
          {
            if ( (unsigned __int64)v7 > 0xFFFE )
              *(_WORD *)(v15 + 65532) = 0;
            else
              *(_WORD *)(v15 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          return 3221225485LL;
        }
      }
    }
  }
LABEL_13:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1);
      if ( (int)result < 0 )
        return result;
    }
    v22 = RtlpQueryRegistryDirect(v11, v19, v20, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v22 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v18,
            v11,
            v19,
            v20,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v22 != -1073741789 )
    return v22;
  return v8;
}
