/*
 * XREFs of ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00F8100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDDeleteBMGroup(_QWORD *BugCheckParameter3)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x4Du, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)BugCheckParameter3);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00996C8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  if ( (_QWORD *)BugCheckParameter3[3] != BugCheckParameter3 + 3 )
    ndisBugCheckEx(0x23uLL, 6uLL, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(BugCheckParameter3[2] + 80LL));
  v2 = *BugCheckParameter3;
  if ( *(_QWORD **)(*BugCheckParameter3 + 8LL) != BugCheckParameter3
    || (v3 = (_QWORD *)BugCheckParameter3[1], (_QWORD *)*v3 != BugCheckParameter3) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  *BugCheckParameter3 = 0LL;
  BugCheckParameter3[2] = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(BugCheckParameter3, 0x6D41444Eu);
  if ( (unsigned __int8)byte_1C0099624 >= 4u )
    WPP_SF_q(0x4Eu, &WPP_a3b9db0bffd8342d0da72f7b6cff8d15_Traceguids, (__int64)BugCheckParameter3);
}
