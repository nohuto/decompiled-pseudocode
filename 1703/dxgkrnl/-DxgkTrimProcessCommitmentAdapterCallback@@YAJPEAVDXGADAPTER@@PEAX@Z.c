/*
 * XREFs of ?DxgkTrimProcessCommitmentAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01A18E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  __int64 *v19; // [rsp+48h] [rbp-31h]
  __int64 v20; // [rsp+50h] [rbp-29h]
  char v21[8]; // [rsp+58h] [rbp-21h] BYREF
  struct DXGADAPTER *v22; // [rsp+60h] [rbp-19h]
  char v23; // [rsp+68h] [rbp-11h]
  char v24[8]; // [rsp+70h] [rbp-9h] BYREF
  char v25[32]; // [rsp+78h] [rbp-1h] BYREF
  char v26[40]; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v27; // [rsp+E8h] [rbp+6Fh] BYREF

  if ( a2[3] < a2[2] )
  {
    v22 = a1;
    v23 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
    if ( *((_DWORD *)a1 + 44) == 1 )
    {
      v4 = *a2;
      v18 = 0LL;
      v19 = 0LL;
      v4 += 304LL;
      v20 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v4, 0LL);
      *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
      v5 = *a2 + 320LL;
      v6 = *(__int64 ***)(*a2 + 328LL);
      if ( *v6 != (__int64 *)v5 )
        __fastfail(3u);
      v19 = *(__int64 **)(*a2 + 328LL);
      v18 = v5;
      *v6 = &v18;
      *(_QWORD *)(v5 + 8) = &v18;
      v7 = *a2 + 304LL;
      *(_QWORD *)(v7 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 286) + 432LL)
                                                                                         + 8LL)
                                                                             + 1112LL))(
             *(_QWORD *)(*((_QWORD *)a1 + 286) + 440LL),
             *a2,
             &v18,
             *((unsigned int *)a2 + 2)) == -1071775484 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, a1, 0LL);
        if ( (a2[1] & 2) != 0 || (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24) >= 0 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 286) + 432LL) + 8LL)
                                                                                       + 1104LL))(
            *(_QWORD *)(*((_QWORD *)a1 + 286) + 440LL),
            *a2,
            &v18,
            *((unsigned int *)a2 + 2),
            a2[2] - a2[3],
            &v27);
          a2[3] += v27;
        }
        else
        {
          v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
          *(_QWORD *)(v12 + 24) = a1;
          WdLogEvent5_WdWarning(v12);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v26);
        COREACCESS::~COREACCESS((COREACCESS *)v25);
      }
      v13 = *a2 + 304LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
      v14 = v18;
      v15 = v19;
      if ( *(__int64 **)(v18 + 8) != &v18 || (__int64 *)*v19 != &v18 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v14 + 8) = v15;
      v16 = *a2 + 304LL;
      *(_QWORD *)(v16 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( v23 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v21);
  }
  return 0LL;
}
