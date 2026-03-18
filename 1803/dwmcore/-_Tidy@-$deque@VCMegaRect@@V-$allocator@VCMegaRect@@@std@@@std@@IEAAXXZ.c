/*
 * XREFs of ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@IEAAXXZ @ 0x1800BCC2C
 * Callers:
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ??1CHWCallbackRenderer@@EEAA@XZ @ 0x1800DA270 (--1CHWCallbackRenderer@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReplacePrimitive@CHWDrawListEntry@@QEAA?AV?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@$$QEAV23@AEBVCMILMatrix@@@Z @ 0x18013E2A8 (-ReplacePrimitive@CHWDrawListEntry@@QEAA-AV-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@V.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x18013F804 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 */

void __fastcall std::deque<CMegaRect>::_Tidy(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  void *v4; // r8
  void *v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 **v7; // rsi
  _QWORD *v8; // rdi
  volatile signed __int32 *v9; // r8
  void **v10; // rdi
  _DWORD *v11; // r14
  volatile signed __int32 *v12; // rcx
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    v2 = a1[4];
    if ( !v2 )
      break;
    v6 = (a1[2] - 1LL) & (a1[3] - 1LL + v2);
    v7 = *(volatile signed __int32 ***)(a1[1] + 8 * v6);
    v8 = v7 + 4;
    if ( v7[4] )
    {
      CHWDrawListEntry::ReplacePrimitive(*v7, &v14, v7 + 4, v7 + 5);
      if ( v14 )
        std::default_delete<CDrawListPrimitive>::operator()(v6, v14);
    }
    if ( *v8 )
      std::default_delete<CDrawListPrimitive>::operator()(v6, *v8);
    v9 = v7[2];
    if ( v9 )
      HeapFree(WPF::g_processHeap, 0, (LPVOID)v9);
    v10 = (void **)v7[1];
    if ( v10 )
    {
      v11 = v10 + 1;
      if ( v10 + 1 != *v10 )
      {
        operator delete(*v10);
        *v10 = v11;
        *v11 = 0;
      }
      operator delete(v10, 0x48uLL);
    }
    v12 = *v7;
    if ( *v7 )
    {
      *v7 = 0LL;
      if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 16LL))(v12, 1LL);
    }
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v3 = a1[2];
  while ( v3 )
  {
    --v3;
    v4 = *(void **)(a1[1] + 8 * v3);
    if ( v4 )
      HeapFree(WPF::g_processHeap, 0, v4);
  }
  v5 = (void *)a1[1];
  if ( v5 )
    std::_Deallocate(v5, a1[2], 8uLL);
  a1[2] = 0LL;
  a1[1] = 0LL;
}
