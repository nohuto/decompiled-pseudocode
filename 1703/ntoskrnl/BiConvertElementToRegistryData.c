/*
 * XREFs of BiConvertElementToRegistryData @ 0x14058BFCC
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x1404C1BA0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14058C478 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1407350F8 (BiConvertQualifiedPartitionToBootEnvironment.c)
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
  _BYTE *Buffer; // rsi
  NTSTATUS v10; // edi
  int v11; // ecx
  int v12; // ecx
  GUID *v13; // rcx
  int v14; // edx
  unsigned int v15; // eax
  int v16; // eax
  unsigned int *v17; // rbx
  unsigned int v18; // r15d
  _OWORD *PoolWithTag; // rax
  _BYTE *v21; // rax
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  _BYTE *v26; // rax
  _QWORD *v27; // rax
  unsigned int v28; // r14d
  int v29; // r15d
  _WORD *v30; // rax
  __int64 v31; // rcx
  size_t v32; // rbx
  unsigned int v33; // eax
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  unsigned int *v35; // [rsp+28h] [rbp-18h]
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF
  int v37; // [rsp+88h] [rbp+48h]

  v6 = 0;
  v7 = a3;
  v35 = 0LL;
  Src = 0LL;
  Buffer = 0LL;
  v10 = 0;
  v11 = (HIBYTE(a1) & 0xF) - 1;
  if ( !v11 )
  {
    if ( a2->Data1 == 6 )
      v16 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v16 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v17 = (unsigned int *)Src;
    v10 = v16;
    if ( v16 >= 0 )
    {
      v18 = *((_DWORD *)Src + 2) + 16;
      if ( *((_DWORD *)Src + 2) >= 0xFFFFFFF0 )
      {
        v10 = -1073741811;
      }
      else
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
        Buffer = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = *(_OWORD *)&a2->Data2;
          memmove(PoolWithTag + 1, v17, v17[2]);
          ExFreePoolWithTag(v17, 0x4B444342u);
          v35 = 0LL;
          goto LABEL_14;
        }
        v10 = -1073741801;
      }
    }
LABEL_61:
    if ( v17 )
      ExFreePoolWithTag(v17, 0x4B444342u);
    return (unsigned int)v10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (a3 & 1) == 0 )
    {
      v13 = a2;
      v14 = -1;
      v15 = a3 >> 1;
      if ( a3 >> 1 )
      {
        while ( LOWORD(v13->Data1) )
        {
          v13 = (GUID *)((char *)v13 + 2);
          if ( !--v15 )
            goto LABEL_18;
        }
        LOBYTE(v6) = 1;
      }
LABEL_18:
      v18 = a3;
      if ( (_BYTE)v6 )
        goto LABEL_19;
      v33 = a3 + 2;
      if ( a3 + 2 >= a3 )
        v14 = a3 + 2;
      v10 = v33 < a3 ? 0xC0000095 : 0;
      v18 = v14;
      if ( v33 >= a3 )
      {
LABEL_19:
        Src = (void *)v18;
        v21 = ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
        Buffer = v21;
        if ( v21 )
        {
          memmove(v21, a2, v7);
          if ( !(_BYTE)v6 )
            *(_WORD *)&Buffer[(_QWORD)Src - 2] = 0;
          goto LABEL_14;
        }
        return (unsigned int)-1073741801;
      }
LABEL_14:
      if ( v10 >= 0 )
      {
LABEL_15:
        v10 = 0;
        *a5 = Buffer;
        *a6 = v18;
        return (unsigned int)v10;
      }
      goto LABEL_59;
    }
    return (unsigned int)-1073741788;
  }
  v22 = v12 - 1;
  if ( !v22 )
  {
    if ( a3 == 16 )
    {
      v10 = RtlStringFromGUIDEx(a2, &GuidString, 1u);
      if ( v10 < 0 )
        return (unsigned int)v10;
      Buffer = GuidString.Buffer;
      v18 = GuidString.Length + 2;
      goto LABEL_14;
    }
    return (unsigned int)-1073741788;
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 != 1 || (a3 & 7) == 0 )
        {
          v18 = a3;
          v26 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v26;
          if ( v26 )
          {
            memmove(v26, a2, v7);
            goto LABEL_15;
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
          goto LABEL_15;
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
          goto LABEL_15;
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
LABEL_45:
    v18 = v29 + 2;
    v30 = ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
    Buffer = v30;
    if ( !v30 )
      return (unsigned int)-1073741801;
    v31 = 0LL;
    v37 = 0;
    Src = v30;
    if ( v28 )
    {
      while ( 1 )
      {
        v10 = RtlStringFromGUIDEx(&a2[v31], &GuidString, 1u);
        if ( v10 < 0 )
          break;
        v32 = (unsigned int)GuidString.Length + 2;
        memmove(Src, GuidString.Buffer, v32);
        Src = (char *)Src + v32;
        RtlFreeUnicodeString(&GuidString);
        v31 = (unsigned int)(v37 + 1);
        v37 = v31;
        if ( (unsigned int)v31 >= v28 )
        {
          v30 = Src;
          goto LABEL_50;
        }
      }
LABEL_59:
      if ( !Buffer )
        return (unsigned int)v10;
      ExFreePoolWithTag(Buffer, 0x4B444342u);
      v17 = v35;
      goto LABEL_61;
    }
LABEL_50:
    *v30 = 0;
    goto LABEL_14;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&GuidString, 0LL);
    v10 = RtlStringFromGUIDEx(&a2[v6], &GuidString, 1u);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v29 += GuidString.Length + 2;
    RtlFreeUnicodeString(&GuidString);
    if ( ++v6 >= v28 )
      goto LABEL_45;
  }
}
