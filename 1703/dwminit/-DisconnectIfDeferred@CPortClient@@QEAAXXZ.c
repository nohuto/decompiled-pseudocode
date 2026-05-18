/*
 * XREFs of ?DisconnectIfDeferred@CPortClient@@QEAAXXZ @ 0x180004D3C
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180004658 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180004790 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?Disconnect@CPortClient@@QEAAXXZ @ 0x180004D08 (-Disconnect@CPortClient@@QEAAXXZ.c)
 */

void __fastcall CPortClient::DisconnectIfDeferred(CPortClient *this)
{
  if ( *((_DWORD *)this + 10) )
    CPortClient::Disconnect(this);
}
