/*
 * XREFs of ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x1800BD568
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z @ 0x1800BB950 (-Create@CSharedSectionAnimationPrimitiveBuffer@@SAJPEAVCSharedSection@@IIPEAPEAV1@@Z.c)
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x1800BBB38 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800BD7E0 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
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

  Resource = (struct CSharedSection *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x64u);
  v6 = CSharedSectionAnimationPrimitiveBuffer::Create(Resource, *((_DWORD *)a3 + 3), *((_DWORD *)a3 + 4), &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x15Eu);
  }
  else
  {
    ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 120);
    v8 = *((_QWORD *)this + 18);
    *((_QWORD *)this + 15) = v11;
    if ( !v8 || *(_QWORD *)(v8 + 88) )
    {
      v9 = CBaseAnimation::RegisterAnimateResource((CComposition **)this);
      v7 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x168u);
    }
  }
  return v7;
}
