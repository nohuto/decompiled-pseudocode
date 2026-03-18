/*
 * XREFs of ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1800A6980
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18002B220 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800518C0 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRectangle(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // rdx
  const struct _D3DCOLORVALUE *v8; // r8
  __int64 (__fastcall *v9)(CPropertyChangeResource *, const struct AnimationHelper::AnimatedProperty *, const struct _D3DCOLORVALUE *); // rax
  CPropertyChangeResource *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // eax

  if ( *((_DWORD *)a3 + 11) )
  {
    v14 = CResource::SetPropertyImpl(
            this,
            (const struct AnimationHelper::AnimatedProperty *)&CRectangleGeometry::sc_CornerRadius,
            (struct _D3DCOLORVALUE *)((char *)a3 + 8));
    v12 = v14;
    if ( v14 >= 0 )
    {
LABEL_7:
      *((_BYTE *)this + 184) = *((_DWORD *)a3 + 11) != 0;
      *((_BYTE *)this + 128) = *((_DWORD *)a3 + 10) != 0;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x117u);
    }
  }
  else
  {
    v5 = 0;
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(__int64 *)((char *)&off_18022E660 + v6);
      v8 = (const struct _D3DCOLORVALUE *)((char *)a3 + *(_QWORD *)((char *)&unk_1802A5280 + v6));
      v9 = *(__int64 (__fastcall **)(CPropertyChangeResource *, const struct AnimationHelper::AnimatedProperty *, const struct _D3DCOLORVALUE *))(v7 + 24);
      v10 = (CRectangleGeometry *)((char *)this + *(int *)(v7 + 32));
      v11 = v9 == CPropertyChangeResource::SetAnimatedProperty
          ? CPropertyChangeResource::SetAnimatedProperty(v10, (const struct AnimationHelper::AnimatedProperty *)v7, v8)
          : v9(v10, (const struct AnimationHelper::AnimatedProperty *)v7, v8);
      v12 = v11;
      if ( v11 < 0 )
        break;
      ++v5;
      v6 += 8LL;
      if ( v5 >= 8 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x122u);
  }
  return v12;
}
