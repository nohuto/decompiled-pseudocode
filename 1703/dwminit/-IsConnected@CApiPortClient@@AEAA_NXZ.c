/*
 * XREFs of ?IsConnected@CApiPortClient@@AEAA_NXZ @ 0x1800048F4
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004658 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004790 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000491C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 *     ?ResetConnection@CApiPortClient@@QEAAXXZ @ 0x180004B18 (-ResetConnection@CApiPortClient@@QEAAXXZ.c)
 * Callees:
 *     ?IsConnected@CPortClient@@QEAA_NXZ @ 0x180004D54 (-IsConnected@CPortClient@@QEAA_NXZ.c)
 */

bool __fastcall CApiPortClient::IsConnected(CApiPortClient *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(&hObject + 1) )
    return CPortClient::IsConnected((CPortClient *)*(&hObject + 1));
  return v1;
}
