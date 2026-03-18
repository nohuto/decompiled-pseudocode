/*
 * XREFs of ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18014AA70
 * Callers:
 *     ?ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN@@@Z @ 0x18012FC50 (-ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResource::GetOwningProcessId(CResource *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( !v1 || *(_DWORD *)(v1 + 16) == 1 )
    return 0LL;
  else
    return *(unsigned int *)(v1 + 20);
}
