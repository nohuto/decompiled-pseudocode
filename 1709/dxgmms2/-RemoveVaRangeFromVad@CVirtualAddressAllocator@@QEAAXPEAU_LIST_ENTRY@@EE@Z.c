/*
 * XREFs of ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C0053254
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C00554B0 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C00018AC (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 *     ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0001AB8 (-GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C0053510 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVaRangeFromVad(
        CVirtualAddressAllocator *this,
        struct _LIST_ENTRY *a2,
        char a3,
        char a4)
{
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  __int64 **VidMmAllocFromOwner; // rax
  char *v16; // rcx
  __int64 v17; // rdx
  char **v18; // r8
  char *v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rdx
  char **v22; // rax

  p_Blink = &a2[-1].Blink;
  Blink = a2[-1].Blink;
  v10 = (LODWORD(a2[3].Blink) >> 4) & 0x3F;
  if ( *(&Blink[7].Flink + 3 * v10) == a2 )
    *((_QWORD *)&Blink[7].Flink + 3 * v10) = 0LL;
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 || (v12 = a2->Blink, v12->Flink != a2) )
    __fastfail(3u);
  v12->Flink = Flink;
  Flink->Blink = v12;
  v13 = *((_DWORD *)p_Blink + 16);
  v14 = (__int64)p_Blink[7];
  a2->Flink = 0LL;
  VidMmAllocFromOwner = (__int64 **)GetVidMmAllocFromOwner(v13 << 28 >> 28, v14);
  if ( VidMmAllocFromOwner )
  {
    v16 = (char *)(p_Blink + 3);
    if ( p_Blink[3] )
    {
      v17 = *(_QWORD *)v16;
      if ( *(char **)(*(_QWORD *)v16 + 8LL) != v16 || (v18 = (char **)p_Blink[4], *v18 != v16) )
        __fastfail(3u);
      *v18 = (char *)v17;
      *(_QWORD *)(v17 + 8) = v18;
      *(_QWORD *)v16 = 0LL;
    }
    v19 = (char *)(p_Blink + 5);
    if ( p_Blink[5] )
    {
      v20 = **VidMmAllocFromOwner;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v20 + 352, 0LL);
      v21 = *(_QWORD *)v19;
      if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 || (v22 = (char **)p_Blink[6], *v22 != v19) )
        __fastfail(3u);
      *v22 = (char *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      *(_QWORD *)v19 = 0LL;
      ExReleasePushLockExclusiveEx(v20 + 352, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  --HIDWORD(Blink[4].Blink);
  if ( a4 )
    *p_Blink = 0LL;
  VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((volatile signed __int32 *)p_Blink);
  if ( a3 && ((__int64)Blink[4].Blink & 0xF) == 3 && !HIDWORD(Blink[4].Blink) )
    CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal(this, (struct VIDMM_VAD *)Blink);
}
