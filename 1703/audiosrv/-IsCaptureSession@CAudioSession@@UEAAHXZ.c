/*
 * XREFs of ?IsCaptureSession@CAudioSession@@UEAAHXZ @ 0x18008D280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CAudioSession::IsCaptureSession(CAudioSession *this)
{
  return (*((_DWORD *)this + 95) & 8) == 0;
}
