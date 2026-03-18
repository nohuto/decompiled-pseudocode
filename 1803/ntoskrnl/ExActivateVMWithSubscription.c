/*
 * XREFs of ExActivateVMWithSubscription @ 0x1407BDA5C
 * Callers:
 *     ExpGetVMActivationStatus @ 0x1405F36F0 (ExpGetVMActivationStatus.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     sub_1405F3CBC @ 0x1405F3CBC (sub_1405F3CBC.c)
 *     ExpGetSubscriptionPfn @ 0x1407BE454 (ExpGetSubscriptionPfn.c)
 */

__int64 __fastcall ExActivateVMWithSubscription(_DWORD *a1, _DWORD *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  const wchar_t *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // ebx
  PVOID PoolWithTag; // rax
  void *v11; // rbp
  unsigned int v12; // ebx
  int v13; // eax
  _QWORD v15[9]; // [rsp+60h] [rbp-48h] BYREF

  v15[0] = 0LL;
  ExpGetSubscriptionPfn(v15);
  v7 = L"8:";
  v8 = 0;
  while ( 1 )
  {
    v9 = *v7 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x20534C53u);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, v9);
    memmove(v11, *((const void **)v7 + 1), *v7);
    v12 = qword_1408613B8(v15[0], 0LL, 0LL, 0LL, v11, v9, a2, a3, a4, a1, 0LL);
    v13 = -1073741789;
    if ( (int)(v12 + 0x80000000) < 0 || v12 == -1073741789 )
    {
      if ( a3 && v12 != -1073741789 )
      {
        v13 = sub_1405F3CBC(a1, a2, a3, a4, 1);
        *a5 = 1;
      }
      v12 = v13;
    }
    ExFreePoolWithTag(v11, 0);
    if ( *a5 != 1 )
    {
      ++v8;
      v7 += 8;
      if ( v8 < 2 )
        continue;
    }
    return v12;
  }
  return (unsigned int)-1073741801;
}
