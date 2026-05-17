/*
 * XREFs of sub_1800275D0 @ 0x1800275D0
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180081524 @ 0x180081524 (sub_180081524.c)
 *     ZwReleaseWorkerFactoryWorker @ 0x18009D790 (ZwReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800275D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r12
  __int64 v8; // r10
  __int64 v9; // rdx
  char v10; // r11
  int v11; // r15d
  int v12; // r9d
  int v13; // ebp
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  bool v18; // r14
  bool v19; // r11
  signed __int64 v20; // rax
  unsigned __int8 v21; // di
  char v22; // si
  __int64 v23; // r9
  char v24; // r10
  signed __int64 v25; // rtt
  __int64 result; // rax
  _QWORD *v27; // rdi
  volatile signed __int64 *v28; // rcx
  _QWORD *v29; // rdi
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  volatile signed __int64 *v32; // rcx
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rdi
  unsigned int i; // esi
  _QWORD *v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  _QWORD *v45; // rax
  unsigned int j; // esi
  __int64 v47; // rax
  __int64 v48; // rdi
  unsigned int v49; // esi
  unsigned int v50; // edi
  unsigned int v51; // edi
  __int64 v52; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v53; // [rsp+20h] [rbp-88h]
  unsigned int v54; // [rsp+28h] [rbp-80h]
  _QWORD *v55; // [rsp+30h] [rbp-78h] BYREF
  _QWORD **v56; // [rsp+38h] [rbp-70h]
  volatile signed __int64 *v57; // [rsp+40h] [rbp-68h]
  _QWORD *v58; // [rsp+48h] [rbp-60h]
  __int64 v59; // [rsp+50h] [rbp-58h]
  _QWORD *v60; // [rsp+58h] [rbp-50h]
  _QWORD *v61; // [rsp+60h] [rbp-48h]
  char v62; // [rsp+B0h] [rbp+8h]
  signed __int64 v63; // [rsp+B0h] [rbp+8h]
  char v64; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v53) = 0;
  v10 = 0;
  v59 = a1 + 304;
  v62 = 0;
  v64 = 0;
  v11 = a3;
  v12 = 0;
  v13 = 0;
  if ( a2 == a1 + 304 )
  {
    v18 = *(_QWORD *)v9 != 0LL;
    v19 = *(_QWORD *)v9 == 0LL;
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v14 = a2 + 56 * v8;
    v56 = &v55;
    v15 = a3;
    v55 = &v55;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      a3 = v15;
      v17 = *(_QWORD **)v16;
      v58 = v17;
      if ( v17 )
      {
        if ( v10 )
        {
          v27 = (_QWORD *)(a2 + 56LL * v15);
          v57 = v17 + 4;
          memmove(v27, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v28 = v57;
          v27[6] = v14;
          RtlAcquireSRWLockExclusive(v28);
          v29 = v27 + 4;
          v30 = v58 + 5;
          v61 = v58 + 5;
          v31 = (_QWORD *)v58[6];
          v60 = (_QWORD *)v58[5];
          if ( (_QWORD *)*v31 != v58 + 5 )
            __fastfail(3u);
          v32 = v57;
          *v29 = v30;
          v29[1] = v31;
          *v31 = v29;
          v30[1] = v29;
          RtlReleaseSRWLockExclusive(v32);
          v12 = v53 + 1;
          LODWORD(v53) = v53 + 1;
          if ( v60 == v61 )
          {
            v33 = v56;
            v34 = v58 + 2;
            if ( *v56 != &v55 )
              __fastfail(3u);
            v58[3] = v56;
            *v34 = &v55;
            ++v13;
            *v33 = v34;
            v56 = (_QWORD **)v34;
          }
          v10 = v62;
          v9 = v59;
        }
        else
        {
          v10 = 1;
          v62 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v64 = 1;
      }
    }
    while ( v15 );
    if ( v12 != v11 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, dword_18015D050 + 3145728, *(_QWORD *)v14);
    if ( v13 )
    {
      v35 = (__int64)(v55 - 2);
      v36 = &v52 + 4;
      v37 = 4294967294LL;
      if ( v55 - 2 != v36 )
      {
        do
        {
          a3 = *(unsigned int *)(v35 + 8);
          v6 |= 1LL << a3;
          if ( (_DWORD)v37 != -1 )
          {
            if ( (_DWORD)v37 == -2 )
            {
              v37 = (unsigned int)a3;
            }
            else if ( (_DWORD)v37 != (_DWORD)a3 )
            {
              v37 = 0xFFFFFFFFLL;
            }
          }
          v35 = *(_QWORD *)(v35 + 16) - 16LL;
        }
        while ( (_QWORD *)v35 != v36 );
      }
      sub_180081524(a5, v37, a3);
      v53 = v6;
      if ( (_DWORD)v6 )
      {
        v38 = v6;
        do
        {
          v39 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v40, v38);
          v54 = v40;
          RtlAcquireSRWLockExclusive(v39 + 8 * (v40 + 2 * (v40 + 1)));
          v38 &= ~(1 << v40);
        }
        while ( v38 );
      }
      for ( i = HIDWORD(v53); i; i &= ~(1 << v50) )
      {
        _BitScanForward(&v50, i);
        v54 = v50;
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v50 + 32 + 2 * (v50 + 32 + 1LL)));
      }
      while ( 1 )
      {
        v42 = v55;
        if ( v55 == &v55 )
          break;
        v43 = *v55;
        if ( *(_QWORD **)(*v55 + 8LL) != v55 || (v44 = (_QWORD *)v55[1], (_QWORD *)*v44 != v55) )
          __fastfail(3u);
        *v44 = v43;
        *(_QWORD *)(v43 + 8) = v44;
        v9 = (__int64)v42;
        a3 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v42 - 2);
        v45 = *(_QWORD **)(a3 + 8);
        if ( *v45 != a3 )
          __fastfail(3u);
        *(_QWORD *)v9 = a3;
        *(_QWORD *)(v9 + 8) = v45;
        *v45 = v9;
        *(_QWORD *)(a3 + 8) = v9;
      }
      v53 = v6;
      if ( HIDWORD(v6) )
      {
        v49 = HIDWORD(v53);
        do
        {
          _BitScanReverse(&v51, v49);
          v54 = v51;
          RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*(_QWORD *)(a5 + 24)
                                                               + 8 * (v51 + 32 + 2 * (v51 + 32 + 1LL))));
          v49 &= ~(1 << v51);
        }
        while ( v49 );
      }
      for ( j = v53; j; j &= ~(1 << v48) )
      {
        v47 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v48, j);
        v54 = v48;
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v47 + 8 * (v48 + 2 * (v48 + 1))));
      }
    }
    v18 = v62;
    v19 = v64;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v20 = *(_QWORD *)(a5 + 8);
  LODWORD(v63) = v20;
  do
  {
    v21 = *(_BYTE *)(a5 + 376);
    v22 = 0;
    v23 = (unsigned int)(v13 + HIDWORD(v20));
    v24 = 0;
    HIDWORD(v63) = v13 + HIDWORD(v20);
    if ( !v21 )
    {
      v9 = (unsigned int)v63;
      a3 = (unsigned int)v63 ^ (unsigned __int16)(v63 ^ (v63 - 1));
      LODWORD(v63) = v63 ^ (unsigned __int16)(v63 ^ (v63 - 1));
      if ( v19 )
      {
        v9 = (WORD1(a3) - 1) << 16;
        a3 = (unsigned __int16)a3 | ((WORD1(a3) - 1) << 16);
        LODWORD(v63) = a3;
      }
      if ( !v18 )
      {
        if ( (_DWORD)v23 )
        {
          v23 = (unsigned int)(v23 - 1);
          HIDWORD(v63) = v23;
        }
        else
        {
          v22 = 1;
          a3 = (unsigned __int16)(a3 ^ (a3 + 1)) ^ (unsigned int)a3;
          LODWORD(v63) = a3;
        }
      }
      if ( (v13 || v19) && (_DWORD)v23 && (a3 & 0xFFFF0000) == 0 )
      {
        a3 = (unsigned int)(a3 + 0x10000);
        v24 = 1;
        LODWORD(v63) = a3;
      }
    }
    v25 = v20;
    v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v63, v20);
    LODWORD(v63) = v20;
  }
  while ( v25 != v20 );
  if ( v24 )
    ZwReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v9, a3, v23);
  result = v21;
  *a6 = v22;
  return result;
}
