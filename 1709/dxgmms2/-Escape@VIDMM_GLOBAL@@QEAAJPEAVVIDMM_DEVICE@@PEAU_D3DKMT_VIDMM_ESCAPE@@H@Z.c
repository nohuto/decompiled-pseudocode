/*
 * XREFs of ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C009A7C0
 * Callers:
 *     VidMmEscape @ 0x1C0020BF0 (VidMmEscape.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002090 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013B00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0020FF0 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C0052448 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C009C380 (-PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z.c)
 *     ?Flush@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00A1220 (-Flush@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z @ 0x1C00A1E38 (-GetNumBytesToTrim@VIDMM_PROCESS@@QEAAXKPEA_K@Z.c)
 *     ?SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z @ 0x1C00A2024 (-SetMemoryBudgetOverride@VIDMM_PROCESS@@QEAAXK_K0@Z.c)
 *     ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00A4090 (-GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
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
  __int64 v14; // rax
  VIDMM_PROCESS *v15; // rcx
  VIDMM_PROCESS *v16; // rcx
  VIDMM_PROCESS *v17; // rcx
  CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  unsigned __int64 *v19; // [rsp+20h] [rbp-48h]
  unsigned __int64 *v20; // [rsp+28h] [rbp-40h]
  unsigned __int64 *v21; // [rsp+30h] [rbp-38h]
  _BYTE v22[40]; // [rsp+40h] [rbp-28h] BYREF

  Type = a3->Type;
  v7 = -1073741811;
  if ( a3->Type == D3DKMT_VIDMMESCAPETYPE_SETFAULT )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v13 + 24) = 17684LL;
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
        v9 = dword_1C00403A0;
        v10 = dword_1C004039C;
        v11 = dword_1C0040394;
        dword_1C00403A0 = a3->Wake.bFlush;
        dword_1C004039C = a3->Evict.AllocationHandle;
        dword_1C0040394 = a3->SuspendProcess.bAllowWakeOnSubmission;
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
          v19,
          v20,
          v21);
        return 0;
      default:
LABEL_21:
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v22, this + 5121);
        switch ( a3->Type )
        {
          case D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO:
            v17 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v17 )
              v17 = (VIDMM_PROCESS *)*((_QWORD *)v17 + 1);
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                        v17,
                                        *((_DWORD *)this[3] + 50),
                                        0xFFFFFFFF);
            if ( !VirtualAddressAllocator )
              goto LABEL_36;
            CVirtualAddressAllocator::GetVads(VirtualAddressAllocator, a3);
            break;
          case D3DKMT_VIDMMESCAPETYPE_SET_BUDGET:
            v16 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v16 )
              v16 = (VIDMM_PROCESS *)*((_QWORD *)v16 + 1);
            VIDMM_PROCESS::SetMemoryBudgetOverride(
              v16,
              *((_DWORD *)this[3] + 50),
              a3->EvictByNtHandle.NtHandle,
              a3->GetVads.GetVad.VadAddress);
            break;
          case D3DKMT_VIDMMESCAPETYPE_GET_BUDGET:
            v15 = (VIDMM_PROCESS *)*((_QWORD *)DXGPROCESS::GetCurrent() + 8);
            if ( v15 )
              v15 = (VIDMM_PROCESS *)*((_QWORD *)v15 + 1);
            VIDMM_PROCESS::GetNumBytesToTrim(v15, *((_DWORD *)this[3] + 50), &a3->EvictByNtHandle.NtHandle);
            break;
          default:
            v14 = WdLogNewEntry5_WdWarning((unsigned int)(a3->Type - 8));
            WdLogEvent5_WdWarning(v14);
LABEL_36:
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
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
