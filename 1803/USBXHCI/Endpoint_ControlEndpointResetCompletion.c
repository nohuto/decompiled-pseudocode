/*
 * XREFs of Endpoint_ControlEndpointResetCompletion @ 0x1C0010C40
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0002D40 (memset.c)
 *     Command_SendCommand @ 0x1C0004578 (Command_SendCommand.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0008150 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00095DC (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0011EBC (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_ddx @ 0x1C00169DC (WPP_RECORDER_SF_ddx.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     TR_InitializeTransferRing @ 0x1C0020CF4 (TR_InitializeTransferRing.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_ControlEndpointResetCompletion(_QWORD *a1, int a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  char v6; // al
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // rbx
  unsigned int v10; // r10d
  int v11; // r10d
  int v12; // r8d
  int v13; // edx
  int v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  v3 = (__int64 *)a1[6];
  if ( a2 == 3 )
  {
    v15 = *((_DWORD *)v3 + 36);
    v14 = *(unsigned __int8 *)(v3[2] + 135);
    WPP_RECORDER_SF_dd(v3[10], 4u, 0xDu, 0x52u, (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids, v14, v15);
  }
  else
  {
    v6 = *((_BYTE *)a1 + 60);
    if ( v6 == 1 )
    {
      v9 = *(_QWORD *)(*v3 + 144);
      TR_InitializeTransferRing(v3[11]);
      memset(a1, 0, 0x60uLL);
      v10 = *((_DWORD *)a1 + 9) & 0xFFFF43FF;
      a1[5] = Endpoint_ControlEndpointResetSetDequeuePointerCompletion;
      a1[6] = v3;
      *((_DWORD *)a1 + 9) = v10 | 0x4000;
      a1[3] = Endpoint_GetDequeuePointer(v3, 0LL);
      *((_DWORD *)a1 + 9) = v11 ^ (v11 ^ (*((_DWORD *)v3 + 36) << 16)) & 0x1F0000;
      v12 = *(unsigned __int8 *)(v3[2] + 135);
      *((_BYTE *)a1 + 39) = v12;
      a1[9] = 0LL;
      a1[10] = 0LL;
      a1[11] = 0LL;
      v13 = *((_WORD *)a1 + 19) & 0x1F;
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_ddx(v3[10], v13, v12, 84);
      return Command_SendCommand(v9, (__int64)a1);
    }
    v7 = *(unsigned __int8 *)(v3[2] + 135);
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_ddL(
      v3[10],
      v7,
      13,
      83,
      (__int64)&WPP_d84a1c460e69300738f36914e2bb57da_Traceguids,
      *(_BYTE *)(v3[2] + 135),
      *((_DWORD *)v3 + 36),
      v6);
    Controller_HwVerifierBreakIfEnabled((_QWORD *)*v3, v3[1], v3[3], 256LL, "Endpoint Reset Command failed", a1 + 3, a3);
    Controller_ReportFatalError(*v3, 2, 4102, v3[2], (__int64)v3, 0LL);
  }
  _m_prefetchw(v3 + 4);
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
  if ( (result & 2) == 0 )
    return ESM_AddEvent(v3 + 36);
  return result;
}
