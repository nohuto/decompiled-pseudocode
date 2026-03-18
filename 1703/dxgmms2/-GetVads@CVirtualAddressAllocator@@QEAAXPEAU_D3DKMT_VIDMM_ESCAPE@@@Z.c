/*
 * XREFs of ?GetVads@CVirtualAddressAllocator@@QEAAXPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C009BDDC
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0092C48 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001B5C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001F5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memset @ 0x1C0015FC0 (memset.c)
 */

void __fastcall CVirtualAddressAllocator::GetVads(struct _KTHREAD **this, struct _D3DKMT_VIDMM_ESCAPE *a2)
{
  D3DKMT_VAD_ESCAPE_COMMAND Command; // edx
  UINT v5; // edi
  unsigned __int64 Value; // rdx
  int v7; // edx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r15
  _DWORD *v21; // r12
  UINT64 *p_IndexShift; // r14
  UINT NumPtes; // r9d
  __int64 v24; // r10
  __int64 v25; // rcx
  struct _KTHREAD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rbp
  unsigned int j; // r11d
  unsigned int v30; // esi
  __int64 v31; // rax
  unsigned int v32; // r11d
  __int64 v33; // rcx
  UINT k; // r10d
  struct _KTHREAD **v35; // rsi
  UINT64 NtHandle; // rax
  int v37; // eax
  __int64 v38; // rax
  struct _KTHREAD **v39; // rsi
  HANDLE hProcess; // rax
  _QWORD **v41; // rsi
  _QWORD *i; // rax
  _BYTE v43[56]; // [rsp+20h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v43, this + 7);
  Command = a2->GetVads.Command;
  v5 = 0;
  a2->GetVads.Status = 0;
  if ( Command == D3DKMT_VAD_ESCAPE_GETNUMVADS )
  {
    v41 = (_QWORD **)(this + 3);
    a2->SetFault.Value = 0;
    for ( i = *v41; i != v41; i = (_QWORD *)*i )
      a2->SetFault.Value = ++v5;
    goto LABEL_79;
  }
  Value = (unsigned int)(Command - 1);
  if ( !(_DWORD)Value )
  {
    v39 = this + 3;
    v8 = *v39;
    if ( *v39 != (struct _KTHREAD *)v39 )
    {
      Value = a2->SetFault.Value;
      while ( 1 )
      {
        ++v5;
        if ( (_DWORD)Value == -1 )
        {
          hProcess = a2->Evict.hProcess;
          if ( (unsigned __int64)hProcess >= *((_QWORD *)v8 - 2) && (unsigned __int64)hProcess < *((_QWORD *)v8 - 1) )
          {
LABEL_71:
            a2->GetVads.GetVad.StartAddress = *((_QWORD *)v8 - 2);
            a2->GetVads.GetVad.EndAddress = *((_QWORD *)v8 - 1);
            a2->GetVads.GetVad.VadType = *((_DWORD *)v8 + 8) & 0xF;
            a2->GetVads.GetVad.NumMappedRanges = *((_DWORD *)v8 + 9);
            goto LABEL_79;
          }
        }
        else if ( (_DWORD)Value == v5 )
        {
          goto LABEL_71;
        }
        v8 = *(struct _KTHREAD **)v8;
        if ( v8 == (struct _KTHREAD *)v39 )
          goto LABEL_63;
      }
    }
    goto LABEL_63;
  }
  v7 = Value - 1;
  if ( !v7 )
  {
    v35 = this + 3;
    v8 = *v35;
    if ( *v35 == (struct _KTHREAD *)v35 )
      goto LABEL_79;
    NtHandle = a2->EvictByNtHandle.NtHandle;
    while ( NtHandle < *((_QWORD *)v8 - 2) || NtHandle >= *((_QWORD *)v8 - 1) )
    {
      v8 = *(struct _KTHREAD **)v8;
      if ( v8 == (struct _KTHREAD *)v35 )
        goto LABEL_79;
    }
    Value = a2->GetVads.GetVadRange.PhysicalAdapterIndex;
    if ( (unsigned int)Value < ((*((_DWORD *)v8 + 8) >> 4) & 0x7Fu) )
    {
      v37 = 0;
      Value = (unsigned __int64)v8 + 16 * Value + 8 * Value + 56;
      v8 = *(struct _KTHREAD **)Value;
      if ( *(_QWORD *)Value != Value )
      {
        while ( v37 != a2->GetVads.GetVadRange.VaRangeIndex )
        {
          v8 = *(struct _KTHREAD **)v8;
          ++v37;
          if ( v8 == (struct _KTHREAD *)Value )
            goto LABEL_63;
        }
        v8 = (struct _KTHREAD *)((char *)v8 - 8);
        if ( v8 )
        {
          a2->GetVads.GetVadRange.StartAddress = *((_QWORD *)v8 + 12);
          a2->GetVads.GetVad.StartAddress = *((_QWORD *)v8 + 13);
          a2->GetVads.GetVadRange.OwnerType = (int)(*((_DWORD *)v8 + 16) << 28) >> 28;
          a2->GetVads.GetVadRange.pOwner = *((_QWORD *)v8 + 7);
          a2->GetVads.GetVadRange.Protection = *((_DWORD *)v8 + 22);
          a2->GetVads.GetVad.EndAddress = *((_QWORD *)v8 + 10);
          a2->GetVads.GetVadRange.OwnerOffset = *((_QWORD *)v8 + 9);
          goto LABEL_79;
        }
      }
    }
    goto LABEL_63;
  }
  Value = (unsigned int)(v7 - 1);
  if ( (_DWORD)Value )
  {
    Value = (unsigned int)(Value - 1);
    if ( (_DWORD)Value )
    {
      if ( (_DWORD)Value != 1 )
        goto LABEL_79;
      v8 = this[10];
      v9 = a2->SetFault.Value;
      if ( (unsigned int)v9 < *((_DWORD *)v8 + 1604) )
      {
        v10 = *((_QWORD *)v8 + 5021) + 472 * v9;
        a2->Evict.AllocationHandle = *(_DWORD *)(v10 + 24);
        while ( 1 )
        {
          v11 = *(unsigned int *)(v10 + 24);
          if ( (unsigned int)v11 > 0x20 )
            v11 = 32LL;
          if ( v5 >= v11 )
            break;
          v12 = 3LL * v5;
          v13 = *(_QWORD *)(*((_QWORD *)this[10] + 464)
                          + 8LL * (v5 + *(_DWORD *)(472LL * a2->SetFault.Value + *((_QWORD *)this[10] + 5021) + 20)));
          a2->GetVads.GetSegmentCaps.SegmentCaps[v12 / 3].bAperture = *(_BYTE *)(v13 + 80) & 1;
          *(&a2->GetVads.GetVad.VadAddress + v12) = *(_QWORD *)(v13 + 48);
          *(&a2->GetVads.GetVad.NumMappedRanges + 2 * v12) = *(_DWORD *)(v13 + 400);
          *(&a2->GetVads.GetVad.VadType + 2 * v12) = *(_DWORD *)(v13 + 20);
          a2->GetVads.GetPte.PageTableIndex[2 * v12 + 5] = *(_DWORD *)(v13 + 500);
          a2->GetVads.GetSegmentCaps.SegmentCaps[v12 / 3].bReservedSysMem = (*(_DWORD *)(v13 + 80) & 0x1000) != 0;
          ++v5;
        }
        goto LABEL_79;
      }
    }
    else
    {
      v8 = this[10];
      v14 = a2->SetFault.Value;
      if ( (unsigned int)v14 < *((_DWORD *)v8 + 1604) )
      {
        v15 = *((_QWORD *)v8 + 5021) + 472 * v14;
        v16 = *(_QWORD *)(v15 + 440);
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ReadOnlyMemorySupported = *(_BYTE *)v16 & 1;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.NoExecuteMemorySupported = (*(_DWORD *)v16 & 2) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.ZeroInPteSupported = (*(_DWORD *)v16 & 4) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.CacheCoherentMemorySupported = (*(_DWORD *)v16 & 0x10) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.LargePageSupported = (*(_DWORD *)v16 & 0x40) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.DualPteSupported = (*(_DWORD *)v16 & 0x80) != 0;
        a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.AllowNonAlignedLargePageAddress = BYTE1(*(_DWORD *)v16) & 1;
        a2->GetVads.GetVad.NumMappedRanges = *(_DWORD *)(v16 + 8);
        a2->GetVads.GetVad.VadType = *(_DWORD *)(v16 + 16);
        if ( *(_DWORD *)(v16 + 16) )
        {
          do
          {
            v17 = v5++;
            v18 = 5 * v17;
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v18 / 5].IndexBitCount = *(_DWORD *)(v15 + 48 * v17 + 92);
            *(&a2->GetVads.GetVad.EndAddress + v18) = *(_QWORD *)(v15 + 48 * v17 + 104);
            a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[v18 / 5].IndexShift = *(_QWORD *)(v15 + 48 * v17 + 112);
            *(&a2->GetVads.GetVadRange.pOwner + v18) = *(_QWORD *)(v15 + 48 * v17 + 120);
            *(&a2->GetVads.GetVadRange.OwnerOffset + v18) = *(_QWORD *)(v15 + 48 * v17 + 128);
          }
          while ( v5 < *(_DWORD *)(v16 + 16) );
        }
        goto LABEL_79;
      }
    }
    goto LABEL_63;
  }
  v8 = this[10];
  v19 = a2->SetFault.Value;
  if ( (unsigned int)v19 >= *((_DWORD *)v8 + 1604)
    || a2->GetVads.GetPte.NumPtes > 0x40
    || (v20 = *((_QWORD *)v8 + 5021) + 472 * v19, v21 = *(_DWORD **)(v20 + 440), a2->Evict.AllocationHandle >= v21[4]) )
  {
LABEL_63:
    a2->GetVads.Status = -1073741811;
LABEL_64:
    v38 = WdLogNewEntry5_WdWarning(v8, Value);
    WdLogEvent5_WdWarning(v38);
    goto LABEL_79;
  }
  p_IndexShift = &a2->GetVads.GetGpuMmuCaps.GpuMmuCaps.PageTableLevelDesk[0].IndexShift;
  memset(&a2->Defrag + 1, 0, 0x400uLL);
  NumPtes = a2->GetVads.GetPte.NumPtes;
  v24 = 0LL;
  v25 = a2->SetFault.Value;
  a2->GetVads.GetPte.NumPtes = 0;
  v26 = this[14];
  LODWORD(v27) = v21[4];
  v25 *= 32LL;
  v28 = *(_QWORD *)((char *)v26 + v25);
  for ( j = *(_DWORD *)((char *)v26 + v25 + 16); (_DWORD)v27; j = *(_DWORD *)(v20 + 48LL * (unsigned int)(v27 - 1) + 88) )
  {
    v27 = (unsigned int)(v27 - 1);
    if ( !v28 || !(_DWORD)v27 && !v24 )
      break;
    v8 = (struct _KTHREAD *)*(&a2->GetVads.GetVadRange.VaRangeIndex + v27);
    Value = (unsigned __int64)v8;
    if ( !(_DWORD)v27 && (*(_DWORD *)v24 & 0x40) != 0 )
      Value = (unsigned int)v8 >> 4;
    if ( (unsigned int)Value >= j )
      goto LABEL_64;
    v30 = 0;
    if ( (_DWORD)v27 == 1 && (*v21 & 0x80u) != 0 && a2->GetVads.GetPte.b64KBPte )
      v30 = j;
    if ( (_DWORD)v27 == a2->Evict.AllocationHandle )
    {
      v32 = j - Value;
      if ( v32 < NumPtes )
        NumPtes = v32;
      if ( (_DWORD)v27 )
      {
        for ( k = 0; k < NumPtes; p_IndexShift += 2 )
        {
          *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v28 + 24) + 16LL * (v30 + (_DWORD)Value + k));
          if ( (_DWORD)v27 == 1 )
          {
            if ( (*v21 & 0x80u) != 0 )
              *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | ((unsigned __int64)(v30 != 0) << 19);
            else
              *p_IndexShift = *p_IndexShift & 0xFFFFFFFFFFF7FFFFuLL | ((unsigned __int64)((**(_DWORD **)(v28 + 24) & 0x60000) == 0x20000LL) << 19);
          }
          ++k;
        }
        a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v28 + 4);
      }
      else
      {
        if ( NumPtes )
        {
          do
          {
            v33 = 2LL * (v5 + (unsigned int)Value);
            ++v5;
            *(_OWORD *)p_IndexShift = *(_OWORD *)(*(_QWORD *)(v24 + 24) + 8 * v33);
            p_IndexShift += 2;
          }
          while ( v5 < NumPtes );
        }
        a2->GetVads.GetPte.NumValidEntries = *(_DWORD *)(v24 + 4);
        a2->GetVads.GetPte.b64KBPte = (*(_DWORD *)v24 & 0x40) != 0;
      }
      a2->GetVads.GetPte.NumPtes = NumPtes;
      break;
    }
    v31 = *(_QWORD *)(v28 + 32);
    if ( (_DWORD)v27 == 1 )
      v24 = *(_QWORD *)(v31 + 8LL * (v30 + a2->GetVads.GetVadRange.PhysicalAdapterIndex));
    else
      v28 = *(_QWORD *)(v31 + 8LL * (_QWORD)v8);
  }
LABEL_79:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
}
