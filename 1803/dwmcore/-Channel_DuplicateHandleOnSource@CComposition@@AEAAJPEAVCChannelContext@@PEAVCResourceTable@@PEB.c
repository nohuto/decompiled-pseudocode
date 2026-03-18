/*
 * XREFs of ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x18002DD44
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ?DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z @ 0x18002D304 (-DuplicateHandle@CResourceTable@@QEAAJPEAVCChannelContext@@I0I@Z.c)
 *     ?GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z @ 0x18002DA28 (-GetAttachedChannel@CComposition@@QEAAJIPEAPEAVCChannelContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::Channel_DuplicateHandleOnSource(
        CComposition *this,
        CResourceTable **a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE *a4)
{
  int AttachedChannel; // eax
  unsigned int v8; // ebx
  int v9; // eax
  struct CChannelContext *v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  AttachedChannel = CComposition::GetAttachedChannel(this, *((_DWORD *)a4 + 2), &v11);
  v8 = AttachedChannel;
  if ( AttachedChannel < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AttachedChannel, 0x82Bu);
  }
  else
  {
    v9 = CResourceTable::DuplicateHandle(a3, a2, *((_DWORD *)a4 + 1), v11, *((_DWORD *)a4 + 3));
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x833u);
  }
  ReleaseInterface<CConnection>(&v11);
  return v8;
}
