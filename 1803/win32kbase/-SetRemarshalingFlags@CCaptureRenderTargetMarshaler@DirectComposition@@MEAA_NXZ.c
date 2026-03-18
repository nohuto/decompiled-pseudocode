/*
 * XREFs of ?SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C015A1B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CCaptureRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CCaptureRenderTargetMarshaler *this)
{
  unsigned int *v1; // rax
  unsigned int v2; // edx

  v1 = (unsigned int *)((char *)this + 16);
  if ( *((_QWORD *)this + 10) )
    *v1 |= 0x20u;
  if ( *((_QWORD *)this + 9) )
  {
    v1 = (unsigned int *)((char *)this + 16);
    *((_DWORD *)this + 4) |= 0x40u;
  }
  if ( *((_DWORD *)this + 11) || *((_DWORD *)this + 10) )
  {
    *v1 |= 0x80u;
    v2 = *v1;
  }
  else
  {
    v2 = *((_DWORD *)this + 4);
  }
  *((_QWORD *)this + 7) = 0LL;
  *v1 = v2 & 0xFFFFFEFF;
  return 1;
}
