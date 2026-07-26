/*
 * XREFs of ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C00F6C30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004F1C8 (ndisBugCheckEx.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDRemoveProviderFromBMGroup(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR i; // rbx
  ULONG_PTR v3; // rcx
  __int64 v4; // r8
  ULONG_PTR v5; // r8
  __int64 v6; // r8
  _QWORD *v7; // rax
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  for ( i = BugCheckParameter4; *(_BYTE *)(i + 88); i = *(_QWORD *)(i + 72) )
    ;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, BugCheckParameter4);
  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)qword_1C00987F8;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  v3 = i + 16;
  v4 = *(_QWORD *)(i + 16);
  if ( !v4 )
    ndisBugCheckEx(0x23uLL, 6uLL, 0LL, BugCheckParameter4);
  if ( v4 == *(_QWORD *)(i + 24) )
  {
    v5 = v4 - 24;
    if ( *(_QWORD *)(v5 + 40) != v5 + 40 )
      ndisBugCheckEx(0x23uLL, 6uLL, v5, *(_QWORD *)(*(_QWORD *)(v5 + 16) + 80LL));
  }
  v6 = *(_QWORD *)v3;
  if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v7 = *(_QWORD **)(i + 24), *v7 != v3) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)v3 = 0LL;
  if ( (unsigned __int8)byte_1C0098764 >= 4u )
    WPP_SF_q(0x4Cu, &WPP_2929d52fc6803c0d5180733d460ecc8a_Traceguids, BugCheckParameter4);
  KLockHolder::~KLockHolder(&v8);
}
