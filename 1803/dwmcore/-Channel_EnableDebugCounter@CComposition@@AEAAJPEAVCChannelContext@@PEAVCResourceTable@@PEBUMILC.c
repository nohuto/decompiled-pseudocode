/*
 * XREFs of ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x180149FAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18014ABE4 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CComposition::Channel_EnableDebugCounter(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_ENABLEDEBUGCOUNTER *a4)
{
  char v4; // al

  v4 = *((_DWORD *)a4 + 1) != 0;
  if ( *((_BYTE *)a2 + 64) != v4 )
  {
    *((_BYTE *)a2 + 64) = v4;
    CComposition::UpdateDebugCounter(this, *((_DWORD *)a4 + 1) != 0);
  }
  return 0LL;
}
