/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase4 @ 0x1C0049450
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00055B0 (WPP_RECORDER_SF_qqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     memset @ 0x1C002C4C0 (memset.c)
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
  __int64 *v11; // rbx
  __int64 result; // rax
  _QWORD v13[6]; // [rsp+50h] [rbp-48h] BYREF

  v1 = *(_QWORD **)(a1 + 40);
  v2 = (const char *)&unk_1C0067B08;
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v6 = 0;
  v7 = (const char *)&unk_1C0067B08;
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
    0x54u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v6,
    v2,
    v7);
  *(_DWORD *)(a1 + 212) = 7;
  memset(v13, 0, 0x28uLL);
  WORD1(v13[0]) = 1;
  v9 = (__int64 *)AMLIGetParent(v1[89]);
  v10 = AMLIGetNamedChild(v9, 1598640991);
  AMLIDereferenceHandleEx((__int64)v9);
  if ( v10 )
  {
    v11 = AMLIGetNamedChild(v10, 1414746975);
    AMLIDereferenceHandleEx((__int64)v10);
    if ( v11 )
    {
      if ( v3 == 1 )
      {
        v13[2] = 1LL;
      }
      else
      {
        if ( v3 > 1 )
        {
          if ( v3 <= 4 )
          {
            v13[2] = 3LL;
            goto LABEL_15;
          }
          if ( v3 == 5 )
          {
            v13[2] = 4LL;
            goto LABEL_15;
          }
        }
        v13[2] = 0LL;
      }
LABEL_15:
      v4 = AMLIAsyncEvalObject(v11, 0LL, 1u, v13, ACPIDeviceCompleteGenericPhase, a1);
      AMLIDereferenceHandleEx((__int64)v11);
      result = 259LL;
      if ( v4 == 259 )
        return result;
    }
  }
  ACPIDeviceCompleteGenericPhase(0LL, v4, 0LL, a1);
  return 0LL;
}
