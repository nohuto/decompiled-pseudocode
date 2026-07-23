/*
 * XREFs of sub_1800031BC @ 0x1800031BC
 * Callers:
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18001130C @ 0x18001130C (sub_18001130C.c)
 */

__int64 __fastcall sub_1800031BC(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, __int64 a6)
{
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // r15
  unsigned __int64 v11; // r8
  unsigned __int64 i; // r9
  _QWORD *v13; // rbx
  __int64 j; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  char v24; // cl
  unsigned __int64 v25; // rdx
  int v26; // r8d
  char v27; // cl
  unsigned int v28; // ebx
  __int64 v29; // r13
  __int64 v30; // r14
  unsigned int v31; // r12d
  __int16 *v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // [rsp+20h] [rbp-48h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  unsigned int v36; // [rsp+78h] [rbp+10h]

  v7 = qword_18015A448 ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v36 = v7;
  if ( a3 == a2 )
  {
    LOWORD(v8) = *(_WORD *)(a2 + 34);
    v9 = 0;
  }
  else
  {
    v20 = (unsigned __int16)v7;
    v21 = a3 - HIWORD(v7) - a2;
    v22 = *(_QWORD *)(a1 + 8LL * byte_1801190F0[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4] + 224);
    v23 = *(unsigned int *)(v22 + 72);
    v24 = *(_BYTE *)(v22 + 76);
    if ( (_DWORD)v23 )
    {
      v25 = ((unsigned __int64)v21 * v23) >> v24;
      v26 = v21 - v25 * v20;
    }
    else
    {
      LODWORD(v25) = v21 >> v24;
      v26 = ((1 << v24) - 1) & v21;
    }
    if ( v26 )
      return 0LL;
    v8 = *(unsigned __int16 *)(a2 + 34);
    v9 = v25 + 1;
    if ( (int)v25 + 1 >= v8 )
      return 0LL;
  }
  v10 = (unsigned int)(2 * v9);
  v34 = 2 * (unsigned int)(unsigned __int16)v8;
  v35 = a2 + 48;
  while ( 1 )
  {
    v11 = v34 - 1;
    for ( i = (unsigned int)v10 & (unsigned __int64)-(__int64)((unsigned int)v10 < v34); ; i = 0LL )
    {
      if ( v11 - i == -1LL )
        goto LABEL_14;
      v13 = (_QWORD *)(v35 + 8 * (i >> 6));
      for ( j = ~*v13 | ((1LL << (i & 0x3F)) - 1); j == -1; j = ~*v13 )
      {
        if ( (unsigned __int64)++v13 > v35 + 8 * (v11 >> 6) )
          goto LABEL_14;
      }
      _BitScanForward64(&v15, ~j);
      v16 = v15 + (((__int64)v13 - v35) >> 3 << 6);
      if ( v16 > v11 )
      {
LABEL_14:
        LODWORD(v16) = -1;
      }
      else if ( v16 != -1LL )
      {
        break;
      }
      if ( !i )
        break;
      v19 = v10 + 1;
      if ( v10 + 1 > v34 )
        v19 = v34;
      v11 = v19 - 1;
    }
    if ( (_DWORD)v16 == -1 || (unsigned int)v16 < (unsigned int)v10 )
      return 0LL;
    v27 = *(_BYTE *)(a2 + 44);
    v28 = (unsigned int)v16 >> 1;
    v29 = a2 + *(unsigned __int16 *)(a2 + 46);
    v30 = (HIWORD(v36) + v28 * (unsigned __int16)v36) >> v27;
    v31 = ((HIWORD(v36) + v28 * (unsigned __int16)v36 + (unsigned __int16)v36 - 1) >> v27) + 1;
    v17 = a2 + HIWORD(v36) + v28 * (unsigned __int16)v36;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v30 < v31 )
    {
      v32 = (__int16 *)(v29 + 2 * v30);
      while ( *v32 >= 0 )
      {
        LODWORD(v30) = v30 + 1;
        ++v32;
        if ( (unsigned int)v30 >= v31 )
          goto LABEL_30;
      }
      LODWORD(v30) = -1;
    }
LABEL_30:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v30 != -1 )
    {
      v33 = sub_18001130C(a2, v17, v28, a6);
      *a4 = v33;
      *a5 = (unsigned __int16)v36 - v33;
      return v17;
    }
    v10 = (unsigned int)(v10 + 2);
  }
}
