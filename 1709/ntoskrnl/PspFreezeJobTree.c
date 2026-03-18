/*
 * XREFs of PspFreezeJobTree @ 0x1405128B8
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspFreezeJobTree @ 0x1405128B8 (PspFreezeJobTree.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14050FB60 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspDispatchWakeNotification @ 0x140512748 (PspDispatchWakeNotification.c)
 *     PspFreezeJobTree @ 0x1405128B8 (PspFreezeJobTree.c)
 *     PspComputeReportWakeFilter @ 0x140596B3C (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // r9
  int v6; // ecx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // [rsp+30h] [rbp-49h] BYREF
  __int64 v12; // [rsp+38h] [rbp-41h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-39h]
  __int64 v14[2]; // [rsp+48h] [rbp-31h] BYREF
  int v15; // [rsp+58h] [rbp-21h] BYREF
  char v16; // [rsp+5Dh] [rbp-1Ch]
  _OWORD v17[4]; // [rsp+70h] [rbp-9h] BYREF

  v14[1] = 0LL;
  v12 = 0LL;
  memset(v17, 0, sizeof(v17));
  v14[0] = a2;
  v4 = 0;
  Resource = (PERESOURCE)(a1 + 56);
  LODWORD(v11) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( (*(_DWORD *)(a1 + 1304) & 0x200) != 0 )
        goto LABEL_35;
    }
    else if ( (*(_DWORD *)(a1 + 1304) & 0x200) == 0 )
    {
      goto LABEL_35;
    }
  }
  if ( (v6 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
    {
      if ( (*(_DWORD *)(a1 + 1304) & 0x80000) == 0 )
        goto LABEL_3;
    }
    else if ( (*(_DWORD *)(a1 + 1304) & 0x80000) != 0 )
    {
      goto LABEL_3;
    }
LABEL_35:
    LODWORD(v11) = -1073741811;
    ExReleaseResourceLite(Resource);
    return (unsigned int)v11;
  }
LABEL_3:
  if ( (v6 & 2) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 1304) & 0x800) != 0 )
    {
      LOBYTE(v5) = 1;
      PspComputeReportWakeFilter(a1, &v12, a2 + 8, v5);
      if ( v12 )
      {
        v8 = *(_OWORD *)(a1 + 896);
        v17[0] = *(_OWORD *)(a1 + 880);
        v9 = *(_OWORD *)(a1 + 912);
        v17[1] = v8;
        v10 = *(_OWORD *)(a1 + 928);
        v17[2] = v9;
        v17[3] = v10;
      }
    }
    *(_QWORD *)(a1 + 952) = *(_QWORD *)(a2 + 8);
  }
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 9u);
    v4 = 5;
  }
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1304), 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 1304), 0x13u);
    v4 = 5;
  }
  if ( v4 )
    PspEnumJobsAndProcessesInJobHierarchy(
      (char *)a1,
      (int)PspSetJobFreezeCountCallback,
      0,
      (int)PspSetProcessFreezeStateCallback,
      (__int64)v14,
      v4);
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( v4 )
  {
    PspEnumJobsAndProcessesInJobHierarchy((char *)a1, 0, (int)PspExecuteJobFreezeThawCallback, 0, (__int64)&v11, 0);
    if ( (int)v11 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      v15 = 4;
      v16 = 0;
      PspFreezeJobTree(a1, &v15);
      LODWORD(v11) = 262;
    }
  }
  PspDispatchWakeNotification((PVOID)a1, &v12, (__int64)v17);
  return (unsigned int)v11;
}
