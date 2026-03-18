/*
 * XREFs of ?LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY@@QEAAX_N@Z @ 0x1C00B75BC
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C007F920 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0026B88 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0026BC0 (_TlgWrite.c)
 *     ?LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z @ 0x1C00B6A10 (-LogAllocationInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_ALLOC@@_NPEAU_GUID@@@Z.c)
 *     ?LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z @ 0x1C00B71DC (-LogMemoryState@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAU_GUID@@@Z.c)
 *     ?LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@Z @ 0x1C00B774C (-LogProcessInformation@VIDMM_COMMIT_TELEMETRY@@AEAAXPEAUVIDMM_PROCESS_ADAPTER_INFO@@PEAU_GUID@@@.c)
 */

void __fastcall VIDMM_COMMIT_TELEMETRY::LogNoCandidatesToSuspendFound(VIDMM_COMMIT_TELEMETRY *this, char a2)
{
  unsigned __int16 *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax
  const CHAR *ProcessImageFileName; // rax
  __int64 v9; // rcx
  LPCGUID v10; // r9
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  GUID ActivityId; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  _DWORD *v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 v17; // [rsp+80h] [rbp+17h]
  _DWORD v18[2]; // [rsp+88h] [rbp+1Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+27h] BYREF
  __int64 *v20; // [rsp+A0h] [rbp+37h]
  int v21; // [rsp+A8h] [rbp+3Fh]
  int v22; // [rsp+ACh] [rbp+43h]

  if ( *((_BYTE *)this + 24)
    && (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 1) + 264LL)) <= 5 )
  {
    EtwActivityIdControl(3u, &ActivityId);
    if ( (unsigned int)hProvider > 5
      && (qword_1C0047060 & 0x400000000008LL) != 0
      && (qword_1C0047068 & 0x400000000008LL) == qword_1C0047068 )
    {
      v4 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 1344LL);
      v16 = 0;
      v14 = v18;
      v15 = 2;
      v5 = *v4;
      v6 = *((_QWORD *)v4 + 1);
      v18[1] = 0;
      v17 = v6;
      v7 = *((_QWORD *)this + 1);
      v18[0] = v5;
      ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName(**(_QWORD **)(v7 + 8));
      TlgCreateSz(&pDesc, ProcessImageFileName);
      v9 = **(_QWORD **)(*((_QWORD *)this + 1) + 8LL);
      v22 = 0;
      v20 = &v11;
      v11 = v9;
      v21 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003A700, &ActivityId, v10, 6u, &pData);
    }
    VIDMM_COMMIT_TELEMETRY::LogAllocationInformation((LPCGUID)this, *((__int64 ***)this + 2), a2, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogMemoryState(this, &ActivityId);
    VIDMM_COMMIT_TELEMETRY::LogProcessInformation(
      this,
      *(struct VIDMM_PROCESS_ADAPTER_INFO **)(*((_QWORD *)this + 1) + 16LL),
      &ActivityId);
  }
}
