/*
 * XREFs of ?SetRemarshalingFlags@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0143F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CRemotingRenderTargetMarshaler::SetRemarshalingFlags(
        DirectComposition::CRemotingRenderTargetMarshaler *this)
{
  __int64 v1; // rdx
  bool v2; // zf

  *((_DWORD *)this + 4) |= 0x20u;
  v1 = *((_QWORD *)this + 6);
  v2 = v1 == 0;
  if ( v1 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    v2 = v1 == 0;
  }
  return !v2;
}
