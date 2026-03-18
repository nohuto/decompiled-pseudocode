/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1801A3F10
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x1800C96E0 (--$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x18014A31C (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801A3CF0 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
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
  unsigned int v10; // edx
  int CVI; // eax
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x97u);
  ReleaseInterface<CCachedVisualImage>((__int64 *)this + 9);
  if ( Resource )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        v13 = 0x7FFFFFFF;
        v14 = 0x7FFFFFFF;
        if ( (int)CComposition::GetPrimaryDisplayDimensions(v7, &v13, &v14) >= 0 )
        {
          v8 = *((_DWORD *)a3 + 4);
          v9 = *((_DWORD *)a3 + 3);
          v10 = v14;
          if ( v13 > v14 )
            v10 = v13;
          if ( v9 >= v10 )
            v9 = v10;
          *((_DWORD *)this + 14) = v9;
          if ( v8 >= v10 )
            v8 = v10;
          *((_DWORD *)this + 15) = v8;
          *((_BYTE *)this + 64) = *((_DWORD *)a3 + 5) != 0;
          CVI = CSnapshot::CreateCVI(this, Resource);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CVI, 0xAFu);
        }
      }
    }
  }
  return v5;
}
