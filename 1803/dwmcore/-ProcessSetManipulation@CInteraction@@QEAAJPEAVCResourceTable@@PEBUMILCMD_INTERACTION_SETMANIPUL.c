/*
 * XREFs of ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x180192468
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteraction::ProcessSetManipulation(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_SETMANIPULATION *a3)
{
  __int64 Resource; // rbx
  unsigned int v5; // edx
  __int64 v7; // rcx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = CResourceTable::GetResource((__int64)a2, v5, 0x5Cu);
  v7 = *((_QWORD *)this + 33);
  if ( Resource != v7 )
  {
    if ( Resource )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)Resource + 8LL))(Resource);
      v7 = *((_QWORD *)this + 33);
    }
    *((_QWORD *)this + 33) = Resource;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
