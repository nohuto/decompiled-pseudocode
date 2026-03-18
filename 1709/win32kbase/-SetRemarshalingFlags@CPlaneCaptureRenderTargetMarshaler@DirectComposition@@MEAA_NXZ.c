/*
 * XREFs of ?SetRemarshalingFlags@CPlaneCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C014C9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CPlaneCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CPlaneCaptureRenderTargetMarshaler *this)
{
  bool v1; // zf
  int v2; // eax

  v1 = *((_QWORD *)this + 9) == 0LL;
  *((_DWORD *)this + 4) = 32;
  v2 = *((_DWORD *)this + 4);
  if ( !v1 )
    v2 = 96;
  *((_DWORD *)this + 4) = v2;
  return 1;
}
