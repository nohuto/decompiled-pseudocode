/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18002CC84
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x1800B7818 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800B9A98 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800BB780 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnimation::ProcessSetPrimitives(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_SETPRIMITIVES *a3)
{
  struct CSharedSection *Resource; // rax
  int v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  struct CSharedSectionAnimationPrimitiveBuffer *v11; // [rsp+50h] [rbp+18h] BYREF

  Resource = (struct CSharedSection *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 118LL);
  v6 = CSharedSectionAnimationPrimitiveBuffer::Create(Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x160u);
  }
  else
  {
    ReleaseInterface<CDisplay>((char *)this + 120);
    v8 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 15) = v11;
    if ( !v8 || *(_QWORD *)(v8 + 88) )
    {
      v9 = CBaseAnimation::RegisterAnimateResource(this);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x16Au);
    }
  }
  return v7;
}
