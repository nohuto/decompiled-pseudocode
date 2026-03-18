/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C00A4090
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C009A7C0 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001820 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013400 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0018400 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  UINT v5; // edi
  __int32 v6; // edx
  __int32 v7; // edx
  __int32 v8; // edx
  int v9; // edx
  struct _KTHREAD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r15
  _DWORD *v23; // r12
  UINT64 *p_IndexShift; // r14
  UINT NumPtes; // r9d
  __int64 v26; // r10
  __int64 v27; // rcx
  struct _KTHREAD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // rbp
  unsigned int j; // r11d
  unsigned int v32; // edx
  unsigned int v33; // esi
  __int64 v34; // rax
  UINT v35; // r11d
  __int64 v36; // rcx
  UINT k; // r10d
  struct _KTHREAD **v38; // rsi
  UINT64 NtHandle; // rax
  __int64 PhysicalAdapterIndex; // rdx
  int v41; // eax
  struct _KTHREAD **v42; // rdx
  __int64 v43; // rax
  struct _KTHREAD **v44; // rsi
  struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051 Value; // edx
  HANDLE hProcess; // rax
  _QWORD **v47; // rsi
  _QWORD *i; // rax
  _BYTE v49[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v49, this + 7);
  Command = a2->GetVads.Command;
  v5 = 0;
  a2->GetVads.Status = 0;
  if ( Command == D3DKMT_VAD_ESCAPE_GETNUMVADS )
  {
    v47 = (_QWORD **)(this + 3);
    a2->SetFault.Value = 0;
    for ( i = *v47; i != v47; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v5;
    goto LABEL_79;
  }
  v6 = Command - 1;
  if ( !v6 )
  {
    v44 = this + 3;
    v10 = *v44;
    if ( *v44 != (struct _KTHREAD *)v44 )
    {
      Value = (struct _D3DKMT_VIDMM_ESCAPE::$::$::$A49695F5F0786AEFB1DD8B465FE75636::$D12EB728496E5F4D181F76D96F6EA051)a2->SetFault.Value;
      while ( 1 )
      {
        ++v5;
        if ( Value == -1 )
        {
          hProcess = a2->Evict.hProcess;
          if ( (unsigned __int64)hProcess >= *((_QWORD *)v10 - 2) && (unsigned __int64)hProcess < *((_QWORD *)v10 - 1) )
          {
LABEL_71:
            a2->GetVads.GetVad.StartAddress = *((_QWORD *)v10 - 2);
            a2->GetVads.GetVad.EndAddress = *((_QWORD *)v10 - 1);
            a2->GetVads.GetVad.VadType = *((_DWORD *)v10 + 8) & 0xF;
            a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v10 + 9);
            goto LABEL_79;
          }
        }
        else if ( Value == v5 )
        {
          goto LABEL_71;
        }
        v10 = *(struct _KTHREAD **)v10;
        if ( v10 == (struct _KTHREAD *)v44 )
          goto LABEL_63;
      }
    }
    goto LABEL_63;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v38 = this + 3;
    v10 = *v38;
    if ( *v38 == (struct _KTHREAD *)v38 )
      goto LABEL_79;
    NtHandle = a2->EvictByNtHandle.NtHandle;
    while ( NtHandle < *((_QWORD *)v10 - 2) || NtHandle >= *((_QWORD *)v10 - 1) )
    {
      v10 = *(struct _KTHREAD **)v10;
      if ( v10 == (struct _KTHREAD *)v38 )
        goto LABEL_79;
    }
    PhysicalAdapterIndex = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex < ((*((_DWORD *)v10 + 8) >> 4) & 0x7Fu) )
    {
      v41 = 0;
      v42 = (struct _KTHREAD **)((char *)v10 + 16 * PhysicalAdapterIndex + 8 * PhysicalAdapterIndex + 56);
      v10 = *v42;
      if ( *v42 != (struct _KTHREAD *)v42 )
      {
        while ( v41 != a2->GetVads.GetVadRange.VaRangeIndex )
        {
          v10 = *(struct _KTHREAD **)v10;
          ++v41;
          if ( v10 == (struct _KTHREAD *)v42 )
            goto LABEL_63;
        }
        v10 = (struct _KTHREAD *)((char *)v10 - 8);
        if ( v10 )
        {
          a2->GetVads.GetVadRange.StartAddress = *((_QWORD *)v10 + 12);
          a2->GetVads.GetVad.StartAddress = *((_QWORD *)v10 + 13);
          a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v10 + 16) << 28) >> 28;
          a2->GetVads.GetVadRange.pOwner = *((_QWORD *)v10 + 7);
          a2->GetVads.GetVadRange.Protection = *((_DWORD *)v10 + 22);
          a2->GetVads.GetVad.EndAddress = *((_QWORD *)v10 + 10);
          a2->GetVads.GetVadRange.OwnerOffset = *((_QWORD *)v10 + 9);
          goto LABEL_79;
        }
      }
    }
    goto LABEL_63;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
        goto LABEL_79;
      v10 = this[10];
      v11 = a2->SetFault.Value;
      if ( (unsigned int)v11 < *((_DWORD *)v10 + 1604) )
      {
        v12 = *((_QWORD *)v10 + 5021) + 1552 * v11;
        a2->Evict.AllocationHandle = *(_DWORD *)(v12 + 24);
        while ( 1 )
        {
          v13 = *(unsigned int *)(v12 + 24);
          if ( (unsigned int)v13 > 0x20 )
            v13 = 32LL;
          if ( v5 >= v13 )
            break;
          v14 = 3LL * v5;
          v15 = *(_QWORD *)(*((_QWORD *)this[10] + 464)
                          + 8LL * (v5 + *(_DWORD *)(1552LL * a2->SetFault.Value + *((_QWORD *)this[10] + 5021) + 20)));
          a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bAperture = *(_BYTE *)(v15 + 80) & 1;
          *(&a2->GetVads.GetVad.VadAddress + v14) = *(_QWORD *)(v15 + 48);
          *(&a2->GetVads.GetVad.NumMappedRanges + 2 * v14) = *(_DWORD *)(v15 + 376);
          *(&a2->GetVads.GetVad.VadType + 2 * v14) = *(_DWORD *)(v15 + 20);
          a2->GetVads.GetPte.PageTableIndex[2 * v14 + 5] = *(_DWORD *)(v15 + 476);
          a2->GetVads.GetSegmentCaps.SegmentCaps[v14 / 3].bReservedSysMem = (*(_DWORD *)(v15 + 80) & 0x1000) != 0;
          ++v5;
        }
        goto LABEL_79;
      }
    }
    else
    {
      v10 = this[10];
      v16 = a2->SetFault.Value;
      if ( (unsigned int)v16 < *((_DWORD *)v10 + 1604) )
      {
        v17 = *((_QWORD *)v10 + 5021) + 1552 * v16;
        v18 = *(_QWORD *)(v17 + 440);
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v18 & 1;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v18 & 2) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v18 & 4) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v18 & 0x10) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v18 & 0x40) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v18 & 0x80) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v18) & 1;
        a2->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v18 + 8);
        a2->GetVads.GetVad.VadType = *(_DWORD *)(v18 + 16);
        if ( *(_DWORD *)(v18 + 16) )
        {
          do
          {
            v19 = v5++;
            v20 = 5 * v19;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v20 / 5].IndexBitCount = *(_DWORD *)(v17 + 48 * v19 + 92);
            *(&a2->GetVads.GetVad.EndAddress + v20) = *(_QWORD *)(v17 + 48 * v19 + 104);
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v20 / 5].IndexShift = *(_QWORD *)(v17 + 48 * v19 + 112);
            *(&a2->GetVads.GetVadRange.pOwner + v20) = *(_QWORD *)(v17 + 48 * v19 + 120);
            *(&a2->GetVads.GetVadRange.OwnerOffset + v20) = *(_QWORD *)(v17 + 48 * v19 + 128);
          }
          while ( v5 < *(_DWORD *)(v18 + 16) );
        }
        goto LABEL_79;
      }
    }
    goto LABEL_63;
  }
  v10 = this[10];
  v21 = a2->SetFault.Value;
  if ( (unsigned int)v21 >= *((_DWORD *)v10 + 1604)
    || a2->GetVads.GetPte.NumPtes > 0x40
    || (v22 = *((_QWORD *)v10 + 5021) + 1552 * v21, v23 = *(_DWORD **)(v22 + 440), a2->Evict.AllocationHandle >= v23[4]) )
  {
LABEL_63:
    a2->GetVads.Status = -1073741811;
LABEL_64:
    v43 = WdLogNewEntry5_WdWarning(v10);
    WdLogEvent5_WdWarning(v43);
    goto LABEL_79;
  }
  p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
  memset(&a2->Defrag + 1, 0, 0x400uLL);
  NumPtes = a2->GetVads.GetPte.NumPtes;
  v26 = 0LL;
  v27 = a2->SetFault.Value;
  a2->GetVads.GetPte.NumPtes = 0;
  v28 = this[14];
  LODWORD(v29) = v23[4];
  v27 *= 32LL;
  v30 = *(_QWORD *)((char *)v28 + v27);
  for ( j = *(_DWORD *)((char *)v28 + v27 + 16); (_DWORD)v29; j = *(_DWORD *)(v22 + 48LL * (unsigned int)(v29 - 1) + 88) )
  {
    v29 = (unsigned int)(v29 - 1);
    if ( !v30 || !(_DWORD)v29 && !v26 )
      break;
    v10 = (struct _KTHREAD *)*(&a2->GetVads.GetVadRange.VaRangeIndex + v29);
    v32 = *(&a2->GetVads.GetVadRange.VaRangeIndex + v29);
    if ( !(_DWORD)v29 && (*(_DWORD *)v26 & 0x40) != 0 )
      v32 >>= 4;
    if ( v32 >= j )
      goto LABEL_64;
    v33 = 0;
    if ( (_DWORD)v29 == 1 && (*v23 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
      v33 = j;
    if ( (_DWORD)v29 == a2->Evict.AllocationHandle )
    {
      v35 = j - v32;
      if ( v35 < NumPtes )
        NumPtes = v35;
      if ( (_DWORD)v29 )
      {
        for ( k = 0; k < NumPtes; p_IndexShift += 2 )
        {
          *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v30 + 24) + 16LL * (v33 + v32 + k));
          if ( (_DWORD)v29 == 1 )
          {
            if ( (*v23 & 0x80u) != 0 )
              *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | ((unsigned __int64)(v33 != 0) << 19);
            else
              *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | ((unsigned __int64)((**(_DWORD **)(v30 + 24) & 0x60000) == 0x20000LL) << 19);
          }
          ++k;
        }
        a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v30 + 4);
      }
      else
      {
        if ( NumPtes )
        {
          do
          {
            v36 = 2LL * (v5 + v32);
            ++v5;
            *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v26 + 24) + 8 * v36);
            p_IndexShift += 2;
          }
          while ( v5 < NumPtes );
        }
        a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v26 + 4);
        a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v26 & 0x40) != 0;
      }
      a2->GetVads.GetPte.NumPtes = NumPtes;
      break;
    }
    v34 = *(_QWORD *)(v30 + 32);
    if ( (_DWORD)v29 == 1 )
      v26 = *(_QWORD *)(v34 + 8LL * (v33 + (unsigned int)v10));
    else
      v30 = *(_QWORD *)(v34 + 8LL * (_QWORD)v10);
  }
LABEL_79:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v49);
}
