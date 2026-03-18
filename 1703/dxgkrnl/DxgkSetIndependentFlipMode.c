/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C01810A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkSetIndependentFlipMode(
        HANDLE Handle,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7,
        struct _OBJECT_HANDLE_INFORMATION HandleInformation,
        __int64 a9)
{
  struct _OBJECT_HANDLE_INFORMATION v9; // r14
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  PVOID v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v24; // rdi
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v37[8]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v38[32]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v39[40]; // [rsp+90h] [rbp-19h] BYREF

  v9 = HandleInformation;
  *(_DWORD *)HandleInformation.HandleAttributes = 0;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)Handle, &EventProfilerEnter, a3, 2094);
  HandleInformation = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v19 = Object;
  v20 = v14;
  if ( v14 == -1073741788 )
  {
    v21 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v21 + 32) = -1073741788LL;
LABEL_6:
    *(_QWORD *)(v21 + 24) = Handle;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_18;
  }
  if ( v14 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
    *(_QWORD *)(v21 + 32) = v20;
    goto LABEL_6;
  }
  v24 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v24, 0LL);
  v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37);
  v20 = v25;
  if ( v25 >= 0 )
  {
    if ( a7 == -1 || a7 >= *(_DWORD *)(*((_QWORD *)v24 + 285) + 80LL) )
    {
      LODWORD(v20) = -1073741811;
      v34 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v34);
    }
    else
    {
      v31 = *((_QWORD *)v24 + 286);
      v32 = *(_QWORD *)(v31 + 408);
      v33 = *(_QWORD *)(v31 + 416);
      if ( a4 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, struct _OBJECT_HANDLE_INFORMATION, __int64))(*(_QWORD *)(v32 + 8) + 304LL))(
          v33,
          a7,
          a2,
          a3,
          a5,
          a6,
          v9,
          a9);
      else
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, char, struct _OBJECT_HANDLE_INFORMATION, __int64))(*(_QWORD *)(v32 + 8) + 312LL))(
          v33,
          a7,
          a2,
          a3,
          a5,
          a6,
          1,
          v9,
          a9);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = v24;
    *(_QWORD *)(v30 + 32) = v20;
    WdLogEvent5_WdWarning(v30);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v39);
  COREACCESS::~COREACCESS((COREACCESS *)v38);
LABEL_18:
  if ( v19 )
    ObfDereferenceObject(v19);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 2094);
  return (unsigned int)v20;
}
