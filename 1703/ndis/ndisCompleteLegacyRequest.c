/*
 * XREFs of ndisCompleteLegacyRequest @ 0x1C004634C
 * Callers:
 *     ndisMAbortRequests @ 0x1C0025880 (ndisMAbortRequests.c)
 *     NdisMQueryInformationComplete @ 0x1C0027990 (NdisMQueryInformationComplete.c)
 *     NdisMSetInformationComplete @ 0x1C00458A0 (NdisMSetInformationComplete.c)
 * Callees:
 *     ndisMOidRequestCompleteInternal @ 0x1C0027768 (ndisMOidRequestCompleteInternal.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     WPP_SF_qqqL @ 0x1C004457C (WPP_SF_qqqL.c)
 */

void __fastcall ndisCompleteLegacyRequest(__int64 a1, int a2, __int64 a3)
{
  KIRQL v6; // al
  _DWORD *v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // [rsp+20h] [rbp-28h]

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2298980;
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
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qqqL(0x4Bu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, v8, v7, a2);
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
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
    {
      LODWORD(v10) = a2;
      WPP_SF_qqd(0x4Cu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, v8, v10);
    }
  }
}
