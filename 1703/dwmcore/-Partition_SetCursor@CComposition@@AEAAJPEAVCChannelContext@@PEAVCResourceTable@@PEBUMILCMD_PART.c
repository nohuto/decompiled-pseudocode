/*
 * XREFs of ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x1800CF198
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800CF090 (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18013FADC (-RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetCursor(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETCURSOR *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x1Fu);
  if ( Resource )
  {
    if ( *((_DWORD *)a4 + 2) )
    {
      v7 = CComposition::AddCursorVisual(this, Resource);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x755u);
    }
    else
    {
      CComposition::RemoveCursorVisual(this, Resource);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x750u);
  }
  return 0LL;
}
