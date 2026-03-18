/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C001CAC0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001FDA4 (WPP_RECORDER_SF_qLdqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp
  _QWORD *v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // esi
  volatile signed __int32 *v7; // r14

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  if ( (v1[1] & 0x200000000000000LL) != 0 )
    v4 = *(_QWORD **)(v1[23] + 712LL);
  else
    v4 = (_QWORD *)v1[89];
  v5 = AMLIGetNamedChild(v4, 1096045407);
  v6 = 0;
  v7 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    if ( *(_WORD *)(*v5 + 66) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v6 = AMLIAsyncEvalObject(v5, v2, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v7);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, v1[1], 0, 59);
  if ( v6 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return v6;
}
