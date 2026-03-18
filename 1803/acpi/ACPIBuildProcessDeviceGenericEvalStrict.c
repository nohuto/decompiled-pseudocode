/*
 * XREFs of ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000C860
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0009C70 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C00126CC (WPP_RECORDER_SF_LLqss.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // r14
  __int64 v3; // rsi
  int v4; // ebp
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // rcx
  __int64 v8; // rax
  void *v9; // r8

  v1 = *(unsigned int *)(a1 + 28);
  v2 = (void *)(a1 + 80);
  v3 = *(_QWORD *)(a1 + 40);
  v4 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x1012E3uLL, 0LL, 0LL);
  v6 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD **)(v3 + 712), AcpiBuildDevicePowerNameLookup[v1]);
  memset(v2, 0, 0x28uLL);
  v7 = *(volatile signed __int32 **)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6 )
  {
    dword_1C00677B8 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v6 + 2);
    v4 = AMLIAsyncEvalObject(v6, v2, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
  }
  v8 = *(_QWORD *)(v3 + 8);
  v9 = &unk_1C005B1F0;
  if ( (v8 & 0x200000000000LL) != 0 && (v8 & 0x400000000000LL) != 0 )
    v9 = *(void **)(v3 + 568);
  WPP_RECORDER_SF_LLqss(WPP_GLOBAL_Control->DeviceExtension, 4, (_DWORD)v9, 28);
  if ( v4 != 259 )
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v6, v4, (__int64)v2, a1);
  if ( v6 )
    AMLIDereferenceHandleEx(v6);
  return 0LL;
}
