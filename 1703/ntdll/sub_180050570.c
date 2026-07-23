/*
 * XREFs of sub_180050570 @ 0x180050570
 * Callers:
 *     sub_180019768 @ 0x180019768 (sub_180019768.c)
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 * Callees:
 *     sub_1800141D4 @ 0x1800141D4 (sub_1800141D4.c)
 *     sub_18001BB08 @ 0x18001BB08 (sub_18001BB08.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 */

void __fastcall sub_180050570(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rbx
  int v6; // eax
  _QWORD **v7; // rcx
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // r8
  _QWORD *i; // rcx
  int v13; // eax
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax

  RtlAcquireSRWLockExclusive(&stru_18015C040);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 152LL);
  *(_QWORD *)(a1 + 48) = a2;
  v5 = *(_QWORD *)(a2 + 152);
  v6 = *(_DWORD *)(v5 + 24);
  if ( v6 != -1 )
    *(_DWORD *)(v5 + 24) = v6 + 1;
  *(_DWORD *)(v4 + 24) = 0;
  if ( *(_QWORD *)(v4 + 48) )
  {
    v7 = *(_QWORD ***)(v4 + 48);
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        *(_QWORD *)(v4 + 48) = 0LL;
      else
        *v7 = (_QWORD *)*v8;
    }
    else
    {
      v8 = 0LL;
    }
    sub_18003015C((char *)a2);
    v9 = v8[1] & 0xFFFFFFFFFFFFFFF8uLL;
    v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
    if ( sub_18001BB08(v9, v5) )
    {
      for ( i = *(_QWORD **)(v9 + 40); (_QWORD *)*i != v11; i = (_QWORD *)*i )
        ;
      *i = *v11;
      if ( *(_QWORD **)(v9 + 40) == v11 )
      {
        v17 = 0LL;
        if ( i != v11 )
          v17 = i;
        *(_QWORD *)(v9 + 40) = v17;
      }
      v13 = *(_DWORD *)(v5 + 24);
      if ( v13 != -1 )
        *(_DWORD *)(v5 + 24) = v13 - 1;
      RtlFreeHeap(HeapHandle, 0, v11);
      v11 = 0LL;
    }
    else
    {
      v11[1] = v5;
      v15 = v11 + 2;
      v16 = *(_QWORD **)(v5 + 48);
      if ( v16 )
      {
        *v15 = *v16;
        *v16 = v15;
      }
      else
      {
        *v15 = v15;
      }
      *(_QWORD *)(v5 + 48) = v15;
    }
    if ( v10 && (*(int *)(v5 + 56) >= 2 || !v11) && (*(_DWORD *)(v10 + 92))-- == 1 )
    {
      *(_DWORD *)(v9 + 56) = 4;
      sub_1800141D4(v10);
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C040);
}
