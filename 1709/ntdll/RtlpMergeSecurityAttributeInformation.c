/*
 * XREFs of RtlpMergeSecurityAttributeInformation @ 0x180087420
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     RtlpIsAttributeAceInSacl @ 0x1800E8138 (RtlpIsAttributeAceInSacl.c)
 */

__int64 __fastcall RtlpMergeSecurityAttributeInformation(__int64 a1, __int64 a2, unsigned __int16 **a3, char a4)
{
  char v5; // di
  unsigned __int16 *Heap; // rbx
  unsigned int v8; // r12d
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // r13d
  _BYTE *v12; // r15
  _BYTE *v13; // rdi
  unsigned int i; // ebp
  _BYTE *v15; // rdi
  unsigned int j; // ebp
  _WORD *v17; // rbp
  unsigned int v18; // r13d
  _BYTE *k; // rdi
  unsigned int v20; // edi
  _WORD *v21; // rdi
  unsigned int m; // ebp
  __int64 v24; // r8
  char IsAttributeAceInSacl; // al
  char v26; // al
  _BYTE v27[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+24h] [rbp-44h]

  v5 = a4;
  v27[0] = 0;
  Heap = 0LL;
  v8 = 0;
  if ( !a3 )
  {
    v8 = -1073741811;
    goto LABEL_76;
  }
  if ( a1 )
  {
    v9 = *(unsigned __int16 *)(a1 + 2);
    goto LABEL_4;
  }
  if ( a2 )
  {
    v9 = 0;
LABEL_4:
    if ( a2 )
      v10 = *(unsigned __int16 *)(a2 + 2);
    else
      v10 = 0;
    v11 = v10 + v9;
    v28 = v10 + v9;
    if ( (unsigned int)(v10 + v9) < 8 )
    {
LABEL_75:
      v8 = -1073741705;
    }
    else
    {
      Heap = (unsigned __int16 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v11);
      if ( Heap )
      {
        v12 = Heap + 4;
        *(_QWORD *)Heap = 0LL;
        *(_DWORD *)(Heap + 1) = 8;
        *(_BYTE *)Heap = 2;
        if ( a1 )
        {
          v13 = (_BYTE *)(a1 + 8);
          for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); v13 += *((unsigned __int16 *)v13 + 1) )
          {
            if ( *v13 == 18 && (v13[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v13, Heap, 0LL, v27) )
            {
              if ( !a2 || a4 )
              {
                IsAttributeAceInSacl = 0;
              }
              else
              {
                LOBYTE(v24) = 1;
                IsAttributeAceInSacl = RtlpIsAttributeAceInSacl(v13, a2, v24, v27);
              }
              if ( IsAttributeAceInSacl && v27[0] )
              {
                Heap[1] += *((_WORD *)v13 + 1);
                if ( Heap[1] > v11 )
                  goto LABEL_74;
                memmove(v12, v13, *((unsigned __int16 *)v13 + 1));
                ++Heap[2];
                v12[1] |= 0x10u;
              }
              else
              {
                Heap[1] += *((_WORD *)v13 + 1);
                if ( Heap[1] > v11 )
                {
LABEL_74:
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
                  goto LABEL_75;
                }
                memmove(v12, v13, *((unsigned __int16 *)v13 + 1));
                ++Heap[2];
              }
              v12 += *((unsigned __int16 *)v13 + 1);
            }
            ++i;
          }
          v5 = a4;
        }
        if ( a2 )
        {
          if ( v5 )
          {
            v15 = (_BYTE *)(a2 + 8);
            for ( j = 0; j < *(unsigned __int16 *)(a2 + 4); v15 += *((unsigned __int16 *)v15 + 1) )
            {
              if ( *v15 == 18 && (v15[1] & 0x10) == 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(v15, Heap, 0LL, v27) )
              {
                Heap[1] += *((_WORD *)v15 + 1);
                if ( Heap[1] > v11 )
                  goto LABEL_74;
                memmove(v12, v15, *((unsigned __int16 *)v15 + 1));
                ++Heap[2];
                v12 += *((unsigned __int16 *)v15 + 1);
              }
              ++j;
            }
          }
        }
        if ( a1 )
        {
          v17 = (_WORD *)(a1 + 8);
          v18 = 0;
          for ( k = (_BYTE *)(a1 + 8); v18 < *(unsigned __int16 *)(a1 + 4); k += *((unsigned __int16 *)k + 1) )
          {
            if ( *k == 18 && (k[1] & 0x10) != 0 && !(unsigned __int8)RtlpIsAttributeAceInSacl(k, Heap, 0LL, v27) )
            {
              if ( a2 )
                v26 = RtlpIsAttributeAceInSacl(k, a2, 1LL, v27);
              else
                v26 = 0;
              if ( v26 && v27[0] )
              {
                Heap[1] += *((_WORD *)k + 1);
                if ( Heap[1] > v28 )
                  goto LABEL_74;
                memmove(v12, k, *((unsigned __int16 *)k + 1));
                ++Heap[2];
                v12[1] |= 0x10u;
              }
              else
              {
                Heap[1] += *((_WORD *)k + 1);
                if ( Heap[1] > v28 )
                  goto LABEL_74;
                memmove(v12, k, *((unsigned __int16 *)k + 1));
                ++Heap[2];
                v12[1] &= ~0x10u;
              }
              v12 += *((unsigned __int16 *)k + 1);
            }
            ++v18;
          }
          v20 = 0;
          if ( *(_WORD *)(a1 + 4) )
          {
            do
            {
              v11 = v28;
              if ( *(_BYTE *)v17 != 18 )
              {
                Heap[1] += v17[1];
                if ( Heap[1] > v11 )
                  goto LABEL_74;
                memmove(v12, v17, (unsigned __int16)v17[1]);
                ++Heap[2];
                v12 += (unsigned __int16)v17[1];
              }
              ++v20;
              v17 = (_WORD *)((char *)v17 + (unsigned __int16)v17[1]);
            }
            while ( v20 < *(unsigned __int16 *)(a1 + 4) );
          }
          else
          {
            v11 = v28;
          }
        }
        if ( a2 )
        {
          if ( a4 )
          {
            v21 = (_WORD *)(a2 + 8);
            for ( m = 0; m < *(unsigned __int16 *)(a2 + 4); v21 = (_WORD *)((char *)v21 + (unsigned __int16)v21[1]) )
            {
              if ( *(_BYTE *)v21 != 18 )
              {
                Heap[1] += v21[1];
                if ( Heap[1] > v11 )
                  goto LABEL_74;
                memmove(v12, v21, (unsigned __int16)v21[1]);
                ++Heap[2];
                v12 += (unsigned __int16)v21[1];
              }
              ++m;
            }
          }
        }
        goto LABEL_27;
      }
      v8 = -1073741801;
    }
LABEL_76:
    *a3 = 0LL;
    return v8;
  }
LABEL_27:
  *a3 = Heap;
  return v8;
}
