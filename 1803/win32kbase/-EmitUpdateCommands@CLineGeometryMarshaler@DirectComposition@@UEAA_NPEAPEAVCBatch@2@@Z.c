/*
 * XREFs of ?EmitUpdateCommands@CLineGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01591F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FB10 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_60c1486fcb56eb8b066517e299f2505f___ @ 0x1C0159104 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_60c1486fcb56eb8b066517e299f2505.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_696770d4facb239df741336ac71bb90e___ @ 0x1C0159174 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_696770d4facb239df741336ac71bb90.c)
 */

char __fastcall DirectComposition::CLineGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CLineGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CLineGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_60c1486fcb56eb8b066517e299f2505f___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_696770d4facb239df741336ac71bb90e___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
