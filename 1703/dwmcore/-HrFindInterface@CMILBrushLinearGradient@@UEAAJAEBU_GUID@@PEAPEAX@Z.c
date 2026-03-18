/*
 * XREFs of ?HrFindInterface@CMILBrushLinearGradient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B28B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushLinearGradient::HrFindInterface(
        CMILBrushLinearGradient *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax

  v3 = 0;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_42d076e2_de9a_47cc_a5e7_f07c7f260685.Data4;
    if ( v5 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_8ebb46a9_fa49_49b3_ba37_01417203913e.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_8ebb46a9_fa49_49b3_ba37_01417203913e.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_8ebb46a9_fa49_49b3_ba37_01417203913e.Data4;
      if ( v7 )
        return (unsigned int)-2147467262;
      v6 = (unsigned __int64)this + 224;
    }
    else
    {
      v6 = (unsigned __int64)this + 112;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x83u);
  }
  return v3;
}
