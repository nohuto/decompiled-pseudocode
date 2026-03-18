/*
 * XREFs of MiMirrorReduceBlackWrites @ 0x1401573F4
 * Callers:
 *     MmDuplicateMemory @ 0x140476A94 (MmDuplicateMemory.c)
 * Callees:
 *     MiIsDecayPfn @ 0x140003B48 (MiIsDecayPfn.c)
 *     MiMirrorNodeLargePages @ 0x1401571B0 (MiMirrorNodeLargePages.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14015767C (MiMirrorOmitPagesFromCopy.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

void __fastcall MiMirrorReduceBlackWrites(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // ebp
  __int64 v5; // rsi
  int v6; // r13d
  __int64 v8; // rbx
  unsigned int v9; // r8d
  int v10; // edx
  ULONG_PTR *v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // r15
  _QWORD *v15; // rax
  unsigned __int64 i; // rcx
  _QWORD **v17; // rax
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *j; // rax
  _QWORD **v21; // rax
  unsigned __int64 v22; // rdx
  _QWORD *v23; // rdx
  __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned int v25; // [rsp+80h] [rbp+18h]

  if ( (a3 & 0xD) == 0 )
    return;
  v4 = 0;
  v5 = 0LL;
  v25 = 0;
  v6 = a4;
  v8 = 2LL - ((a3 & 8) != 0);
LABEL_3:
  v24 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      v9 = v5;
      v10 = v5;
      if ( v8 > 1 )
        v11 = &MiSystemPartition + 4 * v5 + v5 + 296;
      else
        v11 = (ULONG_PTR *)(*(&MiSystemPartition + v8 + 264) + 40LL * v4);
      v12 = v11[2];
      if ( v12 != 0xFFFFFFFFFLL )
      {
        do
        {
          v13 = (_QWORD *)(48 * v12 - 0x58000000000LL);
          if ( v8 == 2 && MiIsDecayPfn(v12) )
          {
            v14 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v13 + 2);
            if ( v14 != v12 )
            {
              do
              {
                MiMirrorOmitPagesFromCopy(a1, v14, 1LL);
                v14 = *(_QWORD *)(48 * v14 - 0x58000000000LL) & 0xFFFFFFFFFLL;
              }
              while ( v14 != v12 );
              v8 = v24;
            }
          }
          else
          {
            MiMirrorOmitPagesFromCopy(a1, v12, 1LL);
          }
          v12 = *v13 & 0xFFFFFFFFFLL;
        }
        while ( v12 != 0xFFFFFFFFFLL );
        v4 = v25;
        v6 = a4;
        v10 = v5;
        v9 = v5;
      }
      if ( v8 > 1 )
        break;
      v25 = ++v4;
      if ( v4 >= dword_1403CB6DC )
      {
        v4 = 0;
        v25 = 0;
        break;
      }
    }
    if ( !v8 )
      break;
    if ( v8 == 2 )
    {
      v5 = (unsigned int)(v5 + 1);
      if ( (_DWORD)v5 != v6 )
        continue;
    }
    v5 = (unsigned int)(v10 + 1);
    if ( v8 != 2 )
      v5 = v9;
    --v8;
    goto LABEL_3;
  }
  MiMirrorNodeLargePages(a1, (__int64)&MiSystemPartition, 1);
  v15 = (_QWORD *)qword_1403CBD30;
  i = 0LL;
  while ( v15 )
  {
    i = (unsigned __int64)v15;
    v15 = (_QWORD *)*v15;
  }
  while ( i )
  {
    v17 = *(_QWORD ***)(i + 8);
    v18 = i;
    *(_BYTE *)(i + 70) = 1;
    if ( v17 )
    {
      v19 = *v17;
      for ( i = (unsigned __int64)v17; v19; v19 = (_QWORD *)*v19 )
        i = (unsigned __int64)v19;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v18 )
          break;
        v18 = i;
      }
    }
  }
  for ( j = (_QWORD *)qword_1403CBD20; j; j = (_QWORD *)*j )
    i = (unsigned __int64)j;
  while ( i )
  {
    v21 = *(_QWORD ***)(i + 8);
    v22 = i;
    *(_BYTE *)(i + 70) = 1;
    if ( v21 )
    {
      v23 = *v21;
      for ( i = (unsigned __int64)v21; v23; v23 = (_QWORD *)*v23 )
        i = (unsigned __int64)v23;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v22 )
          break;
        v22 = i;
      }
    }
  }
}
