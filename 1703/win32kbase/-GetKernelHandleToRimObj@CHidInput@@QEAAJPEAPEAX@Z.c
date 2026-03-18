/*
 * XREFs of ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C004EDA0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0091820 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CHidInput::GetKernelHandleToRimObj(CHidInput *this, void **a2)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    return RawInputManagerObjectCreateKernelHandle(v2, 3u, a2);
  *a2 = 0LL;
  return 3221225473LL;
}
