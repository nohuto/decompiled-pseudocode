/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DMatrix@@@Z @ 0x180096324
 * Callers:
 *     ?NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z @ 0x1800957F0 (-NotifyCurrentPropertyValues@CComponentTransform3D@@MEAAJI@Z.c)
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180095B90 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180096234 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  signed int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r9
  __int128 v7; // xmm1
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r10
  __int128 v11; // xmm1
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v14; // [rsp+50h] [rbp-48h]
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int128 v16; // [rsp+70h] [rbp-28h]
  __int128 v17; // [rsp+80h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, 0x11u) )
  {
    v7 = v5[1];
    v8 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1288LL);
    v9 = *(_QWORD *)(v4 + 48);
    v14 = *v5;
    v15 = v7;
    v10 = *(_QWORD *)(v8 + 56);
    v11 = v5[3];
    v16 = v5[2];
    v17 = v11;
    if ( v9 )
      v12 = *(unsigned int *)(v9 + 68);
    else
      v12 = 0LL;
    v13[0] = v12;
    v13[1] = *(unsigned int *)(v4 + 56);
    v3 = CoreUICallSend(v10, v13, 2LL, 8LL, 7, &unk_1801F0593);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1AFu);
  }
  return (unsigned int)v3;
}
