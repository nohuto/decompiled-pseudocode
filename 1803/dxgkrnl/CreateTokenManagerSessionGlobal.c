/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x1C0049570
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C01CDBC4 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ?CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z @ 0x1C004A3C4 (-CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(struct ITokenManager **a1)
{
  return CTokenManager::CreateSessionGlobal(a1);
}
