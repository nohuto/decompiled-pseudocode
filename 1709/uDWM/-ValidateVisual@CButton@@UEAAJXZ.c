/*
 * XREFs of ?ValidateVisual@CButton@@UEAAJXZ @ 0x1800162C0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180018160 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180015D5C (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180016060 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180016110 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCrossfade@CButton@@AEAAXXZ @ 0x18006D720 (-UpdateCrossfade@CButton@@AEAAXXZ.c)
 *     ?UpdateTransform@CVisual@@AEAAJXZ @ 0x180079978 (-UpdateTransform@CVisual@@AEAAJXZ.c)
 */

__int64 __fastcall CButton::ValidateVisual(CButton *this)
{
  int v1; // eax
  int v3; // edi
  __int64 (__fastcall *v4)(CButton *); // rax
  int updated; // eax
  __int64 (__fastcall *v6)(CButton *); // rax
  int v7; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 20);
  if ( (v1 & 0x10000) != 0 )
  {
    if ( (v1 & 0x8000) == 0 )
      CButton::UpdateCrossfade(this);
    *((_DWORD *)this + 20) &= ~0x10000u;
  }
  if ( (*((_DWORD *)this + 20) & 0x8000) != 0 )
  {
    v3 = CButton::RedrawVisual(this);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB3u);
      return (unsigned int)v3;
    }
    *((_DWORD *)this + 20) &= ~0x8000u;
  }
  v3 = 0;
  if ( (*((_BYTE *)this + 80) & 2) != 0 )
  {
    v4 = *(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 72LL);
    if ( v4 == CButton::UpdateLayout )
      updated = CButton::UpdateLayout(this);
    else
      updated = ((__int64 (__fastcall *)(CButton *, _QWORD))v4)(this, 0LL);
    v3 = updated;
    if ( updated < 0 )
    {
      v13 = 184;
      goto LABEL_28;
    }
    *((_DWORD *)this + 20) &= ~2u;
  }
  if ( (*((_BYTE *)this + 80) & 8) != 0 )
  {
    v6 = *(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 160LL);
    if ( v6 == CButton::UpdateOffset )
      v7 = CButton::UpdateOffset(this);
    else
      v7 = v6(this);
    v3 = v7;
    if ( v7 < 0 )
    {
      v13 = 191;
      goto LABEL_28;
    }
    *((_DWORD *)this + 20) &= ~8u;
  }
  if ( (*((_BYTE *)this + 80) & 0x10) != 0 )
  {
    v10 = CVisual::UpdateTransform(this);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC6u);
      goto LABEL_16;
    }
    *((_DWORD *)this + 20) &= ~0x10u;
  }
  if ( (*((_BYTE *)this + 80) & 0x20) != 0 )
  {
    v11 = (*(__int64 (__fastcall **)(CButton *))(*(_QWORD *)this + 144LL))(this);
    v3 = v11;
    if ( v11 < 0 )
    {
      v13 = 205;
      v9 = v11;
      goto LABEL_30;
    }
    *((_DWORD *)this + 20) &= ~0x20u;
  }
  if ( (*((_BYTE *)this + 80) & 0x40) == 0 )
    goto LABEL_16;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 392LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
          (char *)this + 196);
  v3 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x553u);
  if ( v3 >= 0 )
  {
    *((_DWORD *)this + 20) &= ~0x40u;
    goto LABEL_16;
  }
  v13 = 212;
LABEL_28:
  v9 = v3;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v13);
LABEL_16:
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB7u);
  return (unsigned int)v3;
}
