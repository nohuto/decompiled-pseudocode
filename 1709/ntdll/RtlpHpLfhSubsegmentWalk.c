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
  __int64 v20; // r14
  unsigned int v21; // r12d
  __int16 *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r8d
  unsigned __int64 v26; // rdx
  int v27; // r8d
  unsigned __int64 v28; // r8
  char v29; // cl
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+28h] [rbp-40h]
  int v32; // [rsp+78h] [rbp+10h]

  v7 = RtlpLFHKey ^ *(_DWORD *)(a2 + 40) ^ ((unsigned int)a2 >> 12);
  v32 = v7;
  if ( a3 == a2 )
  {
    v8 = 0;
  }
  else
  {
    v24 = *(_QWORD *)(a1
                    + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)((unsigned int)(unsigned __int16)v7 + 15) >> 4]
                    + 208);
    v25 = a3 - HIWORD(v7) - a2;
    if ( *(_DWORD *)(v24 + 72) )
    {
      v26 = (v25 * (unsigned __int64)*(unsigned int *)(v24 + 72)) >> *(_BYTE *)(v24 + 76);
      v27 = v25 - v26 * (unsigned __int16)v7;
    }
    else
    {
      v29 = *(_BYTE *)(v24 + 76);
      LODWORD(v26) = v25 >> v29;
      v27 = ((1 << v29) - 1) & v25;
    }
    if ( v27 )
      return 0LL;
    v8 = v26 + 1;
    if ( (int)v26 + 1 >= (unsigned int)*(unsigned __int16 *)(a2 + 34) )
      return 0LL;
  }
  v9 = (unsigned int)(2 * v8);
  v30 = 2 * (unsigned int)*(unsigned __int16 *)(a2 + 34);
  v31 = a2 + 48;
  while ( 2 )
  {
    v10 = v30 - 1;
    for ( i = (unsigned int)v9 & (unsigned __int64)-(__int64)((unsigned int)v9 < v30); ; i = 0LL )
    {
      if ( v10 - i == -1LL )
        goto LABEL_11;
      v12 = (_QWORD *)(v31 + 8 * (i >> 6));
      for ( j = ((1LL << (i & 0x3F)) - 1) | ~*v12; j == -1; j = ~*v12 )
      {
        if ( (unsigned __int64)++v12 > v31 + 8 * (v10 >> 6) )
          goto LABEL_11;
      }
      _BitScanForward64((unsigned __int64 *)&j, ~j);
      v14 = j + (((__int64)v12 - v31) >> 3 << 6);
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
      v28 = v9 + 1;
      if ( v9 + 1 > v30 )
        v28 = v30;
      v10 = v28 - 1;
    }
    if ( (_DWORD)v14 == -1 || (unsigned int)v14 < (unsigned int)v9 )
      return 0LL;
    v17 = *(_BYTE *)(a2 + 44);
    v18 = (unsigned int)v14 >> 1;
    v19 = a2 + *(unsigned __int16 *)(a2 + 46);
    v20 = (HIWORD(v32) + v18 * (unsigned __int16)v32) >> v17;
    v21 = ((HIWORD(v32) + v18 * (unsigned __int16)v32 + (unsigned __int16)v32 - 1) >> v17) + 1;
    v15 = a2 + HIWORD(v32) + v18 * (unsigned __int16)v32;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (unsigned int)v20 < v21 )
    {
      v22 = (__int16 *)(v19 + 2 * v20);
      while ( *v22 >= 0 )
      {
        LODWORD(v20) = v20 + 1;
        ++v22;
        if ( (unsigned int)v20 >= v21 )
          goto LABEL_23;
      }
      LODWORD(v20) = -1;
    }
LABEL_23:
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a2 + 24));
    if ( (_DWORD)v20 == -1 )
    {
      v9 = (unsigned int)(v9 + 2);
      continue;
    }
    break;
  }
  v23 = RtlpHpLfhSubsegmentSizeBlockInternal(a2, v15, v18, a6);
  *a4 = v23;
  *a5 = (unsigned __int16)v32 - v23;
  return v15;
}
