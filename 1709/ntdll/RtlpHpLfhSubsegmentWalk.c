/*
 * XREFs of RtlpHpLfhSubsegmentWalk @ 0x180062508
 * Callers:
 *     RtlpHpSegWalk @ 0x180061ADC (RtlpHpSegWalk.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180060A70 (RtlpHpLfhSubsegmentSizeBlockInternal.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  int v7; // eax
  int v8; // ecx
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned __int64 i; // r9
  _QWORD *v12; // rbx
  __int64 j; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // rbp
  char v17; // cl
  unsigned int v18; // ebx
  __int64 v19; // r13
  char *v20; // rdx
  __int64 v21; // r14
  unsigned int v22; // r12d
  __int16 *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // r8d
  unsigned __int64 v27; // rdx
  int v28; // r8d
  unsigned __int64 v29; // r8
  char v30; // cl
  unsigned __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+28h] [rbp-40h]
  int v33; // [rsp+78h] [rbp+10h]

  v7 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v33 = v7;
  if ( a3 == a2 )
  {
    v8 = 0;
  }
  else
  {
    v25 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                    + 208);
    v26 = a3 - HIWORD(v7) - a2;
    if ( *(_DWORD *)(v25 + 72) )
    {
      v27 = (v26 * (unsigned __int64)*(unsigned int *)(v25 + 72)) >> *(_BYTE *)(v25 + 76);
      v28 = v26 - v27 * (unsigned __int16)v7;
    }
    else
    {
      v30 = *(_BYTE *)(v25 + 76);
      LODWORD(v27) = v26 >> v30;
      v28 = ((1 << v30) - 1) & v26;
    }
    if ( v28 )
      return 0LL;
    v8 = v27 + 1;
    if ( (int)v27 + 1 >= (unsigned int)*(unsigned __int16 *)(a2 + 34) )
      return 0LL;
  }
  v9 = (unsigned int)(2 * v8);
  v31 = 2 * (unsigned int)*(unsigned __int16 *)(a2 + 34);
  v32 = a2 + 48;
  while ( 2 )
  {
    v10 = v31 - 1;
    for ( i = (unsigned int)v9 & (unsigned __int64)-(__int64)((unsigned int)v9 < v31); ; i = 0LL )
    {
      if ( v10 - i == -1LL )
        goto LABEL_11;
      v12 = (_QWORD *)(v32 + 8 * (i >> 6));
      for ( j = ((1LL << (i & 0x3F)) - 1) | ~*v12; j == -1; j = ~*v12 )
      {
        if ( (unsigned __int64)++v12 > v32 + 8 * (v10 >> 6) )
          goto LABEL_11;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v14 = j + (((__int64)v12 - v32) >> 3 << 6);
      if ( v14 > v10 )
      {
LABEL_11:
        LODWORD(v14) = -1;
        goto LABEL_12;
      }
      if ( v14 != -1LL )
        break;
LABEL_12:
      if ( !i )
        break;
      v29 = v9 + 1;
      if ( v9 + 1 > v31 )
        v29 = v31;
      v10 = v29 - 1;
    }
    if ( (_DWORD)v14 == -1 || (unsigned int)v14 < (unsigned int)v9 )
      return 0LL;
    v17 = *(_BYTE *)(a2 + 44);
    v18 = (unsigned int)v14 >> 1;
    v19 = a2 + *(unsigned __int16 *)(a2 + 46);
    v20 = (char *)(HIWORD(v33) + v18 * (unsigned __int16)v33);
    v21 = (HIWORD(v33) + v18 * (unsigned __int16)v33) >> v17;
    v22 = (((unsigned int)v20 + (unsigned __int16)v33 - 1) >> v17) + 1;
    v15 = (__int64)&v20[a2];
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a2 + 24), v20, (unsigned __int16)v33, i);
    if ( (unsigned int)v21 < v22 )
    {
      v23 = (__int16 *)(v19 + 2 * v21);
      while ( *v23 >= 0 )
      {
        LODWORD(v21) = v21 + 1;
        ++v23;
        if ( (unsigned int)v21 >= v22 )
          goto LABEL_23;
      }
      LODWORD(v21) = -1;
    }
LABEL_23:
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a2 + 24));
    if ( (_DWORD)v21 == -1 )
    {
      v9 = (unsigned int)(v9 + 2);
      continue;
    }
    break;
  }
  v24 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v15, v18, a6);
  *a4 = v24;
  *a5 = (unsigned __int16)v33 - v24;
  return v15;
}
