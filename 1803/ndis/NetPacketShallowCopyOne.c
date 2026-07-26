/*
 * XREFs of NetPacketShallowCopyOne @ 0x1C007D810
 * Callers:
 *     NetPacketShallowCopyMany @ 0x1C007D770 (NetPacketShallowCopyMany.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     NetPacketExtensionPrivateGetData @ 0x1C00AC0B4 (NetPacketExtensionPrivateGetData.c)
 */

__int64 __fastcall NetPacketShallowCopyOne(__int64 a1, _WORD *a2, int *a3)
{
  int v3; // eax
  __int64 v7; // r8
  int v8; // r9d
  unsigned int v9; // ebx
  __int64 v10; // rbp
  __int64 v11; // r11
  int v12; // edx
  int v13; // edx
  unsigned int v14; // r14d
  unsigned int v15; // r11d
  __int64 result; // rax
  unsigned int v17; // r10d
  __int64 v18; // r9
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rbx
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int16 v29; // cx
  _QWORD *i; // rbx
  __int64 v31; // rcx
  const void *Data; // rax
  void *v33; // r9
  int v34; // ebx

  v3 = *a3;
  if ( *a3 < 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = 0;
    v9 = *(_DWORD *)(v7 + 8);
    v10 = *(unsigned __int16 *)(v7 + 2);
    v11 = *(_QWORD *)(v10 * (v3 & 0x7FFFFFFF & v9) + v7 + 64) & 1LL;
    if ( !v11 )
    {
      v12 = v3 & 0x7FFFFFFF;
      do
      {
        ++v12;
        ++v8;
      }
      while ( (*(_BYTE *)(v10 * (v12 & v9) + v7 + 64) & 1) == 0 );
    }
    v13 = 0;
    v14 = v8 + 1;
    if ( !v11 )
    {
      do
        ++v13;
      while ( (*(_BYTE *)(v10 * (v9 & ((v3 & 0x7FFFFFFF) + v13)) + v7 + 64) & 1) == 0 );
    }
    v15 = v13 + 1;
    if ( v14 > v13 + 1 )
      return 3221225626LL;
    v17 = 0;
    if ( v13 != -1 )
    {
      do
      {
        v18 = *(_QWORD *)(a1 + 16);
        v19 = *(_DWORD *)(v18 + 8);
        v20 = *(unsigned __int16 *)(v18 + 2);
        v21 = v20 * (v19 & (v17 + (*(_DWORD *)a2 & 0x7FFFFFFF)));
        if ( v17 <= v14 )
          v22 = v20 * (v19 & (v17 + (*a3 & 0x7FFFFFFF))) + v18 + 64;
        else
          v22 = 0LL;
        if ( v22 )
        {
          v25 = *(_DWORD *)(v21 + v18 + 64);
          *(_QWORD *)(v21 + v18 + 80) = *(_QWORD *)(v22 + 16);
          *(_QWORD *)(v21 + v18 + 72) = *(_QWORD *)(v22 + 8);
          *(_QWORD *)(v21 + v18 + 64) ^= (*(_DWORD *)v22 ^ v25) & 1LL;
          *(_QWORD *)(v21 + v18 + 88) ^= (*(_QWORD *)(v21 + v18 + 88) ^ *(_QWORD *)(v22 + 24)) & 0x4000000000000000LL;
          v26 = *(_QWORD *)(v22 + 24) ^ (*(_QWORD *)(v21 + v18 + 88) ^ *(_QWORD *)(v22 + 24)) & 0x7FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v21 + v18 + 88) = v26;
          v27 = v26 ^ (v26 ^ *(_QWORD *)(v22 + 24)) & 0xFFFFFFC000000LL;
          *(_QWORD *)(v21 + v18 + 88) = v27;
          v28 = v27 ^ (v27 ^ *(_QWORD *)(v22 + 24)) & 0x3FF0000000000000LL;
          *(_QWORD *)(v21 + v18 + 88) = v28;
          v24 = v28 ^ (v28 ^ *(_QWORD *)(v22 + 24)) & 0x3FFFFFF;
        }
        else
        {
          *(_QWORD *)(v21 + v18 + 88) &= 0x3FFFFFFuLL;
          v23 = *(_QWORD *)(v21 + v18 + 88);
          *(_QWORD *)(v21 + v18 + 80) = 0LL;
          *(_QWORD *)(v21 + v18 + 72) = 0LL;
          *(_QWORD *)(v21 + v18 + 64) &= ~1uLL;
          v24 = v23 & 0xFFFFFFFFFC000000uLL;
        }
        ++v17;
        *(_QWORD *)(v21 + v18 + 88) = v24;
      }
      while ( v17 < v15 );
    }
  }
  if ( (dword_1C00996F0 & 4) != 0 )
  {
    v29 = a2[5];
    *((_DWORD *)a2 + 1) = a3[1];
    *((_BYTE *)a2 + 8) = *((_BYTE *)a3 + 8);
    a2[5] ^= (*((_WORD *)a3 + 5) ^ v29) & 1;
    a2[5] ^= (*((_WORD *)a3 + 5) ^ a2[5]) & 2;
    *((_DWORD *)a2 + 3) = a3[3];
    for ( i = qword_1C009AEB0; i; i = (_QWORD *)i[5] )
    {
      NetPacketExtensionPrivateGetData(i, a2);
      Data = (const void *)NetPacketExtensionPrivateGetData(v31, a3);
      if ( i[9] )
      {
        result = ((__int64 (__fastcall *)(_QWORD, void *, const void *))i[9])(i[6], v33, Data);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        memmove(v33, Data, i[1]);
      }
    }
  }
  else
  {
    v34 = *(_DWORD *)a2;
    memmove(a2, a3, (unsigned int)Size);
    *(_DWORD *)a2 ^= (v34 ^ *(_DWORD *)a2) & 0x7FFFFFFF;
  }
  return 0LL;
}
