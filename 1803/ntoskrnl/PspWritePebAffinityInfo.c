/*
 * XREFs of PspWritePebAffinityInfo @ 0x1404F8C88
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x1404E9DD0 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140532058 (PspApplyJobLimitsToProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x14077AED8 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14006CFCC (KeQueryGroupMaskProcess.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r8
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  int v11; // r9d
  char v12; // bl
  __int16 v13; // cx
  unsigned int v14; // ebx
  signed __int32 v15[8]; // [rsp+0h] [rbp-98h] BYREF
  int v16; // [rsp+20h] [rbp-78h]
  unsigned int GroupMaskProcess; // [rsp+24h] [rbp-74h]
  unsigned int v18; // [rsp+28h] [rbp-70h]
  __int64 v19; // [rsp+30h] [rbp-68h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+48h] [rbp-50h]
  _BYTE v23[48]; // [rsp+50h] [rbp-48h] BYREF

  v22 = a2;
  v16 = 0;
  v3 = *(_QWORD *)(a2 + 1016);
  v19 = v3;
  if ( !v3 )
    return;
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      v14 = 0;
      if ( a2 != *(_QWORD *)(a1 + 544) )
      {
        v16 = 2;
        v14 = 2;
      }
      if ( v14 < 2 )
      {
LABEL_20:
        if ( (v14 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v23);
        goto LABEL_3;
      }
    }
    else
    {
      LOBYTE(v14) = 3;
      v16 = 3;
    }
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 760)) )
      return;
    goto LABEL_20;
  }
LABEL_3:
  v4 = 0LL;
  v5 = *(__int64 **)(a2 + 1064);
  if ( v5 )
  {
    v13 = *((_WORD *)v5 + 4);
    if ( v13 == 332 || v13 == 452 )
      v4 = *v5;
  }
  v20 = v4;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v7, GroupMaskProcess);
      v18 = v7;
      v8 = *(_QWORD *)(a2 + 8 * v7 + 88);
      v21 = v8;
    }
    while ( !v8 );
    *(_QWORD *)(v3 + 312) = v8;
    if ( v6 )
      *(_DWORD *)(v6 + 192) = v8 | HIDWORD(v8);
    _InterlockedOr(v15, 0);
    v9 = KeQueryGroupMaskProcess(a2);
  }
  while ( v11 != v9 || v10 != *(_QWORD *)(a2 + 8LL * v18 + 88) );
  v12 = v16;
  if ( v16 )
  {
    if ( (v16 & 1) != 0 )
      KiUnstackDetachProcess((__int64)v23, 0LL);
    if ( (v12 & 2) != 0 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 760));
  }
}
