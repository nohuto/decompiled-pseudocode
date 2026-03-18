/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B9480
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkTrimProcessCommitmentAdapterCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 **v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-31h]
  __int64 v19; // [rsp+50h] [rbp-29h]
  char v20[8]; // [rsp+58h] [rbp-21h] BYREF
  struct DXGADAPTER *v21; // [rsp+60h] [rbp-19h]
  char v22; // [rsp+68h] [rbp-11h]
  char v23[8]; // [rsp+70h] [rbp-9h] BYREF
  char v24[32]; // [rsp+78h] [rbp-1h] BYREF
  char v25[40]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v26; // [rsp+E8h] [rbp+6Fh] BYREF

  if ( a2[3] < a2[2] )
  {
    v21 = a1;
    v22 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      v4 = *a2;
      v17 = 0LL;
      v18 = 0LL;
      v4 += 344LL;
      v19 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 360LL;
      v6 = *(__int64 ***)(*a2 + 368LL);
      if ( *v6 != (__int64 *)v5 )
        __fastfail(3u);
      v18 = *(__int64 **)(*a2 + 368LL);
      v17 = v5;
      *v6 = &v17;
      *(_QWORD *)(v5 + 8) = &v17;
      v7 = *a2 + 344LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 289) + 528LL)
                                                                                         + 8LL)
                                                                             + 1112LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 289) + 536LL),
             *a2,
             &v17,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v23, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v23) >= 0 )
        {
          v26 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 289) + 528LL) + 8LL)
                                                                                       + 1104LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 289) + 536LL),
            *a2,
            &v17,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v26);
          a2[3] += v26;
        }
        else
        {
          v11 = WdLogNewEntry5_WdWarning(v9, v8, v10);
          *(_QWORD *)(v11 + 24) = a1;
          WdLogEvent5_WdWarning(v11);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v25);
        COREACCESS::~COREACCESS((COREACCESS *)v24);
      }
      v12 = *a2 + 344LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v12, 0LL);
      *(_QWORD *)(v12 + 8) = KeGetCurrentThread();
      v13 = v17;
      v14 = v18;
      if ( *(__int64 **)(v17 + 8) != &v17 || (__int64 *)*v18 != &v17 )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v13 + 8) = v14;
      v15 = *a2 + 344LL;
      *(_QWORD *)(v15 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v15, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v22 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  }
  return 0LL;
}
