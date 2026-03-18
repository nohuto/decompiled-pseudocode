/*
 * XREFs of ?Initialize@DXGMMS_EXPORT@@QEAAJI@Z @ 0x1C01A9538
 * Callers:
 *     ?DeferredInitialize@DXGGLOBAL@@QEAAJI@Z @ 0x1C019D9A8 (-DeferredInitialize@DXGGLOBAL@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z @ 0x1C01A9490 (-FindExportAddress@DXGMMS_EXPORT@@QEAAPEAXPEADI@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Initialize(DXGMMS_EXPORT *this, int a2)
{
  struct _UNICODE_STRING *v2; // rsi
  __int64 v5; // rcx
  const WCHAR *v6; // rdx
  NTSTATUS v7; // eax
  void *ExportAddress; // rbp
  void *v9; // rax
  void *v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  bool v17; // zf
  __int64 v19; // rax

  v2 = (struct _UNICODE_STRING *)((char *)this + 8);
  memset((char *)this + 8, 0, 0x38uLL);
  if ( a2 )
  {
    if ( a2 != 1 )
    {
LABEL_19:
      v19 = WdLogNewEntry5_WdError(v5);
      v15 = -1073741811;
      *(_QWORD *)(v19 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v19);
      return v15;
    }
    v6 = L"\\SystemRoot\\System32\\drivers\\dxgmms2.sys";
  }
  else
  {
    v6 = L"\\SystemRoot\\System32\\drivers\\dxgmms1.sys";
  }
  RtlInitUnicodeString(v2, v6);
  v7 = ZwSetSystemInformation(SystemLoadGdiDriverInSystemSpaceInformation, v2, 0x38uLL);
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
    __debugbreak();
  }
  *(_BYTE *)this = 1;
  ExportAddress = DXGMMS_EXPORT::FindExportAddress(this, "VidMmInterface", 0xFu);
  v9 = DXGMMS_EXPORT::FindExportAddress(this, "VidSchInterface", 0x10u);
  v10 = v9;
  if ( !ExportAddress || !v9 )
    goto LABEL_19;
  v11 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
  v13 = a2 + 1;
  if ( v11 )
  {
    *(_DWORD *)v11 = v13;
    v11[1] = ExportAddress;
  }
  *((_QWORD *)this + 9) = v11;
  if ( v11 )
  {
    v16 = operator new[](0x10uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v16 )
    {
      *(_DWORD *)v16 = v13;
      v16[1] = v10;
    }
    v17 = *((_QWORD *)this + 9) == 0LL;
    *((_QWORD *)this + 8) = v16;
    if ( !v17 )
      return 0LL;
  }
  v14 = WdLogNewEntry5_WdLowResource(v12);
  v15 = -1073741801;
  *(_QWORD *)(v14 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v14);
  return v15;
}
