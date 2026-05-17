/*
 * XREFs of RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E6584
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800D8FA0 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x180046E20 (RtlValidSecurityDescriptor.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800E5D78 @ 0x1800E5D78 (sub_1800E5D78.c)
 */

__int64 __fastcall RtlConvertToAutoInheritSecurityObject_0(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  __int64 v6; // r13
  int v10; // edi
  __int16 v11; // si
  void *v12; // rax
  unsigned __int16 *v13; // r15
  __int64 v14; // r9
  __int64 v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v17; // rcx
  __int16 v18; // si
  __int64 v19; // rax
  __int16 v20; // di
  unsigned __int16 *v21; // r14
  __int64 v22; // r9
  __int64 v23; // r8
  unsigned __int16 *v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // di
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // r15d
  unsigned int v30; // r12d
  __int64 v31; // rbx
  __int64 Heap; // rax
  void *v33; // rsi
  char *v34; // rbx
  char *v35; // rbx
  char v37; // [rsp+58h] [rbp-29h]
  unsigned int v38; // [rsp+5Ch] [rbp-25h] BYREF
  void *Src; // [rsp+60h] [rbp-21h]
  unsigned __int16 *v40; // [rsp+68h] [rbp-19h] BYREF
  void *v41; // [rsp+70h] [rbp-11h]
  unsigned __int16 *v42; // [rsp+78h] [rbp-9h] BYREF
  void *v43; // [rsp+80h] [rbp-1h]
  void *ProcessHeap; // [rsp+88h] [rbp+7h]
  char v45; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v40 = 0LL;
  v37 = 0;
  v42 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v45 = 0;
  if ( !RtlValidSecurityDescriptor(a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  if ( v11 >= 0 )
  {
    v12 = *(void **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_116;
    }
    v12 = (void *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v43 = v12;
  if ( !v12 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v41 = *(void **)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v41 = (void *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v41 = 0LL;
  }
  if ( (~(_BYTE)v11 & 0x10) == 0 )
  {
    if ( v11 >= 0 )
    {
      v13 = *(unsigned __int16 **)(a2 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a2 + 12) )
        goto LABEL_46;
      v13 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
    }
    Src = v13;
    if ( v13 )
    {
      if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !a1 )
      {
        v18 = v11 & 0x2010 | 0x800;
        goto LABEL_56;
      }
      if ( v11 >= 0 )
      {
        v14 = *(_QWORD *)(a2 + 16);
      }
      else if ( *(_DWORD *)(a2 + 8) )
      {
        v14 = a2 + *(unsigned int *)(a2 + 8);
      }
      else
      {
        v14 = 0LL;
      }
      if ( v11 >= 0 )
      {
        v15 = *(_QWORD *)(a2 + 8);
      }
      else if ( *(_DWORD *)(a2 + 4) )
      {
        v15 = a2 + *(unsigned int *)(a2 + 4);
      }
      else
      {
        v15 = 0LL;
      }
      if ( v11 >= 0 )
      {
        v16 = *(unsigned __int16 **)(a2 + 24);
      }
      else if ( *(_DWORD *)(a2 + 12) )
      {
        v16 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
      }
      else
      {
        v16 = 0LL;
      }
      if ( (~*(_BYTE *)(a1 + 2) & 0x10) != 0 )
        goto LABEL_38;
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v17 = *(_QWORD *)(a1 + 24);
        goto LABEL_43;
      }
      if ( !*(_DWORD *)(a1 + 12) )
LABEL_38:
        v17 = 0LL;
      else
        v17 = a1 + *(unsigned int *)(a1 + 12);
LABEL_43:
      v10 = sub_1800E5D78(v17, v16, a4, a5, v15, v14, a6, (unsigned __int64 *)&v40, &v38);
      if ( v10 < 0 )
        goto LABEL_116;
      v37 = 1;
      v18 = 2 * (v38 & 0x1400 | (2 * (v38 & 8 | 4)));
      goto LABEL_55;
    }
  }
LABEL_46:
  v18 = v11 & 0x2010 | 0x800;
  if ( !a1 )
  {
    v19 = 0LL;
LABEL_53:
    if ( v19 )
      v18 |= 0x2000u;
    goto LABEL_55;
  }
  if ( (~*(_BYTE *)(a1 + 2) & 0x10) != 0 )
    goto LABEL_55;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v19 = *(_QWORD *)(a1 + 24);
    goto LABEL_53;
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v19 = a1 + *(unsigned int *)(a1 + 12);
    goto LABEL_53;
  }
LABEL_55:
  v13 = v40;
  Src = v40;
LABEL_56:
  v20 = *(_WORD *)(a2 + 2);
  if ( (~(_BYTE)v20 & 4) != 0 )
    goto LABEL_89;
  if ( v20 < 0 )
  {
    if ( *(_DWORD *)(a2 + 16) )
    {
      v21 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
      goto LABEL_61;
    }
LABEL_89:
    v26 = v20 & 4 | 0x1400;
    goto LABEL_90;
  }
  v21 = *(unsigned __int16 **)(a2 + 32);
LABEL_61:
  if ( !v21 )
    goto LABEL_89;
  if ( (v20 & 0x400) != 0 || (v20 & 0x1000) != 0 || !a1 )
  {
    v26 = v20 & 0x1004 | 0x400;
LABEL_91:
    v27 = (4 * *((unsigned __int8 *)v43 + 1) + 11) & 0xFFFFFFFC;
    v38 = v27;
    if ( v41 )
      v28 = (4 * *((unsigned __int8 *)v41 + 1) + 11) & 0xFFFFFFFC;
    else
      v28 = 0;
    if ( v13 )
      v29 = (v13[1] + 3) & 0xFFFFFFFC;
    else
      v29 = 0;
    if ( v21 )
      v30 = (v21[1] + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    v31 = (__int64)ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015B268 + 1310720, v28 + v30 + v29 + v27 + 20);
    v6 = Heap;
    if ( Heap )
    {
      v34 = (char *)(Heap + 20);
      *(_QWORD *)Heap = 0LL;
      *(_QWORD *)(Heap + 8) = 0LL;
      *(_DWORD *)(Heap + 16) = 0;
      *(_BYTE *)Heap = 1;
      *(_WORD *)(Heap + 2) |= v18 | 0x8000;
      v33 = Src;
      if ( Src )
      {
        memmove((void *)(Heap + 20), Src, *((unsigned __int16 *)Src + 1));
        *(_DWORD *)(v6 + 12) = 20;
        v34 += v29;
      }
      else
      {
        *(_DWORD *)(Heap + 12) = 0;
      }
      *(_WORD *)(v6 + 2) |= v26;
      if ( v21 )
      {
        memmove(v34, v21, v21[1]);
        *(_DWORD *)(v6 + 16) = (_DWORD)v34 - v6;
        v34 += v30;
      }
      else
      {
        *(_DWORD *)(v6 + 16) = 0;
      }
      memmove(v34, v43, 4LL * *((unsigned __int8 *)v43 + 1) + 8);
      *(_DWORD *)(v6 + 4) = (_DWORD)v34 - v6;
      v35 = &v34[v38];
      if ( v41 )
      {
        memmove(v35, v41, 4LL * *((unsigned __int8 *)v41 + 1) + 8);
        *(_DWORD *)(v6 + 8) = (_DWORD)v35 - v6;
      }
      v31 = (__int64)ProcessHeap;
      v10 = 0;
    }
    else
    {
      v33 = Src;
      v10 = -1073741801;
    }
    if ( v45 )
      RtlFreeHeap(v31, 0, (unsigned __int64)v21);
    goto LABEL_114;
  }
  if ( v20 >= 0 )
  {
    v22 = *(_QWORD *)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v22 = a2 + *(unsigned int *)(a2 + 8);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20 >= 0 )
  {
    v23 = *(_QWORD *)(a2 + 8);
  }
  else if ( *(_DWORD *)(a2 + 4) )
  {
    v23 = a2 + *(unsigned int *)(a2 + 4);
  }
  else
  {
    v23 = 0LL;
  }
  if ( v20 >= 0 )
  {
    v24 = *(unsigned __int16 **)(a2 + 32);
  }
  else if ( *(_DWORD *)(a2 + 16) )
  {
    v24 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
  }
  else
  {
    v24 = 0LL;
  }
  if ( (~*(_BYTE *)(a1 + 2) & 4) != 0 )
    goto LABEL_81;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v25 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_81:
      v25 = 0LL;
      goto LABEL_86;
    }
    v25 = a1 + *(unsigned int *)(a1 + 16);
  }
LABEL_86:
  v10 = sub_1800E5D78(v25, v24, a4, a5, v23, v22, a6, (unsigned __int64 *)&v42, &v38);
  if ( v10 >= 0 )
  {
    v45 = 1;
    v26 = v38 & 0x1408 | 4;
LABEL_90:
    v21 = v42;
    goto LABEL_91;
  }
  v33 = Src;
LABEL_114:
  if ( v37 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v33);
LABEL_116:
  *a3 = v6;
  return (unsigned int)v10;
}
