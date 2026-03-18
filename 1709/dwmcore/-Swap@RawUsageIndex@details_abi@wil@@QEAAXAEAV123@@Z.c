/*
 * XREFs of ?Swap@RawUsageIndex@details_abi@wil@@QEAAXAEAV123@@Z @ 0x18007A930
 * Callers:
 *     ?RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z @ 0x180079CF8 (-RetrieveUsageUnderLock@FeatureStateData@details_abi@wil@@AEAAXAEAUUsageIndexes@23@@Z.c)
 * Callees:
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007AF04 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C0D9C (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

void __fastcall wil::details_abi::RawUsageIndex::Swap(
        wil::details_abi::RawUsageIndex *this,
        struct wil::details_abi::RawUsageIndex *a2)
{
  __int64 v4; // xmm0_8
  wil::details **v5; // rcx
  wil::details *v6; // rax
  __int128 v7; // xmm0
  void *v8; // rdx
  char v9; // cl
  char v10; // cl
  __int128 v11; // [rsp+20h] [rbp-28h]
  wil::details *v12; // [rsp+38h] [rbp-10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+8h]

  v11 = *(_OWORD *)((char *)this + 24);
  v4 = *((_QWORD *)this + 5);
  v5 = (wil::details **)((char *)this + 48);
  v13 = v4;
  v6 = *v5;
  *v5 = 0LL;
  v7 = *(_OWORD *)((char *)a2 + 24);
  v12 = v6;
  *(_OWORD *)((char *)this + 24) = v7;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 5);
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=(v5, (char *)a2 + 48);
  *(_OWORD *)((char *)a2 + 24) = v11;
  *((_QWORD *)a2 + 5) = v13;
  wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)a2 + 48, &v12);
  if ( v12 )
    wil::details::FreeProcessHeap(v12, v8);
  v9 = *((_BYTE *)this + 56);
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  *((_BYTE *)a2 + 56) = v9;
  v10 = *((_BYTE *)this + 57);
  *((_BYTE *)this + 57) = *((_BYTE *)a2 + 57);
  *((_BYTE *)a2 + 57) = v10;
}
