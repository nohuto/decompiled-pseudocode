/*
 * XREFs of ?EmitUpdateCommands@CEffectBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002550
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00025D8 (-EmitSetInputs@CEffectBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_EFFECTBRUSH_SETTEMPLATE__lambda_9477a43e8da264cee6f371a97f9455e6___ @ 0x1C000295C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_EFFECTBRUSH_SETTEMPLATE__lambda_.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_EFFECTBRUSH_SETPROPERTYBAG__lambda_9895c6ebf346605641fcd25f1dfabd39___ @ 0x1C0002D9C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_EFFECTBRUSH_SETPROPERTYBAG__lamb.c)
 */

char __fastcall DirectComposition::CEffectBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CEffectBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  DirectComposition::CEffectBrushMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_EFFECTBRUSH_SETTEMPLATE__lambda_9477a43e8da264cee6f371a97f9455e6___(
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v6 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_EFFECTBRUSH_SETPROPERTYBAG__lambda_9895c6ebf346605641fcd25f1dfabd39___(
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  if ( DirectComposition::CEffectBrushMarshaler::EmitSetInputs(this, a2) )
    return 1;
  return v3;
}
