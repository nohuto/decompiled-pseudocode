/*
 * XREFs of ?ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETADAPTERLUID@@@Z @ 0x1801BD240
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801BD1C8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetAdapterLuid(
        RTL_SRWLOCK *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETADAPTERLUID *a3)
{
  RTL_SRWLOCK *v3; // rbx

  v3 = this + 20;
  AcquireSRWLockExclusive(this + 20);
  this[11].Ptr = *(PVOID *)((char *)a3 + 8);
  this[12].Ptr = *(PVOID *)((char *)a3 + 16);
  if ( *((_QWORD *)a3 + 1) && *((_QWORD *)a3 + 2) )
    HIDWORD(this[9].Ptr) |= 1u;
  else
    HIDWORD(this[9].Ptr) &= ~1u;
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged((CHolographicDisplay *)this);
  return 0LL;
}
