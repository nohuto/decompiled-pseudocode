/*
 * XREFs of CmPostCallbackNotification @ 0x1404A7118
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[7]; // [rsp+58h] [rbp-1h] BYREF

  if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)*a5 != a5 )
  {
    memset(v10, 0, sizeof(v10));
    v10[0] = a2;
    LODWORD(v10[1]) = a3;
    LODWORD(v10[3]) = a3;
    v10[2] = a4;
    CmpCallCallBacksEx(a1, (unsigned int)v10, 0, 0, a1, a2, (__int64)a5);
    return LODWORD(v10[3]);
  }
  return a3;
}
