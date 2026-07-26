/*
 * XREFs of ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00F9820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDRemoveProviderFromBMGroup(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR i; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  for ( i = BugCheckParameter4; *(_BYTE *)(i + 88); i = *(_QWORD *)(i + 72) )
    ;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, BugCheckParameter4);
  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  v3 = (_QWORD *)(i + 16);
  v4 = *(_QWORD *)(i + 16);
  if ( !v4 )
    ndisBugCheckEx(0x23uLL, 6uLL, 0LL, BugCheckParameter4);
  if ( v4 == *(_QWORD *)(i + 24) && *(_QWORD *)(v4 - 24 + 40) != v4 - 24 + 40 )
    ndisBugCheckEx(0x23uLL, 6uLL, v4 - 24, *(_QWORD *)(*(_QWORD *)(v4 - 24 + 16) + 80LL));
  if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = *(_QWORD **)(i + 24), (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v3 = 0LL;
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x4Cu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, BugCheckParameter4);
  KLockHolder::~KLockHolder(&v6);
}
