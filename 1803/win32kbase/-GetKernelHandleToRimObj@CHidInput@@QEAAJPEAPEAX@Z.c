/*
 * XREFs of ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0126D80
 * Callers:
 *     DestroyMonitor @ 0x1C00BBE90 (DestroyMonitor.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00F21B0 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CHidInput::GetKernelHandleToRimObj(CHidInput *this, void **a2)
{
  _DWORD *v2; // rcx

  v2 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v2 )
    return RawInputManagerObjectCreateKernelHandle(v2, 3u, 0, 0, a2);
  *a2 = 0LL;
  return 3221225473LL;
}
