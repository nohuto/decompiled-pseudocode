/*
 * XREFs of ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00AC9B0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0060530 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00799E4 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C00ACD14 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RunApertureCoherencyTest(VIDMM_GLOBAL *this)
{
  unsigned int *v1; // r13
  unsigned int *v3; // r14
  __int64 v4; // rcx
  int v5; // r15d
  __int64 v6; // rsi
  unsigned int v7; // r12d
  _DWORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _MDL *PagesForMdl; // rbp
  PMDL v17; // rax
  __int64 v18; // rcx
  struct _MDL *v19; // rbx
  unsigned int *v20; // rax
  __int64 v21; // r12
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 i; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+98h] [rbp+10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h] BYREF

  v1 = 0LL;
  v28 = 0LL;
  v3 = 0LL;
  v4 = *((unsigned int *)this + 926);
  v5 = 0;
  v6 = 0LL;
  v7 = 255;
  if ( !(_DWORD)v4 )
    goto LABEL_4;
  while ( 1 )
  {
    v8 = *(_DWORD **)(*((_QWORD *)this + 464) + 8 * v6);
    if ( (v8[20] & 1) == 0 )
      break;
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  v7 = v6;
  if ( (_DWORD)v6 == 255 )
  {
LABEL_4:
    v9 = WdLogNewEntry5_WdWarning(v4);
    WdLogEvent5_WdWarning(v9);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64 *, unsigned __int64 *))(*(_QWORD *)v8 + 184LL))(
           v8,
           1LL,
           &v28,
           &v27);
    if ( v5 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(this, v12, v14);
      PagesForMdl = MmAllocatePagesForMdl(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
                      gs_PhysicalAddressZero,
                      0x1000uLL);
      v17 = MmAllocatePagesForMdl(
              gs_PhysicalAddressZero,
              (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
              gs_PhysicalAddressZero,
              0x1000uLL);
      v19 = v17;
      if ( PagesForMdl
        && v17
        && (v1 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v20 = (unsigned int *)MmMapLockedPagesSpecifyCache(v19, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v3 = v20,
            v1)
        && v20 )
      {
        v21 = 0LL;
        if ( *((_DWORD *)this + 926) )
        {
          while ( 1 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * v21) + 80LL) & 1) != 0 )
            {
              v5 = VIDMM_GLOBAL::ValidateApertureCoherency(this, v6, v27, v21, PagesForMdl, v1, v19, v3, 0);
              if ( v5 < 0 )
                break;
            }
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= *((_DWORD *)this + 926) )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          MmUnmapLockedPages(v1, PagesForMdl);
          v1 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          MmUnmapLockedPages(v3, v19);
          v22 = (unsigned int *)MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000010u);
          v3 = v22;
          if ( v1 && v22 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8 * i) + 80LL) & 0x11) == 0x11 )
              {
                v5 = VIDMM_GLOBAL::ValidateApertureCoherency(this, v6, v27, i, PagesForMdl, v1, v19, v3, 1u);
                if ( v5 < 0 )
                  break;
              }
            }
          }
          else
          {
            v25 = WdLogNewEntry5_WdWarning(v23);
            WdLogEvent5_WdWarning(v25);
          }
        }
        v7 = v6;
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(v18);
        WdLogEvent5_WdWarning(v26);
      }
      if ( v3 )
        MmUnmapLockedPages(v3, v19);
      if ( v1 )
        MmUnmapLockedPages(v1, PagesForMdl);
      if ( v19 )
      {
        MmFreePagesFromMdl(v19);
        ExFreePoolWithTag(v19, 0);
      }
      if ( PagesForMdl )
      {
        MmFreePagesFromMdl(PagesForMdl);
        ExFreePoolWithTag(PagesForMdl, 0);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v13);
      WdLogEvent5_WdWarning(v15);
      v5 = 0;
    }
  }
  if ( v28 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 192LL))(v10);
  }
  return (unsigned int)v5;
}
