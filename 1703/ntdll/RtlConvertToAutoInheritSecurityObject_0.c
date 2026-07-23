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

NTSTATUS __cdecl RtlConvertToAutoInheritSecurityObject_0(
        PSECURITY_DESCRIPTOR ParentDescriptor,
        PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        GUID *ObjectType,
        BOOLEAN IsDirectoryObject,
        PGENERIC_MAPPING GenericMapping)
{
  char *v6; // r13
  NTSTATUS v10; // edi
  __int16 v11; // si
  char *v12; // rax
  char *v13; // r15
  char *v14; // r9
  char *v15; // r8
  ACL *v16; // rdx
  ACL *v17; // rcx
  __int16 v18; // si
  char *v19; // rax
  __int16 v20; // di
  unsigned __int16 *v21; // r14
  char *v22; // r9
  char *v23; // r8
  ACL *v24; // rdx
  ACL *v25; // rcx
  __int16 v26; // di
  unsigned int v27; // r8d
  unsigned int v28; // ecx
  unsigned int v29; // r15d
  unsigned int v30; // r12d
  PVOID v31; // rbx
  char *Heap; // rax
  void *v33; // rsi
  char *v34; // rbx
  char *v35; // rbx
  char v37; // [rsp+58h] [rbp-29h]
  _DWORD v38[3]; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 v39; // [rsp+68h] [rbp-19h] BYREF
  void *v40; // [rsp+70h] [rbp-11h]
  __int64 v41; // [rsp+78h] [rbp-9h] BYREF
  void *v42; // [rsp+80h] [rbp-1h]
  PVOID HeapHandle; // [rsp+88h] [rbp+7h]
  char v44; // [rsp+E0h] [rbp+5Fh]

  v6 = 0LL;
  v39 = 0LL;
  v37 = 0;
  v41 = 0LL;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v44 = 0;
  if ( !RtlValidSecurityDescriptor(CurrentSecurityDescriptor) )
    goto LABEL_2;
  v11 = *((_WORD *)CurrentSecurityDescriptor + 1);
  if ( v11 >= 0 )
  {
    v12 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
  }
  else
  {
    if ( !*((_DWORD *)CurrentSecurityDescriptor + 1) )
    {
LABEL_2:
      v10 = -1073741703;
      goto LABEL_116;
    }
    v12 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
  }
  v42 = v12;
  if ( !v12 )
    goto LABEL_2;
  if ( v11 >= 0 )
  {
    v40 = (void *)*((_QWORD *)CurrentSecurityDescriptor + 2);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
  {
    v40 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
  }
  else
  {
    v40 = 0LL;
  }
  if ( (~(_BYTE)v11 & 0x10) == 0 )
  {
    if ( v11 >= 0 )
    {
      v13 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)CurrentSecurityDescriptor + 3) )
        goto LABEL_46;
      v13 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 3);
    }
    *(_QWORD *)&v38[1] = v13;
    if ( v13 )
    {
      if ( (v11 & 0x800) != 0 || (v11 & 0x2000) != 0 || !ParentDescriptor )
      {
        v18 = v11 & 0x2010 | 0x800;
        goto LABEL_56;
      }
      if ( v11 >= 0 )
      {
        v14 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
      }
      else if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
      {
        v14 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
      }
      else
      {
        v14 = 0LL;
      }
      if ( v11 >= 0 )
      {
        v15 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
      }
      else if ( *((_DWORD *)CurrentSecurityDescriptor + 1) )
      {
        v15 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
      }
      else
      {
        v15 = 0LL;
      }
      if ( v11 >= 0 )
      {
        v16 = (ACL *)*((_QWORD *)CurrentSecurityDescriptor + 3);
      }
      else if ( *((_DWORD *)CurrentSecurityDescriptor + 3) )
      {
        v16 = (ACL *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 3));
      }
      else
      {
        v16 = 0LL;
      }
      if ( (~*((_BYTE *)ParentDescriptor + 2) & 0x10) != 0 )
        goto LABEL_38;
      if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
      {
        v17 = (ACL *)*((_QWORD *)ParentDescriptor + 3);
        goto LABEL_43;
      }
      if ( !*((_DWORD *)ParentDescriptor + 3) )
LABEL_38:
        v17 = 0LL;
      else
        v17 = (ACL *)((char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 3));
LABEL_43:
      v10 = sub_1800E5D78(
              v17,
              v16,
              (__int64)ObjectType,
              IsDirectoryObject,
              (__int64)v15,
              (__int64)v14,
              GenericMapping,
              (PVOID *)&v39,
              v38);
      if ( v10 < 0 )
        goto LABEL_116;
      v37 = 1;
      v18 = 2 * (v38[0] & 0x1400 | (2 * (v38[0] & 8 | 4)));
      goto LABEL_55;
    }
  }
LABEL_46:
  v18 = v11 & 0x2010 | 0x800;
  if ( !ParentDescriptor )
  {
    v19 = 0LL;
LABEL_53:
    if ( v19 )
      v18 |= 0x2000u;
    goto LABEL_55;
  }
  if ( (~*((_BYTE *)ParentDescriptor + 2) & 0x10) != 0 )
    goto LABEL_55;
  if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
  {
    v19 = (char *)*((_QWORD *)ParentDescriptor + 3);
    goto LABEL_53;
  }
  if ( *((_DWORD *)ParentDescriptor + 3) )
  {
    v19 = (char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 3);
    goto LABEL_53;
  }
LABEL_55:
  v13 = (char *)v39;
  *(_QWORD *)&v38[1] = v39;
LABEL_56:
  v20 = *((_WORD *)CurrentSecurityDescriptor + 1);
  if ( (~(_BYTE)v20 & 4) != 0 )
    goto LABEL_89;
  if ( v20 < 0 )
  {
    if ( *((_DWORD *)CurrentSecurityDescriptor + 4) )
    {
      v21 = (unsigned __int16 *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 4));
      goto LABEL_61;
    }
LABEL_89:
    v26 = v20 & 4 | 0x1400;
    goto LABEL_90;
  }
  v21 = (unsigned __int16 *)*((_QWORD *)CurrentSecurityDescriptor + 4);
LABEL_61:
  if ( !v21 )
    goto LABEL_89;
  if ( (v20 & 0x400) != 0 || (v20 & 0x1000) != 0 || !ParentDescriptor )
  {
    v26 = v20 & 0x1004 | 0x400;
LABEL_91:
    v27 = (4 * *((unsigned __int8 *)v42 + 1) + 11) & 0xFFFFFFFC;
    v38[0] = v27;
    if ( v40 )
      v28 = (4 * *((unsigned __int8 *)v40 + 1) + 11) & 0xFFFFFFFC;
    else
      v28 = 0;
    if ( v13 )
      v29 = (*((unsigned __int16 *)v13 + 1) + 3) & 0xFFFFFFFC;
    else
      v29 = 0;
    if ( v21 )
      v30 = (v21[1] + 3) & 0xFFFFFFFC;
    else
      v30 = 0;
    v31 = HeapHandle;
    Heap = (char *)RtlAllocateHeap(HeapHandle, dword_18015B268 + 1310720, v28 + v30 + v29 + v27 + 20);
    v6 = Heap;
    if ( Heap )
    {
      v34 = Heap + 20;
      *(_QWORD *)Heap = 0LL;
      *((_QWORD *)Heap + 1) = 0LL;
      *((_DWORD *)Heap + 4) = 0;
      *Heap = 1;
      *((_WORD *)Heap + 1) |= v18 | 0x8000;
      v33 = *(void **)&v38[1];
      if ( *(_QWORD *)&v38[1] )
      {
        memmove(Heap + 20, *(const void **)&v38[1], *(unsigned __int16 *)(*(_QWORD *)&v38[1] + 2LL));
        *((_DWORD *)v6 + 3) = 20;
        v34 += v29;
      }
      else
      {
        *((_DWORD *)Heap + 3) = 0;
      }
      *((_WORD *)v6 + 1) |= v26;
      if ( v21 )
      {
        memmove(v34, v21, v21[1]);
        *((_DWORD *)v6 + 4) = (_DWORD)v34 - (_DWORD)v6;
        v34 += v30;
      }
      else
      {
        *((_DWORD *)v6 + 4) = 0;
      }
      memmove(v34, v42, 4LL * *((unsigned __int8 *)v42 + 1) + 8);
      *((_DWORD *)v6 + 1) = (_DWORD)v34 - (_DWORD)v6;
      v35 = &v34[v38[0]];
      if ( v40 )
      {
        memmove(v35, v40, 4LL * *((unsigned __int8 *)v40 + 1) + 8);
        *((_DWORD *)v6 + 2) = (_DWORD)v35 - (_DWORD)v6;
      }
      v31 = HeapHandle;
      v10 = 0;
    }
    else
    {
      v33 = *(void **)&v38[1];
      v10 = -1073741801;
    }
    if ( v44 )
      RtlFreeHeap(v31, 0, v21);
    goto LABEL_114;
  }
  if ( v20 >= 0 )
  {
    v22 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 2);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 2) )
  {
    v22 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 2);
  }
  else
  {
    v22 = 0LL;
  }
  if ( v20 >= 0 )
  {
    v23 = (char *)*((_QWORD *)CurrentSecurityDescriptor + 1);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 1) )
  {
    v23 = (char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 1);
  }
  else
  {
    v23 = 0LL;
  }
  if ( v20 >= 0 )
  {
    v24 = (ACL *)*((_QWORD *)CurrentSecurityDescriptor + 4);
  }
  else if ( *((_DWORD *)CurrentSecurityDescriptor + 4) )
  {
    v24 = (ACL *)((char *)CurrentSecurityDescriptor + *((unsigned int *)CurrentSecurityDescriptor + 4));
  }
  else
  {
    v24 = 0LL;
  }
  if ( (~*((_BYTE *)ParentDescriptor + 2) & 4) != 0 )
    goto LABEL_81;
  if ( *((__int16 *)ParentDescriptor + 1) >= 0 )
  {
    v25 = (ACL *)*((_QWORD *)ParentDescriptor + 4);
  }
  else
  {
    if ( !*((_DWORD *)ParentDescriptor + 4) )
    {
LABEL_81:
      v25 = 0LL;
      goto LABEL_86;
    }
    v25 = (ACL *)((char *)ParentDescriptor + *((unsigned int *)ParentDescriptor + 4));
  }
LABEL_86:
  v10 = sub_1800E5D78(
          v25,
          v24,
          (__int64)ObjectType,
          IsDirectoryObject,
          (__int64)v23,
          (__int64)v22,
          GenericMapping,
          (PVOID *)&v41,
          v38);
  if ( v10 >= 0 )
  {
    v44 = 1;
    v26 = v38[0] & 0x1408 | 4;
LABEL_90:
    v21 = (unsigned __int16 *)v41;
    goto LABEL_91;
  }
  v33 = *(void **)&v38[1];
LABEL_114:
  if ( v37 )
    RtlFreeHeap(HeapHandle, 0, v33);
LABEL_116:
  *NewSecurityDescriptor = v6;
  return v10;
}
