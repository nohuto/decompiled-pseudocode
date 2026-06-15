/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x180029E9C
 * Callers:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x1800293C0 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180025860 (--3@YAXPEAX@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002A29C (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // xmm0_8
  void **v5; // rcx
  void *v6; // rax
  __int128 v7; // xmm0
  char v8; // cl
  char v9; // cl
  __int128 v10; // [rsp+20h] [rbp-28h]
  void *v11; // [rsp+38h] [rbp-10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+8h]

  v10 = *(_OWORD *)((char *)this + 24);
  v4 = *((_QWORD *)this + 5);
  v5 = (void **)((char *)this + 48);
  v12 = v4;
  v6 = *v5;
  *v5 = 0LL;
  v7 = *(_OWORD *)((char *)a2 + 24);
  v11 = v6;
  *(_OWORD *)((char *)this + 24) = v7;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v5, (char *)a2 + 48);
  *(_OWORD *)((char *)a2 + 24) = v10;
  *((_QWORD *)a2 + 5) = v12;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)a2 + 48, &v11);
  if ( v11 )
    operator delete(v11);
  v8 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v8;
  v9 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v9;
}
