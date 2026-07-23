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
  _RTL_SRWLOCK *v18; // rax
  bool v19; // r11
  bool v20; // r8
  signed __int64 v21; // rax
  unsigned __int8 v22; // bl
  char v23; // si
  int v24; // r9d
  char v25; // r10
  unsigned int v26; // ecx
  signed __int64 v27; // rtt
  __int64 result; // rax
  _RTL_SRWLOCK **v29; // rbx
  _RTL_SRWLOCK *v30; // rcx
  _RTL_SRWLOCK **v31; // rbx
  _RTL_SRWLOCK *v32; // rax
  _RTL_SRWLOCK **Ptr; // rdx
  _RTL_SRWLOCK *v34; // rcx
  _RTL_SRWLOCK **v35; // rcx
  _RTL_SRWLOCK *v36; // rax
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rdx
  unsigned int v40; // esi
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned int i; // esi
  __int64 *v44; // rax
  __int64 *v45; // rdx
  __int64 **v46; // rcx
  __int64 *v47; // rdx
  __int64 v48; // r8
  __int64 **v49; // rax
  unsigned int j; // esi
  __int64 v51; // rax
  __int64 v52; // rbx
  unsigned int v53; // esi
  unsigned int v54; // ebx
  unsigned int v55; // ebx
  __int64 v56; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+20h] [rbp-88h]
  unsigned int v58; // [rsp+28h] [rbp-80h]
  __int64 *v59; // [rsp+30h] [rbp-78h] BYREF
  _RTL_SRWLOCK *v60; // [rsp+38h] [rbp-70h]
  PRTL_SRWLOCK SRWLock; // [rsp+40h] [rbp-68h]
  _RTL_SRWLOCK *v62; // [rsp+48h] [rbp-60h]
  __int64 v63; // [rsp+50h] [rbp-58h]
  _RTL_SRWLOCK *v64; // [rsp+58h] [rbp-50h]
  _RTL_SRWLOCK *v65; // [rsp+60h] [rbp-48h]
  char v66; // [rsp+B0h] [rbp+8h]
  char v67; // [rsp+B8h] [rbp+10h]
  signed __int64 v68; // [rsp+B8h] [rbp+10h]

  v6 = 0LL;
  v8 = a4;
  v9 = a1 + 304;
  LODWORD(v57) = 0;
  v10 = 0;
  v63 = a1 + 304;
  v67 = 0;
  v66 = 0;
  v12 = 0;
  v13 = 0;
  if ( a2 == a1 + 304 )
  {
    v19 = *(_QWORD *)v9 != 0LL;
    v20 = *(_QWORD *)v9 == 0LL;
    v66 = v20;
  }
  else
  {
    *(_QWORD *)v9 = 0LL;
    v14 = a2 + 56 * v8;
    v60 = (_RTL_SRWLOCK *)&v59;
    v15 = a3;
    v59 = (__int64 *)&v59;
    *(_DWORD *)(v14 + 8) += a3 - 1;
    do
    {
      v16 = a2 + 32LL * --v15;
      v17 = v15;
      v18 = *(_RTL_SRWLOCK **)v16;
      v62 = v18;
      if ( v18 )
      {
        if ( v10 )
        {
          v29 = (_RTL_SRWLOCK **)(a2 + 56LL * v15);
          SRWLock = v18 + 4;
          memmove(v29, (const void *)(a2 + 32LL * v15), 0x20uLL);
          v30 = SRWLock;
          v29[6] = (_RTL_SRWLOCK *)v14;
          RtlAcquireSRWLockExclusive(v30);
          v31 = v29 + 4;
          v32 = v62 + 5;
          v65 = v62 + 5;
          Ptr = (_RTL_SRWLOCK **)v62[6].Ptr;
          v64 = (_RTL_SRWLOCK *)v62[5].Ptr;
          if ( *Ptr != &v62[5] )
            __fastfail(3u);
          v34 = SRWLock;
          *v31 = v32;
          v31[1] = (_RTL_SRWLOCK *)Ptr;
          *Ptr = (_RTL_SRWLOCK *)v31;
          v32[1].Ptr = v31;
          RtlReleaseSRWLockExclusive(v34);
          v12 = v57 + 1;
          LODWORD(v57) = v57 + 1;
          if ( v64 == v65 )
          {
            v35 = (_RTL_SRWLOCK **)v60;
            v36 = v62 + 2;
            if ( v60->Ptr != &v59 )
              __fastfail(3u);
            v62[3].Ptr = v60;
            v36->Ptr = &v59;
            ++v13;
            *v35 = v36;
            v60 = v36;
          }
          v10 = v67;
          v9 = v63;
        }
        else
        {
          v10 = 1;
          v67 = 1;
          *(_OWORD *)v9 = *(_OWORD *)v16;
          *(_OWORD *)(v9 + 16) = *(_OWORD *)(v16 + 16);
        }
      }
      else
      {
        v66 = 1;
      }
    }
    while ( v15 );
    if ( v12 != a3 - 1 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 8), 0xFFFFFFFF) == 1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, dword_18015C000 + 3145728, *(PVOID *)v14);
    if ( v13 )
    {
      v37 = (__int64)(v59 - 2);
      v38 = &v56 + 4;
      v39 = 4294967294LL;
      if ( v59 - 2 != v38 )
      {
        do
        {
          v17 = *(unsigned int *)(v37 + 8);
          v6 |= 1LL << v17;
          if ( (_DWORD)v39 != -1 )
          {
            if ( (_DWORD)v39 == -2 )
            {
              v39 = (unsigned int)v17;
            }
            else if ( (_DWORD)v39 != (_DWORD)v17 )
            {
              v39 = 0xFFFFFFFFLL;
            }
          }
          v37 = *(_QWORD *)(v37 + 16) - 16LL;
        }
        while ( (__int64 *)v37 != v38 );
      }
      sub_180088BB0(a5, v39, v17);
      v57 = v6;
      if ( (_DWORD)v6 )
      {
        v40 = v6;
        do
        {
          v41 = *(_QWORD *)(a5 + 24);
          _BitScanForward((unsigned int *)&v42, v40);
          v58 = v42;
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v41 + 8 * (v42 + 2 * (v42 + 1))));
          v40 &= ~(1 << v42);
        }
        while ( v40 );
      }
      for ( i = HIDWORD(v57); i; i &= ~(1 << v54) )
      {
        _BitScanForward(&v54, i);
        v58 = v54;
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v54 + 32 + 2 * (v54 + 32 + 1LL))));
      }
      while ( 1 )
      {
        v44 = v59;
        if ( v59 == (__int64 *)&v59 )
          break;
        v45 = (__int64 *)*v59;
        v46 = (__int64 **)v59[1];
        if ( *(__int64 **)(*v59 + 8) != v59 || *v46 != v59 )
          __fastfail(3u);
        *v46 = v45;
        v45[1] = (__int64)v46;
        v47 = v44;
        v48 = *(_QWORD *)(a5 + 24) + 24LL * *((unsigned int *)v44 - 2);
        v49 = *(__int64 ***)(v48 + 8);
        if ( *v49 != (__int64 *)v48 )
          __fastfail(3u);
        *v47 = v48;
        v47[1] = (__int64)v49;
        *v49 = v47;
        *(_QWORD *)(v48 + 8) = v47;
      }
      v57 = v6;
      if ( HIDWORD(v6) )
      {
        v53 = HIDWORD(v57);
        do
        {
          _BitScanReverse(&v55, v53);
          v58 = v55;
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(*(_QWORD *)(a5 + 24) + 8 * (v55 + 32 + 2 * (v55 + 32 + 1LL))));
          v53 &= ~(1 << v55);
        }
        while ( v53 );
      }
      for ( j = v57; j; j &= ~(1 << v52) )
      {
        v51 = *(_QWORD *)(a5 + 24);
        _BitScanReverse((unsigned int *)&v52, j);
        v58 = v52;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v51 + 8 * (v52 + 2 * (v52 + 1))));
      }
    }
    v19 = v67;
    v20 = v66;
  }
  _m_prefetchw((const void *)(a5 + 8));
  v21 = *(_QWORD *)(a5 + 8);
  LODWORD(v68) = v21;
  do
  {
    v22 = *(_BYTE *)(a5 + 376);
    v23 = 0;
    v24 = v13 + HIDWORD(v21);
    v25 = 0;
    HIDWORD(v68) = v13 + HIDWORD(v21);
    if ( !v22 )
    {
      v26 = (unsigned __int16)(v68 ^ (v68 - 1)) ^ (unsigned int)v68;
      LODWORD(v68) = v26;
      if ( v20 )
      {
        v20 = v66;
        v26 = (unsigned __int16)v26 | ((HIWORD(v26) - 1) << 16);
        LODWORD(v68) = v26;
      }
      if ( !v19 )
      {
        if ( v24 )
        {
          HIDWORD(v68) = --v24;
        }
        else
        {
          v23 = 1;
          v26 ^= (unsigned __int16)(v26 ^ (v26 + 1));
          LODWORD(v68) = v26;
        }
      }
      if ( (v13 || v20) && v24 && (v26 & 0xFFFF0000) == 0 )
      {
        v25 = 1;
        LODWORD(v68) = (unsigned __int16)v26 | ((v26 & 0xFFFF0000) + 0x10000);
      }
    }
    v27 = v21;
    v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a5 + 8), v68, v21);
    v20 = v66;
    LODWORD(v68) = v21;
  }
  while ( v27 != v21 );
  if ( v25 )
    ZwReleaseWorkerFactoryWorker(*(HANDLE *)(a5 + 56));
  result = v22;
  *a6 = v23;
  return result;
}
