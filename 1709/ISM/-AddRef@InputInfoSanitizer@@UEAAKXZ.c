/*
 * XREFs of ?AddRef@InputInfoSanitizer@@UEAAKXZ @ 0x180001860
 * Callers:
 *     ?AddRef@OrientationWatcher@@WBA@EAAKXZ @ 0x18003D010 (-AddRef@OrientationWatcher@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputInfoSanitizer::AddRef(InputInfoSanitizer *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
