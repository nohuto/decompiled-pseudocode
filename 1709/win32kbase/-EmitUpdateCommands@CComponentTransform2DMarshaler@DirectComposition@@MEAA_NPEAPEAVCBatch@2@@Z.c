/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform2DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028CE0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6288d291273792cde85e9051fd01e069___ @ 0x1C00298B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6288d291273792cde85e9051fd01e06.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a49c4e48c83d561ca70443dc7c4dc3d0___ @ 0x1C002993C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a49c4e48c83d561ca70443dc7c4dc3d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e97aea8b1b0b0ade5c483c6e903c56b1___ @ 0x1C00299B0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e97aea8b1b0b0ade5c483c6e903c56b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0a8cd320e96a285e98ebffb5bb6d8e09___ @ 0x1C0029A1C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0a8cd320e96a285e98ebffb5bb6d8e0.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a99c6f2a44994dec0956702aacf18cf0___ @ 0x1C0029A90 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a99c6f2a44994dec0956702aacf18cf.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac52cbf891b5d5355a5d60493f1deb4a___ @ 0x1C0029B04 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ac52cbf891b5d5355a5d60493f1deb4.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AF80 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CComponentTransform2DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform2DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform2DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a99c6f2a44994dec0956702aacf18cf0___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ac52cbf891b5d5355a5d60493f1deb4a___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0a8cd320e96a285e98ebffb5bb6d8e09___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e97aea8b1b0b0ade5c483c6e903c56b1___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a49c4e48c83d561ca70443dc7c4dc3d0___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v7 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) != 0 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6288d291273792cde85e9051fd01e069___(
                            this,
                            a2,
                            &v7) )
    {
      *((_DWORD *)this + 4) |= 0x1000u;
      return 1;
    }
  }
  return v4;
}
