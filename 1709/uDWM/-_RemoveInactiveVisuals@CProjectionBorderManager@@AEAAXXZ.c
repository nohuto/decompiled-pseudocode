/*
 * XREFs of ?_RemoveInactiveVisuals@CProjectionBorderManager@@AEAAXXZ @ 0x180074A64
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x180074420 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x18000A61C (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800364F4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x180074B3C (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveInactiveVisuals(CProjectionBorderManager *this)
{
  CProjectionBorderManager *v1; // rsi
  int v2; // ebx
  __int64 v3; // rdi
  const struct _TlgProvider_t *v4; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v1 = this;
  LOBYTE(this) = 0;
  v2 = *((_DWORD *)v1 + 106) - 1;
  if ( v2 >= 0 )
  {
    v3 = 56LL * v2;
    do
    {
      if ( !*(_BYTE *)(*((_QWORD *)v1 + 50) + v3 + 48) )
      {
        CProjectionBorderManager::_RemoveVisualByIndex(v1, v2);
        LOBYTE(this) = 1;
      }
      v3 -= 56LL;
      --v2;
    }
    while ( v2 >= 0 );
    if ( (_BYTE)this )
    {
      v4 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<WindowFrameLogging>::get(
                                                        (__int64)this,
                                                        (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)
                                          + 1);
      if ( *(_DWORD *)v4 > 5u
        && (*((_QWORD *)v4 + 2) & 0x200000000000LL) != 0
        && (*((_QWORD *)v4 + 3) & 0x200000000000LL) == *((_QWORD *)v4 + 3) )
      {
        TlgWrite(v4, &unk_1800ADB91, 0LL, 0LL, 2u, &pData);
      }
    }
  }
}
