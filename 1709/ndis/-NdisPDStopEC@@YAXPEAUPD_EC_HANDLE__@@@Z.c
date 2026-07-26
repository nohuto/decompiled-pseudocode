/*
 * XREFs of ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C00F6EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C00F46C4 (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDStopEC(char *P)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r9
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  void *v6; // rcx
  KLockHolder v7; // [rsp+30h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qqq(0x5Cu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, P, *((_QWORD *)P + 3), CurrentThread);
  v3 = *((_QWORD *)P + 3);
  if ( (struct _KTHREAD *)v3 != CurrentThread )
    ndisBugCheckEx(0x23uLL, 1uLL, *((_QWORD *)P + 2), v3);
  v7.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v7.m_State = Unlocked;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  v4 = *(_QWORD **)P;
  if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  *(_QWORD *)P = 0LL;
  KLockHolder::~KLockHolder(&v7);
  v6 = (void *)*((_QWORD *)P + 3);
  *((_QWORD *)P + 2) = 0LL;
  ObfDereferenceObject(v6);
  *((_QWORD *)P + 3) = 0LL;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x5Du, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)P);
  NDIS_PD_EC::`scalar deleting destructor'(P);
}
