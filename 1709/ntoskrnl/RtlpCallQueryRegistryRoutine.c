/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1405208B0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x140520470 (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x14051D340 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x14059074C (RtlpValidateKeyTrust.c)
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
  int v8; // edx
  unsigned __int64 v11; // r10
  unsigned int v12; // ebp
  int v13; // r14d
  int v14; // eax
  int v15; // r8d
  int v16; // ecx
  __int64 v17; // rax
  unsigned int v18; // ecx
  char *v19; // rdi
  signed int v20; // ebp
  unsigned int *v21; // r14
  unsigned int v22; // ebx
  int v23; // r8d
  __int64 result; // rax
  _WORD *v25; // rcx
  unsigned int v26; // ecx
  __int64 v27; // rax
  unsigned int *v28; // rbx
  unsigned int *v29; // r12
  __int16 v30; // ax
  unsigned int v31; // ebp
  int RegistryDirect; // eax
  unsigned int v34; // r9d
  unsigned int *v35; // rax

  v8 = *a4;
  *a4 = 0;
  v11 = (unsigned __int64)a3;
  v12 = (unsigned __int8)*(_DWORD *)(a2 + 32);
  v13 = (_DWORD)a3 + v8;
  v14 = a3[1];
  if ( v14 )
  {
    v15 = a3[2];
    if ( v15 != -1 )
    {
      v16 = a3[3];
      if ( v16 || v14 != v12 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v19 = *(char **)(a2 + 16);
LABEL_10:
          v12 = a3[1];
          v21 = (_DWORD *)((char *)a3 + (unsigned int)a3[2]);
          v22 = a3[3];
          goto LABEL_11;
        }
        if ( v16 )
          v17 = (unsigned int)(v16 + v15);
        else
          v17 = (unsigned int)(a3[4] + 20);
        v18 = a3[4];
        v19 = (char *)(((unsigned __int64)a3 + v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v20 = v18 + 2;
        if ( v18 < 0xFFFFFFFE )
        {
          if ( v13 - (int)v19 < v20 )
          {
            result = 3221225507LL;
            *a4 = v20 + (_DWORD)v19 - (_DWORD)a3;
            return result;
          }
          memmove(v19, a3 + 5, v18);
          v11 = (unsigned __int64)&v19[v20 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          *(_WORD *)&v19[a3[4]] = 0;
          v8 = v13 - v11;
          goto LABEL_10;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !(unsigned __int8)*(_DWORD *)(a2 + 32) )
    return (*(_BYTE *)(a2 + 8) & 4) != 0 ? 0xC0000034 : 0;
  v22 = *(_DWORD *)(a2 + 48);
  v19 = *(char **)(a2 + 16);
  v21 = *(unsigned int **)(a2 + 40);
  if ( !v22 )
  {
    v25 = *(_WORD **)(a2 + 40);
    if ( v12 - 1 <= 1 )
    {
      if ( !v21 )
        return 3221225532LL;
      while ( *v25++ )
        ;
      v22 = (_DWORD)v25 - (_DWORD)v21;
    }
    else if ( v12 == 7 )
    {
      if ( !v21 )
        return 3221225532LL;
      if ( *(_WORD *)v21 )
      {
        do
        {
          while ( *v25++ )
            ;
        }
        while ( *v25 );
      }
      v22 = (_DWORD)v25 - (_DWORD)v21 + 2;
    }
  }
LABEL_11:
  v23 = *(_DWORD *)(a2 + 8);
  if ( (v23 & 0x20) != 0 )
  {
    if ( (v23 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v12 )
        return 3221225508LL;
    }
    else if ( (v23 & 0x80u) != 0 && (v12 - 1 <= 1 || v12 == 7) )
    {
      return (v23 & 4) != 0 ? 0xC0000034 : 0;
    }
  }
  if ( (v23 & 0x10) != 0 )
    goto LABEL_15;
  if ( v12 != 7 )
  {
    if ( v12 == 2 )
    {
      v34 = v22 - 2;
      if ( v22 - 2 <= 0xFFFA )
      {
        v35 = v21;
        if ( v22 != 2 )
        {
          while ( *(_WORD *)v35 != 37 )
          {
            v35 = (unsigned int *)((char *)v35 + 2);
            v34 -= 2;
            if ( !v34 )
              goto LABEL_15;
          }
          if ( v8 > 0 )
          {
            if ( (unsigned __int64)v8 > 0xFFFE )
              *(_WORD *)(v11 + 65532) = 0;
            else
              *(_WORD *)(v11 + 2 * ((unsigned __int64)v8 >> 1) - 2) = 0;
          }
          return 3221225485LL;
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
      result = RtlpQueryRegistryDirect(v12, v21, v22, *(unsigned int **)(a2 + 24));
    }
    else
    {
      result = (*(__int64 (__fastcall **)(char *, _QWORD, unsigned int *, _QWORD, __int64, _QWORD))a2)(
                 v19,
                 v12,
                 v21,
                 v22,
                 a5,
                 *(_QWORD *)(a2 + 24));
    }
    if ( (_DWORD)result == -1073741789 )
      return 0LL;
    return result;
  }
  v26 = 0;
  v27 = v22;
  v28 = v21;
  v29 = (unsigned int *)((char *)v21 + v27 - 4);
  if ( v21 < v29 )
  {
    do
    {
      do
      {
        v30 = *(_WORD *)v28;
        v28 = (unsigned int *)((char *)v28 + 2);
      }
      while ( v30 );
      v31 = (_DWORD)v28 - (_DWORD)v21;
      if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
      {
        if ( a7 )
        {
          v26 = RtlpValidateKeyTrust(a1);
          if ( (v26 & 0x80000000) != 0 )
            return v26;
        }
        RegistryDirect = RtlpQueryRegistryDirect(1u, v21, v31, *(unsigned int **)(a2 + 24));
        *(_QWORD *)(a2 + 24) += 16LL;
      }
      else
      {
        RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, unsigned int *, _QWORD, __int64, _QWORD))a2)(
                           v19,
                           1LL,
                           v21,
                           v31,
                           a5,
                           *(_QWORD *)(a2 + 24));
      }
      v26 = RegistryDirect;
      if ( RegistryDirect == -1073741789 )
      {
        v26 = 0;
      }
      else if ( RegistryDirect < 0 )
      {
        return v26;
      }
      v21 = v28;
    }
    while ( v28 < v29 );
  }
  return v26;
}
