/*
 * XREFs of ndisOidPostRcvFilterClearFilter @ 0x1C003B770
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisClearReceiveFilter @ 0x1C003AF64 (ndisClearReceiveFilter.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall ndisOidPostRcvFilterClearFilter(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v3; // rbx
  int v4; // r9d
  KIRQL v5; // dl

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( !v4 || v4 == 65539 && (*(_DWORD *)(v3 + 120) & 4) != 0 )
    {
      ndisClearReceiveFilter(*(_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(v1 + 40) + 12LL));
      *(_DWORD *)(a1 + 40) = 0;
    }
    else
    {
      if ( (unsigned __int8)byte_1C0099612 >= 2u )
        WPP_SF_qD(0x18u, &WPP_968189b415313035a5e13c3867538638_Traceguids, v3, v4);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2689566;
      if ( (*(_DWORD *)(v1 + 88) & 0x10000) != 0
        && (*(_DWORD *)(v3 + 124) & 0x1000000) == 0
        && (*(_BYTE *)(*(_QWORD *)(v3 + 3784) + 26LL) & 1) == 0 )
      {
        DbgPrintEx(
          0x78u,
          0,
          " ***NDIS*** : Miniport %Z - %s\n",
          *(_QWORD *)(v3 + 3880),
          "Miniport has failed OID_RECEIVE_FILTER_CLEAR_FILTER");
        ndisBugCheckEx(0x1CuLL, v3, *(unsigned int *)(v1 + 32), *(int *)(a1 + 40));
      }
      *(_QWORD *)(v3 + 520) = 0LL;
      *(_DWORD *)(v3 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v5);
    }
  }
}
