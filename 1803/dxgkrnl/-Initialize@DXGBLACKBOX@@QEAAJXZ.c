/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C01EB48C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax

  v2 = operator new[](0x1000uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    *((_QWORD *)this + 6) = v2;
    *v2 = 1;
    *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v4 + 24) = 42LL;
    WdLogEvent5_WdError(v4);
    return 3221225495LL;
  }
}
