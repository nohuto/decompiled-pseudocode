/*
 * XREFs of ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x18012F9C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x180169350 (-_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 *     ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x18016937C (-_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATESETTINGS *a3)
{
  int v3; // eax
  const struct MILCMD_MANIPULATION_UPDATESETTINGS *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int8 updated; // al
  __int64 v16; // rcx
  unsigned __int8 v17; // r11

  v3 = *((_DWORD *)a3 + 2);
  v4 = a3;
  if ( *((_DWORD *)this + 104) != v3 )
    *((_DWORD *)this + 104) = v3;
  LOBYTE(a3) = *((_DWORD *)a3 + 6) != 0;
  CManipulation::_UpdateChainingEnabled(this, 0LL, a3);
  LOBYTE(v5) = *((_DWORD *)v4 + 7) != 0;
  CManipulation::_UpdateChainingEnabled(v6, 1LL, v5);
  LOBYTE(v7) = *((_DWORD *)v4 + 8) != 0;
  CManipulation::_UpdateChainingEnabled(v8, 2LL, v7);
  LOBYTE(v9) = *((_DWORD *)v4 + 3) != 0;
  CManipulation::_UpdateInertiaEnabled(v10, 0LL, v9);
  LOBYTE(v11) = *((_DWORD *)v4 + 4) != 0;
  CManipulation::_UpdateInertiaEnabled(v12, 1LL, v11);
  LOBYTE(v13) = *((_DWORD *)v4 + 5) != 0;
  updated = CManipulation::_UpdateInertiaEnabled(v14, 2LL, v13);
  if ( v17 | updated )
    CResource::NotifyOnChanged((_DWORD *)(v16 + 8), 10LL, v16 + 8);
  return 0LL;
}
