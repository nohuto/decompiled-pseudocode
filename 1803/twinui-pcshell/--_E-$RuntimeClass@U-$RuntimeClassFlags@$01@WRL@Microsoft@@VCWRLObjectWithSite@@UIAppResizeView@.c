/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@UIAppResizeView@@UITabletModeInputCallback@@UIApplicationViewChangeListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18026AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CWRLObjectWithSite@@QEAA@XZ @ 0x1801134D4 (--1CWRLObjectWithSite@@QEAA@XZ.c)
 */

CWinRTApplicationView **__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IAppResizeView,ITabletModeInputCallback,IApplicationViewChangeListener>::`vector deleting destructor'(
        CWinRTApplicationView **Block,
        char a2)
{
  *((_DWORD *)Block + 13) = -1073741823;
  CWRLObjectWithSite::~CWRLObjectWithSite(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
