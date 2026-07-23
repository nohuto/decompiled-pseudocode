/*
 * XREFs of BiConvertElementToRegistryData @ 0x1406093F4
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x1406088D0 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140518D58 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14060985C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1407E2000 (BiConvertQualifiedPartitionToBootEnvironment.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        GUID *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  int v6; // ebx
  size_t v7; // r14
  unsigned int *v9; // r13
  _BYTE *Buffer; // rsi
  NTSTATUS v11; // edi
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned int v18; // r15d
  int v19; // eax
  _OWORD *PoolWithTag; // rax
  int v22; // edx
  unsigned int v23; // eax
  GUID *v24; // rcx
  _BYTE *v25; // rax
  _BYTE *v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // r14d
  int v29; // r15d
  _WORD *v30; // rax
  __int64 v31; // rcx
  size_t v32; // rbx
  unsigned int v33; // eax
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING GuidString; // [rsp+28h] [rbp-18h] BYREF
  int v36; // [rsp+88h] [rbp+48h]

  v6 = 0;
  v7 = a3;
  Src = 0LL;
  v9 = 0LL;
  Buffer = 0LL;
  v11 = 0;
  v12 = (HIBYTE(a1) & 0xF) - 1;
  if ( !v12 )
  {
    if ( a2->Data1 == 6 )
      v19 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src, 1262764866LL);
    else
      v19 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v9 = (unsigned int *)Src;
    v11 = v19;
    if ( v19 < 0 )
      goto LABEL_18;
    v18 = *((_DWORD *)Src + 2) + 16;
    if ( *((_DWORD *)Src + 2) >= 0xFFFFFFF0 )
    {
      v11 = -1073741811;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
      Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = *(_OWORD *)&a2->Data2;
        memmove(PoolWithTag + 1, v9, v9[2]);
        ExFreePoolWithTag(v9, 0x4B444342u);
        v9 = 0LL;
        goto LABEL_16;
      }
      v11 = -1073741801;
    }
LABEL_18:
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4B444342u);
    return (unsigned int)v11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    v22 = -1;
    v23 = a3 >> 1;
    v24 = a2;
    if ( a3 >> 1 )
    {
      while ( LOWORD(v24->Data1) )
      {
        v24 = (GUID *)((char *)v24 + 2);
        if ( !--v23 )
          goto LABEL_27;
      }
      LOBYTE(v6) = 1;
    }
LABEL_27:
    v18 = a3;
    if ( (_BYTE)v6 )
      goto LABEL_28;
    v33 = a3 + 2;
    if ( a3 + 2 >= a3 )
      v22 = a3 + 2;
    v11 = v33 < a3 ? 0xC0000095 : 0;
    v18 = v22;
    if ( v33 >= a3 )
    {
LABEL_28:
      Src = (void *)v18;
      v25 = ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
      Buffer = v25;
      if ( !v25 )
        return (unsigned int)-1073741801;
      memmove(v25, a2, v7);
      if ( !(_BYTE)v6 )
        *(_WORD *)&Buffer[(_QWORD)Src - 2] = 0;
    }
    goto LABEL_16;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v11 = RtlStringFromGUIDEx(a2, &GuidString, 1u);
    if ( v11 < 0 )
      return (unsigned int)v11;
    Buffer = GuidString.Buffer;
    v18 = GuidString.Length + 2;
    goto LABEL_16;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        if ( v17 != 1 || (a3 & 7) == 0 )
        {
          v18 = a3;
          v26 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v26;
          if ( v26 )
          {
            memmove(v26, a2, v7);
            goto LABEL_17;
          }
          return (unsigned int)-1073741801;
        }
      }
      else if ( a3 - 1 <= 1 )
      {
        v18 = 1;
        Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
        if ( Buffer )
        {
          *Buffer = LOBYTE(a2->Data1) != 0;
LABEL_17:
          v11 = 0;
          *a5 = Buffer;
          *a6 = v18;
          goto LABEL_18;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v18 = 8;
      if ( a3 == 8 )
      {
        v27 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
        Buffer = v27;
        if ( v27 )
        {
          *v27 = *(_QWORD *)&a2->Data1;
          goto LABEL_17;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741788;
  }
  if ( (a3 & 0xF) != 0 )
    return (unsigned int)-1073741788;
  v28 = a3 >> 4;
  v29 = 0;
  if ( !(a3 >> 4) )
  {
LABEL_47:
    v18 = v29 + 2;
    v30 = ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
    Buffer = v30;
    if ( !v30 )
      return (unsigned int)-1073741801;
    v31 = 0LL;
    v36 = 0;
    Src = v30;
    if ( v28 )
    {
      while ( 1 )
      {
        v11 = RtlStringFromGUIDEx(&a2[v31], &GuidString, 1u);
        if ( v11 < 0 )
          goto LABEL_61;
        v32 = (unsigned int)GuidString.Length + 2;
        memmove(Src, GuidString.Buffer, v32);
        Src = (char *)Src + v32;
        RtlFreeAnsiString(&GuidString);
        v31 = (unsigned int)(v36 + 1);
        v36 = v31;
        if ( (unsigned int)v31 >= v28 )
        {
          v30 = Src;
          break;
        }
      }
    }
    *v30 = 0;
LABEL_16:
    if ( v11 >= 0 )
      goto LABEL_17;
LABEL_61:
    if ( !Buffer )
      return (unsigned int)v11;
    ExFreePoolWithTag(Buffer, 0x4B444342u);
    goto LABEL_18;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&GuidString, 0LL);
    v11 = RtlStringFromGUIDEx(&a2[v6], &GuidString, 1u);
    if ( v11 < 0 )
      return (unsigned int)v11;
    v29 += GuidString.Length + 2;
    RtlFreeAnsiString(&GuidString);
    if ( ++v6 >= v28 )
      goto LABEL_47;
  }
}
