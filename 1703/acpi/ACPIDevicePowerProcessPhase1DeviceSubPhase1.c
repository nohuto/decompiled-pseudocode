/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000A270
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000DB90 (WPP_RECORDER_SF_qdqss.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C000E05C (WPP_RECORDER_SF_qLdqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ebp
  unsigned int v4; // r15d
  int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // r10
  void *v10; // rax
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  void *v16; // rax
  void *v17; // rdx
  int v18; // [rsp+20h] [rbp-58h]

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 0LL;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v3 == 1 || (v5 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
  }
  else if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 5;
  }
  else
  {
    *(_DWORD *)(a1 + 212) = 4;
    if ( v3 == 4 )
    {
      v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397310559LL, v7, v8);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v1 + 952) & 0x100LL) == 0 )
        {
          _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
          *(_DWORD *)(a1 + 56) |= 0x1000000u;
          v4 = AMLIAsyncEvalObject(v6, 0LL, 0LL, 0LL, ACPIDeviceCompleteGenericPhase, a1);
          AMLIDereferenceHandleEx(v6, v14);
          v6 = 0LL;
          if ( v4 == 259 )
          {
            v15 = *(_QWORD *)(v1 + 8);
            v16 = &unk_1C0066CD0;
            v17 = &unk_1C0066CD0;
            if ( (v15 & 0x200000000000LL) != 0 )
            {
              v16 = *(void **)(v1 + 560);
              if ( (v15 & 0x400000000000LL) != 0 )
                v17 = *(void **)(v1 + 568);
            }
            WPP_RECORDER_SF_qdqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v17,
              10,
              54,
              (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
              a1,
              *(_DWORD *)(a1 + 212),
              v1,
              (__int64)v16,
              (__int64)v17);
            return 259LL;
          }
        }
      }
      else
      {
        _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 952LL), 0x100uLL);
      }
    }
  }
  v9 = 0;
  v10 = &unk_1C0066CD0;
  v11 = &unk_1C0066CD0;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v9 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v10 = *(void **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v11 = *(void **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qLdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v11,
    v7,
    55,
    v18,
    a1,
    v4,
    *(_DWORD *)(a1 + 212),
    v9,
    (__int64)v10,
    (__int64)v11);
  ACPIDeviceCompleteGenericPhase(v6, v4, 0LL, a1);
  if ( v6 )
    AMLIDereferenceHandleEx(v6, v12);
  return 0LL;
}
