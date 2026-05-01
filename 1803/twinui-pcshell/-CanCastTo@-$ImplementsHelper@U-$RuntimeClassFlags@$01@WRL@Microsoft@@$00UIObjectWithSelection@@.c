/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIObjectWithSelection@@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802244CC
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteCommandBase@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180223CA0 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLExecuteComm.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IObjectWithSelection,CWRLObjectWithSite>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  BOOL IsEqualGUID; // eax
  _QWORD *v3; // r8
  _DWORD *v4; // r9
  __int64 v5; // r10
  unsigned int v6; // edx

  IsEqualGUID = InlineIsEqualGUID(a2, &GUID_1c9cd5bb_98e9_4491_a60f_31aacc72b83c);
  v6 = 0;
  if ( IsEqualGUID )
  {
    *v3 = v5;
    return 0LL;
  }
  else
  {
    if ( *v4 == -62389853
      && v4[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
      && v4[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
      && v4[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
    {
      *v3 = v5 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v6;
  }
}
