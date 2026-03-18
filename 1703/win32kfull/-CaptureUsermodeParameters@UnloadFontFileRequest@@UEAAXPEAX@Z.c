/*
 * XREFs of ?CaptureUsermodeParameters@UnloadFontFileRequest@@UEAAXPEAX@Z @ 0x1C02B9D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UnloadFontFileRequest::CaptureUsermodeParameters(UnloadFontFileRequest *this, _DWORD *a2)
{
  *((_DWORD *)this + 8) = a2[2];
}
