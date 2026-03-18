/*
 * XREFs of ?UninitializeResources@CHolographicClient@@AEAAXXZ @ 0x1801C3974
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1801C3278 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C35B8 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3620 (-ProcessRemoveDisplay@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C36A4 (-ProcessRemoveExclusiveView@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 *     ?ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801C3710 (-ProcessRemoveTexture@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 */

void __fastcall CHolographicClient::UninitializeResources(CHolographicClient *this)
{
  int v2; // eax
  __int64 i; // rdi
  int v4; // eax
  __int64 j; // rdi
  int v6; // eax
  __int64 k; // rdi
  __int64 v8; // rdx

  v2 = *((_DWORD *)this + 16) - 1;
  for ( i = v2;
        i >= 0;
        CHolographicClient::ProcessRemoveTexture(this, *(struct IUnknown **)(*((_QWORD *)this + 5) + 8 * i--)) )
  {
    ;
  }
  v4 = *((_DWORD *)this + 32) - 1;
  for ( j = v4;
        j >= 0;
        CHolographicClient::ProcessRemoveDisplay(this, *(struct IUnknown **)(*((_QWORD *)this + 13) + 8 * j--)) )
  {
    ;
  }
  v6 = *((_DWORD *)this + 24) - 1;
  for ( k = v6;
        k >= 0;
        CHolographicClient::ProcessRemoveExclusiveView(this, *(struct IUnknown **)(*((_QWORD *)this + 9) + 8 * k--)) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 9) + 8 * k);
    if ( *(_BYTE *)(v8 + 75) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
        *((_QWORD *)this + 3),
        *(unsigned int *)(v8 + 64));
    else
      CHolographicClient::ProcessReleaseExclusiveSwapChain(this, (struct IUnknown *)v8);
  }
}
