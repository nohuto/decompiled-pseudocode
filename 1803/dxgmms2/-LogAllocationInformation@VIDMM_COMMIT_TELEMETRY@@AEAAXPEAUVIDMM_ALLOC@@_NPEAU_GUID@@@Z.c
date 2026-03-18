/*
 * XREFs of ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00B6A10
 * Callers:
 *     ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00B6EA0 (-LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z.c)
 *     ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00B75BC (-LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 *     ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00B79F0 (-LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0026BC0 (_TlgWrite.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogAllocationInformation(
        LPCGUID pRelatedActivityId,
        __int64 **a2,
        char a3,
        struct _GUID *a4)
{
  __int64 v6; // r10
  int v7; // r8d
  int v8; // edx
  unsigned __int16 *v9; // rax
  int v10; // ecx
  unsigned int v11; // ecx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v19; // [rsp+70h] [rbp-90h]
  __int64 v20; // [rsp+78h] [rbp-88h]
  __int64 v21; // [rsp+80h] [rbp-80h]
  _DWORD v22[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  int *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  int *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]

  if ( pRelatedActivityId[1].Data4[0] && *(_QWORD *)&pRelatedActivityId[1].Data1 )
  {
    v6 = **a2;
    if ( !a3
      || (v7 = *(_DWORD *)(v6 + 76),
          *(char *)(1560LL * (v7 & 0x3F) + *(_QWORD *)(*(_QWORD *)&pRelatedActivityId->Data1 + 40720LL) + 437) >= 0)
      || (v8 = 1, (v7 & 0x400) != 0) )
    {
      v8 = 0;
    }
    if ( (unsigned int)hProvider > 5
      && (qword_1C0047060 & 0x400000000008LL) != 0
      && (qword_1C0047068 & 0x400000000008LL) == qword_1C0047068 )
    {
      v9 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)&pRelatedActivityId->Data1 + 24LL) + 1344LL);
      v19 = v22;
      v20 = 2LL;
      v10 = *v9;
      v21 = *((_QWORD *)v9 + 1);
      v23 = v6 + 16;
      v25 = &v12;
      v22[0] = v10;
      v11 = *(_DWORD *)(v6 + 72);
      v22[1] = 0;
      v13 = v11 & 0x1F;
      v27 = &v13;
      v24 = 8LL;
      v14 = (v11 >> 6) & 0x1F;
      v29 = &v14;
      v12 = v8;
      v15 = (v11 >> 12) & 0x1F;
      v31 = &v15;
      v16 = (v11 >> 18) & 0x1F;
      v26 = 4LL;
      v33 = &v16;
      v35 = &v17;
      v28 = 4LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v17 = HIBYTE(v11) & 0x1F;
      v36 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003A8A5, a4, pRelatedActivityId, 0xBu, &pData);
    }
  }
}
