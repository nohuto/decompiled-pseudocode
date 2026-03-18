/*
 * XREFs of IopQueryNameInternal @ 0x1404A5650
 * Callers:
 *     IopQueryName @ 0x1404A5B30 (IopQueryName.c)
 *     IoQueryFileDosDeviceName @ 0x1404F8E90 (IoQueryFileDosDeviceName.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140086940 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     IoVolumeDeviceToDosName @ 0x140496270 (IoVolumeDeviceToDosName.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     ObQueryNameStringMode @ 0x1404A78E0 (ObQueryNameStringMode.c)
 */

__int64 __fastcall IopQueryNameInternal(
        struct _FILE_OBJECT *a1,
        __int64 a2,
        char a3,
        UNICODE_STRING *a4,
        unsigned int NumberOfBytes,
        ULONG *a6,
        char a7)
{
  struct _FILE_OBJECT *v9; // r8
  char v10; // r12
  ULONG v11; // esi
  UNICODE_STRING *v12; // r14
  _DWORD *p_Type; // rcx
  NTSTATUS NameStringMode; // eax
  unsigned int v15; // edx
  NTSTATUS v16; // ecx
  UNICODE_STRING *v17; // rbx
  char v18; // cl
  ULONG v19; // edx
  struct _FILE_OBJECT *v20; // r10
  char v21; // r12
  struct _IRP *v22; // r14
  unsigned int FileInformation; // eax
  unsigned int v24; // r13d
  int v25; // eax
  unsigned int v26; // esi
  char *v27; // rbx
  unsigned int v28; // eax
  int v29; // ecx
  ULONG Length; // ecx
  UNICODE_STRING *PoolWithTagPriority; // rax
  __int64 v33; // [rsp+40h] [rbp-78h] BYREF
  char *v34; // [rsp+48h] [rbp-70h]
  int v35; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  char *v37; // [rsp+60h] [rbp-58h]
  _BYTE v38[80]; // [rsp+68h] [rbp-50h] BYREF
  int Buffer_high; // [rsp+C8h] [rbp+10h]

  v9 = a1;
  P = 0LL;
  LOBYTE(Buffer_high) = 0;
  v10 = 0;
  v11 = 16;
  if ( NumberOfBytes >= 0x10 )
    v11 = NumberOfBytes;
  if ( a7 == 1 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                                PagedPool,
                                                v11,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v11, 0x20206F49u);
    P = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
      return 3221225626LL;
    v12 = PoolWithTagPriority;
    v9 = a1;
  }
  else if ( NumberOfBytes < 0x10 )
  {
    v12 = (UNICODE_STRING *)v38;
  }
  else
  {
    v12 = a4;
  }
  p_Type = &v9->DeviceObject->Type;
  if ( !a3 )
    goto LABEL_7;
  if ( (p_Type[13] & 0x10) != 0 )
  {
    LODWORD(v33) = 20;
    if ( v11 < 0x14 )
      goto LABEL_78;
    v16 = 0;
    *(_DWORD *)&v12->Length = 131074;
    v12[1].Length = 92;
    v12->Buffer = &v12[1].Length;
    v15 = v33;
  }
  else
  {
    v16 = IoVolumeDeviceToDosName(p_Type, v12);
    v15 = v12->Length + 18;
    LODWORD(v33) = v15;
    v9 = a1;
  }
  LODWORD(v34) = v15;
  if ( v16 < 0 )
  {
LABEL_78:
    p_Type = &v9->DeviceObject->Type;
LABEL_7:
    NameStringMode = ObQueryNameStringMode((_DWORD)p_Type, (_DWORD)v12, v11, (unsigned int)&v33, 0);
    v15 = v33;
    LODWORD(v34) = v33;
    v16 = NameStringMode;
    goto LABEL_8;
  }
  v10 = 1;
LABEL_8:
  if ( v16 < 0 )
  {
    if ( v16 != -1073741820 )
      return (unsigned int)v16;
  }
  else if ( !v10 && !v12->Length )
  {
    LOBYTE(Buffer_high) = 1;
  }
  v17 = a4 + 1;
  v18 = a3;
  if ( !a3 || !v10 )
  {
    if ( a7 == 1 && v15 <= v11 && NumberOfBytes >= 0x10 )
    {
      a4->Length = v12->Length;
      a4->MaximumLength = v12->MaximumLength;
      memmove(&a4[1], &v12[1], v15 - 16LL);
      v18 = a3;
    }
    v19 = (unsigned int)v34;
    goto LABEL_15;
  }
  if ( v11 < v15 )
    Length = v11 - 16;
  else
    Length = v12->Length;
  memmove(&a4[1], v12->Buffer, Length);
  v20 = a1;
  if ( (a1->DeviceObject->Characteristics & 0x10) == 0 )
  {
    ExFreePoolWithTag(v12->Buffer, 0);
    v19 = v33;
    v18 = a3;
LABEL_15:
    v20 = a1;
    goto LABEL_16;
  }
  v19 = v33;
  v18 = a3;
LABEL_16:
  if ( (_BYTE)Buffer_high )
  {
    v19 += 2;
    LODWORD(v33) = v19;
  }
  v21 = 0;
  if ( v19 > v11 || NumberOfBytes < 0x10 )
  {
    *a6 = v19;
    v21 = 1;
  }
  else
  {
    a4->Buffer = &v17->Length;
    v17 = (UNICODE_STRING *)((char *)v17 + v12->Length);
    v37 = (char *)v17;
  }
  if ( a7 == 1 )
  {
    v22 = (struct _IRP *)P;
    v34 = (char *)P;
    if ( !v21 )
      v11 = v11 - v19 + 4;
  }
  else if ( v21 )
  {
    if ( NumberOfBytes >= 0x10 )
    {
      v22 = (struct _IRP *)a4;
      v34 = (char *)a4;
    }
    else
    {
      v22 = (struct _IRP *)v38;
      v34 = v38;
    }
  }
  else
  {
    v22 = (struct _IRP *)((char *)&v17[-1].Buffer + 4);
    v34 = (char *)&v17[-1].Buffer + 4;
    Buffer_high = HIDWORD(v17[-1].Buffer);
    v11 = (_DWORD)a4 + v11 - ((_DWORD)v17 - 4) - 2;
  }
  if ( (a7 != 1 || v18) && (v20->Flags & 2) != 0 )
    FileInformation = IopGetFileInformation(v20, v11, 9u, v22, &v33);
  else
    FileInformation = IopQueryXxxInformation(v20, 9u, v11, a7, v22, &v33, 1);
  v35 = FileInformation;
  v24 = FileInformation;
  if ( (FileInformation & 0xC0000000) != 0xC0000000 )
  {
    v25 = v33;
    if ( (unsigned int)v33 < 4 )
    {
      v25 = 4;
      LODWORD(v33) = 4;
    }
    goto LABEL_30;
  }
  v28 = FileInformation + 1073741822;
  if ( v24 + 1073741822 <= 0xE )
  {
    v29 = 18435;
    if ( _bittest(&v29, v28) )
    {
      LODWORD(v33) = 4;
      *(_DWORD *)&v22->Type = 0;
      *(&v22->Size + 1) = 92;
      v24 = 0;
      v35 = 0;
      v25 = v33;
LABEL_30:
      if ( v21 )
      {
        *a6 += *(_DWORD *)&v22->Type;
        v24 = -2147483643;
        if ( NumberOfBytes < 0x10 )
          v24 = -1073741820;
        v35 = v24;
      }
      else
      {
        v26 = v25 - 4;
        if ( (unsigned int)(v25 - 4) > *(_DWORD *)&v22->Type )
          v26 = *(_DWORD *)&v22->Type;
        LODWORD(v33) = (_DWORD)v17 + *(_DWORD *)&v22->Type - (_DWORD)a4;
        if ( *(&v22->Size + 1) == 92 )
        {
          if ( a7 == 1 )
            memmove(v17, &v22->Size + 1, v26);
          else
            *(_DWORD *)&v22->Type = Buffer_high;
          v27 = (char *)v17 + v26;
          v37 = v27;
          *(_WORD *)v27 = 0;
          LODWORD(v33) = v33 + 2;
          *a6 = v33;
          LOWORD(v27) = (_WORD)v27 - (_WORD)a4;
          a4->Length = (_WORD)v27 - 16;
          a4->MaximumLength = (_WORD)v27 - 14;
        }
        else
        {
          v24 = -1073741767;
          v35 = -1073741767;
        }
      }
    }
  }
  if ( a7 == 1 )
    ExFreePoolWithTag(P, 0);
  return v24;
}
