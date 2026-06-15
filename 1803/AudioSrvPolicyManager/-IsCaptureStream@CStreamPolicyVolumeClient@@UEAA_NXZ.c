/*
 * XREFs of ?IsCaptureStream@CStreamPolicyVolumeClient@@UEAA_NXZ @ 0x18002ED50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamPolicyVolumeClient::IsCaptureStream(CStreamPolicyVolumeClient *this)
{
  return *((_DWORD *)this + 4) == 1;
}
