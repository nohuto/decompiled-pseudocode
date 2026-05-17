/*
 * XREFs of sub_180015C50 @ 0x180015C50
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180088BB0 @ 0x180088BB0 (sub_180088BB0.c)
 *     ZwReleaseWorkerFactoryWorker @ 0x1800A7F30 (ZwReleaseWorkerFactoryWorker.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_180015C50(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int64 a5, char *a6)
{
  __int64 v6; // r12
  __int64 v8; // r10
  __int64 v9; // rdx
  char v10; // r11
  int v12; // r9d
  int v13; // ebp
  __int64 v14; // r13
  unsigned int v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  bool v19; // r11
  bool v20; // r8
  signed __int64 v21; // rax
  unsigned __int8 v22; // bl
  char v23; // si
  int v24; // r9d
  char v25; // r10
  unsigned int v26; // ecx
  signed __int64 v27; // rdx
  signed __int64 v28; // rtt
  __int64 result; // rax
  _QWORD *v30; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rbx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  _QWORD *v36; // rcx
  __int64 ***v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rbx
  unsigned int i; // esi
  __int64 *v45; // rax
  __int64 *v46; // rdx
  __int64 **v47; // rcx
  __int64 *v48; // rdx
  __int64 v49; // r8
  __int64 **v50; // rax
  unsigned int j; // esi
  __int64 v52; // rax
  __int64 v53; // rbx
  unsigned int v54; // esi
  unsigned int v55; // ebx
  unsigned int v56; // ebx
  __int64 v57; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v58; // [rsp+20h] [rbp-88h]
  unsigned int v59; // [rsp+28h] [rbp-80h]
  __int64 *v60; // [rsp+30h] [rbp-78h] BYREF
  __int64 **v61; // [rsp+38h] [rbp-70h]
  _QWORD *v62; // [rsp+40h] [rbp-68h]
  _QWORD *v63; // [rsp+48h] [rbp-60h]
  __int64 v64; // [rsp+50h] [rbp-58h]
  _QWORD *v65; // [rsp+58h] [rbp-50h]
  _QWORD *v66; // [rsp+60h] [rbp-48h]
  unsigned __int8 v67; // [rsp+B0h] [rbp+8h]
  char v68; // [rsp+B8h] [rbp+10h]
  signed __int64 v69; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v58) = 0;
  v10 = 0;
  v64 = a1 + 304;
  v68 = 0;
  v67 = 0;
  v12 = 0;
  v13 = 0;
  if ( a2 == a1 + 304 )
  {
    v19 = *(_QWORD *)v9 != 0LL;
    v20 = *(_QWORD *)v9 == 0LL;
    v67 = v20;
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v14 = a2 + 56 * v8;
    v61 = &v60;
    v15 = a3;
    v60 = (__int64 *)&v60;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      v17 = v15;
      v18 = *(_QWORD **)v16;
      v63 = v18;
      if ( v18 )
      {
        if ( v10 )
        {
          v30 = (_QWORD *)(a2 + 56LL * v15);
          v62 = v18 + 4;
          memmove(v30, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v31 = v62;
          v30[6] = v14;
          RtlAcquireSRWLockExclusive(v31);
          v32 = v30 + 4;
          v33 = v63 + 5;
          v66 = v63 + 5;
          v34 = (_QWORD *)v63[6];
          v65 = (_QWORD *)v63[5];
          if ( (_QWORD *)*v34 != v63 + 5 )
            __fastfail(3u);
          v35 = v62;
          *v32 = v33;
          v32[1] = v34;
          *v34 = v32;
          v33[1] = v32;
          RtlReleaseSRWLockExclusive(v35);
          v12 = v58 + 1;
          LODWORD(v58) = v58 + 1;
          if ( v65 == v66 )
          {
            v36 = v61;
            v37 = (__int64 ***)(v63 + 2);
            if ( *v61 != (__int64 *)&v60 )
              __fastfail(3u);
            v63[3] = v61;
            *v37 = &v60;
            ++v13;
            *v36 = v37;
            v61 = (__int64 **)v37;
          }
          v10 = v68;
          v9 = v64;
        }
        else
        {
          v10 = 1;
          v68 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v67 = 1;
      }
    }
    while ( v15 );
    if ( v12 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(dword_18015C000 + 3145728));
    if ( v13 )
    {
      v38 = (__int64)(v60 - 2);
      v39 = &v57 + 4;
      v40 = 4294967294LL;
      if ( v60 - 2 != v39 )
      {
        do
        {
          v17 = *(unsigned int *)(v38 + 8);
          v6 |= 1LL << v17;
          if ( (_DWORD)v40 != -1 )
          {
            if ( (_DWORD)v40 == -2 )
            {
              v40 = (unsigned int)v17;
            }
            else if ( (_DWORD)v40 != (_DWORD)v17 )
            {
              v40 = 0xFFFFFFFFLL;
            }
          }
          v38 = *(_QWORD *)(v38 + 16) - 16LL;
        }
        while ( (__int64 *)v38 != v39 );
      }
      sub_180088BB0(a5, v40, v17);
      v58 = v6;
      if ( (_DWORD)v6 )
      {
        v41 = v6;
        do
        {
          v42 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v43, v41);
          v59 = v43;
          RtlAcquireSRWLockExclusive(v42 + 8 * (v43 + 2 * (v43 + 1)));
          v41 &= ~(1 << v43);
        }
        while ( v41 );
      }
      for ( i = HIDWORD(v58); i; i &= ~(1 << v55) )
      {
        _BitScanForward(&v55, i);
        v59 = v55;
        RtlAcquireSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v55 + 32 + 2 * (v55 + 32 + 1LL)));
      }
      while ( 1 )
      {
        v45 = v60;
        if ( v60 == (__int64 *)&v60 )
          break;
        v46 = (__int64 *)*v60;
        v47 = (__int64 **)v60[1];
        if ( *(__int64 **)(*v60 + 8) != v60 || *v47 != v60 )
          __fastfail(3u);
        *v47 = v46;
        v46[1] = (__int64)v47;
        v48 = v45;
        v49 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v45 - 2);
        v50 = *(__int64 ***)(v49 + 8);
        if ( *v50 != (__int64 *)v49 )
          __fastfail(3u);
        *v48 = v49;
        v48[1] = (__int64)v50;
        *v50 = v48;
        *(_QWORD *)(v49 + 8) = v48;
      }
      v58 = v6;
      if ( HIDWORD(v6) )
      {
        v54 = HIDWORD(v58);
        do
        {
          _BitScanReverse(&v56, v54);
          v59 = v56;
          RtlReleaseSRWLockExclusive(*(_QWORD *)(a5 + 24) + 8 * (v56 + 32 + 2 * (v56 + 32 + 1LL)));
          v54 &= ~(1 << v56);
        }
        while ( v54 );
      }
      for ( j = v58; j; j &= ~(1 << v53) )
      {
        v52 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v53, j);
        v59 = v53;
        RtlReleaseSRWLockExclusive(v52 + 8 * (v53 + 2 * (v53 + 1)));
      }
    }
    v19 = v68;
    v20 = v67;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v21 = *(_QWORD *)(a5 + 8);
  LODWORD(v69) = v21;
  do
  {
    v22 = *(_BYTE *)(a5 + 376);
    v23 = 0;
    v24 = v13 + HIDWORD(v21);
    v25 = 0;
    HIDWORD(v69) = v13 + HIDWORD(v21);
    if ( !v22 )
    {
      v26 = (unsigned __int16)(v69 ^ (v69 - 1)) ^ (unsigned int)v69;
      LODWORD(v69) = v26;
      if ( v20 )
      {
        v20 = v67;
        v26 = (unsigned __int16)v26 | ((HIWORD(v26) - 1) << 16);
        LODWORD(v69) = v26;
      }
      if ( !v19 )
      {
        if ( v24 )
        {
          HIDWORD(v69) = --v24;
        }
        else
        {
          v23 = 1;
          v26 ^= (unsigned __int16)(v26 ^ (v26 + 1));
          LODWORD(v69) = v26;
        }
      }
      if ( (v13 || v20) && v24 && (v26 & 0xFFFF0000) == 0 )
      {
        v25 = 1;
        LODWORD(v69) = (unsigned __int16)v26 | ((v26 & 0xFFFF0000) + 0x10000);
      }
    }
    v27 = v69;
    v28 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v69, v21);
    v20 = v67;
    LODWORD(v69) = v21;
  }
  while ( v28 != v21 );
  if ( v25 )
    ZwReleaseWorkerFactoryWorker(*(_QWORD *)(a5 + 56), v27, v67);
  result = v22;
  *a6 = v23;
  return result;
}
