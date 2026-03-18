/*
 * XREFs of ??1CDisplaySet@@AEAA@XZ @ 0x1800988F0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180036D60 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplaySet::~CDisplaySet(CDisplaySet *this)
{
  void **v2; // rdi
  __int64 v3; // rsi
  __int64 i; // rdi
  __int64 v5; // rcx
  HMODULE v6; // rcx
  __int64 v7; // rcx

  v2 = (void **)((char *)this + 120);
  v3 = 13LL;
  do
  {
    if ( *v2 )
      WPF::ProcessHeapImpl::Free(*v2);
    ++v2;
    --v3;
  }
  while ( v3 );
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = (HMODULE)*((_QWORD *)this + 66);
  if ( v6 )
    FreeLibrary(v6);
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 6);
}
