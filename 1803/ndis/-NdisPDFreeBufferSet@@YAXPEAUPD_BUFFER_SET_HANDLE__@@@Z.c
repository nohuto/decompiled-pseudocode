/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C00F8240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C00F7324 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeBufferSet(_QWORD *P)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  PVOID *v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rbp
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = P;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x53u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)P);
  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v7);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  *P = 0LL;
  KLockHolder::~KLockHolder(&v7);
  do
  {
    v5 = v2 + 8;
    v6 = v2;
    v2 = (_QWORD *)v2[8];
    if ( (unsigned __int8)byte_1C0099624 >= 4u )
      WPP_SF_qq(0x54u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, P, v6);
    *v5 = 0LL;
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v6);
  }
  while ( v2 );
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x55u, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)P);
}
