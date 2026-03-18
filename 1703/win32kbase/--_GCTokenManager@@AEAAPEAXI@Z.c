/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C002A0F4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0067BC4 (MultiUserNtGreCleanup.c)
 *     InitializeGre @ 0x1C01D521C (InitializeGre.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C0029F78 (--1CTokenManager@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *this)
{
  CTokenManager::~CTokenManager(this);
  Win32FreePool(this);
  return this;
}
