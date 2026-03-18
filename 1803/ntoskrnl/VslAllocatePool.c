/*
 * XREFs of VslAllocatePool @ 0x14015CCC0
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 * Callees:
 *     VslpLockPagesForTransfer @ 0x14015CF58 (VslpLockPagesForTransfer.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslAllocatePool(SIZE_T NumberOfBytes, ULONG Tag, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  int v7; // ebx
  PVOID PoolWithTag; // rsi
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebx

  v7 = NumberOfBytes;
  if ( NumberOfBytes > 0x1FA000 )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
  if ( !PoolWithTag )
    return 3221225626LL;
  v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x54736D56u);
  v10 = v9;
  if ( v9 )
  {
    v11 = VslpLockPagesForTransfer((_DWORD)v9, (_DWORD)PoolWithTag, v7, 1, 0);
    if ( v11 >= 0 )
    {
      *a3 = v10[7];
      *a4 = *v10;
      *a5 = v10;
      return 0LL;
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v11;
}
