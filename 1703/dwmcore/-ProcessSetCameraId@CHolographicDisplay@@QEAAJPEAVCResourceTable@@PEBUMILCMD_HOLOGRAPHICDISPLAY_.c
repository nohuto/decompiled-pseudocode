/*
 * XREFs of ?ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETCAMERAID@@@Z @ 0x18012FBD8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnChanged@CHolographicDisplay@@AEAAXXZ @ 0x1801A46F8 (-OnChanged@CHolographicDisplay@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicDisplay::ProcessSetCameraId(
        CHolographicDisplay *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICDISPLAY_SETCAMERAID *a3)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v6; // rax

  v3 = (RTL_SRWLOCK *)((char *)this + 160);
  AcquireSRWLockExclusive((PSRWLOCK)this + 20);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a3 + 8);
  v6 = *((_QWORD *)this + 13) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v6 )
    v6 = *((_QWORD *)this + 14) - *(_QWORD *)GUID_NULL.Data4;
  if ( v6 )
    *((_DWORD *)this + 19) |= 4u;
  else
    *((_DWORD *)this + 19) &= ~4u;
  ReleaseSRWLockExclusive(v3);
  CHolographicDisplay::OnChanged(this);
  return 0LL;
}
