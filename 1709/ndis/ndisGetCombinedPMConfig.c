/*
 * XREFs of ndisGetCombinedPMConfig @ 0x1C0003200
 * Callers:
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0002460 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostPMAddWOLPattern @ 0x1C0002F80 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C0048DF4 (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0048EE4 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049570 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C00497B0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisPreSetPMParameters @ 0x1C00ADE04 (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00E1BF8 (ndisSetOpenEnableWakeUp.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetCombinedPMConfig(__int64 a1, __int64 a2)
{
  KIRQL v4; // r10
  __int64 v5; // r8
  int v6; // edx
  int v7; // r9d
  int v8; // ecx
  __int64 i; // rax
  int v10; // ecx
  __int128 v11; // [rsp+20h] [rbp-20h]

  LODWORD(v11) = 1311360;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2755981;
  v7 = *(_DWORD *)(a2 + 4) & 2;
  v8 = 0;
  while ( v5 )
  {
    v7 |= *(_DWORD *)(v5 + 312);
    v6 |= *(_DWORD *)(v5 + 316);
    v8 |= *(_DWORD *)(v5 + 324);
    v5 = *(_QWORD *)(v5 + 392);
  }
  for ( i = *(_QWORD *)(a1 + 2048); i; i = *(_QWORD *)(i + 120) )
  {
    v7 |= *(_DWORD *)(i + 884);
    v6 |= *(_DWORD *)(i + 888);
    v8 |= *(_DWORD *)(i + 896);
  }
  v10 = *(_DWORD *)(a1 + 1156) | v8;
  DWORD2(v11) = *(_DWORD *)(a1 + 1148) | v6;
  DWORD1(v11) = *(_DWORD *)(a1 + 1144) | v7;
  HIDWORD(v11) = *(_DWORD *)(a2 + 12);
  *(_OWORD *)a2 = v11;
  *(_DWORD *)(a2 + 16) = v10;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
