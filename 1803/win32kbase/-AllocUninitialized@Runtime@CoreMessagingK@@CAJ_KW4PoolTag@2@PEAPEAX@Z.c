/*
 * XREFs of ?AllocUninitialized@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0166370
 * Callers:
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C0056DA8 (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C0166328 (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 *     ?CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z @ 0x1C01663D0 (-CopyString@Runtime@CoreMessagingK@@SAJPEBGW4PoolTag@2@PEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CoreMessagingK::Runtime::AllocUninitialized(SIZE_T a1, ULONG a2, _QWORD *a3)
{
  PVOID PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a1, a2);
  *a3 = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000017 : 0;
}
