/*
 * XREFs of CmpHiveInitialize @ 0x140497F38
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpCreateEmptyHiveClone @ 0x1406F753C (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpInitSecurityCache @ 0x140497FCC (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x140498008 (HvHiveInitialize.c)
 */

__int64 __fastcall CmpHiveInitialize(__int64 a1)
{
  memset((void *)a1, 0, 0x12F8uLL);
  HvHiveInitialize(a1);
  *(_QWORD *)(a1 + 4832) = 0LL;
  *(_DWORD *)(a1 + 4288) = 1;
  *(_QWORD *)(a1 + 1608) = a1 + 1600;
  *(_QWORD *)(a1 + 1600) = a1 + 1600;
  ExInitializePushLock((PKSPIN_LOCK)(a1 + 1632));
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1776) = 0LL;
  *(_DWORD *)(a1 + 2996) = 16;
  *(_QWORD *)(a1 + 4168) = a1 + 4160;
  *(_QWORD *)(a1 + 4160) = a1 + 4160;
  *(_QWORD *)(a1 + 1624) = a1 + 1616;
  *(_QWORD *)(a1 + 1616) = a1 + 1616;
  return CmpInitSecurityCache(a1);
}
