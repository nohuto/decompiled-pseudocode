/*
 * XREFs of PspWritePebAffinityInfo @ 0x14045F5C4
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14045F718 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x14050D938 (PspApplyJobLimitsToProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x140716D58 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KeQueryGroupMaskProcess @ 0x14008A924 (KeQueryGroupMaskProcess.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 *v6; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r9d
  __int16 v13; // cx
  __int64 v14; // rcx
  signed __int32 v15[8]; // [rsp+0h] [rbp-98h] BYREF
  int v16; // [rsp+20h] [rbp-78h]
  unsigned int GroupMaskProcess; // [rsp+24h] [rbp-74h]
  int v18; // [rsp+28h] [rbp-70h]
  unsigned int v19; // [rsp+2Ch] [rbp-6Ch]
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  __int64 v22; // [rsp+40h] [rbp-58h]
  __int64 v23; // [rsp+48h] [rbp-50h]
  $709EDFC2F9E0D4565D6AA3C4377BC643 v24; // [rsp+50h] [rbp-48h] BYREF

  v23 = a2;
  v3 = 0;
  v16 = 0;
  v4 = *(_QWORD *)(a2 + 1016);
  v20 = v4;
  if ( !v4 )
    return;
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      v14 = *(_QWORD *)(a1 + 544);
      v3 = v14 != a2 ? 2 : 0;
      v16 = v3;
      if ( a2 == v14 )
      {
LABEL_18:
        if ( (v3 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)&v24);
        goto LABEL_3;
      }
    }
    else
    {
      v3 = 3;
      v16 = 3;
    }
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760)) )
      return;
    goto LABEL_18;
  }
LABEL_3:
  v18 = v3;
  v5 = 0LL;
  v6 = *(__int64 **)(a2 + 1064);
  if ( v6 )
  {
    v13 = *((_WORD *)v6 + 4);
    if ( v13 == 332 || v13 == 452 )
      v5 = *v6;
  }
  v21 = v5;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v8, GroupMaskProcess);
      v19 = v8;
      v9 = *(_QWORD *)(a2 + 8 * v8 + 88);
      v22 = v9;
    }
    while ( !v9 );
    *(_QWORD *)(v4 + 312) = v9;
    if ( v7 )
      *(_DWORD *)(v7 + 192) = v9 | HIDWORD(v9);
    _InterlockedOr(v15, 0);
    v10 = KeQueryGroupMaskProcess(a2);
  }
  while ( v12 != v10 || v11 != *(_QWORD *)(a2 + 8LL * v19 + 88) );
  if ( v3 )
  {
    if ( (v3 & 1) != 0 )
      KiUnstackDetachProcess(&v24, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 760));
  }
}
