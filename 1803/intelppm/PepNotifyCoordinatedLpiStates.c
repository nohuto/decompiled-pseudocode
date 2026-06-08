/*
 * XREFs of PepNotifyCoordinatedLpiStates @ 0x1C0032C44
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0031004 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0005280 (memset.c)
 *     GetDevExtFromIndex @ 0x1C0007B90 (GetDevExtFromIndex.c)
 */

__int64 __fastcall PepNotifyCoordinatedLpiStates(__int64 a1, _DWORD *a2, unsigned int *a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  _DWORD *v7; // r13
  int v8; // r8d
  int v9; // r11d
  _QWORD *v10; // r10
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rdx
  _DWORD *v14; // rax
  unsigned int v15; // ebp
  __int64 v16; // r12
  SIZE_T v17; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rdi
  __int64 v20; // r8
  char *v21; // r12
  char *v22; // r15
  __int64 v23; // r13
  _QWORD *v24; // r10
  unsigned int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // r9
  __int64 v29; // rsi
  int v30; // eax
  unsigned int v31; // ebp
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 i; // r9
  __int64 v35; // rcx
  unsigned int j; // r11d
  __int64 v37; // rdx
  char v38; // al

  v4 = *a3;
  v5 = 0;
  v7 = a2;
  v8 = 0;
  v9 = 0;
  if ( (_DWORD)v4 )
  {
    v10 = a3 + 66;
    v11 = (unsigned int)v4;
    do
    {
      v12 = *((_DWORD *)v10 - 3);
      v8 += v12;
      if ( v12 )
      {
        v13 = v12;
        v14 = (_DWORD *)(*v10 + 4LL);
        do
        {
          v9 += *v14;
          v14 += 4;
          --v13;
        }
        while ( v13 );
      }
      v10 += 28;
      --v11;
    }
    while ( v11 );
  }
  v15 = (96 * v4 + 15) & 0xFFFFFFF8;
  v16 = (v15 + 3 + 24 * v8) & 0xFFFFFFFC;
  v17 = (unsigned int)(v16 + 4 * v9);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v17, 0x72637250u);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v17);
    v21 = (char *)v19 + v16;
    v22 = (char *)v19 + v15;
    *v19 = v4;
    if ( (_DWORD)v4 )
    {
      v20 = (__int64)(a3 + 63);
      v23 = v4;
      v24 = v19 + 24;
      do
      {
        v25 = 0;
        *((_DWORD *)v24 - 2) = *(_DWORD *)v20;
        *v24 = v22;
        v26 = *(unsigned int *)v20;
        v22 += 24 * v26;
        if ( (_DWORD)v26 )
        {
          do
          {
            v27 = *v24;
            v28 = *(_QWORD *)(v20 + 12) + 16LL * v25;
            v29 = 3LL * v25;
            if ( *(_DWORD *)v28 != -1 )
              *(_QWORD *)(v27 + 24LL * v25) = *(_QWORD *)(GetDevExtFromIndex(*(_DWORD *)v28) + 1088);
            v30 = *(_DWORD *)(v28 + 4);
            v31 = 0;
            *(_QWORD *)(v27 + 8 * v29 + 16) = v21;
            *(_DWORD *)(v27 + 8 * v29 + 8) = v30;
            v32 = *(unsigned int *)(v28 + 4);
            v21 += 4 * v32;
            if ( (_DWORD)v32 )
            {
              do
              {
                v33 = v31++;
                *(_DWORD *)(*(_QWORD *)(v27 + 8 * v29 + 16) + 4 * v33) = *(unsigned __int8 *)(*(_QWORD *)(v28 + 8)
                                                                                            + 4 * v33);
              }
              while ( v31 < *(_DWORD *)(v28 + 4) );
            }
            ++v25;
          }
          while ( v25 < *(_DWORD *)v20 );
        }
        v24 += 12;
        v20 += 224LL;
        --v23;
      }
      while ( v23 );
      v7 = a2;
    }
    for ( i = 0LL; (unsigned int)i < *v7; i = (unsigned int)(i + 1) )
    {
      v35 = *(_QWORD *)&v7[10 * (unsigned int)i + 6];
      if ( v35 )
      {
        for ( j = 0; j < *(_DWORD *)(v35 + 16); *(_QWORD *)&v19[v37 + 20] = *(_QWORD *)(v35 + 8 * v20 + 96) )
        {
          v20 = 10LL * j;
          v37 = 24LL * (j + *(_DWORD *)(a4 + 4LL * (unsigned int)i));
          v19[v37 + 2] = *(_DWORD *)(v35 + 80LL * j + 24);
          v19[v37 + 3] = *(_DWORD *)(v35 + 80LL * j + 28);
          v19[v37 + 4] = *(_DWORD *)(v35 + 80LL * j + 32);
          v19[v37 + 5] = *(_DWORD *)(v35 + 80LL * j + 36);
          v19[v37 + 6] = *(_DWORD *)(v35 + 80LL * j + 40);
          v38 = *(_BYTE *)(v35 + 80LL * j + 48);
          if ( v38 == 126 )
          {
            LOBYTE(v19[v37 + 7]) = 1;
            *(_QWORD *)&v19[v37 + 8] = *(_QWORD *)(v35 + 80LL * j + 52);
          }
          else
          {
            LOBYTE(v19[v37 + 8]) = v38;
            BYTE1(v19[v37 + 8]) = *(_BYTE *)(v35 + 80LL * j + 49);
            BYTE2(v19[v37 + 8]) = *(_BYTE *)(v35 + 80LL * j + 50);
            HIBYTE(v19[v37 + 8]) = *(_BYTE *)(v35 + 80LL * j + 51);
            *(_QWORD *)&v19[v37 + 10] = *(_QWORD *)(v35 + 80LL * j + 52);
          }
          ++j;
          LOBYTE(v19[v37 + 12]) = *(_BYTE *)(v35 + 8 * v20 + 60);
          BYTE1(v19[v37 + 12]) = *(_BYTE *)(v35 + 8 * v20 + 61);
          BYTE2(v19[v37 + 12]) = *(_BYTE *)(v35 + 8 * v20 + 62);
          HIBYTE(v19[v37 + 12]) = *(_BYTE *)(v35 + 8 * v20 + 63);
          *(_QWORD *)&v19[v37 + 14] = *(_QWORD *)(v35 + 8 * v20 + 64);
          LOBYTE(v19[v37 + 16]) = *(_BYTE *)(v35 + 8 * v20 + 72);
          BYTE1(v19[v37 + 16]) = *(_BYTE *)(v35 + 8 * v20 + 73);
          BYTE2(v19[v37 + 16]) = *(_BYTE *)(v35 + 8 * v20 + 74);
          HIBYTE(v19[v37 + 16]) = *(_BYTE *)(v35 + 8 * v20 + 75);
          *(_QWORD *)&v19[v37 + 18] = *(_QWORD *)(v35 + 8 * v20 + 76);
        }
      }
    }
    ((void (__fastcall *)(_QWORD, _DWORD *, __int64, __int64))qword_1C001A888)(*(_QWORD *)(a1 + 1088), v19, v20, i);
    ExFreePoolWithTag(v19, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
