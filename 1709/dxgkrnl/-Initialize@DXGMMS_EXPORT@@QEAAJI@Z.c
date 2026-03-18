/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0121520
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C01196BC (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C0121660 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  struct _UNICODE_STRING *v3; // rsi
  __int64 v5; // rcx
  const WCHAR *p_NumberOfMapRegisters; // rdx
  NTSTATUS v7; // eax
  void *ExportAddress; // rsi
  void *v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  bool v14; // zf
  __int64 v16; // rax
  unsigned int v17; // ebx
  __int64 v18; // rax

  v3 = (struct _UNICODE_STRING *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x38uLL);
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_20:
      v18 = WdLogNewEntry5_WdError(v5);
      v17 = -1073741811;
      *(_QWORD *)(v18 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v18);
      return v17;
    }
    p_NumberOfMapRegisters = (const WCHAR *)&DeviceObject.Queue.Wcb.NumberOfMapRegisters;
  }
  else
  {
    p_NumberOfMapRegisters = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString(v3, p_NumberOfMapRegisters);
  v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v3, 0x38uLL);
  if ( v7 < 0 && v7 != -1073741554 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
      "We broke into the  debugger to allow a chance for debugging this issue.\n"
      "Another attempt to load it will be made now.\n",
      v7);
    JUMPOUT(0x1C016CF2CLL);
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, (char *)&DeviceObject.Queue.Wcb.DeviceRoutine, 0xFu);
  v9 = DXGMMS_EXPORT::FindExportAddress(this, (char *)&DeviceObject.Queue.Wcb.DmaWaitEntry.Blink, 0x10u);
  v10 = v9;
  if ( !ExportAddress || !v9 )
    goto LABEL_20;
  v11 = operator new(0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v11 )
  {
    v12 = (unsigned int)(a2 + 1);
    v11[1] = ExportAddress;
    *(_DWORD *)v11 = v12;
  }
  *((_QWORD *)this + 9) = v11;
  if ( v11 )
  {
    v13 = operator new(0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v13 )
    {
      v12 = (unsigned int)(a2 + 1);
      v13[1] = v10;
      *(_DWORD *)v13 = v12;
    }
    v14 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v13;
    if ( !v14 )
      return 0LL;
  }
  v16 = WdLogNewEntry5_WdLowResource(v12);
  v17 = -1073741801;
  *(_QWORD *)(v16 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v16);
  return v17;
}
