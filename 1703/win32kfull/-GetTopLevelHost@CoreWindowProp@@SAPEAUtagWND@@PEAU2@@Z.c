/*
 * XREFs of ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00B46D4
 * Callers:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0005660 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     IsWindowShellCloaked @ 0x1C0017F98 (IsWindowShellCloaked.c)
 *     xxxSendNCActivateMessage @ 0x1C0019BA8 (xxxSendNCActivateMessage.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0063478 (xxxSetWindowPos.c)
 *     PostIAMShellHookMessageEx @ 0x1C00B3840 (PostIAMShellHookMessageEx.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00B4684 (IsWindowEffectivelyCloaked.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C4A14 (-RequestModernAppClose@@YAHXZ.c)
 *     EditionGetTopLevelWindowWithComponentUI @ 0x1C01D2B30 (EditionGetTopLevelWindowWithComponentUI.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01F1F30 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C0004F34 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHost(struct tagWND *a1)
{
  struct tagWND *v1; // rbx
  struct tagWND *v2; // rcx
  struct tagWND *Host; // rax

  v1 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    v1 = v2;
    do
    {
      Host = CoreWindowProp::GetHost(v1);
      v1 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
  }
  return v1;
}
