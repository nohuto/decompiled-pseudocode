/*
 * XREFs of PepNotifyCoordinatedLpiStates @ 0x1C002E028
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C002C494 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 *     GetDevExtFromIndex @ 0x1C000786C (GetDevExtFromIndex.c)
 */

__int64 __fastcall PepNotifyCoordinatedLpiStates(__int64 a1, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  _DWORD *v7; // r13
  int v8; // r8d
  int v9; // r11d
  unsigned int *v10; // r10
  __int64 v11; // r9
  __int64 v12; // rdx
  _DWORD *v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // r12
  SIZE_T v16; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v18; // rdi
  __int64 v19; // r8
  char *v20; // r12
  char *v21; // r15
  __int64 v22; // r13
  _QWORD *v23; // r10
  unsigned int v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // r14
  __int64 v27; // r9
  __int64 v28; // rsi
  int v29; // eax
  unsigned int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 i; // r9
  __int64 v34; // rcx
  unsigned int j; // r11d
  __int64 v36; // rdx

  v4 = *a3;
  v5 = 0;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)v4 )
  {
    v10 = a3 + 63;
    v11 = (unsigned int)v4;
    do
    {
      v8 += *v10;
      if ( *v10 )
      {
        v12 = *v10;
        v13 = (_DWORD *)(*(_QWORD *)(v10 + 3) + 4LL);
        do
        {
          v9 += *v13;
          v13 += 4;
          --v12;
        }
        while ( v12 );
      }
      v10 += 56;
      --v11;
    }
    while ( v11 );
  }
  v14 = (96 * v4 + 15) & 0xFFFFFFF8;
  v15 = (v14 + 3 + 24 * v8) & 0xFFFFFFFC;
  v16 = (unsigned int)(v15 + 4 * v9);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x72637250u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v16);
    v20 = (char *)v18 + v15;
    v21 = (char *)v18 + v14;
    *v18 = v4;
    if ( (_DWORD)v4 )
    {
      v19 = (__int64)(a3 + 63);
      v22 = v4;
      v23 = v18 + 24;
      do
      {
        v24 = 0;
        *((_DWORD *)v23 - 2) = *(_DWORD *)v19;
        *v23 = v21;
        v25 = *(unsigned int *)v19;
        v21 += 24 * v25;
        if ( (_DWORD)v25 )
        {
          do
          {
            v26 = *v23;
            v27 = *(_QWORD *)(v19 + 12) + 16LL * v24;
            v28 = 3LL * v24;
            if ( *(_DWORD *)v27 != -1 )
              *(_QWORD *)(v26 + 24LL * v24) = *(_QWORD *)(GetDevExtFromIndex(*(_DWORD *)v27) + 1088);
            v29 = *(_DWORD *)(v27 + 4);
            v30 = 0;
            *(_QWORD *)(v26 + 8 * v28 + 16) = v20;
            *(_DWORD *)(v26 + 8 * v28 + 8) = v29;
            v31 = *(unsigned int *)(v27 + 4);
            v20 += 4 * v31;
            if ( (_DWORD)v31 )
            {
              do
              {
                v32 = v30++;
                *(_DWORD *)(*(_QWORD *)(v26 + 8 * v28 + 16) + 4 * v32) = *(unsigned __int8 *)(*(_QWORD *)(v27 + 8)
                                                                                            + 4 * v32);
              }
              while ( v30 < *(_DWORD *)(v27 + 4) );
            }
            ++v24;
          }
          while ( v24 < *(_DWORD *)v19 );
        }
        v23 += 12;
        v19 += 224LL;
        --v22;
      }
      while ( v22 );
      v7 = a2;
    }
    for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
    {
      v34 = *(_QWORD *)&v7[10 * (unsigned int)i + 6];
      if ( v34 )
      {
        for ( j = 0; j < *(_DWORD *)(v34 + 16); *(_QWORD *)&v18[v36 + 20] = *(_QWORD *)(v34 + 8 * v19 + 96) )
        {
          v19 = 10LL * j;
          v36 = 24LL * (j + *(_DWORD *)(a4 + 4LL * (unsigned int)i));
          v18[v36 + 2] = *(_DWORD *)(v34 + 80LL * j + 24);
          v18[v36 + 3] = *(_DWORD *)(v34 + 80LL * j + 28);
          v18[v36 + 4] = *(_DWORD *)(v34 + 80LL * j + 32);
          v18[v36 + 5] = *(_DWORD *)(v34 + 80LL * j + 36);
          v18[v36 + 6] = *(_DWORD *)(v34 + 80LL * j + 40);
          if ( *(_BYTE *)(v34 + 80LL * j + 48) == 126 )
          {
            LOBYTE(v18[v36 + 7]) = 1;
            *(_QWORD *)&v18[v36 + 8] = *(_QWORD *)(v34 + 80LL * j + 52);
          }
          else
          {
            LOBYTE(v18[v36 + 8]) = *(_BYTE *)(v34 + 80LL * j + 48);
            BYTE1(v18[v36 + 8]) = *(_BYTE *)(v34 + 80LL * j + 49);
            BYTE2(v18[v36 + 8]) = *(_BYTE *)(v34 + 80LL * j + 50);
            HIBYTE(v18[v36 + 8]) = *(_BYTE *)(v34 + 80LL * j + 51);
            *(_QWORD *)&v18[v36 + 10] = *(_QWORD *)(v34 + 80LL * j + 52);
          }
          ++j;
          LOBYTE(v18[v36 + 12]) = *(_BYTE *)(v34 + 8 * v19 + 60);
          BYTE1(v18[v36 + 12]) = *(_BYTE *)(v34 + 8 * v19 + 61);
          BYTE2(v18[v36 + 12]) = *(_BYTE *)(v34 + 8 * v19 + 62);
          HIBYTE(v18[v36 + 12]) = *(_BYTE *)(v34 + 8 * v19 + 63);
          *(_QWORD *)&v18[v36 + 14] = *(_QWORD *)(v34 + 8 * v19 + 64);
          LOBYTE(v18[v36 + 16]) = *(_BYTE *)(v34 + 8 * v19 + 72);
          BYTE1(v18[v36 + 16]) = *(_BYTE *)(v34 + 8 * v19 + 73);
          BYTE2(v18[v36 + 16]) = *(_BYTE *)(v34 + 8 * v19 + 74);
          HIBYTE(v18[v36 + 16]) = *(_BYTE *)(v34 + 8 * v19 + 75);
          *(_QWORD *)&v18[v36 + 18] = *(_QWORD *)(v34 + 8 * v19 + 76);
        }
      }
    }
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64, __int64))qword_1C0016048)(*(_QWORD *)(a1 + 1088), v18, v19, i);
    ExFreePoolWithTag(v18, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
