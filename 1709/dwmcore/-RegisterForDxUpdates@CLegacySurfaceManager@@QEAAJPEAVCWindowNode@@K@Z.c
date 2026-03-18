/*
 * XREFs of ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x18013B62C
 * Callers:
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z @ 0x18013B4DC (-ProcessUnclaimedVistBltTokensForNode@CLegacySurfaceManager@@IEAAJPEAVCWindowNode@@K@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::RegisterForDxUpdates(
        CLegacySurfaceManager *this,
        struct CWindowNode *a2,
        int a3)
{
  DWORD v3; // ebx
  signed int v7; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowNode *v11; // [rsp+38h] [rbp-10h]

  v3 = *((_DWORD *)this + 24);
  v10 = a3;
  v11 = a2;
  if ( (v3 & 0x80000000) != 0 )
  {
    v9 = 565;
    goto LABEL_7;
  }
  if ( !RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), &v10, 0x10u, 0LL) )
  {
    v3 = -2147024882;
    v9 = 571;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219A14, 1u, v3, v9);
    return v3;
  }
  v7 = CLegacySurfaceManager::ProcessUnclaimedVistBltTokensForNode(this, a2, a3);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180219A14, 1u, v7, 0x23Fu);
  return v3;
}
