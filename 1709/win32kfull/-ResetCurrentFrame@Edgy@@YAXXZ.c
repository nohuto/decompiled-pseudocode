/*
 * XREFs of ?ResetCurrentFrame@Edgy@@YAXXZ @ 0x1C01D1B54
 * Callers:
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01CD24C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     EditionEdgyResetCurrentFrame @ 0x1C01D2CE0 (EditionEdgyResetCurrentFrame.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::ResetCurrentFrame(Edgy *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(grpdeskRitInput + 240LL);
  if ( v1 )
    *(_QWORD *)(v1 + 232) = 0LL;
}
