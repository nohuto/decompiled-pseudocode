/*
 * XREFs of IopQueryNameInternal @ 0x14048F970
 * Callers:
 *     IoQueryFileDosDeviceName @ 0x14048E280 (IoQueryFileDosDeviceName.c)
 *     IopQueryName @ 0x14048F930 (IopQueryName.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14048F170 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     IoVolumeDeviceToDosName @ 0x140560B00 (IoVolumeDeviceToDosName.c)
 */

__int64 __fastcall IopQueryNameInternal(
        __int64 a1,
        char a2,
        char a3,
        UNICODE_STRING *a4,
        SIZE_T NumberOfBytes,
        unsigned int *a6,
        char a7)
{
  __int64 v9; // rdx
  UNICODE_STRING *v10; // r13
  char v11; // r12
  unsigned int v12; // ebx
  UNICODE_STRING *PoolWithTagPriority; // rax
  UNICODE_STRING *v15; // rdi
  _DWORD *v16; // rcx
  NTSTATUS v17; // ecx
  unsigned int v18; // esi
  NTSTATUS v19; // eax
  UNICODE_STRING *v20; // r14
  char v21; // dl
  unsigned int Length; // ecx
  _DWORD *v23; // r10
  unsigned int v24; // eax
  char v25; // cl
  char v26; // r12
  unsigned int *v27; // r15
  char *v28; // rdi
  unsigned int FileInformation; // eax
  unsigned int v30; // ebx
  unsigned int v31; // eax
  int v32; // ecx
  int v33; // eax
  unsigned int v34; // esi
  UNICODE_STRING *v35; // r12
  bool v36; // [rsp+48h] [rbp-60h]
  int Buffer_high; // [rsp+48h] [rbp-60h]
  char *v38; // [rsp+58h] [rbp-50h]
  _BYTE v39[72]; // [rsp+60h] [rbp-48h] BYREF
  size_t Size; // [rsp+B8h] [rbp+10h] BYREF
  char v42; // [rsp+C0h] [rbp+18h]
  UNICODE_STRING *v43; // [rsp+C8h] [rbp+20h]

  v43 = a4;
  v42 = a3;
  LOBYTE(Size) = a2;
  v9 = a1;
  v10 = 0LL;
  v36 = 0;
  v11 = 0;
  v12 = 16;
  if ( (unsigned int)NumberOfBytes >= 0x10 )
    v12 = NumberOfBytes;
  if ( a7 == 1 )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTagPriority(
                                                PagedPool,
                                                v12,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, v12, 0x20206F49u);
    v10 = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
      return 3221225626LL;
    *(_QWORD *)&PoolWithTagPriority->Length = 0LL;
    PoolWithTagPriority->Buffer = 0LL;
    v15 = PoolWithTagPriority;
    v9 = a1;
  }
  else
  {
    v15 = (UNICODE_STRING *)v39;
    if ( (unsigned int)NumberOfBytes >= 0x10 )
      v15 = a4;
  }
  v16 = *(_DWORD **)(v9 + 8);
  if ( !a3 )
    goto LABEL_20;
  if ( (v16[13] & 0x10) == 0 )
  {
    v17 = IoVolumeDeviceToDosName(v16, v15);
    v18 = v15->Length + 18;
    LODWORD(Size) = v18;
    v9 = a1;
LABEL_17:
    if ( v17 >= 0 )
    {
      v11 = 1;
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  LODWORD(Size) = 20;
  if ( v12 >= 0x14 )
  {
    v17 = 0;
    *(_DWORD *)&v15->Length = 131074;
    v15[1].Length = 92;
    v15->Buffer = &v15[1].Length;
    v18 = Size;
    goto LABEL_17;
  }
LABEL_18:
  v16 = *(_DWORD **)(v9 + 8);
LABEL_20:
  v19 = ObQueryNameStringMode((char *)v16, (__int64)v15, v12, &Size, 0);
  v18 = Size;
  v17 = v19;
LABEL_21:
  if ( v17 >= 0 )
  {
    if ( !v11 )
      v36 = v15->Length == 0;
  }
  else if ( v17 != -1073741820 )
  {
    return (unsigned int)v17;
  }
  v20 = a4 + 1;
  v21 = v42;
  if ( v42 && v11 )
  {
    if ( v12 >= v18 )
      Length = v15->Length;
    else
      Length = v12 - 16;
    memmove(&a4[1], v15->Buffer, Length);
    v23 = (_DWORD *)a1;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 52LL) & 0x10) != 0 )
    {
      v18 = Size;
      v24 = NumberOfBytes;
      v25 = a7;
      v21 = v42;
      goto LABEL_40;
    }
    ExFreePoolWithTag(v15->Buffer, 0);
    v18 = Size;
  }
  else
  {
    v25 = a7;
    v24 = NumberOfBytes;
    if ( a7 != 1 || (unsigned int)NumberOfBytes < 0x10 || v18 > v12 )
      goto LABEL_39;
    memmove(a4, v15, v18);
  }
  v21 = v42;
  v25 = a7;
  v24 = NumberOfBytes;
LABEL_39:
  v23 = (_DWORD *)a1;
LABEL_40:
  if ( v36 )
  {
    v18 += 2;
    LODWORD(Size) = v18;
  }
  v26 = 0;
  if ( v24 < 0x10 || v18 > v12 )
  {
    v27 = a6;
    *a6 = v18;
    v26 = 1;
  }
  else
  {
    a4->Buffer = &v20->Length;
    v20 = (UNICODE_STRING *)((char *)v20 + v15->Length);
    v27 = a6;
    v24 = NumberOfBytes;
  }
  if ( v25 == 1 )
  {
    v28 = (char *)v10;
    Buffer_high = (int)v10;
  }
  else if ( v26 )
  {
    v28 = v39;
    if ( v24 >= 0x10 )
      v28 = (char *)v43;
    Buffer_high = (int)v28;
  }
  else
  {
    v28 = (char *)&v20[-1].Buffer + 4;
    Buffer_high = HIDWORD(v20[-1].Buffer);
  }
  if ( (v25 != 1 || v21) && (v23[20] & 2) != 0 )
    FileInformation = IopGetFileInformation(v23, (__int64)&Size);
  else
    FileInformation = IopQueryXxxInformation(v23, (__int64)v28, (__int64)&Size, 1);
  v30 = FileInformation;
  if ( (FileInformation & 0xC0000000) != 0xC0000000 )
  {
    v33 = Size;
    if ( (unsigned int)Size < 4 )
      v33 = 4;
    LODWORD(Size) = v33;
    goto LABEL_65;
  }
  v31 = FileInformation + 1073741822;
  if ( v30 + 1073741822 <= 0xE )
  {
    v32 = 18435;
    if ( _bittest(&v32, v31) )
    {
      LODWORD(Size) = 4;
      *(_DWORD *)v28 = 0;
      *((_WORD *)v28 + 2) = 92;
      v30 = 0;
      v33 = Size;
LABEL_65:
      if ( v26 )
      {
        *v27 += *(_DWORD *)v28;
        v30 = -2147483643;
        if ( (unsigned int)NumberOfBytes < 0x10 )
          v30 = -1073741820;
      }
      else
      {
        v34 = v33 - 4;
        if ( (unsigned int)(v33 - 4) > *(_DWORD *)v28 )
          v34 = *(_DWORD *)v28;
        v35 = v43;
        LODWORD(Size) = (_DWORD)v20 + *(_DWORD *)v28 - (_DWORD)v43;
        if ( *((_WORD *)v28 + 2) == 92 )
        {
          if ( a7 == 1 )
            memmove(v20, v28 + 4, v34);
          else
            *(_DWORD *)v28 = Buffer_high;
          v38 = (char *)v20 + v34;
          *(_WORD *)v38 = 0;
          LODWORD(Size) = Size + 2;
          *v27 = Size;
          v35->Length = (_WORD)v38 - (_WORD)v35 - 16;
          v35->MaximumLength = (_WORD)v38 - (_WORD)v35 - 14;
        }
        else
        {
          v30 = -1073741767;
        }
      }
    }
  }
  if ( a7 == 1 )
    ExFreePoolWithTag(v10, 0);
  return v30;
}
