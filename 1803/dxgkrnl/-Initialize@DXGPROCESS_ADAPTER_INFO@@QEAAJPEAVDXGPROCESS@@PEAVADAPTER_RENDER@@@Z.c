/*
 * XREFs of ?Initialize@DXGPROCESS_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A05D0
 * Callers:
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C00F7E84 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0016444 (-IsVmProcessOrVmValidation@DXGPROCESS@@QEAAEPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C00A0590 (-CloseVidMmAdapter@DXGPROCESS_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z @ 0x1C00A3E8C (-DdiCreateProcess@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEPROCESS@@@Z.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1C0163418 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO::Initialize(
        DXGPROCESS_ADAPTER_INFO *this,
        unsigned __int64 a2,
        struct ADAPTER_RENDER *a3)
{
  __int64 v3; // rdi
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  char v11; // cl
  char IsVmProcessOrVmValidation; // al
  unsigned __int8 v13; // r8
  char v14; // r12
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  HANDLE hKmdProcess; // rdx
  char v20; // al
  unsigned int v22; // r13d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  SIZE_T v27; // rax
  PVOID v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  DXGPROCESS_ADAPTER_INFO *v31; // rcx
  __int64 v32; // r12
  __int64 v33; // rcx
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // [rsp+20h] [rbp-69h]
  _DXGKARG_SETVIRTUALMACHINEDATA v43; // [rsp+28h] [rbp-61h] BYREF
  _DXGKARG_CREATEPROCESS v44; // [rsp+40h] [rbp-49h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-11h] BYREF

  LODWORD(v3) = 0;
  if ( *((_BYTE *)this + 73) )
    return (unsigned int)v3;
  v7 = *((_QWORD *)a3 + 2);
  if ( !*(_BYTE *)(v7 + 185) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(*(_QWORD *)(*((_QWORD *)a3 + 68) + 8LL) + 1184LL))(
           *((_QWORD *)a3 + 69),
           a2);
    v3 = v8;
    if ( v8 < 0 )
    {
      v26 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v26 + 24) = *((_QWORD *)a3 + 2);
      *(_QWORD *)(v26 + 32) = v3;
      WdLogEvent5_WdError(v26);
      return (unsigned int)v3;
    }
    *((_BYTE *)this + 72) = 1;
    v7 = *((_QWORD *)a3 + 2);
  }
  if ( (*(_DWORD *)(v7 + 1836) & 0x80u) != 0 )
  {
    v22 = *(_DWORD *)(v7 + 248);
    if ( v22 == 1 )
    {
      *((_QWORD *)this + 1) = this;
    }
    else
    {
      v27 = 4LL * v22;
      if ( !is_mul_ok(v22, 4uLL) )
        v27 = -1LL;
      v28 = operator new(v27, 0x4B677844u, 1, PagedPool);
      *((_QWORD *)this + 1) = v28;
      if ( !v28 )
      {
        v30 = WdLogNewEntry5_WdLowResource(v29);
        *(_QWORD *)(v30 + 24) = 1919LL;
        WdLogEvent5_WdLowResource(v30);
        LODWORD(v3) = -1073741801;
LABEL_31:
        DXGPROCESS_ADAPTER_INFO::CloseVidMmAdapter(this, (struct DXGPROCESS *)a2, a3);
        v31 = (DXGPROCESS_ADAPTER_INFO *)*((_QWORD *)this + 1);
        if ( v31 != this )
        {
          operator delete[](v31);
          *((_QWORD *)this + 1) = 0LL;
        }
        return (unsigned int)v3;
      }
    }
    v23 = *(_DWORD *)(v7 + 300);
    v24 = v22;
    if ( (v23 & 8) != 0 || (v23 & 4) != 0 || (v23 & 0x10) != 0 || (*(_BYTE *)(a2 + 323) & 4) != 0 )
    {
      if ( v22 )
      {
        v25 = 0LL;
        do
        {
          *(_DWORD *)(v25 + *((_QWORD *)this + 1)) = *(_DWORD *)(a2 + 64);
          v25 += 4LL;
          --v24;
        }
        while ( v24 );
      }
    }
    else
    {
      v32 = 0LL;
      if ( v22 )
      {
        v33 = 0LL;
        v42 = 0LL;
        do
        {
          v34 = *(_QWORD *)(v7 + 2360);
          if ( (*(_DWORD *)(v33 + v34 + 16) & 1) != 0 )
          {
            v35 = ExShareAddressSpaceWithDevice(
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + v34 + 8) + 64LL) + 152LL),
                    *((_QWORD *)this + 1) + 4 * v32);
            v3 = v35;
            if ( v35 < 0 )
            {
              v37 = WdLogNewEntry5_WdError(v36);
              *(_QWORD *)(v37 + 24) = v7;
              *(_QWORD *)(v37 + 32) = v3;
              WdLogEvent5_WdError(v37);
              goto LABEL_16;
            }
            v33 = v42;
          }
          v33 += 352LL;
          v32 = (unsigned int)(v32 + 1);
          v42 = v33;
        }
        while ( (unsigned int)v32 < v22 );
      }
    }
  }
  v10 = *(_DWORD *)(v7 + 1836);
  if ( (v10 & 0x80u) == 0 && (v10 & 0x40) == 0 )
  {
LABEL_15:
    *((_BYTE *)this + 73) = 1;
    goto LABEL_16;
  }
  memset(&v44, 0, sizeof(v44));
  v11 = *(_BYTE *)(a2 + 320);
  v44.hDxgkProcess = *(HANDLE *)(a2 + 72);
  v44.Flags.Value = v44.Flags.Value & 0xFFFFFFFC | *(_BYTE *)(a2 + 321) & 1 | (2 * (v11 & 1));
  IsVmProcessOrVmValidation = DXGPROCESS::IsVmProcessOrVmValidation((DXGPROCESS *)a2, (struct DXGADAPTER *)v7);
  v13 = *(_BYTE *)(a2 + 323);
  v44.Flags.Value = v44.Flags.Value & 0xFFFFFFF3 | (2 * (v13 & 4 | (2 * (IsVmProcessOrVmValidation & 1))));
  if ( (v13 & 8) != 0 )
  {
    v44.hKmdVmWorkerProcess = *(HANDLE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 456) + 48LL)
                                                    + 8LL * *(unsigned int *)(v7 + 200))
                                        + 16LL);
    v44.pProcessName = *(WCHAR **)(a2 + 488);
    v44.ProcessNameLength = *(_DWORD *)(a2 + 496);
  }
  v14 = 0;
  v15 = *(_BYTE *)(v7 + 4044) >= 0;
  v44.NumPasid = *(_DWORD *)(v7 + 248);
  v44.pPasid = (ULONG *)*((_QWORD *)this + 1);
  if ( ((v13 >> 3) & !v15) != 0 && (v13 & 0x10) != 0 )
  {
    if ( (v13 & 8) != 0 )
      v38 = *(_QWORD *)(a2 + 456);
    else
      v38 = a2 & -(__int64)((v13 & 4) != 0);
    KeStackAttachProcess(*(PRKPROCESS *)(*(_QWORD *)(v38 + 456) + 184LL), &ApcState);
    v14 = 1;
  }
  LODWORD(v3) = ADAPTER_RENDER::DdiCreateProcess(a3, &v44);
  if ( v14 )
    KeUnstackDetachProcess(&ApcState);
  if ( (int)v3 >= 0 )
  {
    hKmdProcess = v44.hKmdProcess;
    *((_QWORD *)this + 2) = v44.hKmdProcess;
    v20 = *(_BYTE *)(a2 + 323);
    if ( (v20 & 4) != 0 )
    {
      if ( (v20 & 8) != 0 )
        v39 = *(_QWORD *)(a2 + 456);
      else
        v39 = a2;
      v40 = *(_QWORD *)(v39 + 456);
      *(_QWORD *)&v43.Flags.0 = 0LL;
      v43.hKmdVmWorkerProcess = hKmdProcess;
      v43.pVmGuid = (GUID *)(v40 + 192);
      v43.Flags.Value = *(_BYTE *)(v40 + 240) & 1;
      ADAPTER_RENDER::DdiSetVirtualMachineData(a3, &v43);
    }
    goto LABEL_15;
  }
  v41 = WdLogNewEntry5_WdWarning(v17, v16, v18);
  *(_QWORD *)(v41 + 24) = 2013LL;
  WdLogEvent5_WdWarning(v41);
LABEL_16:
  if ( (int)v3 < 0 )
    goto LABEL_31;
  return (unsigned int)v3;
}
