/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003B6A0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180016C9C (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x18003C74C (--0CDesktopManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::UpdateWindowShadows(CDesktopManager *this)
{
  if ( *((_BYTE *)this + 26) )
    *((_BYTE *)this + 16) = 0;
  else
    SystemParametersInfoW(0x1024u, 0, (char *)this + 16, 0);
}
