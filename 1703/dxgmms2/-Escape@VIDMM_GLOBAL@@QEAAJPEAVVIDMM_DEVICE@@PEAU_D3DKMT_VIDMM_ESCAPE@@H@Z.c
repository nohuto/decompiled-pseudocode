/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0092C48
 * Callers:
 *     VidMmEscape @ 0x1C001ECB0 (VidMmEscape.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002144 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B40 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C001EF5C (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C004D9A0 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C0094668 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0098E2C (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C0099A2C (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C0099C1C (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C009BDDC (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::Escape(
        struct _KTHREAD **this,
        struct VIDMM_DEVICE *a2,
        struct _D3DKMT_VIDMM_ESCAPE *a3,
        unsigned __int64 *a4)
{
  D3DKMT_VIDMMESCAPETYPE Type; // eax
  unsigned int v7; // ebx
  PRKEVENT *v8; // rcx
  ULONG v9; // ecx
  D3DKMT_HANDLE v10; // edx
  UINT v11; // r8d
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  VIDMM_PROCESS *v16; // rcx
  VIDMM_PROCESS *v17; // rcx
  VIDMM_PROCESS *v18; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v20; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v21; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v22; // [rsp+30h] [rbp-38h]
  _BYTE v23[40]; // [rsp+40h] [rbp-28h] BYREF

  Type = a3->Type;
  v7 = -1073741811;
  if ( a3->Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 17163LL;
    WdLogEvent5_WdAssertion(v13);
    v7 = -1073741823;
LABEL_20:
    if ( v7 != -1073741811 )
      return v7;
    goto LABEL_21;
  }
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_SETFAULT )
    goto LABEL_21;
  if ( Type <= D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST )
    return 0;
  if ( Type == D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK )
  {
    v7 = VIDMM_GLOBAL::ApertureCorruptionCheck((VIDMM_GLOBAL *)this, 0LL, (__int64)a3);
    goto LABEL_20;
  }
  if ( Type != D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST )
  {
    switch ( Type )
    {
      case D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS:
        v9 = dword_1C003C368;
        v10 = dword_1C003C364;
        v11 = dword_1C003C35C;
        dword_1C003C368 = a3->Wake.bFlush;
        dword_1C003C364 = a3->Evict.AllocationHandle;
        dword_1C003C35C = a3->SuspendProcess.bAllowWakeOnSubmission;
        a3->SetFault.Value = v9;
        a3->Evict.AllocationHandle = v10;
        a3->GetVads.GetVadRange.VaRangeIndex = v11;
        v8 = (PRKEVENT *)*this;
        break;
      case D3DKMT_VIDMMESCAPETYPE_WAKE:
        v8 = (PRKEVENT *)*this;
        if ( a3->SetFault.Value )
        {
          VIDMM_WORKER_THREAD::Flush((VIDMM_WORKER_THREAD *)v8);
          return 0;
        }
        break;
      case D3DKMT_VIDMMESCAPETYPE_DEFRAG:
        VIDMM_GLOBAL::PerformDefragmentationEscape(
          (VIDMM_GLOBAL *)this,
          a3->Defrag.Operation,
          (unsigned int)a3,
          a4,
          v20,
          v21,
          v22);
        return 0;
      default:
LABEL_21:
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v23, this + 5121);
        switch ( a3->Type )
        {
          case D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO:
            v18 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v18 )
              v18 = (VIDMM_PROCESS *)*((_QWORD *)v18 + 1);
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                        v18,
                                        *((_DWORD *)this[3] + 50),
                                        0xFFFFFFFF);
            if ( !VirtualAddressAllocator )
              goto LABEL_36;
            CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
            break;
          case D3DKMT_VIDMMESCAPETYPE_SET_BUDGET:
            v17 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v17 )
              v17 = (VIDMM_PROCESS *)*((_QWORD *)v17 + 1);
            VIDMM_PROCESS::SetMemoryBudgetOverride(
              v17,
              *((_DWORD *)this[3] + 50),
              a3->EvictByNtHandle.NtHandle,
              a3->GetVads.GetVad.VadAddress);
            break;
          case D3DKMT_VIDMMESCAPETYPE_GET_BUDGET:
            v16 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v16 )
              v16 = (VIDMM_PROCESS *)*((_QWORD *)v16 + 1);
            VIDMM_PROCESS::GetNumBytesToTrim(v16, *((_DWORD *)this[3] + 50), &a3->EvictByNtHandle.NtHandle);
            break;
          default:
            v15 = WdLogNewEntry5_WdWarning((unsigned int)(a3->Type - 8), v14);
            WdLogEvent5_WdWarning(v15);
LABEL_36:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
            return v7;
        }
        v7 = 0;
        goto LABEL_36;
    }
    KeSetEvent(v8[19], 0, 0);
    return 0;
  }
  if ( (_DWORD)a4 )
    return 0LL;
  return (unsigned int)-1073741790;
}
