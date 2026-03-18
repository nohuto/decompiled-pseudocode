/*
 * XREFs of ?LogFullDefragPass@VIDMM_COMMIT_TELEMETRY@@QEAAXK@Z @ 0x1C00A5F10
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0071420 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _TlgWrite @ 0x1C0021E0C (_TlgWrite.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00A5A80 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00A6258 (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00A676C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogFullDefragPass(VIDMM_COMMIT_TELEMETRY *this, int a2)
{
  const GUID *v4; // r9
  __int64 v5; // rax
  unsigned __int16 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  _DWORD *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  __int64 v19; // [rsp+90h] [rbp+17h]
  _DWORD v20[2]; // [rsp+98h] [rbp+1Fh] BYREF
  int *v21; // [rsp+A0h] [rbp+27h]
  int v22; // [rsp+A8h] [rbp+2Fh]
  int v23; // [rsp+ACh] [rbp+33h]

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 256LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( hProvider > 5u
      && (qword_1C003C010 & 0x200000000000LL) != 0
      && (qword_1C003C018 & 0x200000000000LL) == qword_1C003C018 )
    {
      v15 = 0;
      v13 = &v9;
      v5 = *(_QWORD *)this;
      v9 = 1;
      v14 = 4;
      v6 = *(unsigned __int16 **)(*(_QWORD *)(v5 + 24) + 1224LL);
      v18 = 0;
      v16 = v20;
      v17 = 2;
      v7 = *v6;
      v8 = *((_QWORD *)v6 + 1);
      v20[1] = 0;
      v23 = 0;
      v19 = v8;
      v21 = &v10;
      v20[0] = v7;
      v10 = a2;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0030013, &ActivityId, v4, 6u, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((LPCGUID)this, *((__int64 ***)this + 2), 0, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
