/*
 * XREFs of DpiMiracastCbSendUserModeMessage @ 0x1C01E1110
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C002ED1C (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C002F8D0 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0xqqppq @ 0x1C0032088 (McTemplateK0xqqppq.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C01E20B8 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastCbSendUserModeMessage(
        int *P,
        size_t Size,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // edi
  int v9; // r15d
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v19; // rax
  size_t Sizea; // [rsp+20h] [rbp-58h]
  int Sizec; // [rsp+20h] [rbp-58h]
  size_t Sizeb; // [rsp+20h] [rbp-58h]
  __int64 v24; // [rsp+28h] [rbp-50h]
  int v25; // [rsp+40h] [rbp-38h]
  __int64 v26; // [rsp+40h] [rbp-38h]

  v8 = a3;
  v9 = Size;
  if ( P && P[4] == 1953656900 && P[5] == 14 && *((_QWORD *)P + 54) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    {
      v25 = 0;
      Sizec = Size;
      McTemplateK0xqqppq(
        (__int64)P,
        &EventEnterDxgkCbSendUserModeMessage,
        a3,
        *((_QWORD *)P + 12),
        Sizec,
        a4,
        a6,
        a7,
        v25);
    }
    DpiMiracastAddRefMiracastDeviceContext((__int64)P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    LODWORD(Sizea) = v9;
    v13 = DpiMiracastSendAsyncUserModeRequest(v12, v11, 2295820, v8, Sizea, a5, a4, a6, a7, 0LL, 0LL);
    v16 = v13;
    if ( v13 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v17 + 24) = v16;
      WdLogEvent5_WdError(v17);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000) != 0 )
    {
      LODWORD(v26) = v16;
      LODWORD(v24) = a4;
      LODWORD(Sizeb) = v9;
      McTemplateK0xqqppq(v14, &EventLeaveDxgkCbSendUserModeMessage, v15, *((_QWORD *)P + 12), Sizeb, v24, a6, a7, v26);
    }
    DpiMiracastReleaseMiracastDeviceContext(P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    return (unsigned int)v16;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(P);
    *(_QWORD *)(v19 + 24) = P;
    *(_QWORD *)(v19 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v19);
    return 3221225711LL;
  }
}
