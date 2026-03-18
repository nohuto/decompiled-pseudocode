/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C000C6C0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteCommon @ 0x1C0009C00 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C00126CC (WPP_RECORDER_SF_LLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  __int64 v3; // rsi
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rcx
  signed __int32 v7; // edx
  __int64 v8; // rax
  void *v9; // r8

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x101269uLL, 0LL, 0LL);
  v5 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD **)(v3 + 712), AcpiBuildDevicePowerNameLookup[v1]);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v6 = *(volatile signed __int32 **)(a1 + 56);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v5;
  if ( !v5 )
    goto LABEL_9;
  dword_1C00677B8 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v5 + 2);
  v2 = AMLIAsyncEvalObject(v5, a1 + 80, 0LL, 0LL, ACPIBuildCompleteGeneric, a1);
  if ( v2 != 259 )
  {
LABEL_9:
    v7 = *(_DWORD *)(a1 + 32);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 48) = v2;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v7);
  }
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  v8 = *(_QWORD *)(v3 + 8);
  v9 = &unk_1C005B1F0;
  if ( (v8 & 0x200000000000LL) != 0 && (v8 & 0x400000000000LL) != 0 )
    v9 = *(void **)(v3 + 568);
  WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, 4, (_DWORD)v9, 27);
  return 0LL;
}
