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

NTSTATUS __cdecl RtlConvertToAutoInheritSecurityObject_0(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping)
{
  _DWORD *v6; // r15
  NTSTATUS v10; // edi
  __int16 v11; // ax
  __int16 v12; // cx
  unsigned __int8 *v13; // r13
  char *v14; // rdx
  unsigned __int16 *v15; // r12
  char *v16; // r8
  char *v17; // rax
  ACL *v18; // rdx
  ACL *v19; // rcx
  char *v20; // rcx
  __int16 v21; // cx
  unsigned __int16 *v22; // rsi
  char *v23; // r9
  __int16 v24; // ax
  char *v25; // r8
  ACL *v26; // rdx
  ACL *v27; // rcx
  __int16 v28; // di
  unsigned int v29; // r13d
  unsigned int v30; // ecx
  unsigned int v31; // r15d
  unsigned int v32; // r14d
  PVOID v33; // rbx
  _QWORD *Heap; // rax
  _QWORD *v35; // rcx
  char *v36; // r12
  char *v37; // rbx
  int v38; // r12d
  int v39; // ecx
  unsigned __int8 *v40; // rdx
  unsigned __int8 *v41; // rcx
  char *v42; // rbx
  char v44; // [rsp+58h] [rbp-29h]
  __int16 v45; // [rsp+5Ch] [rbp-25h]
  _DWORD *v46; // [rsp+60h] [rbp-21h] BYREF
  void *Src; // [rsp+68h] [rbp-19h]
  void *v48; // [rsp+70h] [rbp-11h]
  unsigned __int16 *v49; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int16 *v50; // [rsp+80h] [rbp-1h] BYREF
  PVOID HeapHandle; // [rsp+88h] [rbp+7h]
  void *v52; // [rsp+90h] [rbp+Fh]
  char v53; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v49 = 0LL;
  v44 = 0;
  v50 = 0LL;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v53 = 0;
  if ( !RtlValidSecurityDescriptor(CurrentSecurityDescriptor) )
    goto LABEL_2;
  v11 = *((_WORD *)CurrentSecurityDescriptor + 1);
  v12 = v11 & 0x8000;
  if ( v11 >= 0 )
  {
    v13 = (unsigned __int8 *)*((_QWORD *)CurrentSecurityDescriptor + 1);
  }
  else
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 1) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_118;
    }
    v13 = (unsigned __int8 *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
  }
  v52 = v13;
  if ( !v13 )
    goto LABEL_2;
  if ( v12 )
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 2) )
    {
      v48 = 0LL;
      goto LABEL_14;
    }
    v14 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
  }
  else
  {
    v14 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
  }
  v48 = v14;
LABEL_14:
  if ( (v11 & 0x10) == 0 )
    goto LABEL_47;
  if ( v12 )
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 3) )
      goto LABEL_47;
    v15 = (unsigned __int16 *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 3));
  }
  else
  {
    v15 = (unsigned __int16 *)*((_QWORD *)CurrentSecurityDescriptor + 3);
  }
  Src = v15;
  if ( !v15 )
  {
LABEL_47:
    v45 = v11 & 0x2010 | 0x800;
    if ( ParentDescriptor )
    {
      if ( (*((_BYTE *)ParentDescriptor + 2) & 0x10) == 0 )
        goto LABEL_56;
      if ( *((__int16 *)ParentDescriptor + 1) < 0 )
      {
        if ( *((_DWORD *)ParentDescriptor + 3) )
        {
          v20 = (char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 3);
          goto LABEL_54;
        }
LABEL_56:
        v15 = v49;
        Src = v49;
        goto LABEL_57;
      }
      v20 = (char *)*((_QWORD *)ParentDescriptor + 3);
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
  if ( (v11 & 0x800) == 0 && (v11 & 0x2000) == 0 && ParentDescriptor )
  {
    if ( v12 )
    {
      if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
        v16 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
      else
        v16 = 0LL;
    }
    else
    {
      v16 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
    }
    if ( v12 )
    {
      if ( *((_DWORD *)CurrentSecurityDescriptor + 1) )
        v17 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
      else
        v17 = 0LL;
    }
    else
    {
      v17 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
    }
    if ( v12 )
    {
      if ( *((_DWORD *)CurrentSecurityDescriptor + 3) )
        v18 = (ACL *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 3));
      else
        v18 = 0LL;
    }
    else
    {
      v18 = (ACL *)*((_QWORD *)CurrentSecurityDescriptor + 3);
    }
    if ( (*((_BYTE *)ParentDescriptor + 2) & 0x10) == 0 )
      goto LABEL_39;
    if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
    {
      v19 = (ACL *)*((_QWORD *)ParentDescriptor + 3);
      goto LABEL_44;
    }
    if ( *((_DWORD *)ParentDescriptor + 3) )
      v19 = (ACL *)((char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 3));
    else
LABEL_39:
      v19 = 0LL;
LABEL_44:
    v10 = sub_1800E0A40(
            v19,
            v18,
            (__int64)ObjectType,
            IsDirectoryObject,
            (__int64)v17,
            (__int64)v16,
            GenericMapping,
            (PVOID *)&v49,
            &v46);
    if ( v10 < 0 )
      goto LABEL_118;
    v44 = 1;
    v11 = *((_WORD *)CurrentSecurityDescriptor + 1);
    v45 = 2 * ((unsigned __int16)v46 & 0x1400 | (2 * ((unsigned __int8)v46 & 8 | 4)));
    goto LABEL_56;
  }
  v45 = v11 & 0x2010 | 0x800;
LABEL_57:
  v21 = v11;
  if ( (v11 & 4) == 0
    || (v11 >= 0
      ? (v22 = (unsigned __int16 *)*((_QWORD *)CurrentSecurityDescriptor + 4))
      : *((_DWORD *)CurrentSecurityDescriptor + 4)
      ? (v22 = (unsigned __int16 *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 4)))
      : (v22 = 0LL),
        !v22) )
  {
    v28 = v11 & 4 | 0x1400;
    goto LABEL_93;
  }
  if ( (v11 & 0x400) != 0 || (v11 & 0x1000) != 0 || !ParentDescriptor )
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
    v33 = HeapHandle;
    Heap = RtlAllocateHeap(HeapHandle, Flags + 1310720, v29 + v30 + 20 + v32 + v31);
    v46 = Heap;
    v35 = Heap;
    if ( Heap )
    {
      v36 = (char *)Heap + 20;
      *Heap = 0LL;
      Heap[1] = 0LL;
      v37 = (char *)Heap + 20;
      *((_DWORD *)Heap + 4) = 0;
      *(_BYTE *)Heap = 1;
      *((_WORD *)Heap + 1) |= v45 | 0x8000;
      if ( Src )
      {
        memmove((char *)Heap + 20, Src, *((unsigned __int16 *)Src + 1));
        v35 = v46;
        v37 = &v36[v31];
        v38 = (_DWORD)v36 - (_DWORD)v46;
      }
      else
      {
        v38 = 0;
      }
      *((_DWORD *)v35 + 3) = v38;
      *((_WORD *)v35 + 1) |= v28;
      if ( v22 )
      {
        memmove(v37, v22, v22[1]);
        v6 = v46;
        v39 = (_DWORD)v37 - (_DWORD)v46;
        v37 += v32;
      }
      else
      {
        v6 = v46;
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
      v33 = HeapHandle;
    }
    else
    {
      v10 = -1073741801;
      v6 = 0LL;
    }
    if ( v53 )
      RtlFreeHeap(v33, 0, v22);
    goto LABEL_116;
  }
  if ( v11 >= 0 )
  {
    v23 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
  {
    v23 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = v11 & 0x8000;
  if ( v21 < 0 )
  {
    if ( *((_DWORD *)CurrentSecurityDescriptor + 1) )
      v25 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
    else
      v25 = 0LL;
  }
  else
  {
    v25 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
  }
  if ( (v21 & 4) == 0 )
    goto LABEL_78;
  if ( v24 )
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 4) )
    {
LABEL_78:
      v26 = 0LL;
      goto LABEL_83;
    }
    v26 = (ACL *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 4));
  }
  else
  {
    v26 = (ACL *)*((_QWORD *)CurrentSecurityDescriptor + 4);
  }
LABEL_83:
  if ( (*((_BYTE *)ParentDescriptor + 2) & 4) == 0 )
  {
LABEL_84:
    v27 = 0LL;
    goto LABEL_89;
  }
  if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
  {
    v27 = (ACL *)*((_QWORD *)ParentDescriptor + 4);
  }
  else
  {
    if ( !*((_DWORD *)ParentDescriptor + 4) )
      goto LABEL_84;
    v27 = (ACL *)((char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 4));
  }
LABEL_89:
  v10 = sub_1800E0A40(
          v27,
          v26,
          (__int64)ObjectType,
          IsDirectoryObject,
          (__int64)v25,
          (__int64)v23,
          GenericMapping,
          (PVOID *)&v50,
          &v46);
  if ( v10 >= 0 )
  {
    v53 = 1;
    v28 = (unsigned __int16)v46 & 0x1408 | 4;
LABEL_93:
    v22 = v50;
    goto LABEL_94;
  }
LABEL_116:
  if ( v44 )
    RtlFreeHeap(HeapHandle, 0, v15);
LABEL_118:
  *NewSecurityDescriptor = v6;
  return v10;
}
