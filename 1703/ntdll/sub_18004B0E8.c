/*
 * XREFs of sub_18004B0E8 @ 0x18004B0E8
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800496D0 (RtlCreateAcl.c)
 *     RtlFirstFreeAce @ 0x180049B80 (RtlFirstFreeAce.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

__int64 __fastcall sub_18004B0E8(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        ACL **a7,
        _DWORD *a8)
{
  unsigned __int8 *v8; // r12
  ACL *v11; // rbp
  ULONG v12; // ebx
  unsigned int v14; // r9d
  unsigned __int8 *v15; // r10
  unsigned int j; // r11d
  int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  signed int v20; // esi
  unsigned int v21; // eax
  int v22; // edi
  ULONG v23; // edi
  ACL *Heap; // rax
  char *v25; // rbx
  unsigned __int16 *v26; // rdi
  unsigned int v27; // r14d
  unsigned __int8 *v28; // r10
  unsigned int i; // r11d
  unsigned __int8 v30; // al
  unsigned int v31; // edi
  int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // ecx
  unsigned __int16 *v35; // rdi
  unsigned int v36; // r14d
  unsigned __int8 v37; // al
  unsigned __int8 *v38; // r10
  unsigned int k; // r11d
  unsigned int v40; // edi
  unsigned __int8 *v41; // r10
  unsigned int m; // r11d
  unsigned int v43; // edi
  unsigned __int8 *v44; // r10
  unsigned int n; // r11d
  unsigned int v46; // edi
  unsigned __int8 *v47; // r10
  unsigned int ii; // r11d
  unsigned int v49; // edi
  unsigned __int16 *v50; // rdi
  unsigned int v51; // r14d
  unsigned __int16 *v52; // rdi
  unsigned int jj; // r14d
  unsigned __int16 *v54; // rdi
  unsigned int kk; // r14d
  unsigned __int16 *v56; // rdi
  unsigned int mm; // r14d
  int v58; // eax
  unsigned int v59; // edx
  unsigned int v60; // ecx
  int v61; // eax
  unsigned int v62; // edx
  unsigned int v63; // ecx
  int v64; // eax
  unsigned int v65; // edx
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // edx
  unsigned int v69; // ecx
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  NTSTATUS Acl; // [rsp+70h] [rbp+8h]

  v8 = a5;
  FirstFree = 0LL;
  v11 = 0LL;
  v12 = 2;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) == 0 && !a3 && !a4 && !a5 && !a6 )
  {
    *a7 = 0LL;
    return 0LL;
  }
  v14 = 8;
  if ( a1 )
  {
    v28 = a1 + 8;
    for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v28 += *((unsigned __int16 *)v28 + 1) )
    {
      v30 = *v28;
      v31 = v14;
      if ( *v28 >= 2u && (v30 <= 3u || v30 > 6u && (v30 <= 8u || (unsigned __int8)(v30 - 13) <= 3u)) )
      {
        v32 = -1;
        v33 = v14 + *((unsigned __int16 *)v28 + 1);
        v34 = v14;
        if ( v33 >= v14 )
          v32 = v14 + *((unsigned __int16 *)v28 + 1);
        v14 = v32;
        v20 = v33 < v34 ? 0xC0000095 : 0;
        if ( v33 < v31 )
          goto LABEL_41;
        if ( a8 )
          *a8 |= 8u;
        if ( *a1 > v12 )
          v12 = *a1;
      }
      ++i;
    }
  }
  if ( a2 )
  {
    v15 = a2 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v15 += *((unsigned __int16 *)v15 + 1) )
    {
      if ( *v15 == 17 )
      {
        v17 = -1;
        v18 = v14 + *((unsigned __int16 *)v15 + 1);
        v19 = v14;
        if ( v18 >= v14 )
          v17 = v14 + *((unsigned __int16 *)v15 + 1);
        v14 = v17;
        v20 = v18 < v19 ? 0xC0000095 : 0;
        if ( v18 < v19 )
          goto LABEL_41;
        if ( a8 )
          *a8 |= 0x10u;
        if ( *a2 > v12 )
          v12 = *a2;
      }
      ++j;
    }
  }
  if ( a5 )
  {
    v38 = a5 + 8;
    for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v38 += *((unsigned __int16 *)v38 + 1) )
    {
      v40 = v14;
      if ( *v38 == 20 )
      {
        v58 = -1;
        v59 = v14 + *((unsigned __int16 *)v38 + 1);
        v60 = v14;
        if ( v59 >= v14 )
          v58 = v14 + *((unsigned __int16 *)v38 + 1);
        v14 = v58;
        v20 = v59 < v60 ? 0xC0000095 : 0;
        if ( v59 < v40 )
          goto LABEL_41;
        if ( a8 )
          *a8 |= 0x80u;
        if ( *a5 > v12 )
          v12 = *a5;
      }
      ++k;
    }
  }
  if ( a6 )
  {
    v41 = a6 + 8;
    for ( m = 0; m < *((unsigned __int16 *)a6 + 2); v41 += *((unsigned __int16 *)v41 + 1) )
    {
      v43 = v14;
      if ( *v41 == 21 )
      {
        v61 = -1;
        v62 = v14 + *((unsigned __int16 *)v41 + 1);
        v63 = v14;
        if ( v62 >= v14 )
          v61 = v14 + *((unsigned __int16 *)v41 + 1);
        v14 = v61;
        v20 = v62 < v63 ? 0xC0000095 : 0;
        if ( v62 < v43 )
          goto LABEL_41;
        if ( a8 )
          *a8 |= 0x100u;
        if ( *a6 > v12 )
          v12 = *a6;
      }
      ++m;
    }
  }
  if ( a3 )
  {
    v44 = a3 + 8;
    for ( n = 0; n < *((unsigned __int16 *)a3 + 2); v44 += *((unsigned __int16 *)v44 + 1) )
    {
      v46 = v14;
      if ( *v44 == 18 )
      {
        v64 = -1;
        v65 = v14 + *((unsigned __int16 *)v44 + 1);
        v66 = v14;
        if ( v65 >= v14 )
          v64 = v14 + *((unsigned __int16 *)v44 + 1);
        v14 = v64;
        v20 = v65 < v66 ? 0xC0000095 : 0;
        if ( v65 < v46 )
          goto LABEL_41;
        if ( a8 )
          *a8 |= 0x20u;
        if ( *a3 > v12 )
          v12 = *a3;
      }
      ++n;
    }
  }
  if ( a4 )
  {
    v47 = a4 + 8;
    for ( ii = 0; ii < *((unsigned __int16 *)a4 + 2); v47 += *((unsigned __int16 *)v47 + 1) )
    {
      v49 = v14;
      if ( *v47 == 19 )
      {
        v67 = -1;
        v68 = v14 + *((unsigned __int16 *)v47 + 1);
        v69 = v14;
        if ( v68 >= v14 )
          v67 = v14 + *((unsigned __int16 *)v47 + 1);
        v14 = v67;
        v20 = v68 < v69 ? 0xC0000095 : 0;
        if ( v68 < v49 )
          goto LABEL_41;
        if ( a8 )
          *a8 |= 0x40u;
        if ( *a4 > v12 )
          v12 = *a4;
      }
      ++ii;
    }
  }
  v21 = v14 + 3;
  v22 = -1;
  if ( v14 + 3 >= v14 )
    v22 = v14 + 3;
  v20 = v21 < v14 ? 0xC0000095 : 0;
  if ( v21 >= v14 )
  {
    v23 = v22 & 0xFFFFFFFC;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, dword_18015B268 + 1310720, v23);
    v11 = Heap;
    if ( !Heap )
    {
      v20 = -1073741801;
      goto LABEL_42;
    }
    Acl = RtlCreateAcl(Heap, v23, v12);
    v20 = Acl;
    if ( Acl >= 0 )
    {
      if ( RtlFirstFreeAce(v11, &FirstFree) )
      {
        if ( a1 && (v35 = (unsigned __int16 *)(a1 + 8), v36 = 0, *((_WORD *)a1 + 2)) )
        {
          v25 = (char *)FirstFree;
          do
          {
            v37 = *(_BYTE *)v35;
            if ( *(_BYTE *)v35 >= 2u && (v37 <= 3u || v37 > 6u && (v37 <= 8u || (unsigned __int8)(v37 - 13) <= 3u)) )
            {
              memmove(v25, v35, v35[1]);
              ++v11->AceCount;
              v25 += v35[1];
            }
            ++v36;
            v35 = (unsigned __int16 *)((char *)v35 + v35[1]);
          }
          while ( v36 < *((unsigned __int16 *)a1 + 2) );
          v8 = a5;
        }
        else
        {
          v25 = (char *)FirstFree;
        }
        if ( a2 )
        {
          v26 = (unsigned __int16 *)(a2 + 8);
          v27 = 0;
          if ( *((_WORD *)a2 + 2) )
          {
            do
            {
              if ( *(_BYTE *)v26 == 17 )
              {
                memmove(v25, v26, v26[1]);
                ++v11->AceCount;
                v25 += v26[1];
              }
              ++v27;
              v26 = (unsigned __int16 *)((char *)v26 + v26[1]);
            }
            while ( v27 < *((unsigned __int16 *)a2 + 2) );
            v8 = a5;
          }
        }
        if ( v8 )
        {
          v50 = (unsigned __int16 *)(v8 + 8);
          v51 = 0;
          if ( *((_WORD *)v8 + 2) )
          {
            do
            {
              if ( *(_BYTE *)v50 == 20 )
              {
                memmove(v25, v50, v50[1]);
                ++v11->AceCount;
                v25 += v50[1];
              }
              ++v51;
              v50 = (unsigned __int16 *)((char *)v50 + v50[1]);
            }
            while ( v51 < *((unsigned __int16 *)v8 + 2) );
            v20 = Acl;
          }
        }
        if ( a6 )
        {
          v52 = (unsigned __int16 *)(a6 + 8);
          for ( jj = 0; jj < *((unsigned __int16 *)a6 + 2); v52 = (unsigned __int16 *)((char *)v52 + v52[1]) )
          {
            if ( *(_BYTE *)v52 == 21 )
            {
              memmove(v25, v52, v52[1]);
              ++v11->AceCount;
              v25 += v52[1];
            }
            ++jj;
          }
        }
        if ( a3 )
        {
          v54 = (unsigned __int16 *)(a3 + 8);
          for ( kk = 0; kk < *((unsigned __int16 *)a3 + 2); v54 = (unsigned __int16 *)((char *)v54 + v54[1]) )
          {
            if ( *(_BYTE *)v54 == 18 )
            {
              memmove(v25, v54, v54[1]);
              ++v11->AceCount;
              v25 += v54[1];
            }
            ++kk;
          }
        }
        if ( a4 )
        {
          v56 = (unsigned __int16 *)(a4 + 8);
          for ( mm = 0; mm < *((unsigned __int16 *)a4 + 2); v56 = (unsigned __int16 *)((char *)v56 + v56[1]) )
          {
            if ( *(_BYTE *)v56 == 19 )
            {
              memmove(v25, v56, v56[1]);
              ++v11->AceCount;
              v25 += v56[1];
            }
            ++mm;
          }
        }
        goto LABEL_41;
      }
      v20 = -1073741699;
    }
LABEL_141:
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
      v11 = 0LL;
    }
    goto LABEL_42;
  }
LABEL_41:
  if ( v20 < 0 )
    goto LABEL_141;
LABEL_42:
  *a7 = v11;
  return (unsigned int)v20;
}
