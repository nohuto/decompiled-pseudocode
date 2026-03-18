/*
 * XREFs of ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01CCEC8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01D3388 (-BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagR.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0007634 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0 (-GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0061C70 (_GetTopLevelWindow.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 */

__int64 __fastcall CoreWindowProp::IsCompositeAppOrSelfDisabled(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 v2; // rax
  unsigned int v3; // edi
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct tagWND *TopLevelHost; // rax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  CompositionInputWindowUIOwner = a1;
  if ( (*((_BYTE *)a1 + 71) & 8) != 0 )
    return 1LL;
  v2 = *((_QWORD *)a1 + 23);
  v3 = 1;
  if ( v2 && CInputQueueProp::s_atom )
  {
    v4 = *(_DWORD *)(v2 + 4);
    v5 = v2 + 8;
    if ( v4 )
    {
      while ( *(_WORD *)(v5 + 8) != CInputQueueProp::s_atom || (*(_BYTE *)(v5 + 10) & 1) == 0 )
      {
        v5 += 16LL;
        if ( !--v4 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v5 = 0LL;
    }
    if ( v5 && *(_QWORD *)v5 )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
  }
  if ( !CompositionInputWindowUIOwner )
    return 0;
  do
  {
    v6 = *((_QWORD *)CompositionInputWindowUIOwner + 13);
    if ( v6 )
    {
      v7 = *((_QWORD *)CompositionInputWindowUIOwner + 3);
      v8 = 0LL;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v7 + 8);
        if ( v9 )
          v8 = *(_QWORD *)(v9 + 16);
      }
      if ( v6 == v8 )
        break;
    }
    CompositionInputWindowUIOwner = (struct tagWND *)*((_QWORD *)CompositionInputWindowUIOwner + 13);
  }
  while ( v6 );
  if ( !CompositionInputWindowUIOwner )
    return 0;
  if ( (*((_BYTE *)CompositionInputWindowUIOwner + 307) & 2) != 0
    && (unsigned int)CWindowProp::GetProp<CoreWindowProp>((__int64)CompositionInputWindowUIOwner, &v12)
    && *(_DWORD *)(v12 + 20) )
  {
    TopLevelHost = CoreWindowProp::GetTopLevelHost(CompositionInputWindowUIOwner);
    CompositionInputWindowUIOwner = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHost);
  }
  if ( !CompositionInputWindowUIOwner || (*((_BYTE *)CompositionInputWindowUIOwner + 71) & 8) == 0 )
    return 0;
  return v3;
}
