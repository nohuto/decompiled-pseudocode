/*
 * XREFs of PspWritePebAffinityInfo @ 0x1404ED074
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x14049BA50 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x14049E8B8 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x140549298 (PspApplyJobLimitsToProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406E0A58 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     KeQueryGroupMaskProcess @ 0x140085004 (KeQueryGroupMaskProcess.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400EDE80 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
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
  signed __int32 v14[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v15; // [rsp+20h] [rbp-88h]
  unsigned int GroupMaskProcess; // [rsp+24h] [rbp-84h]
  unsigned int v17; // [rsp+28h] [rbp-80h]
  unsigned int v18; // [rsp+2Ch] [rbp-7Ch]
  __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  $5BC46E0569261879018906DEC3127961 v23; // [rsp+50h] [rbp-58h] BYREF

  v22 = a2;
  v3 = 0;
  v15 = 0;
  v4 = *(_QWORD *)(a2 + 1016);
  v19 = v4;
  if ( !v4 )
    return;
  if ( *(_QWORD *)(a2 + 736) )
  {
    if ( a2 == *(_QWORD *)(a1 + 184) )
    {
      if ( a2 != *(_QWORD *)(a1 + 544) )
        v3 = 2;
      v15 = v3;
      if ( v3 < 2 )
      {
LABEL_20:
        if ( (v3 & 1) != 0 )
          KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)&v23);
        goto LABEL_3;
      }
    }
    else
    {
      v3 = 3;
      v15 = 3;
    }
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 760)) )
      return;
    goto LABEL_20;
  }
LABEL_3:
  v17 = v3;
  v5 = 0LL;
  v6 = *(__int64 **)(a2 + 1064);
  if ( v6 )
  {
    v13 = *((_WORD *)v6 + 4);
    if ( v13 == 332 || v13 == 452 )
      v5 = *v6;
  }
  v20 = v5;
  do
  {
    do
    {
      GroupMaskProcess = KeQueryGroupMaskProcess(a2);
      _BitScanForward((unsigned int *)&v8, GroupMaskProcess);
      v18 = v8;
      v9 = *(_QWORD *)(a2 + 8 * v8 + 88);
      v21 = v9;
    }
    while ( !v9 );
    *(_QWORD *)(v4 + 312) = v9;
    if ( v7 )
      *(_DWORD *)(v7 + 192) = v9 | HIDWORD(v9);
    _InterlockedOr(v14, 0);
    v10 = KeQueryGroupMaskProcess(a2);
  }
  while ( v12 != v10 || v11 != *(_QWORD *)(a2 + 8LL * v18 + 88) );
  if ( v3 )
  {
    if ( (v3 & 1) != 0 )
      KiUnstackDetachProcess(&v23, 0LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 760));
  }
}
