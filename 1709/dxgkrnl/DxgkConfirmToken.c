/*
 * XREFs of DxgkConfirmToken @ 0x1C0100AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
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
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v20[32]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v21[40]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2095);
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 2109LL;
    WdLogEvent5_WdAssertion(v17);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, a1, 0LL);
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
  v14 = v10;
  if ( v10 < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v18 + 24) = a1;
    *(_QWORD *)(v18 + 32) = v14;
    WdLogEvent5_WdWarning(v18);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 289) + 504LL)
                                                                                          + 8LL)
                                                                              + 296LL))(
      *(_QWORD *)(*((_QWORD *)a1 + 289) + 512LL),
      a2,
      v7,
      a4,
      a5,
      a6);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, 2095);
}
