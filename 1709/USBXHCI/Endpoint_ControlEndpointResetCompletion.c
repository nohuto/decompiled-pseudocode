/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1C0017FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Command_SendCommand @ 0x1C000D784 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0010EF0 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0012264 (Controller_ReportFatalError.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001917C (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C001DC2C (WPP_RECORDER_SF_ddx.c)
 *     TR_InitializeTransferRing @ 0x1C0023440 (TR_InitializeTransferRing.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetCompletion(_QWORD *a1, int a2, __int64 *a3)
{
  __int64 *v3; // rdi
  unsigned __int8 v6; // al
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // r10d
  int v10; // r10d
  int v11; // r8d
  int v12; // edx
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+38h] [rbp-10h]

  v3 = (__int64 *)a1[6];
  if ( a2 == 3 )
  {
    v15 = *((_DWORD *)v3 + 36);
    v13 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_dd(v3[10], 4u, 0xDu, 0x52u, (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids, v13, v15);
  }
  else
  {
    v6 = *((_BYTE *)a1 + 60);
    if ( v6 == 1 )
    {
      v8 = *(_QWORD *)(*v3 + 144);
      TR_InitializeTransferRing(v3[11]);
      memset(a1, 0, 0x60uLL);
      v9 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
      a1[5] = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
      a1[6] = v3;
      *((_DWORD *)a1 + 9) = v9 | 0x4000;
      a1[3] = Endpoint_GetDequeuePointer(v3, 0LL);
      *((_DWORD *)a1 + 9) = v10 ^ (v10 ^ (*((_DWORD *)v3 + 36) << 16)) & 0x1F0000;
      v11 = *(unsigned __int8 *)(v3[2] + 135);
      *((_BYTE *)a1 + 39) = v11;
      a1[9] = 0LL;
      a1[10] = 0LL;
      a1[11] = 0LL;
      v12 = *((_WORD *)a1 + 19) & 0x1F;
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_ddx(v3[10], v12, v11, 84);
      return Command_SendCommand(v8, (__int64)a1);
    }
    v17 = v6;
    v16 = *((_DWORD *)v3 + 36);
    v14 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_ddL(
      v3[10],
      2u,
      0xDu,
      0x53u,
      (__int64)&WPP_70dcbfe646ea320c9194bc4b71c40f15_Traceguids,
      v14,
      v16,
      v17);
    Controller_HwVerifierBreakIfEnabled((_QWORD *)*v3, v3[1], v3[3], 256LL, "Endpoint Reset Command failed", a1 + 3, a3);
    Controller_ReportFatalError(*v3, 2, 4102, v3[2], (__int64)v3, 0LL);
  }
  _m_prefetchw(v3 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent(v3 + 36);
  return result;
}
