/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x18002AEE0
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180039200 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x18002BCD4 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2DMatrix *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  _OWORD *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  int v8; // eax
  __int128 v10; // xmm1
  __int64 v11; // rcx
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v16[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-48h] BYREF

  v3 = 0;
  if ( CNotificationResource::ShouldNotify(this) )
  {
    v8 = *(_DWORD *)(v4 + 64);
    if ( _bittest(&v8, v7) )
    {
      v10 = v5[1];
      v11 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1312LL);
      v12 = *(_QWORD *)(v6 + 48);
      v17[0] = *v5;
      v17[1] = v10;
      v13 = v5[3];
      v17[2] = v5[2];
      v17[3] = v13;
      if ( v12 )
        v14 = *(unsigned int *)(v12 + 68);
      else
        v14 = 0LL;
      v15 = *(_QWORD *)(v11 + 56);
      v16[0] = v14;
      v16[1] = *(unsigned int *)(v6 + 56);
      v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, unsigned int, _OWORD *))CoreUICallSend)(
             v15,
             v16,
             2LL,
             12LL,
             7,
             &unk_180239D08,
             v7,
             v17);
      if ( v3 == -2018375675 )
        v3 = 0;
      if ( v3 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1FDu);
    }
  }
  return (unsigned int)v3;
}
