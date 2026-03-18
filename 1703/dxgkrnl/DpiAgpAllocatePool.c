/*
 * XREFs of DpiAgpAllocatePool @ 0x1C01CC6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  SIZE_T v7; // r12
  unsigned int v8; // esi
  PMDL Mdl; // rbp
  char v10; // r13
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rax
  PVOID v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v29; // rcx
  _DWORD *v30; // rsi
  __int64 v31; // rax
  char v32; // al
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  char v39; // [rsp+40h] [rbp-58h]
  unsigned int v40; // [rsp+44h] [rbp-54h]
  __int64 v41; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v42[9]; // [rsp+50h] [rbp-48h] BYREF
  char v43; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  v8 = 0;
  v41 = 0LL;
  Mdl = 0LL;
  v39 = 0;
  v10 = 0;
  v43 = 0;
  if ( !a1 || !(_DWORD)a2 || !BaseAddress )
  {
    LODWORD(v15) = -1073741811;
LABEL_35:
    if ( (int)v15 >= 0 )
      return (unsigned int)v15;
    if ( v10 != 1 )
    {
LABEL_40:
      if ( v43 != 1 )
        goto LABEL_42;
      goto LABEL_41;
    }
LABEL_37:
    if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
      MmUnmapIoSpace(BaseAddress, v7);
    else
      MmUnmapLockedPages(BaseAddress, Mdl);
    goto LABEL_40;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6
    || *(_DWORD *)(v6 + 16) != 1953656900
    || *(_DWORD *)(v6 + 20) != 2
    || !*(_QWORD *)(v6 + 712)
    || !*(_QWORD *)(v6 + 728) )
  {
    LODWORD(v15) = -1073741811;
    v37 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    return (unsigned int)v15;
  }
  *BaseAddress = 0LL;
  LOBYTE(v8) = (a2 & 0xFFF) != 0;
  v11 = ((unsigned int)a2 >> 12) + v8;
  v40 = v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v6 + 712))(
          *(_QWORD *)(v6 + 680),
          v11,
          a3,
          &v41,
          a4);
  v15 = v12;
  if ( v12 < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = *(_QWORD *)(v6 + 712);
    *(_QWORD *)(v16 + 32) = v15;
LABEL_11:
    WdLogEvent5_WdError(v16);
LABEL_32:
    v8 = v40;
    goto LABEL_35;
  }
  v39 = 1;
  Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v15) = -1073741670;
    v18 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v18 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v18);
LABEL_45:
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 720))(*(_QWORD *)(v6 + 680), v41);
    return (unsigned int)v15;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v6 + 728))(
          *(_QWORD *)(v6 + 680),
          v41,
          v11,
          0LL,
          Mdl,
          v42);
  v15 = v19;
  if ( v19 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v22 + 24) = *(_QWORD *)(v6 + 728);
    v16 = v22;
    *(_QWORD *)(v22 + 32) = v15;
    goto LABEL_11;
  }
  v43 = 1;
  if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
  {
    v23 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v23 = 1028;
        }
        else
        {
          v24 = WdLogNewEntry5_WdError((unsigned int)(v5 - 1), v20);
          *(_QWORD *)(v24 + 24) = v5;
          *(_QWORD *)(v24 + 32) = v6;
          WdLogEvent5_WdError(v24);
        }
      }
    }
    else
    {
      v23 = 516;
    }
    v25 = (PVOID)MmMapIoSpaceEx(*a4, v7, v23);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v25 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v25;
  if ( v25 )
  {
    v10 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v30 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v15) = -1073741801;
      v31 = WdLogNewEntry5_WdLowResource(v29);
      *(_QWORD *)(v31 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v31);
      v8 = v40;
      goto LABEL_37;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v41;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v42[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v7;
    v32 = *(_BYTE *)(v6 + 704) & 1;
    v30[16] = v5;
    *((_BYTE *)v30 + 60) = v32;
    *((_QWORD *)v30 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v6 + 2464), Executive, 0, 0, 0LL);
    v33 = (_QWORD *)(v6 + 2448);
    v34 = *(_QWORD *)(v6 + 2448);
    if ( *(_QWORD *)(v34 + 8) != v6 + 2448 )
      __fastfail(3u);
    *(_QWORD *)v30 = v34;
    *((_QWORD *)v30 + 1) = v33;
    *(_QWORD *)(v34 + 8) = v30;
    *v33 = v30;
    KeReleaseMutex((PRKMUTEX)(v6 + 2464), 0);
    v36 = WdLogNewEntry5_WdEvent(v35);
    *(_QWORD *)(v36 + 24) = *BaseAddress;
    WdLogEvent5_WdEvent(v36);
    goto LABEL_32;
  }
  LODWORD(v15) = -1073741670;
  v27 = WdLogNewEntry5_WdLowResource(v26);
  *(_QWORD *)(v27 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v27);
  v8 = v40;
LABEL_41:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v6 + 736))(*(_QWORD *)(v6 + 680), v41, v8, 0LL);
LABEL_42:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v39 == 1 )
    goto LABEL_45;
  return (unsigned int)v15;
}
