/*
 * XREFs of ACPIIoctlGetDeviceInformation @ 0x1C002CEAC
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C0001220 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 */

__int64 __fastcall ACPIIoctlGetDeviceInformation(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  unsigned int v4; // esi
  unsigned __int16 v6; // r13
  size_t v7; // rbp
  __int64 DeviceExtension; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  _IRP *MasterIrp; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  __int64 v20; // rcx
  __int64 v21; // rax

  v3 = *(unsigned int *)(a3 + 8);
  v4 = 0;
  v6 = 32;
  v7 = 32LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = DeviceExtension;
  if ( DeviceExtension )
  {
    v10 = *(_QWORD *)(DeviceExtension + 8);
    v11 = -1LL;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v12 = *(_QWORD *)(DeviceExtension + 560);
      v13 = -1LL;
      do
        ++v13;
      while ( *(_BYTE *)(v12 + v13) );
      v7 = v13 + 33;
    }
    if ( (*(_BYTE *)(v9 + 952) & 0x10) != 0 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( *(_BYTE *)(*(_QWORD *)(v9 + 576) + v14) );
      v7 += v14 + 1;
    }
    if ( (v10 & 0x400000000000LL) != 0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_BYTE *)(*(_QWORD *)(v9 + 568) + v15) );
      v7 += v15 + 1;
    }
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( v3 >= v7 )
    {
      memset(a2->AssociatedIrp.MasterIrp, 0, v7);
      if ( (*(_QWORD *)(v9 + 8) & 0x200000000000LL) != 0 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( *(_BYTE *)(*(_QWORD *)(v9 + 560) + v18) );
        LOWORD(MasterIrp->MdlAddress) = 32;
        v19 = v18 - 5;
        WORD1(MasterIrp->MdlAddress) = v19;
        WORD2(MasterIrp->MdlAddress) = 36;
        if ( v19 < 8u )
          WORD2(MasterIrp->MdlAddress) = 35;
        memmove(&MasterIrp->ThreadListEntry, (const void *)(*(_QWORD *)(v9 + 560) + 5LL), (unsigned int)v19 + 1);
        v6 = WORD1(MasterIrp->MdlAddress) + 33;
      }
      if ( (*(_BYTE *)(v9 + 952) & 0x10) != 0 )
      {
        v20 = -1LL;
        do
          ++v20;
        while ( *(_BYTE *)(*(_QWORD *)(v9 + 576) + v20) );
        LOWORD(MasterIrp->Flags) = v20;
        HIWORD(MasterIrp->Flags) = v6 + 4;
        HIWORD(MasterIrp->MdlAddress) = v6;
        memmove((char *)MasterIrp + v6, *(const void **)(v9 + 576), (unsigned int)(unsigned __int16)v20 + 1);
        v6 += LOWORD(MasterIrp->Flags) + 1;
      }
      if ( (*(_QWORD *)(v9 + 8) & 0x400000000000LL) != 0 )
      {
        *((_WORD *)&MasterIrp->Flags + 3) = v6;
        do
          ++v11;
        while ( *(_BYTE *)(*(_QWORD *)(v9 + 568) + v11) );
        *((_WORD *)&MasterIrp->Flags + 2) = v11;
        memmove((char *)MasterIrp + v6, *(const void **)(v9 + 568), (unsigned int)(unsigned __int16)v11 + 1);
      }
      v21 = *(_QWORD *)(v9 + 952);
      if ( (v21 & 4) != 0 )
      {
        LOWORD(MasterIrp->AssociatedIrp.MasterIrp) = *(_WORD *)(v9 + 598);
        HIWORD(MasterIrp->AssociatedIrp.SystemBuffer) = *(_WORD *)(v9 + 596);
        BYTE4(MasterIrp->AssociatedIrp.SystemBuffer) = *(_BYTE *)(v9 + 595);
        v21 = *(_QWORD *)(v9 + 952);
      }
      if ( (v21 & 8) != 0 )
        HIWORD(MasterIrp->AssociatedIrp.IrpCount) = *(_WORD *)(v9 + 584);
      *(_DWORD *)&MasterIrp->Type = 1248421185;
      LOBYTE(MasterIrp->Reserved) = 0;
      MasterIrp->AllocationProcessorNumber = v7;
      a2->IoStatus.Information = (unsigned __int16)v7;
    }
    else
    {
      v17 = 6LL;
      if ( v3 < 6 )
        v17 = 0LL;
      else
        MasterIrp->AllocationProcessorNumber = v7;
      a2->IoStatus.Information = v17;
      v4 = -2147483643;
    }
  }
  else
  {
    v4 = -1073741810;
  }
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
