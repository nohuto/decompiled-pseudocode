/*
 * XREFs of ?NdisPDCreateBMGroup@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00F5240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateBMGroup(struct PD_CLIENT_HANDLE__ *a1, struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **a2)
{
  unsigned int v4; // ebx
  _QWORD *PoolWithTag; // rax
  struct PD_CLIENT_HANDLE__ *v6; // rdi
  _QWORD *v7; // rax
  struct PD_CLIENT_HANDLE__ **v8; // rcx
  KLockHolder v10; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x46u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, (__int64)a1);
  v4 = 0;
  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x6D41444Eu);
  v6 = (struct PD_CLIENT_HANDLE__ *)PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    v7 = PoolWithTag + 3;
    v7[1] = v7;
    *v7 = v7;
    *((_QWORD *)v6 + 6) = (char *)v6 + 40;
    *((_QWORD *)v6 + 5) = (char *)v6 + 40;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v10.m_Lock = (KPushLockBase *)qword_1C00987F8;
    *((_QWORD *)v6 + 2) = a1;
    v10.m_State = Unlocked;
    v10.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v10);
    v8 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 5);
    if ( *v8 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 32) )
      __fastfail(3u);
    *((_QWORD *)v6 + 1) = v8;
    *(_QWORD *)v6 = (char *)a1 + 32;
    *v8 = v6;
    *((_QWORD *)a1 + 5) = v6;
    KLockHolder::~KLockHolder(&v10);
    *a2 = v6;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_qqd(0x47u, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, a1, *a2, v4);
  return v4;
}
