/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800964CC
 * Callers:
 *     ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800953C0 (-SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z @ 0x180159E90 (-NotifyCurrentPropertyValues@CComponentTransform2D@@MEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180096234 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  signed int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r9
  __int16 v6; // r11
  __int64 v8; // xmm1_8
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned int v12; // edx
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h]
  __int64 v15; // [rsp+60h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, 6u) )
  {
    v8 = *((_QWORD *)v5 + 2);
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1288LL);
    v10 = *(_QWORD *)(v4 + 48);
    v14 = *v5;
    v15 = v8;
    v11 = *(_QWORD *)(v9 + 56);
    if ( v10 )
      v12 = *(_DWORD *)(v10 + 68);
    else
      v12 = 0;
    v13[0] = v12;
    v13[1] = *(unsigned int *)(v4 + 56);
    v3 = CoreUICallSend(v11, v13, 2LL, 8LL, v6, &unk_1801F058D);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x182u);
  }
  return (unsigned int)v3;
}
