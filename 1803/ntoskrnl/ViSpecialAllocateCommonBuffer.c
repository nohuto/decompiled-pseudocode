/*
 * XREFs of ViSpecialAllocateCommonBuffer @ 0x14081BDBC
 * Callers:
 *     VfAllocateCommonBuffer @ 0x140817AC0 (VfAllocateCommonBuffer.c)
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x1400B1F00 (ExInterlockedInsertHeadList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ViInitializePadding @ 0x14081B788 (ViInitializePadding.c)
 */

char *__fastcall ViSpecialAllocateCommonBuffer(
        __int64 (__fastcall *a1)(_QWORD, _QWORD, struct _LIST_ENTRY **, __int64),
        __int64 a2,
        struct _LIST_ENTRY *a3,
        unsigned int a4,
        _QWORD *a5,
        char a6)
{
  __int64 v8; // rdi
  _LIST_ENTRY *PoolWithTag; // rsi
  __int64 v12; // r9
  int v13; // ebx
  int v14; // ebx
  unsigned int v15; // r14d
  char *v16; // rax
  char *v17; // rbx
  struct _LIST_ENTRY *v18; // [rsp+68h] [rbp+10h] BYREF

  v8 = a4;
  if ( (unsigned int)(*(_DWORD *)(a2 + 172) - *(_DWORD *)(a2 + 176)) >= 0x20 || a4 > 0xFFFFDFFF )
    return 0LL;
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x566C6148u);
  if ( !PoolWithTag )
  {
    VfUtilDbgPrint("Couldn't track common buffer allocation\n");
    return 0LL;
  }
  if ( (unsigned __int64)(v8 + 8) <= 0x1000 )
  {
    v13 = 4096;
LABEL_10:
    v14 = v13 - v8;
    goto LABEL_12;
  }
  if ( (v8 & 0xFFF) != 0 )
  {
    v13 = ((v8 + 8) & 0xFFFFF000) + ((((_WORD)v8 + 8) & 0xFFF) != 0LL ? 0x1000 : 0);
    goto LABEL_10;
  }
  v14 = 4096;
LABEL_12:
  LOBYTE(v12) = a6;
  v15 = v14 + v8 + 4096;
  v16 = (char *)a1(*(_QWORD *)(a2 + 16), v15, &v18, v12);
  if ( !v16 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 0LL;
  }
  WORD1(PoolWithTag->Flink) = v14;
  v17 = v16 + 4096;
  LOWORD(PoolWithTag->Flink) = 4096;
  PoolWithTag[1].Blink = (struct _LIST_ENTRY *)(v16 + 4096);
  LODWORD(PoolWithTag->Blink) = v8;
  HIDWORD(PoolWithTag->Flink) = v15;
  PoolWithTag[1].Flink = (struct _LIST_ENTRY *)v16;
  PoolWithTag[2].Flink = v18;
  PoolWithTag[2].Blink = a3;
  ViInitializePadding(v16, v15, (unsigned __int64)(v16 + 4096), v8);
  *a5 = v18 + 256;
  ExInterlockedInsertHeadList((PLIST_ENTRY)(a2 + 80), PoolWithTag + 3, (PKSPIN_LOCK)(a2 + 96));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 172));
  return v17;
}
