/*
 * XREFs of ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014D6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002DEE0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_40b4d217230a3331219f89614356d926___ @ 0x1C014D3F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_40b4d217230a3331219f89614356d92.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a19___ @ 0x1C014D464 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b78bbd3c5dadf93db6665eaa866c4a1b___ @ 0x1C014D4E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b78bbd3c5dadf93db6665eaa866c4a1.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e162d2af44a3127182a685032eefc1ae___ @ 0x1C014D54C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e162d2af44a3127182a685032eefc1a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f34e933ade9af20d13d6d665b7fd5e7f___ @ 0x1C014D5B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f34e933ade9af20d13d6d665b7fd5e7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_9a5b1c2456fdafdcba20fe5d9992d3e6___ @ 0x1C014D624 (DirectComposition--CResourceMarshaler--EmitUpdateCommandToClearFlag__lambda_9a5b1c2456fdafdcba20.c)
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CBatch **a2,
        __int64 a3)
{
  int v3; // eax
  int v6; // eax
  bool v7; // zf
  char updated; // di
  struct DirectComposition::CResourceMarshaler *v9; // rdx
  DirectComposition::CApplicationChannel *v10; // rsi
  DirectComposition::CVisualSurfaceMarshaler *v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 4);
  v12 = this;
  if ( (v3 & 0x20) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6c4d9031ee459ab96e0a644511042a19___(
            (__int64)this,
            a2,
            (__int64)&v12) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v12 = this;
  if ( (v6 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f34e933ade9af20d13d6d665b7fd5e7f___(
            (__int64)this,
            a2,
            (__int64)&v12) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v7 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v12 = this;
  if ( !v7 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_40b4d217230a3331219f89614356d926___(
            (__int64)this,
            a2,
            (__int64)&v12) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v7 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v12 = this;
  if ( !v7 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e162d2af44a3127182a685032eefc1ae___(
            (__int64)this,
            a2,
            (__int64)&v12) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  v7 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v12 = this;
  if ( !v7 )
  {
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b78bbd3c5dadf93db6665eaa866c4a1b___(
           (__int64)this,
           a2,
           (__int64)&v12) )
    {
      *((_DWORD *)this + 4) &= ~0x400u;
      goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  updated = 1;
  if ( *((_BYTE *)this + 80) )
  {
    updated = DirectComposition::CResourceMarshaler::EmitUpdateCommandToClearFlag__lambda_9a5b1c2456fdafdcba20fe5d9992d3e6___(
                (__int64)this,
                a2,
                a3);
    if ( updated )
    {
      v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 5);
      v10 = (DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
      if ( v9 )
      {
        DirectComposition::CApplicationChannel::ReleaseResource(v10, v9);
        *((_QWORD *)this + 5) = 0LL;
      }
      *((_BYTE *)v10 + 240) |= 0x10u;
    }
  }
  return updated;
}
