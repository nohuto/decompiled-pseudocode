/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C0121CCC
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C01104D0 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C0121E0C (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  struct _UNICODE_STRING *v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  const WCHAR *v7; // rdx
  NTSTATUS v8; // eax
  void *ExportAddress; // rsi
  void *v10; // rax
  void *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  bool v15; // zf
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rax

  v3 = (struct _UNICODE_STRING *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x38uLL);
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_20:
      v19 = WdLogNewEntry5_WdError(v6, v5);
      v18 = -1073741811;
      *(_QWORD *)(v19 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v19);
      return v18;
    }
    v7 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v7 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString(v3, v7);
  v8 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v3, 0x38uLL);
  if ( v8 < 0 && v8 != -1073741554 )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "An attempt to load dxgmms1.sys failed with NTSTATUS 0x%x.\n"
      "We broke into the  debugger to allow a chance for debugging this issue.\n"
      "Another attempt to load it will be made now.\n",
      v8);
    JUMPOUT(0x1C0169E94LL);
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v10 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v11 = v10;
  if ( !ExportAddress || !v10 )
    goto LABEL_20;
  v12 = operator new(0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v12 )
  {
    v13 = (unsigned int)(a2 + 1);
    v12[1] = ExportAddress;
    *(_DWORD *)v12 = v13;
  }
  *((_QWORD *)this + 9) = v12;
  if ( v12 )
  {
    v14 = operator new(0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v14 )
    {
      v13 = (unsigned int)(a2 + 1);
      v14[1] = v11;
      *(_DWORD *)v14 = v13;
    }
    v15 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v14;
    if ( !v15 )
      return 0LL;
  }
  v17 = WdLogNewEntry5_WdLowResource(v13);
  v18 = -1073741801;
  *(_QWORD *)(v17 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v17);
  return v18;
}
