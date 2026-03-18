/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0036614
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0074DF0 (MultiUserNtGreCleanup.c)
 *     InitializeGre @ 0x1C01DFC44 (InitializeGre.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C003648C (--1CTokenManager@@AEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  CTokenManager::~CTokenManager(this);
  Win32FreePool(this, v2, v3);
  return this;
}
