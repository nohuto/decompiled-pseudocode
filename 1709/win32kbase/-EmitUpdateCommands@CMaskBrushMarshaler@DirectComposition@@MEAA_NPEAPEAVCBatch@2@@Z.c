/*
 * XREFs of ?EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00232B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a72c2aa99a4fc77436a70c4541aa841a___ @ 0x1C0029B78 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a72c2aa99a4fc77436a70c4541aa841.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5f1d9cc34ce1008de9d89563b1ef11d0___ @ 0x1C0029BF0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5f1d9cc34ce1008de9d89563b1ef11d.c)
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  DirectComposition::CMaskBrushMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5f1d9cc34ce1008de9d89563b1ef11d0___(
                             this,
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v6 & 0x40) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a72c2aa99a4fc77436a70c4541aa841a___(
                          this,
                          a2,
                          &v8) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
