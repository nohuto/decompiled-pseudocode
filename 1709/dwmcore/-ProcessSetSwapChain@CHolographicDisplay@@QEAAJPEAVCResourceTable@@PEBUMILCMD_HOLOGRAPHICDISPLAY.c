/*
 * XREFs of ?ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN@@@Z @ 0x1801BD388
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetOwningProcessId@CResource@@UEBAKXZ @ 0x18013BE90 (-GetOwningProcessId@CResource@@UEBAKXZ.c)
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetSwapChain(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN *a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rax
  int OwningProcessId; // eax
  bool v9; // zf

  v3 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  Ptr = this[15].Ptr;
  if ( !Ptr || Ptr == *((PVOID *)a3 + 1) )
  {
    this[15].Ptr = *(PVOID *)((char *)a3 + 8);
    OwningProcessId = CResource::GetOwningProcessId((CResource *)this);
    v9 = this[15].Ptr == 0LL;
    LODWORD(this[16].Ptr) = OwningProcessId;
    HIDWORD(this[16].Ptr) = *((_DWORD *)a3 + 4);
    if ( v9 )
      HIDWORD(this[9].Ptr) &= ~8u;
    else
      HIDWORD(this[9].Ptr) |= 8u;
    ReleaseSRWLockExclusive(v3);
    CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
    return 0LL;
  }
  else
  {
    ReleaseSRWLockExclusive(v3);
    return 2147942487LL;
  }
}
