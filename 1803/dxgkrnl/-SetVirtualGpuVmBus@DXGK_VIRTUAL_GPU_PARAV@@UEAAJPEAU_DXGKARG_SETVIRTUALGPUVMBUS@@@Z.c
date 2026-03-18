/*
 * XREFs of ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0179140
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00165AC (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D140 (-AddVirtualGpu@DXGVIRTUALMACHINE@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z @ 0x1C017AC6C (-CreateVmBusChannel@DXG_HOST_VIRTUALGPU_VMBUS@@QEAAJPEAXPEAUDXGK_VIRTUAL_GPU_PARAV@@@Z.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z @ 0x1C01B71A0 (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAX@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z @ 0x1C01B723C (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2E@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::SetVirtualGpuVmBus(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_SETVIRTUALGPUVMBUS *a2)
{
  _QWORD *v2; // r14
  __int64 v5; // rcx
  __int64 DxgProcess; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGPROCESSVMWP **v10; // r15
  __int64 v11; // rax
  char v12; // si
  struct _KPROCESS *v13; // r14
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v15; // rcx
  __int64 v16; // rcx
  DXGPROCESS **Current; // rax
  int v18; // eax
  __int64 v19; // rax
  char v20; // cl
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _KTHREAD **v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  struct DXGPROCESS *v32; // [rsp+30h] [rbp-49h] BYREF
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-41h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-39h] BYREF
  DXGPUSHLOCK *v35; // [rsp+48h] [rbp-31h]
  int v36; // [rsp+50h] [rbp-29h]
  _BYTE v37[24]; // [rsp+58h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v2 = (_QWORD *)((char *)this + 128);
  LODWORD(DxgProcess) = DXG_HOST_VIRTUALGPU_VMBUS::CreateVmBusChannel(
                          (struct VMBCHANNEL__ **)this + 16,
                          a2->VmBusHandle,
                          this);
  if ( (int)DxgProcess >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v5);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v37, (struct _KTHREAD **)Global + 33);
    v10 = (DXGPROCESSVMWP **)((char *)this + 208);
    v11 = *((_QWORD *)this + 26);
    if ( v11 )
    {
      if ( *(_BYTE *)(v11 + 472) )
      {
        LODWORD(DxgProcess) = DXGVIRTUALMACHINE::InitializeVirtualMachine(
                                *((DXGVIRTUALMACHINE **)this + 27),
                                a2->VmBusHandle);
        if ( (int)DxgProcess < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v26 + 24) = 296LL;
          goto LABEL_30;
        }
        v30 = *((_QWORD *)this + 27);
        DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34, (struct _KTHREAD **)(v30 + 64), 0);
        if ( *(struct _KTHREAD **)(v30 + 72) != KeGetCurrentThread() )
        {
          DXGPUSHLOCK::AcquireExclusive(v35);
          v36 = 2;
        }
        ++*(_DWORD *)(v30 + 4);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
LABEL_34:
        *((_BYTE *)this + 126) = 0;
        goto LABEL_35;
      }
      v28 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v28 + 24) = 285LL;
      WdLogEvent5_WdError(v28);
      LODWORD(DxgProcess) = -1073741823;
LABEL_35:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
      return (unsigned int)DxgProcess;
    }
    v12 = 0;
    if ( g_VgpuDisableVaBackedVm || (int)VmbChannelGetVaBackingProcess(*v2, &PROCESS) < 0 )
      v13 = 0LL;
    else
      v13 = PROCESS;
    if ( v13 )
    {
      ProcessDxgProcess = PsGetProcessDxgProcess(v13);
      *v10 = (DXGPROCESSVMWP *)ProcessDxgProcess;
      v15 = (DXGPROCESS *)ProcessDxgProcess;
      if ( ProcessDxgProcess )
        goto LABEL_22;
      KeStackAttachProcess(v13, &ApcState);
      DxgProcess = (int)DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)this + 26, 0LL, 0LL, a2->VmBusHandle);
      KeUnstackDetachProcess(&ApcState);
      if ( (int)DxgProcess >= 0 )
      {
        v15 = (DXGPROCESS *)*((_QWORD *)this + 26);
        v12 = 1;
LABEL_22:
        DXGPROCESS::AcquireReference(v15);
        if ( v12 )
        {
          CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v22, v21);
          v24 = DXGPROCESSVMWP::InitializeVmwpProcess(
                  *v10,
                  a2->VmBusHandle,
                  *((struct DXGPROCESS **)this + 10),
                  CurrentProcess,
                  v13,
                  *((_BYTE *)this + 113));
          DxgProcess = v24;
          if ( v24 < 0 )
          {
            v26 = WdLogNewEntry5_WdError(v25);
            *(_QWORD *)(v26 + 24) = DxgProcess;
LABEL_30:
            WdLogEvent5_WdError(v26);
            goto LABEL_35;
          }
        }
        v27 = (struct _KTHREAD **)*((_QWORD *)*v10 + 57);
        *((_QWORD *)this + 27) = v27;
        DXGVIRTUALMACHINE::AddVirtualGpu(v27, (struct _LIST_ENTRY *)this + 12);
        goto LABEL_34;
      }
      goto LABEL_16;
    }
    Current = (DXGPROCESS **)DXGPROCESS::GetCurrent(v9, v8);
    v32 = (struct DXGPROCESS *)Current;
    if ( !Current )
      goto LABEL_15;
    if ( (*((_BYTE *)Current + 323) & 4) == 0 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)Current);
      Current = 0LL;
      v32 = 0LL;
    }
    if ( !Current )
    {
LABEL_15:
      v18 = DXGPROCESS::CreateDxgProcess(&v32, 0LL, 0LL, a2->VmBusHandle);
      DxgProcess = v18;
      if ( v18 < 0 )
      {
LABEL_16:
        v19 = WdLogNewEntry5_WdLowResource(v16);
        *(_QWORD *)(v19 + 24) = DxgProcess;
        WdLogEvent5_WdLowResource(v19);
        goto LABEL_35;
      }
      Current = (DXGPROCESS **)v32;
      v12 = 1;
    }
    v20 = *((_BYTE *)Current + 323);
    if ( (v20 & 8) != 0 )
      v15 = Current[57];
    else
      v15 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v20 & 4) != 0));
    *v10 = v15;
    goto LABEL_22;
  }
  return (unsigned int)DxgProcess;
}
