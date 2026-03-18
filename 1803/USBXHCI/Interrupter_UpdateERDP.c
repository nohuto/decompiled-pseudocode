/*
 * XREFs of Interrupter_UpdateERDP @ 0x1C0017C54
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0016F88 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_InitializeForOffload @ 0x1C0017924 (Interrupter_InitializeForOffload.c)
 *     Interrupter_InterrupterRegisterIntialize @ 0x1C0017A94 (Interrupter_InterrupterRegisterIntialize.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall Interrupter_UpdateERDP(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  signed __int32 v7[8]; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]

  v3 = ((unsigned __int8)*(_DWORD *)(a1 + 128) ^ (unsigned __int8)*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL)) & 7 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) + 16LL * *(unsigned int *)(a1 + 124));
  if ( a2 )
    v4 = v3 | 8;
  else
    v4 = v3 & 0xFFFFFFFFFFFFFFF7uLL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      9u,
      0x1Eu,
      (__int64)&WPP_e3ff60b53c4034148ad8b37c0aef3b5d_Traceguids,
      v4);
  v5 = *(_QWORD *)(a1 + 24);
  v8 = *(_OWORD *)(*(_QWORD *)(a1 + 8) + 272LL);
  result = v8;
  if ( (v8 & 1) != 0 )
  {
    *(_DWORD *)(v5 + 24) = v4;
    _InterlockedOr(v7, 0);
    *(_DWORD *)(v5 + 28) = HIDWORD(v4);
  }
  else
  {
    *(_QWORD *)(v5 + 24) = v4;
  }
  _InterlockedOr(v7, 0);
  return result;
}
