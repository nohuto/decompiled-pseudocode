/*
 * XREFs of ?ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN@@@Z @ 0x18012FC50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18014AA70 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetSwapChain(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN *a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rcx
  unsigned int OwningProcessId; // eax
  bool v8; // zf

  v3 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  Ptr = this[15].Ptr;
  if ( Ptr )
    CloseHandle(Ptr);
  this[15].Ptr = *(PVOID *)((char *)a3 + 8);
  OwningProcessId = CResource::GetOwningProcessId((CResource *)this);
  v8 = this[15].Ptr == 0LL;
  LODWORD(this[16].Ptr) = OwningProcessId;
  if ( v8 )
    HIDWORD(this[9].Ptr) &= ~8u;
  else
    HIDWORD(this[9].Ptr) |= 8u;
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
