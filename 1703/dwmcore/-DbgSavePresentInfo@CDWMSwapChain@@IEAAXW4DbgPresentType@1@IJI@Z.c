/*
 * XREFs of ?DbgSavePresentInfo@CDWMSwapChain@@IEAAXW4DbgPresentType@1@IJI@Z @ 0x1801309EC
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDWMSwapChain::DbgSavePresentInfo(__int64 a1, int a2, char a3, int a4, int a5)
{
  __int64 v7; // rdx
  signed int v8; // ecx
  struct CCrossThreadComposition *v9; // rax

  if ( (a3 & 1) == 0 )
  {
    v7 = 0LL;
    v8 = (*(_DWORD *)(a1 + 608) + 1) % 6u;
    v9 = g_pComposition;
    *(_DWORD *)(a1 + 608) = v8;
    if ( v9 )
      v7 = *((_QWORD *)v9 + 50);
    *(_QWORD *)(a1 + 24LL * v8 + 464) = v7;
    *(_DWORD *)(a1 + 24LL * *(int *)(a1 + 608) + 472) = a2;
    *(_DWORD *)(a1 + 24LL * *(int *)(a1 + 608) + 476) = a4;
    *(_DWORD *)(a1 + 24 * (*(int *)(a1 + 608) + 20LL)) = a5;
  }
}
