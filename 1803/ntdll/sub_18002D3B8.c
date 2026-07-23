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

__int64 __fastcall sub_18002D3B8(__int64 a1, _DWORD *a2, int a3)
{
  unsigned int v4; // ebx
  char *v5; // rdi
  _DWORD *pShimData; // rcx
  _OWORD *v8; // r15
  _DWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v14; // rcx
  _DWORD *v15; // r8
  __int64 v16; // rax
  signed __int32 v17; // edx
  _DWORD *v18; // rax
  unsigned int i; // r8d
  unsigned int v20; // r8d
  __int128 v21; // xmm0
  signed __int32 v22; // edx
  REGHANDLE v23; // rcx
  _DWORD *v24; // [rsp+30h] [rbp-20h] BYREF
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v27; // [rsp+88h] [rbp+38h] BYREF
  REGHANDLE RegHandle; // [rsp+98h] [rbp+48h] BYREF

  v27 = a2;
  v4 = 0;
  v5 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v5 = (char *)(pShimData + 374);
    if ( pShimData == (_DWORD *)-1496LL || !pShimData[386] )
      v5 = 0LL;
  }
  RegHandle = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  if ( v5 && a1 )
  {
    sub_18002D604(4LL, &v25);
    if ( !*((_DWORD *)v5 + 2) )
      return 1;
    v8 = v5 + 64;
    sub_18002D628(v5 + 64, &v24);
    if ( a3 )
    {
      v4 = 1;
      if ( a3 == 1 )
      {
        v14 = *(_QWORD *)(a1 + 192);
        if ( v14 )
        {
          sub_18002D628(v14, &v27);
          v15 = v27;
          v16 = 0LL;
          while ( *((_DWORD *)&unk_1801596F0 + 2 * v16) != *v27 )
          {
            if ( (unsigned __int64)++v16 >= 5 )
            {
              v17 = 0;
              goto LABEL_27;
            }
          }
          v22 = _InterlockedExchangeAdd((volatile signed __int32 *)&unk_1801596F0 + 2 * v16 + 1, 0xFFFFFFFF);
          v15 = v27;
          v17 = v22 - 1;
LABEL_27:
          if ( !v17 && v24 == v15 )
          {
            RtlAcquireSRWLockExclusive(&stru_18015D3C0);
            v18 = &unk_1801596F4;
            v26 = 0LL;
            for ( i = 0; i < 5; ++i )
            {
              if ( *v18 )
                break;
              v18 += 2;
            }
            if ( i >= 5 || (sub_18002D604(i, &v26), v20 >= 5) )
              v21 = *((_OWORD *)v5 + 3);
            else
              v21 = *(_OWORD *)(v26 + 4);
            *v8 = v21;
            ++*(_QWORD *)v5;
            if ( !(unsigned int)sub_18007EDB4(&RegHandle) )
              goto LABEL_20;
            v23 = RegHandle;
            if ( !RegHandle )
              goto LABEL_20;
LABEL_45:
            sub_1801093D4(v23, *(_QWORD *)(a1 + 80));
LABEL_20:
            ++*(_QWORD *)v5;
            RtlReleaseSRWLockExclusive(&stru_18015D3C0);
          }
        }
      }
    }
    else
    {
      v4 = sub_18002CFE4(*(PACTIVATION_CONTEXT *)(a1 + 48), &v27);
      if ( v4 )
      {
        v9 = v27;
        v10 = 0LL;
        v11 = v27 + 1;
        *(_QWORD *)(a1 + 192) = v27 + 1;
        v4 = 1;
        while ( *((_DWORD *)&unk_1801596F0 + 2 * v10) != *v9 )
        {
          if ( (unsigned __int64)++v10 >= 5 )
            goto LABEL_12;
        }
        _InterlockedAdd((volatile signed __int32 *)&unk_1801596F0 + 2 * v10 + 1, 1u);
        v9 = v27;
LABEL_12:
        v12 = *v11 - *(_QWORD *)(v25 + 4);
        if ( *v11 == *(_QWORD *)(v25 + 4) )
          v12 = v11[1] - *(_QWORD *)(v25 + 12);
        if ( v12
          && *v9 < *v24
          && (*((unsigned __int16 *)v9 + 11) | ((unsigned __int64)*((unsigned __int16 *)v9 + 10) << 16)) >= *((_QWORD *)v5 + 5) )
        {
          RtlAcquireSRWLockExclusive(&stru_18015D3C0);
          ++*(_QWORD *)v5;
          *v8 = *(_OWORD *)v11;
          if ( !(unsigned int)sub_18007EDB4(&RegHandle) )
            goto LABEL_20;
          v23 = RegHandle;
          if ( !RegHandle )
            goto LABEL_20;
          goto LABEL_45;
        }
      }
    }
  }
  return v4;
}
