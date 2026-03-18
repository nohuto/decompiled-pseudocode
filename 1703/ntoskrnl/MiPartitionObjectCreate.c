/*
 * XREFs of MiPartitionObjectCreate @ 0x1405A1868
 * Callers:
 *     MiCreatePartition @ 0x1406BC9B0 (MiCreatePartition.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 * Callees:
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

__int64 __fastcall MiPartitionObjectCreate(__int64 a1, int a2, unsigned int a3, unsigned __int8 a4, _QWORD *a5)
{
  __int64 result; // rax
  PVOID v8; // rdi
  _QWORD *v9; // rcx
  unsigned int v10; // ecx
  PVOID v11; // rax
  __int64 v12; // [rsp+20h] [rbp-48h]
  PVOID Object[3]; // [rsp+50h] [rbp-18h] BYREF

  result = ObCreateObjectEx(a4, MmPartitionObjectType, a2, a4, v12, 8, 0, 0, Object, 0LL);
  if ( (int)result >= 0 )
  {
    v8 = Object[0];
    v9 = Object[0];
    *(_QWORD *)Object[0] = a1;
    result = ObInsertObjectEx(v9, 0LL, a3, 0, 0, 0LL, Object);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v11 = Object[0];
      *(_DWORD *)(a1 + 4) |= 2u;
      *(_QWORD *)(a1 + 208) = v11;
      *(_QWORD *)(a1 + 200) = v8;
      *a5 = v8;
      return v10;
    }
  }
  return result;
}
