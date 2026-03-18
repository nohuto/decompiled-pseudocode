/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x180176060
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x1800746B0 (--$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180128088 (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180175E30 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct MILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // edi
  struct CVisual *Resource; // rbp
  CComposition *v7; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  signed int CVI; // eax
  int v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x86u);
  ReleaseInterface<CCachedVisualImage>((__int64 *)this + 9);
  if ( Resource )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        v12 = 0x7FFFFFFF;
        v13 = 0x7FFFFFFF;
        if ( (int)CComposition::GetPrimaryDisplayDimensions(v7, &v12, &v13) >= 0 )
        {
          v8 = v13;
          if ( v12 > v13 )
            v8 = v12;
          v9 = v8;
          if ( *((_DWORD *)a3 + 3) < v8 )
            v9 = *((_DWORD *)a3 + 3);
          if ( *((_DWORD *)a3 + 4) < v8 )
            v8 = *((_DWORD *)a3 + 4);
          *((_DWORD *)this + 15) = v8;
          *((_DWORD *)this + 14) = v9;
          *((_BYTE *)this + 64) = *((_DWORD *)a3 + 5) != 0;
          CVI = CSnapshot::CreateCVI(this, Resource);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, CVI, 0xAFu);
        }
      }
    }
  }
  return v5;
}
