/*
 * XREFs of ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180136AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFrameApplicationPresentation::Destroy(CFrameApplicationPresentation *this)
{
  *((_DWORD *)this + 14) = 1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_725b3a637bab541e8e61b969de3d5fdf___(
           (unsigned int *)this,
           (__int64)this);
}
