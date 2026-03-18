/*
 * XREFs of ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x1801709EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x180171DFC (-_UpdateChainingEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 *     ?_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z @ 0x180171F28 (-_UpdateInertiaEnabled@CManipulation@@AEAA_NW4ScrollAxis@@_N@Z.c)
 */

__int64 __fastcall CManipulation::ProcessUpdateSettings(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_UPDATESETTINGS *a3)
{
  const struct MILCMD_MANIPULATION_UPDATESETTINGS *v3; // rsi
  int v4; // edi
  __int64 v6; // r8
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

  v3 = a3;
  v4 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 106) != v4 )
    *((_DWORD *)this + 106) = v4;
  LOBYTE(a3) = *((_DWORD *)a3 + 6) != 0;
  CManipulation::_UpdateChainingEnabled(this, 0LL, a3);
  LOBYTE(v6) = *((_DWORD *)v3 + 7) != 0;
  CManipulation::_UpdateChainingEnabled(this, 1LL, v6);
  LOBYTE(v7) = *((_DWORD *)v3 + 8) != 0;
  CManipulation::_UpdateChainingEnabled(v8, 2LL, v7);
  LOBYTE(v9) = *((_DWORD *)v3 + 3) != 0;
  CManipulation::_UpdateInertiaEnabled(v10, 0LL, v9);
  LOBYTE(v11) = *((_DWORD *)v3 + 4) != 0;
  CManipulation::_UpdateInertiaEnabled(v12, 1LL, v11);
  LOBYTE(v13) = *((_DWORD *)v3 + 5) != 0;
  updated = CManipulation::_UpdateInertiaEnabled(v14, 2LL, v13);
  if ( v17 | updated )
    (*(void (__fastcall **)(__int64, __int64, CManipulation *))(*(_QWORD *)this + 64LL))(v16, 10LL, this);
  return 0LL;
}
