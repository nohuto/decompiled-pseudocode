/*
 * XREFs of DxgkSetIndependentFlipMode @ 0x1C0100760
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
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
  PVOID v18; // rsi
  __int64 v19; // rbx
  struct DXGADAPTER *v20; // rdi
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  PVOID Object; // [rsp+58h] [rbp-51h] BYREF
  _BYTE v36[8]; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v37[32]; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v38[40]; // [rsp+90h] [rbp-19h] BYREF

  v9 = HandleInformation;
  *(_DWORD *)HandleInformation.HandleAttributes = 0;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)Handle, &EventProfilerEnter, a3, 2094);
  HandleInformation = 0LL;
  v14 = ObReferenceObjectByHandle(Handle, 0x20000u, g_pDxgkSharedAllocationObjectType, 0, &Object, &HandleInformation);
  v18 = Object;
  v19 = v14;
  if ( v14 == -1073741788 )
  {
    v32 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v32 + 32) = -1073741788LL;
LABEL_20:
    *(_QWORD *)(v32 + 24) = Handle;
    WdLogEvent5_WdWarning(v32);
    goto LABEL_11;
  }
  if ( v14 < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v32 + 32) = v19;
    goto LABEL_20;
  }
  v20 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)Object + 2) + 72LL) + 16LL);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v20, 0LL);
  if ( *((_QWORD *)v20 + 288) == v21 )
  {
    LODWORD(v19) = -1073741823;
  }
  else
  {
    v22 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
    v19 = v22;
    if ( v22 < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v33 + 24) = v20;
      *(_QWORD *)(v33 + 32) = v19;
      WdLogEvent5_WdWarning(v33);
    }
    else if ( a7 == -1 || a7 >= *(_DWORD *)(*((_QWORD *)v20 + 288) + 80LL) )
    {
      LODWORD(v19) = -1073741811;
      v34 = WdLogNewEntry5_WdError(v24);
      *(_QWORD *)(v34 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v34);
    }
    else
    {
      v26 = *((_QWORD *)v20 + 289);
      v27 = *(_QWORD *)(v26 + 504);
      v28 = *(_QWORD *)(v26 + 512);
      if ( a4 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, struct _OBJECT_HANDLE_INFORMATION, __int64))(*(_QWORD *)(v27 + 8) + 304LL))(
          v28,
          a7,
          a2,
          a3,
          a5,
          a6,
          v9,
          a9);
      else
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, int, char, struct _OBJECT_HANDLE_INFORMATION, __int64))(*(_QWORD *)(v27 + 8) + 312LL))(
          v28,
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
  COREACCESS::~COREACCESS((COREACCESS *)v38);
  COREACCESS::~COREACCESS((COREACCESS *)v37);
LABEL_11:
  if ( v18 )
    ObfDereferenceObject(v18);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, 2094);
  return (unsigned int)v19;
}
