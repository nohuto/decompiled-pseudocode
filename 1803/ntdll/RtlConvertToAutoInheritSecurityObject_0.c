/*
 * XREFs of RtlConvertToAutoInheritSecurityObject_0 @ 0x1800E1278
 * Callers:
 *     RtlConvertToAutoInheritSecurityObject @ 0x1800D1F30 (RtlConvertToAutoInheritSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlValidSecurityDescriptor @ 0x180071F50 (RtlValidSecurityDescriptor.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800E0A40 @ 0x1800E0A40 (sub_1800E0A40.c)
 */

__int64 __fastcall RtlConvertToAutoInheritSecurityObject_0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        char a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v10; // edi
  __int16 v11; // ax
  __int16 v12; // cx
  unsigned __int8 *v13; // r13
  void *v14; // rdx
  unsigned __int16 *v15; // r12
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned __int16 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int16 v21; // cx
  unsigned __int16 *v22; // rsi
  __int64 v23; // r9
  __int16 v24; // ax
  __int64 v25; // r8
  unsigned __int16 *v26; // rdx
  __int64 v27; // rcx
  __int16 v28; // di
  unsigned int v29; // r13d
  unsigned int v30; // ecx
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  __int64 v33; // rbx
  __int64 Heap; // rax
  __int64 v35; // rcx
  __int64 v36; // r12
  char *v37; // rbx
  int v38; // r12d
  int v39; // ecx
  unsigned __int8 *v40; // rdx
  unsigned __int8 *v41; // rcx
  char *v42; // rbx
  char v44; // [rsp+58h] [rbp-29h]
  __int16 v45; // [rsp+5Ch] [rbp-25h]
  __int64 v46; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h]
  void *v48; // [rsp+70h] [rbp-11h]
  unsigned __int16 *v49; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 *v50; // [rsp+80h] [rbp-1h] BYREF
  void *ProcessHeap; // [rsp+88h] [rbp+7h]
  void *v52; // [rsp+90h] [rbp+Fh]
  char v53; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v49 = 0LL;
  v44 = 0;
  v50 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v53 = 0;
  if ( !RtlValidSecurityDescriptor(a2) )
    goto LABEL_2;
  v11 = *(_WORD *)(a2 + 2);
  v12 = v11 & 0x8000;
  if ( v11 >= 0 )
  {
    v13 = *(unsigned __int8 **)(a2 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a2 + 4) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_118;
    }
    v13 = (unsigned __int8 *)(a2 + *(unsigned int *)(a2 + 4));
  }
  v52 = v13;
  if ( !v13 )
    goto LABEL_2;
  if ( v12 )
  {
    if ( !*(_DWORD *)(a2 + 8) )
    {
      v48 = 0LL;
      goto LABEL_14;
    }
    v14 = (void *)(a2 + *(unsigned int *)(a2 + 8));
  }
  else
  {
    v14 = *(void **)(a2 + 16);
  }
  v48 = v14;
LABEL_14:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_47;
  if ( v12 )
  {
    if ( !*(_DWORD *)(a2 + 12) )
      goto LABEL_47;
    v15 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
  }
  else
  {
    v15 = *(unsigned __int16 **)(a2 + 24);
  }
  Src = v15;
  if ( !v15 )
  {
LABEL_47:
    v45 = v11 & 0x2010 | 0x800;
    if ( a1 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
        goto LABEL_56;
      if ( *(__int16 *)(a1 + 2) < 0 )
      {
        if ( *(_DWORD *)(a1 + 12) )
        {
          v20 = a1 + *(unsigned int *)(a1 + 12);
          goto LABEL_54;
        }
LABEL_56:
        v15 = v49;
        Src = v49;
        goto LABEL_57;
      }
      v20 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v20 = 0LL;
    }
LABEL_54:
    if ( v20 )
      v45 = v11 & 0x10 | 0x2800;
    goto LABEL_56;
  }
  if ( (v11 & 0x800) == 0 && (v11 & 0x2000) == 0 && a1 )
  {
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 8) )
        v16 = a2 + *(unsigned int *)(a2 + 8);
      else
        v16 = 0LL;
    }
    else
    {
      v16 = *(_QWORD *)(a2 + 16);
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 4) )
        v17 = a2 + *(unsigned int *)(a2 + 4);
      else
        v17 = 0LL;
    }
    else
    {
      v17 = *(_QWORD *)(a2 + 8);
    }
    if ( v12 )
    {
      if ( *(_DWORD *)(a2 + 12) )
        v18 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 12));
      else
        v18 = 0LL;
    }
    else
    {
      v18 = *(unsigned __int16 **)(a2 + 24);
    }
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      goto LABEL_39;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v19 = *(_QWORD *)(a1 + 24);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(a1 + 12) )
      v19 = a1 + *(unsigned int *)(a1 + 12);
    else
LABEL_39:
      v19 = 0LL;
LABEL_44:
    v10 = sub_1800E0A40(v19, v18, a4, a5, v17, v16, a6, (unsigned __int64 *)&v49, &v46);
    if ( v10 < 0 )
      goto LABEL_118;
    v44 = 1;
    v11 = *(_WORD *)(a2 + 2);
    v45 = 2 * (v46 & 0x1400 | (2 * (v46 & 8 | 4)));
    goto LABEL_56;
  }
  v45 = v11 & 0x2010 | 0x800;
LABEL_57:
  v21 = v11;
  if ( (v11 & 4) == 0
    || (v11 >= 0
      ? (v22 = *(unsigned __int16 **)(a2 + 32))
      : *(_DWORD *)(a2 + 16)
      ? (v22 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16)))
      : (v22 = 0LL),
        !v22) )
  {
    v28 = v11 & 4 | 0x1400;
    goto LABEL_93;
  }
  if ( (v11 & 0x400) != 0 || (v11 & 0x1000) != 0 || !a1 )
  {
    v28 = v11 & 0x1004 | 0x400;
LABEL_94:
    v29 = (4 * v13[1] + 11) & 0xFFFFFFFC;
    if ( v48 )
      v30 = (4 * *((unsigned __int8 *)v48 + 1) + 11) & 0xFFFFFFFC;
    else
      v30 = 0;
    if ( v15 )
      v31 = (v15[1] + 3) & 0xFFFFFFFC;
    else
      v31 = 0;
    if ( v22 )
      v32 = (v22[1] + 3) & 0xFFFFFFFC;
    else
      v32 = 0;
    v33 = (__int64)ProcessHeap;
    Heap = RtlAllocateHeap((__int64)ProcessHeap, dword_18015C294 + 1310720, v29 + v30 + 20 + v32 + v31);
    v46 = Heap;
    v35 = Heap;
    if ( Heap )
    {
      v36 = Heap + 20;
      *(_QWORD *)Heap = 0LL;
      *(_QWORD *)(Heap + 8) = 0LL;
      v37 = (char *)(Heap + 20);
      *(_DWORD *)(Heap + 16) = 0;
      *(_BYTE *)Heap = 1;
      *(_WORD *)(Heap + 2) |= v45 | 0x8000;
      if ( Src )
      {
        memmove((void *)(Heap + 20), Src, *((unsigned __int16 *)Src + 1));
        v35 = v46;
        v37 = (char *)(v36 + v31);
        v38 = v36 - v46;
      }
      else
      {
        v38 = 0;
      }
      *(_DWORD *)(v35 + 12) = v38;
      *(_WORD *)(v35 + 2) |= v28;
      if ( v22 )
      {
        memmove(v37, v22, v22[1]);
        v6 = (_DWORD *)v46;
        v39 = (_DWORD)v37 - v46;
        v37 += v32;
      }
      else
      {
        v6 = (_DWORD *)v46;
        v39 = 0;
      }
      v40 = (unsigned __int8 *)v52;
      v6[4] = v39;
      memmove(v37, v40, 4 * (unsigned int)v40[1] + 8);
      v41 = (unsigned __int8 *)v48;
      v6[1] = (_DWORD)v37 - (_DWORD)v6;
      v42 = &v37[v29];
      if ( v41 )
      {
        memmove(v42, v41, 4 * (unsigned int)v41[1] + 8);
        v6[2] = (_DWORD)v42 - (_DWORD)v6;
      }
      v15 = (unsigned __int16 *)Src;
      v10 = 0;
      v33 = (__int64)ProcessHeap;
    }
    else
    {
      v10 = -1073741801;
      v6 = 0LL;
    }
    if ( v53 )
      RtlFreeHeap(v33, 0, (unsigned __int64)v22);
    goto LABEL_116;
  }
  if ( v11 >= 0 )
  {
    v23 = *(_QWORD *)(a2 + 16);
  }
  else if ( *(_DWORD *)(a2 + 8) )
  {
    v23 = a2 + *(unsigned int *)(a2 + 8);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = v11 & 0x8000;
  if ( v21 < 0 )
  {
    if ( *(_DWORD *)(a2 + 4) )
      v25 = a2 + *(unsigned int *)(a2 + 4);
    else
      v25 = 0LL;
  }
  else
  {
    v25 = *(_QWORD *)(a2 + 8);
  }
  if ( (v21 & 4) == 0 )
    goto LABEL_78;
  if ( v24 )
  {
    if ( !*(_DWORD *)(a2 + 16) )
    {
LABEL_78:
      v26 = 0LL;
      goto LABEL_83;
    }
    v26 = (unsigned __int16 *)(a2 + *(unsigned int *)(a2 + 16));
  }
  else
  {
    v26 = *(unsigned __int16 **)(a2 + 32);
  }
LABEL_83:
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0 )
  {
LABEL_84:
    v27 = 0LL;
    goto LABEL_89;
  }
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v27 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_84;
    v27 = a1 + *(unsigned int *)(a1 + 16);
  }
LABEL_89:
  v10 = sub_1800E0A40(v27, v26, a4, a5, v25, v23, a6, (unsigned __int64 *)&v50, &v46);
  if ( v10 >= 0 )
  {
    v53 = 1;
    v28 = v46 & 0x1408 | 4;
LABEL_93:
    v22 = v50;
    goto LABEL_94;
  }
LABEL_116:
  if ( v44 )
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v15);
LABEL_118:
  *a3 = v6;
  return (unsigned int)v10;
}
