/*
 * XREFs of ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x18012F678
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z @ 0x180034524 (--$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteraction::ProcessSetManipulation(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_SETMANIPULATION *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // edx
  struct CResource *v6; // rbx
  __int64 Resource; // rax
  struct CResource **v9; // rdi
  int v10; // eax

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  v6 = 0LL;
  if ( v5 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x6Cu);
    if ( Resource )
      v6 = (struct CResource *)(Resource - 8);
  }
  v9 = this + 35;
  if ( v6 != this[35] )
  {
    if ( *v9 )
      CResource::UnRegisterNotifier<CHoverPointerSource *>((CResource *)(this + 1), this + 35);
    v10 = CResource::RegisterNotifier(
            (CResource *)(this + 1),
            (struct CResource *)(((unsigned __int64)v6 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64)));
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x156u);
    else
      *v9 = v6;
  }
  return v4;
}
