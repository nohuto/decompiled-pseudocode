/*
 * XREFs of IopSetFileMemoryPartitionInformation @ 0x1406B8098
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 * Callees:
 *     IopSetTypeSpecificFoExtension @ 0x140024FC4 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsReferencePartitionByHandle @ 0x1404FC8D4 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall IopSetFileMemoryPartitionInformation(__int64 a1, __m128i *a2, unsigned int a3)
{
  int FileObjectExtension; // ebx
  _QWORD *PoolWithTag; // rdi
  NTSTATUS v7; // eax
  PVOID v8; // rsi
  void *v10; // [rsp+20h] [rbp-38h]
  __m128i v11; // [rsp+30h] [rbp-28h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  if ( a3 < 0x10 )
    return (unsigned int)-1073741811;
  v11 = *a2;
  if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(*a2, 8)) > 1u )
    return (unsigned int)-1073741811;
  v11.m128i_i8[8] = 0;
  if ( v11.m128i_i32[2] )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x66506F49u);
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      v7 = PsReferencePartitionByHandle((void *)a2->m128i_i64[0], 2u, 0, &Object, v10);
      v8 = Object;
      FileObjectExtension = v7;
      if ( v7 >= 0 )
      {
        ObfReferenceObject(Object);
        PsDereferencePartition((__int64)v8);
        *PoolWithTag = v8;
        *((_DWORD *)PoolWithTag + 2) ^= (*((_DWORD *)PoolWithTag + 2) ^ a2->m128i_u8[8]) & 1;
        FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&Object);
        if ( FileObjectExtension >= 0 )
        {
          if ( (int)IopSetTypeSpecificFoExtension((__int64)Object, 8u, (signed __int64)PoolWithTag) >= 0 )
          {
            PoolWithTag = 0LL;
            FileObjectExtension = 0;
          }
          else
          {
            FileObjectExtension = -1073741791;
          }
        }
      }
      if ( PoolWithTag )
      {
        if ( *PoolWithTag )
          ObfDereferenceObject(v8);
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)FileObjectExtension;
}
