/*
 * XREFs of DpiAgpAllocatePool @ 0x1C0208110
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  SIZE_T v7; // r12
  unsigned int v8; // esi
  PMDL Mdl; // rbp
  char v10; // r13
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  PVOID v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v27; // rcx
  _DWORD *v28; // rsi
  __int64 v29; // rax
  char v30; // al
  _QWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v38; // [rsp+40h] [rbp-58h]
  __int64 v39; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v40[9]; // [rsp+50h] [rbp-48h] BYREF
  char v41; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0LL;
  v7 = a2;
  v8 = 0;
  v39 = 0LL;
  Mdl = 0LL;
  v41 = 0;
  v10 = 0;
  if ( !a1 || !a2 || !BaseAddress )
  {
    LODWORD(v14) = -1073741811;
LABEL_35:
    if ( (int)v14 >= 0 )
      return (unsigned int)v14;
    if ( v10 != 1 )
      goto LABEL_41;
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6
    || *(_DWORD *)(v6 + 16) != 1953656900
    || *(_DWORD *)(v6 + 20) != 2
    || !*(_QWORD *)(v6 + 712)
    || !*(_QWORD *)(v6 + 728) )
  {
    LODWORD(v14) = -1073741811;
    v36 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v36 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    return (unsigned int)v14;
  }
  *BaseAddress = 0LL;
  LOBYTE(v8) = (a2 & 0xFFF) != 0;
  v11 = (a2 >> 12) + v8;
  v38 = v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v6 + 712))(
          *(_QWORD *)(v6 + 680),
          v11,
          a3,
          &v39,
          a4);
  v14 = v12;
  if ( v12 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v6 + 712);
    *(_QWORD *)(v15 + 32) = v14;
LABEL_11:
    WdLogEvent5_WdError(v15);
LABEL_32:
    v8 = v38;
    goto LABEL_35;
  }
  v41 = 1;
  Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v14) = -1073741670;
    v17 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v17 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 720))(*(_QWORD *)(v6 + 680), v39);
    return (unsigned int)v14;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v6 + 728))(
          *(_QWORD *)(v6 + 680),
          v39,
          v11,
          0LL,
          Mdl,
          v40);
  v14 = v18;
  if ( v18 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v6 + 728);
    v15 = v20;
    *(_QWORD *)(v20 + 32) = v14;
    goto LABEL_11;
  }
  v10 = 1;
  if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
  {
    v21 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v21 = 1028;
        }
        else
        {
          v22 = WdLogNewEntry5_WdError((unsigned int)(v5 - 1));
          *(_QWORD *)(v22 + 24) = v5;
          *(_QWORD *)(v22 + 32) = v6;
          WdLogEvent5_WdError(v22);
        }
      }
    }
    else
    {
      v21 = 516;
    }
    v23 = (PVOID)MmMapIoSpaceEx(*a4, v7, v21);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v23 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v23;
  if ( v23 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v28 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v14) = -1073741801;
      v29 = WdLogNewEntry5_WdLowResource(v27);
      *(_QWORD *)(v29 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
      v8 = v38;
LABEL_37:
      if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
        MmUnmapIoSpace(BaseAddress, v7);
      else
        MmUnmapLockedPages(BaseAddress, Mdl);
      goto LABEL_40;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v39;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v40[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v7;
    v30 = *(_BYTE *)(v6 + 704) & 1;
    v28[16] = v5;
    *((_BYTE *)v28 + 60) = v30;
    *((_QWORD *)v28 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v6 + 2464), Executive, 0, 0, 0LL);
    v31 = (_QWORD *)(v6 + 2448);
    v32 = *(_QWORD *)(v6 + 2448);
    if ( *(_QWORD *)(v32 + 8) != v6 + 2448 )
      __fastfail(3u);
    *(_QWORD *)v28 = v32;
    *((_QWORD *)v28 + 1) = v31;
    *(_QWORD *)(v32 + 8) = v28;
    *v31 = v28;
    KeReleaseMutex((PRKMUTEX)(v6 + 2464), 0);
    v35 = WdLogNewEntry5_WdEvent(v34, v33);
    *(_QWORD *)(v35 + 24) = *BaseAddress;
    WdLogEvent5_WdEvent(v35);
    goto LABEL_32;
  }
  LODWORD(v14) = -1073741670;
  v25 = WdLogNewEntry5_WdLowResource(v24);
  *(_QWORD *)(v25 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v25);
  v8 = v38;
LABEL_40:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v6 + 736))(*(_QWORD *)(v6 + 680), v39, v8, 0LL);
LABEL_41:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v41 == 1 )
    goto LABEL_44;
  return (unsigned int)v14;
}
