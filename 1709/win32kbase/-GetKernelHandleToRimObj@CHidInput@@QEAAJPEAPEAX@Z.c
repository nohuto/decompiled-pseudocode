/*
 * XREFs of ?GetKernelHandleToRimObj@CHidInput@@QEAAJPEAPEAX@Z @ 0x1C0019860
 * Callers:
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 * Callees:
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C00973E0 (RawInputManagerObjectCreateKernelHandle.c)
 */

__int64 __fastcall CHidInput::GetKernelHandleToRimObj(CHidInput *this, void **a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
    return RawInputManagerObjectCreateKernelHandle(v2, 3LL, 0LL);
  *a2 = 0LL;
  return 3221225473LL;
}
