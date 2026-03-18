/*
 * XREFs of ?LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00A6A04
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0021E0C (_TlgWrite.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00A5A80 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00A6258 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00A676C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogUnderBudgetButCantCommitEvent(VIDMM_COMMIT_TELEMETRY *this, char a2)
{
  const GUID *v4; // r9
  unsigned __int16 *v5; // rax
  int v6; // ecx
  __int64 v7; // rax
  GUID ActivityId; // [rsp+30h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 v13; // [rsp+70h] [rbp+27h]
  _DWORD v14[6]; // [rsp+78h] [rbp+2Fh] BYREF

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 248LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( hProvider > 5u
      && (qword_1C003C010 & 0x400000000008LL) != 0
      && (qword_1C003C018 & 0x400000000008LL) == qword_1C003C018 )
    {
      v5 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1224LL);
      v12 = 0;
      v10 = v14;
      v11 = 2;
      v6 = *v5;
      v7 = *((_QWORD *)v5 + 1);
      v14[1] = 0;
      v13 = v7;
      v14[0] = v6;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0030063, &ActivityId, v4, 4u, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((LPCGUID)this, *((__int64 ***)this + 2), a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
