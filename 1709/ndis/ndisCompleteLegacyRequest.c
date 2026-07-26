/*
 * XREFs of ndisCompleteLegacyRequest @ 0x1C004354C
 * Callers:
 *     ndisMAbortRequests @ 0x1C0001808 (ndisMAbortRequests.c)
 *     NdisMQueryInformationComplete @ 0x1C0042820 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C00428D0 (NdisMSetInformationComplete.c)
 * Callees:
 *     WPP_SF_qqqL @ 0x1C0042F34 (WPP_SF_qqqL.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C00449E0 (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

void __fastcall ndisCompleteLegacyRequest(__int64 a1, unsigned int a2, __int64 a3)
{
  KIRQL v6; // al
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2299288;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    v7 = (_DWORD *)a3;
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 576);
    *(_QWORD *)(a1 + 576) = 0LL;
    v8 = *(_QWORD *)(a1 + 2216);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqqL(0x4Bu, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, v8, v7, a2);
  if ( v7 )
  {
    v9 = v7[8];
    if ( !v9 || (unsigned int)(v9 - 1) <= 1 )
    {
      *(_DWORD *)(v8 + 52) = v7[15];
      *(_DWORD *)(v8 + 56) = v7[16];
    }
    ExFreePoolWithTag(v7, 0);
    ndisMOidRequestCompleteInternal(a1, v8, a2, v8 & -(__int64)(a3 != 0));
    if ( (unsigned __int8)byte_1C0098752 >= 4u )
      WPP_SF_qqd(76LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, v8, a2);
  }
}
