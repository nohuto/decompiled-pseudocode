/*
 * XREFs of ?ProcessUpdateEdgyExperienceSource@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE@@@Z @ 0x180199714
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z @ 0x18019AC98 (-_UpdateEdgyExperienceInput@CManipulation@@AEAAJW4Enum@EdgyCompositionUpdateType@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateEdgyExperienceSource(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATEEDGYEXPERIENCESOURCE *a3)
{
  _OWORD *v3; // rbx
  unsigned int v6; // edx
  unsigned int v8; // edi
  __int64 Resource; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  int updated; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (_OWORD *)((char *)a3 + 8);
  v6 = *((_DWORD *)a3 + 2);
  v8 = 0;
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x52u);
    v10 = Resource - 8;
    if ( !Resource )
      v10 = 0LL;
    if ( !v10 )
      ModuleFailFastForHRESULT(-2147467260, retaddr);
    if ( !*((_DWORD *)a3 + 3) || !*((_WORD *)a3 + 8) )
      ModuleFailFastForHRESULT(-2147024809, retaddr);
    v11 = 4LL;
    v12 = (_OWORD *)((char *)this + 572);
    do
    {
      *v12 = *v3;
      v12[1] = v3[1];
      v12[2] = v3[2];
      v12[3] = v3[3];
      v12[4] = v3[4];
      v12[5] = v3[5];
      v12[6] = v3[6];
      v12 += 8;
      v13 = v3[7];
      v3 += 8;
      *(v12 - 1) = v13;
      --v11;
    }
    while ( v11 );
    *(_QWORD *)v12 = *(_QWORD *)v3;
    *((_DWORD *)this + 273) = *(_DWORD *)(v10 + 1696);
    *((_BYTE *)this + 568) = 1;
    updated = CManipulation::_UpdateEdgyExperienceInput(this, 2LL);
    v8 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x357u);
  }
  return v8;
}
