/*
 * XREFs of ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003AEE0
 * Callers:
 *     ?QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039E20 (-QueryInterface@CHwDisplayRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A0590 (-HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::HrFindInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( !a3 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE4u);
    return v3;
  }
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data4;
  if ( !v4 )
  {
    v5 = (char *)(((unsigned __int64)this + 48) & -(__int64)(this != (CHwDisplayRenderTarget *)128));
LABEL_14:
    *a3 = v5;
    return v3;
  }
  v5 = (char *)this - 128;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
  if ( !v6 )
    goto LABEL_14;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( !v7 )
    goto LABEL_14;
  return (unsigned int)-2147467262;
}
