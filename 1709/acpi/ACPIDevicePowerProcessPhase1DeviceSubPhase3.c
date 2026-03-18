/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0001960
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0004B9C (WPP_RECORDER_SF_qLdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rdx
  void *v9; // rax
  void *v10; // rcx
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  if ( (v1[1] & 0x200000000000000LL) != 0 )
    v4 = *(_QWORD *)(v1[23] + 712LL);
  else
    v4 = v1[89];
  v5 = AMLIGetNamedChild(v4, 1096045407LL);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( *(_WORD *)(*(_QWORD *)v5 + 66LL) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v12 = ACPIDeviceCompleteGenericPhase;
    v6 = AMLIAsyncEvalObject(v5, v2, 0LL, 0LL);
    AMLIDereferenceHandleEx(v7);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  v8 = v1[1];
  v9 = &unk_1C0067B08;
  v10 = &unk_1C0067B08;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v9 = (void *)v1[70];
    if ( (v8 & 0x400000000000LL) != 0 )
      v10 = (void *)v1[71];
  }
  WPP_RECORDER_SF_qLdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v8,
    0,
    59,
    (_DWORD)v12,
    a1,
    v6,
    *(_DWORD *)(a1 + 212),
    (char)v1,
    (__int64)v9,
    (__int64)v10);
  if ( v6 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return v6;
}
