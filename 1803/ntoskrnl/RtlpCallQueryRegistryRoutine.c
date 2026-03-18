/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x140502FC8
 * Callers:
 *     RtlpQueryRegistryValues @ 0x140502B1C (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x1405719B8 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x14057D5D4 (RtlpValidateKeyTrust.c)
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
  unsigned int v10; // r13d
  int v12; // eax
  int v14; // esi
  unsigned __int64 v15; // r11
  unsigned int v16; // r8d
  unsigned int v17; // edi
  unsigned int v18; // ecx
  __int64 v19; // rax
  signed int v20; // edi
  char *v21; // r15
  __int64 v22; // rax
  _WORD *v23; // rsi
  int v24; // edx
  unsigned int v25; // eax
  __int64 result; // rax
  bool v27; // cf
  unsigned __int64 v28; // r12
  int v29; // ecx
  _WORD *i; // rdi
  unsigned int v32; // ebp
  int RegistryDirect; // eax
  _WORD *v34; // rdi
  unsigned int v36; // eax
  _WORD *v37; // rcx
  _WORD *v38; // rdi

  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v10 = a3[1];
  v12 = *(_DWORD *)(a2 + 32);
  v14 = (_DWORD)a3 + v7;
  v15 = (unsigned __int64)a3;
  if ( v10 )
  {
    v16 = a3[2];
    if ( v16 != -1 )
    {
      v17 = *(_DWORD *)(v15 + 12);
      if ( v17 || v10 != (unsigned __int8)v12 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v21 = *(char **)(a2 + 16);
LABEL_10:
          v23 = (_WORD *)((char *)a3 + v16);
          goto LABEL_11;
        }
        v18 = a3[4];
        v19 = v17 + v16;
        if ( !v17 )
          v19 = v18 + 20;
        v20 = v18 + 2;
        v21 = (char *)(((unsigned __int64)a3 + v19 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v18 < 0xFFFFFFFE )
        {
          if ( v14 - (int)v21 < v20 )
          {
            result = 3221225507LL;
            *a4 = v20 + (_DWORD)v21 - (_DWORD)a3;
            return result;
          }
          memmove(v21, a3 + 5, v18);
          *(_WORD *)&v21[a3[4]] = 0;
          v10 = a3[1];
          v16 = a3[2];
          v22 = v20;
          v17 = a3[3];
          v15 = (unsigned __int64)&v21[v22 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v14 - v15;
          goto LABEL_10;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !(_BYTE)v12 )
  {
    v27 = (*(_BYTE *)(a2 + 8) & 4) != 0;
    return v27 ? 0xC0000034 : 0;
  }
  v17 = *(_DWORD *)(a2 + 48);
  v10 = (unsigned __int8)v12;
  v21 = *(char **)(a2 + 16);
  v23 = *(_WORD **)(a2 + 40);
  if ( !v17 )
  {
    if ( (unsigned int)(unsigned __int8)v12 - 1 <= 1 )
    {
      if ( !v23 )
        return 3221225532LL;
      v34 = *(_WORD **)(a2 + 40);
      while ( *v34++ )
        ;
      v17 = (_DWORD)v34 - (_DWORD)v23;
    }
    else if ( (unsigned __int8)v12 == 7 )
    {
      if ( !v23 )
        return 3221225532LL;
      LODWORD(v38) = *(_QWORD *)(a2 + 40);
      if ( *v23 )
      {
        v38 = *(_WORD **)(a2 + 40);
        do
        {
          while ( *v38++ )
            ;
        }
        while ( *v38 );
      }
      v17 = (_DWORD)v38 - (_DWORD)v23 + 2;
    }
  }
LABEL_11:
  v24 = *(_DWORD *)(a2 + 8);
  if ( (v24 & 0x20) == 0 )
    goto LABEL_12;
  if ( (v24 & 0x100) == 0 )
  {
    if ( (v24 & 0x80u) == 0 || v10 - 1 > 1 && v10 != 7 )
      goto LABEL_12;
    v27 = (v24 & 4) != 0;
    return v27 ? 0xC0000034 : 0;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v10 )
    return 3221225508LL;
LABEL_12:
  if ( (v24 & 0x10) == 0 )
  {
    if ( v10 == 7 )
    {
      v28 = (unsigned __int64)v23 + v17 - 4;
      v29 = 0;
      for ( i = v23; (unsigned __int64)i < v28; v23 = i )
      {
        while ( *i++ )
          ;
        v32 = (_DWORD)i - (_DWORD)v23;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v29 = RtlpValidateKeyTrust(a1);
            if ( v29 < 0 )
              return (unsigned int)v29;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v23, v32, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v21,
                             1LL,
                             v23,
                             v32,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v29 = 0;
        if ( RegistryDirect != -1073741789 )
          v29 = RegistryDirect;
        if ( v29 < 0 )
          break;
      }
      return (unsigned int)v29;
    }
    if ( v10 == 2 )
    {
      v36 = v17 - 2;
      if ( v17 - 2 <= 0xFFFA )
      {
        v37 = v23;
        if ( v17 != 2 )
        {
          while ( *v37 != 37 )
          {
            ++v37;
            v36 -= 2;
            if ( !v36 )
              goto LABEL_15;
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
LABEL_15:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(a1);
      if ( (int)result < 0 )
        return result;
    }
    v25 = RtlpQueryRegistryDirect(v10, v23, v17, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v25 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v21,
            v10,
            v23,
            v17,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v25 != -1073741789 )
    return v25;
  return v8;
}
