/*
 * XREFs of ?Enabled@Edgy@@YAHXZ @ 0x1C01D1944
 * Callers:
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     EditionEdgyEnabled @ 0x1C01D2CA0 (EditionEdgyEnabled.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edgy::Enabled(Edgy *this)
{
  bool result; // al
  __int64 v2; // r8

  result = 0;
  v2 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 16) == 1 )
      return *(_QWORD *)(v2 + 288) == gptiCurrent;
    else
      return *(_DWORD *)v2 != 0;
  }
  return result;
}
