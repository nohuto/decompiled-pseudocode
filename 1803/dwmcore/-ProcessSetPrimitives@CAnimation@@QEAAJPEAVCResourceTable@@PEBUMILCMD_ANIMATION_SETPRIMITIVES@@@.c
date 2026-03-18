/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800405C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x180024F60 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800C2004 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z @ 0x1800C66A8 (--$ReleaseInterface@VCAnimationPrimitiveBuffer@@@@YAXAEAPEAVCAnimationPrimitiveBuffer@@@Z.c)
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

  Resource = (struct CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x83u);
  v6 = CSharedSectionAnimationPrimitiveBuffer::Create(Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x160u);
  }
  else
  {
    ReleaseInterface<CAnimationPrimitiveBuffer>((char *)this + 120);
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
