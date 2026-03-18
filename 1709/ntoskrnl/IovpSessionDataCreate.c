/*
 * XREFs of IovpSessionDataCreate @ 0x1407BEF34
 * Callers:
 *     IovpCallDriver1 @ 0x1407AF150 (IovpCallDriver1.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14001509C (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x1407B4C30 (IovUtilIsVerifiedDeviceStack.c)
 */

char *__fastcall IovpSessionDataCreate(__int64 a1, __int64 *a2, int a3)
{
  char *result; // rax
  __int64 v5; // r14
  unsigned int v6; // esi
  int v7; // ebp
  char *PoolWithTag; // rax
  char *v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rdx

  if ( !a3 && !(unsigned int)IovUtilIsVerifiedDeviceStack(a1) )
    return 0LL;
  v5 = *a2;
  v6 = 120 * *(char *)(*a2 + 66) + 200;
  if ( *(char *)(*a2 + 66) <= 20 && ViSessionDataInitialized )
  {
    v7 = 1;
    PoolWithTag = (char *)ExAllocateFromNPagedLookasideList(&ViSessionDataLookaside);
  }
  else
  {
    v7 = 0;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x73707249u);
  }
  v9 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v6);
  if ( v7 )
    *((_DWORD *)v9 + 8) |= 4u;
  v10 = v9 + 16;
  *((_DWORD *)v9 + 18) = MmVerifierData;
  v11 = a2 + 8;
  *(_QWORD *)v9 = a2;
  v12 = a2[8];
  if ( *(__int64 **)(v12 + 8) != a2 + 8 )
    __fastfail(3u);
  *((_QWORD *)v9 + 3) = v11;
  *v10 = v12;
  *(_QWORD *)(v12 + 8) = v10;
  *v11 = v10;
  a2[30] = (__int64)v9;
  *((_BYTE *)a2 + 184) = *(_BYTE *)(v5 + 67);
  *((_DWORD *)a2 + 14) = a2[7] & 0xFFFFFE2E | 1;
  result = v9;
  *((_QWORD *)v9 + 8) = v5;
  return result;
}
