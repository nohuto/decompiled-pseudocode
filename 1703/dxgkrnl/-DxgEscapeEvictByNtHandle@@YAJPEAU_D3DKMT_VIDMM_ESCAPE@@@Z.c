/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019384C
 * Callers:
 *     DxgkEscape @ 0x1C00D0150 (DxgkEscape.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C00061DC (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0034CAC (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DxgEscapeEvictByNtHandle(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rbx
  HANDLE hProcess; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD **v16; // rax
  _QWORD *v17; // r14
  _BYTE v19[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v20[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v21[64]; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v23; // [rsp+A8h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    v4 = ObReferenceObjectByHandle(hProcess, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &v23);
    v2 = v4;
    if ( v4 < 0 )
    {
      v9 = WdLogNewEntry5_WdWarning(v6, v5, v7, v8);
      *(_QWORD *)(v9 + 24) = a1->EvictByNtHandle.NtHandle;
      *(_QWORD *)(v9 + 32) = v2;
      WdLogEvent5_WdWarning(v9);
      return (unsigned int)v2;
    }
    v10 = Object;
    v11 = *((_QWORD *)Object + 2);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 72);
      if ( v12 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, *(struct DXGADAPTER *const *)(v12 + 16), 0LL);
        LODWORD(v2) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19);
        if ( (int)v2 < 0 )
        {
          ObfDereferenceObject(v10);
LABEL_10:
          COREACCESS::~COREACCESS((COREACCESS *)v21);
          COREACCESS::~COREACCESS((COREACCESS *)v20);
          return (unsigned int)v2;
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v11 + 72) + 16LL)) >= 2000 )
        {
          v15 = WdLogNewEntry5_WdError(v14, v13);
          *(_QWORD *)(v15 + 24) = 495LL;
          WdLogEvent5_WdError(v15);
          ObfDereferenceObject(v10);
          LODWORD(v2) = -1073741595;
          goto LABEL_10;
        }
        v16 = (_QWORD **)(v10[2] + 128LL);
        v17 = *v16;
        while ( v17 != v16 )
        {
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(v11 + 72) + 432LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v11 + 72) + 440LL),
            0LL,
            (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v17 - 5),
            0LL);
          v17 = (_QWORD *)*v17;
          v16 = (_QWORD **)(v10[2] + 128LL);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v21);
        COREACCESS::~COREACCESS((COREACCESS *)v20);
      }
    }
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v2;
}
