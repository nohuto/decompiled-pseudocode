/*
 * XREFs of MmManagePartitionMemoryInformation @ 0x1404FC4EC
 * Callers:
 *     NtManagePartition @ 0x1404FC278 (NtManagePartition.c)
 * Callees:
 *     MiQueryMemoryListInformation @ 0x1400B8DC4 (MiQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiGetChannelInformation @ 0x1404FC770 (MiGetChannelInformation.c)
 */

__int64 __fastcall MmManagePartitionMemoryInformation(ULONG_PTR **a1, __int64 a2)
{
  ULONG_PTR *v2; // rsi
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // r15d
  unsigned int v16; // edi
  _QWORD *v17; // r14
  __int64 v18; // rcx
  char *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rcx
  bool v27; // cc
  unsigned __int64 v29; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int64 v30[5]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v31; // [rsp+58h] [rbp-A8h]
  __int128 v32; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-88h]
  __int128 v34; // [rsp+88h] [rbp-78h]
  __int128 v35; // [rsp+98h] [rbp-68h]
  __int128 v36; // [rsp+A8h] [rbp-58h]
  __int128 v37; // [rsp+B8h] [rbp-48h]
  __int128 v38; // [rsp+C8h] [rbp-38h]
  _BYTE v39[24]; // [rsp+E0h] [rbp-20h] BYREF
  char v40; // [rsp+F8h] [rbp-8h] BYREF

  v2 = *a1;
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 != -1 && v4 >= (unsigned __int16)KeNumberNodes )
    return 3221225485LL;
  if ( *(_DWORD *)(a2 + 8) != -1 )
    return 3221225485LL;
  do
  {
    if ( v4 == -1 )
    {
      *(_DWORD *)(a2 + 12) = (unsigned __int16)KeNumberNodes;
      *(_QWORD *)(a2 + 16) = v2[752];
      v5 = 0LL;
      *(_QWORD *)(a2 + 24) = v2[790];
      *(_QWORD *)(a2 + 32) = v2[805];
      *(_QWORD *)(a2 + 40) = v2[632];
      if ( v2 == &MiSystemPartition )
        v5 = qword_140388AF8;
      *(_QWORD *)(a2 + 224) = v5;
      MiQueryMemoryListInformation(v2, v30);
      v6 = v32;
      *(_OWORD *)(a2 + 88) = v31;
      v7 = v33;
      *(_OWORD *)(a2 + 104) = v6;
      v8 = v34;
      *(_OWORD *)(a2 + 120) = v7;
      v9 = v35;
      *(_OWORD *)(a2 + 136) = v8;
      v10 = v36;
      *(_OWORD *)(a2 + 152) = v9;
      v11 = v37;
      *(_OWORD *)(a2 + 168) = v10;
      v12 = v38;
      *(_OWORD *)(a2 + 184) = v11;
      *(_OWORD *)(a2 + 200) = v12;
      *(_QWORD *)(a2 + 216) = v2[633];
      v13 = *(_QWORD *)(a2 + 32);
      if ( v13 > *(_QWORD *)(a2 + 216) )
        *(_QWORD *)(a2 + 216) = v13;
      v14 = *(_QWORD *)(a2 + 24);
      if ( *(_QWORD *)(a2 + 40) < v14 )
        *(_QWORD *)(a2 + 40) = v14;
      if ( v14 > v13 )
        *(_QWORD *)(a2 + 24) = v13;
      v15 = (unsigned __int16)KeNumberNodes;
      v16 = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 12) = 0;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 24) = 0LL;
      *(_QWORD *)(a2 + 32) = 0LL;
      *(_QWORD *)(a2 + 40) = 0LL;
      *(_QWORD *)(a2 + 216) = 0LL;
      *(_QWORD *)(a2 + 224) = 0LL;
      memset((void *)(a2 + 88), 0, 0x40uLL);
      memset((void *)(a2 + 152), 0, 0x40uLL);
      v16 = *(_DWORD *)(a2 + 4);
      v15 = v16 + 1;
    }
    *(_QWORD *)(a2 + 64) = 0LL;
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    if ( v16 < v15 )
    {
      v17 = (_QWORD *)(v2[2] + 8256LL * v16 + 8080);
      do
      {
        MiGetChannelInformation(v2, v16, v39, &v29);
        if ( (unsigned int)(v29 / 0x28) )
        {
          v18 = *(_QWORD *)(a2 + 64);
          v19 = &v40;
          v20 = *(_QWORD *)(a2 + 72);
          v21 = *(_QWORD *)(a2 + 80);
          v22 = (unsigned int)(v29 / 0x28);
          do
          {
            v18 += *((_QWORD *)v19 - 1);
            v20 += *(_QWORD *)v19;
            v21 += *((_QWORD *)v19 + 1);
            v19 += 40;
            --v22;
          }
          while ( v22 );
          *(_QWORD *)(a2 + 64) = v18;
          *(_QWORD *)(a2 + 72) = v20;
          *(_QWORD *)(a2 + 80) = v21;
        }
        ++v16;
        *(_QWORD *)(a2 + 48) += *v17;
        v17 += 1032;
      }
      while ( v16 < v15 );
    }
    v4 = *(_DWORD *)(a2 + 4);
    if ( v4 == -1 )
    {
      *(_QWORD *)(a2 + 80) = 0LL;
      v23 = 0LL;
      v24 = (_QWORD *)(a2 + 88);
      v25 = 8LL;
      do
      {
        v23 += *v24++;
        *(_QWORD *)(a2 + 80) = v23;
        --v25;
      }
      while ( v25 );
    }
    v26 = *(_QWORD *)(a2 + 64) + *(_QWORD *)(a2 + 80) + *(_QWORD *)(a2 + 72);
    v27 = v26 <= *(_QWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 56) = v26;
  }
  while ( !v27 );
  *(_DWORD *)(a2 + 232) = *(unsigned __int16 *)v2;
  return 0LL;
}
