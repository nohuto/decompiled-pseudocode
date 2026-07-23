/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x1800E3CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E3AAC @ 0x1800E3AAC (sub_1800E3AAC.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(__int64 a1, __int64 a2, unsigned __int16 **a3, char a4)
{
  unsigned __int16 *v4; // rbx
  char v5; // si
  unsigned __int16 **v6; // rax
  unsigned __int16 *Heap; // rdi
  unsigned int v10; // r12d
  int v11; // ecx
  int v12; // eax
  unsigned int v13; // ecx
  _BYTE *v14; // r15
  _BYTE *v15; // rsi
  unsigned int i; // r14d
  char v17; // al
  _BYTE *v18; // rsi
  unsigned int j; // r14d
  unsigned int v20; // eax
  _WORD *v21; // r14
  _BYTE *v22; // rsi
  char v23; // al
  __int64 v24; // rax
  unsigned int v25; // esi
  _WORD *v26; // rsi
  unsigned int k; // r14d
  _BYTE v29[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+24h] [rbp-44h]
  unsigned int v31; // [rsp+28h] [rbp-40h]

  v4 = 0LL;
  v5 = a4;
  v29[0] = 0;
  v6 = a3;
  Heap = 0LL;
  v10 = 0;
  if ( a3 )
  {
    if ( a1 )
    {
      v11 = *(unsigned __int16 *)(a1 + 2);
    }
    else
    {
      if ( !a2 )
        goto LABEL_69;
      v11 = 0;
    }
    if ( a2 )
      v12 = *(unsigned __int16 *)(a2 + 2);
    else
      v12 = 0;
    v13 = v12 + v11;
    v30 = v13;
    if ( v13 < 8 )
    {
LABEL_72:
      v10 = -1073741705;
      goto LABEL_73;
    }
    Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, v13);
    if ( !Heap )
    {
      v10 = -1073741801;
LABEL_73:
      v6 = a3;
      goto LABEL_70;
    }
    v14 = Heap + 4;
    *(_QWORD *)Heap = 0LL;
    *(_DWORD *)(Heap + 1) = 8;
    *(_BYTE *)Heap = 2;
    if ( a1 )
    {
      v15 = (_BYTE *)(a1 + 8);
      for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); v15 += *((unsigned __int16 *)v15 + 1) )
      {
        if ( *v15 == 18 && (v15[1] & 0x10) == 0 && !sub_1800E3AAC((__int64)v15, (__int64)Heap, 0, v29) )
        {
          if ( !a2 || a4 )
            v17 = 0;
          else
            v17 = sub_1800E3AAC((__int64)v15, a2, 1, v29);
          if ( v17 && v29[0] )
          {
            Heap[1] += *((_WORD *)v15 + 1);
            if ( Heap[1] > v30 )
              goto LABEL_71;
            memmove(v14, v15, *((unsigned __int16 *)v15 + 1));
            ++Heap[2];
            v14[1] |= 0x10u;
          }
          else
          {
            Heap[1] += *((_WORD *)v15 + 1);
            if ( Heap[1] > v30 )
            {
LABEL_71:
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
              goto LABEL_72;
            }
            memmove(v14, v15, *((unsigned __int16 *)v15 + 1));
            ++Heap[2];
          }
          v14 += *((unsigned __int16 *)v15 + 1);
        }
        ++i;
      }
      v5 = a4;
    }
    if ( a2 )
    {
      if ( v5 )
      {
        v18 = (_BYTE *)(a2 + 8);
        for ( j = 0; j < *(unsigned __int16 *)(a2 + 4); v18 += *((unsigned __int16 *)v18 + 1) )
        {
          if ( *v18 == 18 && (v18[1] & 0x10) == 0 && !sub_1800E3AAC((__int64)v18, (__int64)Heap, 0, v29) )
          {
            Heap[1] += *((_WORD *)v18 + 1);
            if ( Heap[1] > v30 )
              goto LABEL_71;
            memmove(v14, v18, *((unsigned __int16 *)v18 + 1));
            ++Heap[2];
            v14 += *((unsigned __int16 *)v18 + 1);
          }
          ++j;
        }
      }
    }
    if ( a1 )
    {
      LOWORD(v20) = *(_WORD *)(a1 + 4);
      v21 = (_WORD *)(a1 + 8);
      v31 = 0;
      v22 = (_BYTE *)(a1 + 8);
      if ( (_WORD)v20 )
      {
        do
        {
          if ( *v22 == 18 && (v22[1] & 0x10) != 0 && !sub_1800E3AAC((__int64)v22, (__int64)Heap, 0, v29) )
          {
            if ( a2 )
              v23 = sub_1800E3AAC((__int64)v22, a2, 1, v29);
            else
              v23 = 0;
            if ( v23 && v29[0] )
            {
              Heap[1] += *((_WORD *)v22 + 1);
              if ( Heap[1] > v30 )
                goto LABEL_71;
              memmove(v14, v22, *((unsigned __int16 *)v22 + 1));
              ++Heap[2];
              v14[1] |= 0x10u;
            }
            else
            {
              Heap[1] += *((_WORD *)v22 + 1);
              if ( Heap[1] > v30 )
                goto LABEL_71;
              memmove(v14, v22, *((unsigned __int16 *)v22 + 1));
              ++Heap[2];
              v14[1] &= ~0x10u;
            }
            v14 += *((unsigned __int16 *)v22 + 1);
          }
          v24 = *((unsigned __int16 *)v22 + 1);
          ++v31;
          v22 += v24;
          v20 = *(unsigned __int16 *)(a1 + 4);
        }
        while ( v31 < v20 );
      }
      v25 = 0;
      if ( (_WORD)v20 )
      {
        do
        {
          if ( *(_BYTE *)v21 != 18 )
          {
            Heap[1] += v21[1];
            if ( Heap[1] > v30 )
              goto LABEL_71;
            memmove(v14, v21, (unsigned __int16)v21[1]);
            ++Heap[2];
            v14 += (unsigned __int16)v21[1];
          }
          ++v25;
          v21 = (_WORD *)((char *)v21 + (unsigned __int16)v21[1]);
        }
        while ( v25 < *(unsigned __int16 *)(a1 + 4) );
      }
    }
    if ( a2 )
    {
      if ( a4 )
      {
        v26 = (_WORD *)(a2 + 8);
        for ( k = 0; k < *(unsigned __int16 *)(a2 + 4); v26 = (_WORD *)((char *)v26 + (unsigned __int16)v26[1]) )
        {
          if ( *(_BYTE *)v26 != 18 )
          {
            Heap[1] += v26[1];
            if ( Heap[1] > v30 )
              goto LABEL_71;
            memmove(v14, v26, (unsigned __int16)v26[1]);
            ++Heap[2];
            v14 += (unsigned __int16)v26[1];
          }
          ++k;
        }
      }
    }
    v6 = a3;
LABEL_69:
    v4 = Heap;
    goto LABEL_70;
  }
  v10 = -1073741811;
LABEL_70:
  *v6 = v4;
  return v10;
}
