/*
 * XREFs of sub_180027E0C @ 0x180027E0C
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180028238 @ 0x180028238 (sub_180028238.c)
 *     sub_180070AAC @ 0x180070AAC (sub_180070AAC.c)
 *     sub_180089000 @ 0x180089000 (sub_180089000.c)
 *     sub_1800891E4 @ 0x1800891E4 (sub_1800891E4.c)
 *     sub_180108210 @ 0x180108210 (sub_180108210.c)
 */

__int64 __fastcall sub_180027E0C(__int64 a1, __int64 a2, _QWORD *a3)
{
  BYTE Number; // bp
  unsigned int v6; // r9d
  unsigned int v7; // esi
  WORD Group; // r14
  int v9; // ebx
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned int v13; // r14d
  unsigned int v14; // ebp
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  _RTL_SRWLOCK *v17; // r12
  volatile signed __int64 *v18; // r13
  __int64 Ptr; // rsi
  _QWORD *v20; // rax
  signed __int64 v21; // rax
  unsigned int v22; // eax
  _QWORD *v24; // rax
  __int64 v25; // r12
  _QWORD *v26; // r13
  signed __int64 v27; // rcx
  __int64 v28; // rdx
  signed __int64 v29; // rdx
  signed __int64 v30; // rtt
  __int64 v31; // [rsp+70h] [rbp+8h]
  __int64 v33; // [rsp+88h] [rbp+20h]

  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v6 = dword_18015D044;
  v7 = dword_18015D044;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  if ( *(_DWORD *)(a1 + 424) != MEMORY[0x7FFE03C0] )
  {
    sub_180108210(a1);
    v6 = dword_18015D044;
  }
  v9 = 0;
  v10 = 0;
  if ( v6 )
  {
    v11 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      if ( *(_WORD *)(v11 + 16LL * v10 + 8) == Group )
      {
        v12 = *(_QWORD *)(v11 + 16LL * v10);
        if ( _bittest64(&v12, Number) )
          break;
      }
      if ( ++v10 >= v6 )
        goto LABEL_8;
    }
    v7 = v10;
  }
LABEL_8:
  v13 = v7 < v6 ? v7 : 0;
  sub_180028238(a1, a2, v13, Number);
  v14 = v13;
  if ( *(_DWORD *)(a1 + 428) != -1 || *(_DWORD *)(a2 + 348) < 0x10u || (unsigned int)sub_1800891E4(a1) )
  {
    v15 = 3LL * v13;
    v31 = 0LL;
    v16 = (_QWORD *)(a1 + 16);
    v33 = a1 + 16;
    while ( 1 )
    {
      v17 = (_RTL_SRWLOCK *)(*v16 + 8 * v15);
      v18 = (volatile signed __int64 *)&v17[2];
      RtlAcquireSRWLockExclusive(v17 + 2);
      Ptr = (__int64)v17->Ptr;
      if ( *((_RTL_SRWLOCK **)v17->Ptr + 1) != v17 || (v20 = *(_QWORD **)Ptr, *(_QWORD *)(*(_QWORD *)Ptr + 8LL) != Ptr) )
        __fastfail(3u);
      v17->Ptr = v20;
      v20[1] = v17;
      v21 = _InterlockedCompareExchange64(v18, 0LL, 1LL);
      if ( v21 != 1 )
      {
        do
        {
          v27 = v21 & 6;
          v28 = 3LL;
          if ( v27 != 2 )
            v28 = -1LL;
          v29 = v21 + v28;
          v30 = v21;
          v21 = _InterlockedCompareExchange64(v18, v29, v21);
        }
        while ( v30 != v21 );
        if ( v27 == 2 )
          sub_180070AAC(&v17[2], v29, 0LL);
      }
      if ( (_RTL_SRWLOCK *)Ptr == v17 )
        Ptr = 0LL;
      if ( Ptr )
        break;
      v15 = 3LL * v13;
      v16 = (_QWORD *)(v33 + 8);
      ++v31;
      v33 += 8LL;
      if ( v31 > 2 )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 377) )
      return 0LL;
    v24 = (_QWORD *)(a1 + 16);
LABEL_28:
    v25 = 0LL;
    v26 = v24;
    while ( 1 )
    {
      Ptr = sub_180089000(*v26 + 24LL * v14, v15);
      if ( Ptr )
        break;
      v14 = v14 + 1 < dword_18015D044 ? v14 + 1 : 0;
      if ( v14 == v13 )
      {
        ++v25;
        ++v26;
        if ( v25 > 2 )
        {
          v24 = (_QWORD *)(a1 + 16);
          if ( !*(_BYTE *)(a1 + 377) )
            goto LABEL_28;
          return 0LL;
        }
      }
    }
  }
  *a3 = Ptr - 16;
  sub_180028238(a1, a2, v14, *(unsigned __int8 *)(Ptr - 16 + 12));
  if ( v14 == v13 )
  {
    v22 = *(_DWORD *)(a2 + 348);
    v9 = v22 + 1;
    if ( v22 >= 0x10 )
      v9 = 16;
  }
  *(_DWORD *)(a2 + 348) = v9;
  return 1LL;
}
