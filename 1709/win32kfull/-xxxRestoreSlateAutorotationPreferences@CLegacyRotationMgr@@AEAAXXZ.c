/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01ACB60
 * Callers:
 *     ?xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042AB8 (-xxxSetAutoRotationConvertible@CLegacyRotationMgr@@AEAAXH@Z.c)
 *     ?xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z @ 0x1C0042B8C (-xxxSetAutoRotationDocked@CLegacyRotationMgr@@AEAAXH@Z.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01ACF74 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( dword_1C03267F8 != dword_1C03267C8 )
  {
    dword_1C03267E8 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_1C03267F8);
    PostShellHookMessagesEx(0x32u, dword_1C03267C8, 0LL);
  }
}
