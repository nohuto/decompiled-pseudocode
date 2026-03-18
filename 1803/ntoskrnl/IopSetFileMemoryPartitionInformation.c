/*
 * XREFs of IopSetFileMemoryPartitionInformation @ 0x14071CDA4
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     IopAllocateFileObjectExtension @ 0x140069670 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140069DD4 (IopSetTypeSpecificFoExtension.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 */

__int64 __fastcall IopSetFileMemoryPartitionInformation(__int64 a1, __m128i *a2, unsigned int a3)
{
  int FileObjectExtension; // ebx
  _QWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  int v8; // eax
  PVOID v9; // rbp
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
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      v8 = PsReferencePartitionByHandle(a2->m128i_i64[0], 2LL, 0LL, 0x66506F49u, &Object);
      v9 = Object;
      FileObjectExtension = v8;
      if ( v8 >= 0 )
      {
        ObfReferenceObjectWithTag(Object, 0x6F466F49u);
        PsDereferencePartition((__int64)v9);
        *(_QWORD *)v7 = v9;
        v7[2] ^= (v7[2] ^ a2->m128i_u8[8]) & 1;
        FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&Object);
        if ( FileObjectExtension >= 0 )
        {
          if ( (int)IopSetTypeSpecificFoExtension((__int64)Object, 8u, (signed __int64)v7) >= 0 )
          {
            v7 = 0LL;
            FileObjectExtension = 0;
          }
          else
          {
            FileObjectExtension = -1073741791;
          }
        }
      }
      if ( v7 )
      {
        if ( *(_QWORD *)v7 )
          ObfDereferenceObjectWithTag(v9, 0x6F466F49u);
        ExFreePoolWithTag(v7, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)FileObjectExtension;
}
