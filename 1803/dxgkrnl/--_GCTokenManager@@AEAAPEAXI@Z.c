/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C004A1E4
 * Callers:
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C000F8A0 (-Release@CTokenManager@@UEAAJXZ.c)
 *     ?CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z @ 0x1C004A3C4 (-CreateSessionGlobal@CTokenManager@@SAJPEAPEAUITokenManager@@@Z.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C004A100 (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
