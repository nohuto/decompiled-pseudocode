/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003ECA0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x180024928 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x18003FB54 (--0CDesktopManager@@AEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::UpdateWindowShadows(CDesktopManager *this)
{
  if ( *((_BYTE *)this + 27) )
    *((_BYTE *)this + 17) = 0;
  else
    SystemParametersInfoW(0x1024u, 0, (char *)this + 17, 0);
}
