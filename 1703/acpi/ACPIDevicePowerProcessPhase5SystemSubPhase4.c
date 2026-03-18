/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C004A070
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIGetParent @ 0x1C00127F8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0022070 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase4(__int64 a1)
{
  _QWORD *v1; // rbx
  const char *v2; // rax
  int v3; // esi
  int v4; // edi
  char v6; // r8
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rbx
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 result; // rax
  _QWORD v16[6]; // [rsp+50h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = byte_1C0066CD0;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v6 = 0;
  v7 = byte_1C0066CD0;
  if ( v1 )
  {
    v8 = v1[1];
    v6 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x53u,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v6,
    v2,
    v7);
  *(_DWORD *)(a1 + 212) = 7;
  memset(v16, 0, 0x28uLL);
  WORD1(v16[0]) = 1;
  v9 = (__int64 *)AMLIGetParent(v1[89]);
  v10 = AMLIGetNamedChild(v9, 1598640991);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v9, v11);
  if ( v10 )
  {
    v12 = AMLIGetNamedChild(v10, 1414746975);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v10, v13);
    if ( v12 )
    {
      if ( v3 == 1 )
      {
        v16[2] = 1LL;
      }
      else
      {
        if ( v3 > 1 )
        {
          if ( v3 <= 4 )
          {
            v16[2] = 3LL;
            goto LABEL_15;
          }
          if ( v3 == 5 )
          {
            v16[2] = 4LL;
            goto LABEL_15;
          }
        }
        v16[2] = 0LL;
      }
LABEL_15:
      v4 = AMLIAsyncEvalObject(v12, 0LL, 1u, v16, ACPIDeviceCompleteGenericPhase, a1);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v12, v14);
      result = 259LL;
      if ( v4 == 259 )
        return result;
    }
  }
  ACPIDeviceCompleteGenericPhase(0LL, v4, 0LL, a1);
  return 0LL;
}
