/*
 * XREFs of ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001A4F8
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180039340 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18001A4CC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  int v6; // r11d
  __int64 v8; // xmm1_8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // edx
  _QWORD v13[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v14; // [rsp+50h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v8 = *((_QWORD *)v5 + 2);
    v9 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1312LL);
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
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int16, void *, int, __int128 *))CoreUICallSend)(
           v11,
           v13,
           2LL,
           12LL,
           6,
           &unk_180239D02,
           v6,
           &v14);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x1D0u);
  }
  return (unsigned int)v3;
}
