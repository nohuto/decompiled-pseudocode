/*
 * XREFs of ?ReferenceReservedZeroVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0@Z @ 0x1C009D740
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C009738C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0050330 (-CompareVadAddressInsideAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE *__fastcall CVirtualAddressAllocator::ReferenceReservedZeroVad(
        CVirtualAddressAllocator *this,
        struct _RTL_BALANCED_NODE *a2,
        unsigned __int64 a3)
{
  struct _RTL_BALANCED_NODE *v3; // rbx
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  struct _RTL_BALANCED_NODE *v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  if ( !v3 )
    return 0LL;
  do
  {
    v5 = CompareVadAddressInsideAvl(&v10, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
        break;
      v3 = v3->Children[1];
    }
    else
    {
      v3 = v3->Children[0];
    }
  }
  while ( v3 );
  if ( !v3 )
    return 0LL;
  v6 = (int)v3[3].Children[0];
  v7 = (unsigned __int64)v3[1].Children[1];
  if ( (v6 & 0x1000) != 0 )
    v7 -= 4096LL;
  if ( v7 < a3 )
    return 0LL;
  if ( (v6 & 0xF) != 2 )
  {
    v8 = WdLogNewEntry5_WdWarning(v7, 4096LL);
    WdLogEvent5_WdWarning(v8);
    return 0LL;
  }
  return v3;
}
