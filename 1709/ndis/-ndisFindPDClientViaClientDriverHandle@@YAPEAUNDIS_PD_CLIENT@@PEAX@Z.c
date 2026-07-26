/*
 * XREFs of ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x1C00F7268
 * Callers:
 *     ndisOidPrePDCloseProvider @ 0x1C00F84E0 (ndisOidPrePDCloseProvider.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00F8830 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

struct NDIS_PD_CLIENT *__fastcall ndisFindPDClientViaClientDriverHandle(void *a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  v5.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v5.m_State = Unlocked;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v3 = *(__int64 **)(qword_1C00987F8 + 8);
  while ( v3 != (__int64 *)(qword_1C00987F8 + 8) )
  {
    v2 = v3;
    if ( (void *)v3[10] == a1 )
      break;
    v3 = (__int64 *)*v3;
    v2 = 0LL;
  }
  KLockHolder::~KLockHolder(&v5);
  return (struct NDIS_PD_CLIENT *)v2;
}
