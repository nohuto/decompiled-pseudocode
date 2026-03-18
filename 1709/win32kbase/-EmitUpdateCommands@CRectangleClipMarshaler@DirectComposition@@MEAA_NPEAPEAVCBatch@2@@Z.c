/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0056AF0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fc2c591d7b2f17b965914826062e59a___ @ 0x1C00292FC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_3fc2c591d7b2f17b965914826062e59.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0dd7f7d068677ed27ad82c56e5b03768___ @ 0x1C0029368 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_0dd7f7d068677ed27ad82c56e5b0376.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1d11e2125e7b7da2980dd460679c4d61___ @ 0x1C00293D4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1d11e2125e7b7da2980dd460679c4d6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6764ca6dc0dfaf0c49b6b1c681e2c785___ @ 0x1C0029440 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6764ca6dc0dfaf0c49b6b1c681e2c78.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58___ @ 0x1C00294AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6f9061fc4e4fd5f8b9e5c5ac49766c5.c)
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005A960 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  DirectComposition::CRectangleClipMarshaler *v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, a2) )
  {
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x200) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6764ca6dc0dfaf0c49b6b1c681e2c785___(
              (__int64)this,
              a2,
              (__int64)&v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x400) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1d11e2125e7b7da2980dd460679c4d61___(
              (__int64)this,
              a2,
              (__int64)&v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_0dd7f7d068677ed27ad82c56e5b03768___(
              (__int64)this,
              a2,
              (__int64)&v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x1000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_3fc2c591d7b2f17b965914826062e59a___(
              (__int64)this,
              a2,
              (__int64)&v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
    }
    v6 = this;
    if ( (*((_DWORD *)this + 4) & 0x100) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6f9061fc4e4fd5f8b9e5c5ac49766c58___(
              (__int64)this,
              a2,
              (__int64)&v6) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
    }
    return 1;
  }
  return v4;
}
