/*
 * XREFs of ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744
 * Callers:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x18001F6D8 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180020E94 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 *     ??1CChannelContext@@UEAA@XZ @ 0x180020FBC (--1CChannelContext@@UEAA@XZ.c)
 *     ??1CResourceTable@@UEAA@XZ @ 0x18002D134 (--1CResourceTable@@UEAA@XZ.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18002DA70 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18002DB80 (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18002DCC4 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18002DD44 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x180092EB8 (--1CWindowNode@@MEAA@XZ.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180143A34 (--1CChannel@@AEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

unsigned int __fastcall ReleaseInterface<CConnection>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
