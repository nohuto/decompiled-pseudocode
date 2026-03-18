/*
 * XREFs of ??1CDisplaySet@@AEAA@XZ @ 0x1800B758C
 * Callers:
 *     ?CheckStereoState@CComposition@@QEAAJXZ @ 0x18005B7C0 (-CheckStereoState@CComposition@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18006ACB0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x1800A1F10 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
