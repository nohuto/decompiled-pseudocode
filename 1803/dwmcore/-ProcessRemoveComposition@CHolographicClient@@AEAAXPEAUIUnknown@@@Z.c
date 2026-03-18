/*
 * XREFs of ?ProcessRemoveComposition@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD9C
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801FF9B0 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFD34 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFEF0 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801FFF5C (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall CHolographicClient::ProcessRemoveComposition(CHolographicClient *this, struct IUnknown *a2)
{
  int v3; // eax
  __int64 i; // rdi
  int v6; // eax
  __int64 j; // rdi
  __int64 v8; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 16) - 1;
  for ( i = v3;
        i >= 0;
        CHolographicClient::ProcessRemoveTexture(this, *(struct IUnknown **)(*((_QWORD *)this + 5) + 8 * i--)) )
  {
    ;
  }
  v6 = *((_DWORD *)this + 24) - 1;
  for ( j = v6; j >= 0; --j )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * j);
    if ( !*(_BYTE *)(v8 + 75) )
    {
      CHolographicClient::ProcessReleaseExclusiveSwapChain(this, (struct IUnknown *)v8);
      CHolographicClient::ProcessRemoveExclusiveView(this, *(struct IUnknown **)(*((_QWORD *)this + 9) + 8 * j));
    }
  }
  lpVtbl = a2->lpVtbl;
  v10 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_f6510650_98a1_40e3_b87a_8dc216605fda,
         &v10) >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 136LL))(*((_QWORD *)this + 3), v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
}
