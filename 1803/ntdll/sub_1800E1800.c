/*
 * XREFs of sub_1800E1800 @ 0x1800E1800
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

__int64 __fastcall sub_1800E1800(__int64 a1, char a2, unsigned __int8 *a3, ACL **a4, _BYTE *a5)
{
  unsigned __int16 v8; // bx
  unsigned __int16 *v9; // rdi
  unsigned int v10; // eax
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 i; // r9
  __int16 v14; // ax
  __int16 v15; // r8
  __int64 v16; // rax
  ACL *Heap; // rax
  ACL *v19; // r15
  unsigned int v20; // ebp
  unsigned int v21; // eax
  ACL *v22; // rbx
  char v23; // al
  __int64 v24; // rax
  ACL *v25; // r13
  unsigned __int8 *v26; // r14
  WORD *p_AceCount; // rbx
  char *v28; // rbx
  int v29; // edx
  ACL *v30; // [rsp+60h] [rbp+8h]

  v8 = 8;
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  v9 = (unsigned __int16 *)(a1 + 8);
  v10 = *(unsigned __int16 *)(a1 + 4);
  v11 = 4 * (a3[1] + 2);
  v12 = a1 + 8;
  if ( *(_WORD *)(a1 + 4) )
  {
    for ( i = v10; i; --i )
    {
      if ( *(_BYTE *)v12 )
      {
        if ( !a2 || *(_BYTE *)v12 != 4 )
          goto LABEL_13;
        v15 = 4 * *(unsigned __int8 *)(v12 + 13);
        if ( (unsigned __int16)(v15 + 8) <= v11 )
          v14 = v11 - v15 - 8;
        else
          v14 = v15 + 8 - v11;
      }
      else
      {
        v14 = v11 + 4;
      }
      v8 += v14;
LABEL_13:
      v16 = *(unsigned __int16 *)(v12 + 2);
      v8 += v16;
      v12 += v16;
    }
  }
  Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, Flags + 1310720, v8);
  *a4 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *a5 = 1;
  RtlCreateAcl(Heap, v8, 3u);
  v19 = *a4;
  v20 = 0;
  LOWORD(v21) = *(_WORD *)(a1 + 4);
  v30 = *a4;
  v22 = *a4 + 1;
  if ( (_WORD)v21 )
  {
    do
    {
      v23 = *(_BYTE *)v9;
      if ( !*(_BYTE *)v9 || a2 && v23 == 4 )
      {
        v25 = v22;
        if ( v23 )
          v26 = (unsigned __int8 *)&v9[2 * *((unsigned __int8 *)v9 + 13) + 10];
        else
          v26 = (unsigned __int8 *)(v9 + 4);
        *v22 = *(ACL *)v9;
        p_AceCount = &v22[1].AceCount;
        memmove(p_AceCount, a3, 4 * (unsigned int)a3[1] + 8);
        v28 = (char *)p_AceCount + (unsigned __int8)(4 * (a3[1] + 2));
        memmove(v28, v26, 4 * (unsigned int)v26[1] + 8);
        v29 = v26[1];
        LOWORD(v24) = a3[1] + 7;
        v25->AclRevision = 4;
        v25->AclSize = 4 * (v29 + v24);
        v22 = (ACL *)&v28[4 * v29 + 8];
        *(_WORD *)&v25[1].AclRevision = 1;
        LOWORD(v24) = v9[1];
      }
      else
      {
        memmove(v22, v9, v9[1]);
        v24 = v9[1];
        v22 = (ACL *)((char *)v22 + v24);
      }
      ++v20;
      v9 = (unsigned __int16 *)((char *)v9 + (unsigned __int16)v24);
      v21 = *(unsigned __int16 *)(a1 + 4);
    }
    while ( v20 < v21 );
    v19 = v30;
  }
  v19->AceCount = v21;
  return 0LL;
}
