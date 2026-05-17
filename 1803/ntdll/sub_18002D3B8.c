/*
 * XREFs of sub_18002D3B8 @ 0x18002D3B8
 * Callers:
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002CFE4 @ 0x18002CFE4 (sub_18002CFE4.c)
 *     sub_18002D604 @ 0x18002D604 (sub_18002D604.c)
 *     sub_18002D628 @ 0x18002D628 (sub_18002D628.c)
 *     sub_18007EDB4 @ 0x18007EDB4 (sub_18007EDB4.c)
 *     sub_1801093D4 @ 0x1801093D4 (sub_1801093D4.c)
 */

__int64 __fastcall sub_18002D3B8(__int64 a1, unsigned __int64 *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  __int64 v9; // r9
  signed int *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // r14
  unsigned __int64 *v13; // r8
  __int64 v14; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 *v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _DWORD *v21; // rax
  unsigned int i; // r8d
  unsigned int v23; // r8d
  __int128 v24; // xmm0
  signed __int32 v25; // edx
  int v26; // ecx
  int v27; // edx
  unsigned __int64 *v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 *v31; // [rsp+88h] [rbp+38h] BYREF
  __int64 v32; // [rsp+98h] [rbp+48h] BYREF

  v31 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 374);
    if ( pShimData == (_DWORD *)-1496LL || !pShimData[386] )
      v5 = 0LL;
  }
  v32 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  if ( v5 && a1 )
  {
    sub_18002D604(4LL, &v29);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    sub_18002D628(v5 + 64, &v28);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v16 = *(_QWORD *)(a1 + 192);
        if ( v16 )
        {
          sub_18002D628(v16, &v31);
          v18 = v31;
          v19 = 0LL;
          while ( *((_DWORD *)&unk_1801596F0 + 2 * v19) != *(_DWORD *)v31 )
          {
            if ( (unsigned __int64)++v19 >= 5 )
            {
              v20 = 0LL;
              goto LABEL_27;
            }
          }
          v25 = _InterlockedExchangeAdd((volatile signed __int32 *)&unk_1801596F0 + 2 * v19 + 1, 0xFFFFFFFF);
          v18 = v31;
          v20 = (unsigned int)(v25 - 1);
LABEL_27:
          if ( !(_DWORD)v20 && v28 == v18 )
          {
            RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3C0, v20, v18, v17);
            v21 = &unk_1801596F4;
            v30 = 0LL;
            for ( i = 0; i < 5; ++i )
            {
              if ( *v21 )
                break;
              v21 += 2;
            }
            if ( i >= 5 || (sub_18002D604(i, &v30), v23 >= 5) )
              v24 = *((_OWORD *)v5 + 3);
            else
              v24 = *(_OWORD *)(v30 + 4);
            *v8 = v24;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)sub_18007EDB4(&v32) )
              goto LABEL_20;
            v26 = v32;
            if ( !v32 )
              goto LABEL_20;
            v27 = (_DWORD)v5 + 64;
            goto LABEL_46;
          }
        }
      }
    }
    else
    {
      v4 = sub_18002CFE4(*(_QWORD *)(a1 + 48), &v31);
      if ( v4 )
      {
        v10 = (signed int *)v31;
        v11 = 0LL;
        v12 = (unsigned __int64 *)((char *)v31 + 4);
        *(_QWORD *)(a1 + 192) = (char *)v31 + 4;
        v4 = 1;
        v13 = (unsigned __int64 *)(unsigned int)*v10;
        while ( *((_DWORD *)&unk_1801596F0 + 2 * v11) != (_DWORD)v13 )
        {
          if ( (unsigned __int64)++v11 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&unk_1801596F0 + 2 * v11 + 1, 1u);
        v10 = (signed int *)v31;
LABEL_12:
        v14 = *v12 - *(_QWORD *)(v29 + 4);
        if ( *v12 == *(_QWORD *)(v29 + 4) )
          v14 = v12[1] - *(_QWORD *)(v29 + 12);
        if ( v14
          && *v10 < *(_DWORD *)v28
          && (*((unsigned __int16 *)v10 + 11) | ((unsigned __int64)*((unsigned __int16 *)v10 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D3C0, (unsigned __int64)v10, v13, v9);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v12;
          if ( !(unsigned int)sub_18007EDB4(&v32) )
            goto LABEL_20;
          v26 = v32;
          if ( !v32 )
            goto LABEL_20;
          v27 = (int)v12;
LABEL_46:
          sub_1801093D4(v26, v27, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_20:
          ++*(_QWORD *)v5;
          RtlReleaseSRWLockExclusive(&qword_18015D3C0);
        }
      }
    }
  }
  return v4;
}
