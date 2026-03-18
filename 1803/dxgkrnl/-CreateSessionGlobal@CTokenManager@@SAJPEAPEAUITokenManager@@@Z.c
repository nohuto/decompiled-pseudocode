/*
 * XREFs of ?CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z @ 0x1C004A3C4
 * Callers:
 *     CreateTokenManagerSessionGlobal @ 0x1C0049570 (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C004A00C (--0CTokenManager@@AEAA@XZ.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C004A1E4 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C004A85C (-Initialize@CTokenManager@@AEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::CreateSessionGlobal(struct ITokenManager **a1)
{
  CTokenManager *v2; // rax
  CTokenManager *v3; // rbx
  int v4; // edi

  v2 = (CTokenManager *)operator new(0x150uLL, 0x67734D54u, 1, PagedPool);
  if ( v2 )
    v3 = CTokenManager::CTokenManager(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = CTokenManager::Initialize(v3);
    if ( v4 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      CTokenManager::`scalar deleting destructor'(v3);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
