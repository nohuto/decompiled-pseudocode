/*
 * XREFs of ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x1801A240C
 * Callers:
 *     ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002AFE4 (-NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z @ 0x18001A4CC (-ShouldNotify@CPropertyChangeResource@@AEBA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyColorPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  __int128 *v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edx
  _QWORD v11[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-18h]

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 1312LL);
    v7 = *(_QWORD *)(v4 + 48);
    v12 = *v5;
    v8 = *(_QWORD *)(v6 + 56);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 68);
    else
      v9 = 0;
    v11[0] = v9;
    v11[1] = *(unsigned int *)(v4 + 56);
    v3 = CoreUICallSend(v8, v11, 2LL, 12LL, 4, &unk_180239CF6);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x176u);
  }
  return (unsigned int)v3;
}
