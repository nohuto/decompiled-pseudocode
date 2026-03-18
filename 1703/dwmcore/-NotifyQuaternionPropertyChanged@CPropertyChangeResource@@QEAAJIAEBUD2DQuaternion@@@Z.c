/*
 * XREFs of ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DQuaternion@@@Z @ 0x18016BAF4
 * Callers:
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18002BD38 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x18002AC24 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyQuaternionPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DQuaternion *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r10
  unsigned int v9; // edx
  _QWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this, 0x14u) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1352LL);
    v7 = *(_QWORD *)(v4 + 48);
    v12 = *v5;
    v8 = *(_QWORD *)(v6 + 56);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 60);
    else
      v9 = 0;
    v11[0] = v9;
    v11[1] = *(unsigned int *)(v4 + 56);
    v3 = CoreUICallSend(v8, v11, 2LL, 7LL, 5, &unk_1801D5442);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x155u);
  }
  return (unsigned int)v3;
}
