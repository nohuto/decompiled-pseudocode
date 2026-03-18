/*
 * XREFs of ?GetTopLevelHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C005D1E0
 * Callers:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0008F1C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSendNCActivateMessage @ 0x1C0054FF8 (xxxSendNCActivateMessage.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C0066BA4 (xxxSetWindowPos.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     IsWindowShellCloaked @ 0x1C00C8B24 (IsWindowShellCloaked.c)
 *     PostIAMShellHookMessageEx @ 0x1C00C90D0 (PostIAMShellHookMessageEx.c)
 *     IsWindowEffectivelyCloaked @ 0x1C00CB5D4 (IsWindowEffectivelyCloaked.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01C6D78 (-RequestModernAppClose@@YAHXZ.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
 *     EditionGetTopLevelWindowWithComponentUI @ 0x1C01D2E20 (EditionGetTopLevelWindowWithComponentUI.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01D9940 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C00090EC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C005EBDC (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetTopLevelHost(struct tagWND *a1)
{
  struct tagWND *v2; // rbx
  struct tagWND *Host; // rax

  v2 = 0LL;
  if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
  {
    v2 = a1;
    do
    {
      Host = CoreWindowProp::GetHost(v2);
      v2 = Host;
    }
    while ( Host && (unsigned int)CoreWindowProp::IsComponent(Host) );
  }
  return v2;
}
