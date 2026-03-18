/*
 * XREFs of ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0030880
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1C01500B4 (-UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z.c)
 */

__int64 __fastcall UpdateDiagnosticAdapterCallback(
        struct DXGADAPTER *this,
        struct DXGADAPTER::_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v13[40]; // [rsp+48h] [rbp-30h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11);
  v8 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
    {
      v10 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = v8;
      WdLogEvent5_WdWarning(v10);
      goto LABEL_5;
    }
  }
  else if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))this + 154) != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    DXGADAPTER::UpdateDiagnosticReporting(this, a2);
  }
  LODWORD(v8) = 0;
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  return (unsigned int)v8;
}
