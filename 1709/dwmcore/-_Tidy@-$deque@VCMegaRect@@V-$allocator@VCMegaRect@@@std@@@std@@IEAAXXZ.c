/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800B27E0
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x18001BBE0 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x18001D050 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x18011B794 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 */

int __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  void *v4; // r8
  volatile signed __int32 **v5; // rbx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // r8
  void **v8; // rsi
  _DWORD *v9; // r14
  volatile signed __int32 *v10; // rcx
  void *v12; // r8
  __int64 v13; // rax
  __int64 (__fastcall ***v15)(_QWORD, __int64); // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v13 = a1[1];
    v5 = *(volatile signed __int32 ***)(v13 + 8 * ((a1[2] - 1LL) & (a1[3] - 1LL + v2)));
    if ( v5[4] )
    {
      LODWORD(v13) = CHWDrawListEntry::ReplacePrimitive(*v5, &v15, v5 + 4, v5 + 5);
      if ( v15 )
        LODWORD(v13) = (**v15)(v15, 1LL);
    }
    v6 = v5[4];
    if ( v6 )
      LODWORD(v13) = (**(__int64 (__fastcall ***)(volatile signed __int32 *, __int64))v6)(v6, 1LL);
    v7 = v5[2];
    if ( v7 )
      LODWORD(v13) = HeapFree(WPF::g_processHeap, 0, (LPVOID)v7);
    v8 = (void **)v5[1];
    if ( v8 )
    {
      v9 = v8 + 1;
      if ( v8 + 1 != *v8 )
      {
        WPF::ProcessHeapImpl::Free(*v8);
        *v8 = v9;
        *v9 = 0;
      }
      LODWORD(v13) = HeapFree(WPF::g_processHeap, 0, v8);
    }
    v10 = *v5;
    if ( *v5 )
    {
      *v5 = 0LL;
      LODWORD(v13) = _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF);
      if ( (_DWORD)v13 == 1 )
        LODWORD(v13) = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 16LL))(v10, 1LL);
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    v13 = a1[1];
    --v3;
    v12 = *(void **)(v13 + 8 * v3);
    if ( v12 )
      LODWORD(v13) = HeapFree(WPF::g_processHeap, 0, v12);
  }
  v4 = (void *)a1[1];
  if ( v4 )
    LODWORD(v13) = HeapFree(WPF::g_processHeap, 0, v4);
  a1[1] = 0LL;
  a1[2] = 0LL;
  return v13;
}
