/*
 * XREFs of PnpCopyDevPropertyArray @ 0x1405BB72C
 * Callers:
 *     PiSwCompleteCreate @ 0x1405BAE84 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1405BB304 (PiSwIrpStartCreateWorker.c)
 *     PiSwInterfaceCreate @ 0x1405E26E4 (PiSwInterfaceCreate.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406CE580 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PnpCopyDevProperty @ 0x1405BB7F0 (PnpCopyDevProperty.c)
 */

__int64 __fastcall PnpCopyDevPropertyArray(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4, PVOID *a5)
{
  unsigned int v5; // edi
  __int64 v8; // rbp
  PVOID PoolWithTag; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 i; // rbp

  v5 = 0;
  *a4 = 0;
  v8 = a1;
  *a5 = 0LL;
  if ( a2 && a1 )
  {
    if ( !is_mul_ok(a1, 0x30uLL) )
      return (unsigned int)-1073741675;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 48LL * a1, 0x57706E50u);
    *a5 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 48 * v8);
      v11 = 0LL;
      if ( !(_DWORD)v8 )
        return v5;
      while ( 1 )
      {
        v5 = PnpCopyDevProperty(a2 + 48 * v11, v10, (char *)*a5 + 48 * v11);
        if ( (v5 & 0x80000000) != 0 )
          break;
        ++*a4;
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= (unsigned int)v8 )
          return v5;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    if ( *a5 )
    {
      for ( i = 0LL; (unsigned int)i < *a4; i = (unsigned int)(i + 1) )
        ExFreePoolWithTag(*((PVOID *)*a5 + 6 * i + 5), 0x57706E50u);
      ExFreePoolWithTag(*a5, 0x57706E50u);
      *a4 = 0;
      *a5 = 0LL;
    }
  }
  return v5;
}
