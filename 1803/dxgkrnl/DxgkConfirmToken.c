/*
 * XREFs of DxgkConfirmToken @ 0x1C0108B1C
 * Callers:
 *     ?ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z @ 0x1C0018000 (-ConfirmIndependentFlipEntry@CFlipExBuffer@@UEAAX_K0II0@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkConfirmToken(
        struct DXGADAPTER *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v7; // ebp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+48h] [rbp-60h]
  _BYTE v22[8]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v23[32]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v24[40]; // [rsp+78h] [rbp-30h] BYREF

  v21 = 0LL;
  v7 = a3;
  v20 = 2095;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2095);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2095);
  if ( !a1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v18 + 24) = 2275LL;
    WdLogEvent5_WdAssertion(v18);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, a1, 0LL);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
  v15 = v11;
  if ( v11 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v19 + 24) = a1;
    *(_QWORD *)(v19 + 32) = v15;
    WdLogEvent5_WdWarning(v19);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 308) + 520LL)
                                                                                          + 8LL)
                                                                              + 384LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 308) + 528LL),
      a2,
      v7,
      a4,
      a5,
      a6);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v24);
  COREACCESS::~COREACCESS((COREACCESS *)v23);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, v20);
}
