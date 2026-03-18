/*
 * XREFs of ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum @ 0x1C0049DB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qDqqss @ 0x1C004A350 (WPP_RECORDER_SF_qDqqss.c)
 */

__int64 __fastcall ACPIIsPhase3ListEmptyOfUnblockedItemsPowerNodeEnum(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rdx
  __int64 v4; // r9
  int v5; // r9d
  __int64 v6; // r9

  if ( (*(_BYTE *)(a1 + 16) & 8) != 0 )
  {
    *(_DWORD *)(a3 + 56) |= 0x1000000u;
    v3 = &unk_1C0067B08;
    v4 = *(_QWORD *)(a3 + 40);
    if ( v4 && (*(_QWORD *)(v4 + 8) & 0x200000000000LL) != 0 )
      v3 = *(void **)(*(_QWORD *)(a3 + 40) + 560LL);
    v5 = 44;
LABEL_12:
    WPP_RECORDER_SF_qDqqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v3, a3, v5);
    return 0LL;
  }
  if ( (*(_DWORD *)(a3 + 56) & 0x10000000) == 0
    && (unsigned int)(_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), 1, 1) - 3) <= 1 )
  {
    *(_DWORD *)(a3 + 56) |= 0x10000000u;
    v3 = &unk_1C0067B08;
    v6 = *(_QWORD *)(a3 + 40);
    if ( v6 && (*(_QWORD *)(v6 + 8) & 0x200000000000LL) != 0 )
      v3 = *(void **)(*(_QWORD *)(a3 + 40) + 560LL);
    v5 = 45;
    goto LABEL_12;
  }
  return 0LL;
}
