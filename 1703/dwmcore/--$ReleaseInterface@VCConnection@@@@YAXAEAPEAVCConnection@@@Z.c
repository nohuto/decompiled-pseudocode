/*
 * XREFs of ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x1800B01A4
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_K@Z @ 0x18005C0BC (-OpenChannel@CComposition@@IEAAJIK_K@Z.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x18005C33C (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18005C3B0 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ??_ECChannelContext@@UEAAPEAXI@Z @ 0x18007DFB0 (--_ECChannelContext@@UEAAPEAXI@Z.c)
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800B0138 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180138C30 (--1CChannel@@AEAA@XZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CConnection>(CMILRefCountBase **a1)
{
  CMILRefCountBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILRefCountBase::Release(v2);
    *a1 = 0LL;
  }
  return result;
}
