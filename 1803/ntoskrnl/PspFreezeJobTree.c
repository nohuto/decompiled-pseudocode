/*
 * XREFs of PspFreezeJobTree @ 0x140530BD0
 * Callers:
 *     PspFreezeJobTree @ 0x140530BD0 (PspFreezeJobTree.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspDispatchWakeNotification @ 0x140530B5C (PspDispatchWakeNotification.c)
 *     PspFreezeJobTree @ 0x140530BD0 (PspFreezeJobTree.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140536910 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspComputeReportWakeFilter @ 0x14057F950 (PspComputeReportWakeFilter.c)
 */

__int64 __fastcall PspFreezeJobTree(char *Object, __int64 a2)
{
  int v4; // esi
  __int64 v5; // r9
  int v6; // eax
  int v8; // ecx
  int v9; // ecx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // [rsp+30h] [rbp-49h] BYREF
  __int64 v14; // [rsp+38h] [rbp-41h] BYREF
  PERESOURCE Resource; // [rsp+40h] [rbp-39h]
  __int64 v16[2]; // [rsp+48h] [rbp-31h] BYREF
  int v17; // [rsp+58h] [rbp-21h]
  char v18; // [rsp+5Dh] [rbp-1Ch]
  _OWORD v19[4]; // [rsp+70h] [rbp-9h] BYREF

  v16[1] = 0LL;
  v14 = 0LL;
  memset(v19, 0, sizeof(v19));
  v16[0] = a2;
  v4 = 0;
  Resource = (PERESOURCE)(Object + 56);
  LODWORD(v13) = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  v6 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v9 = *((_DWORD *)Object + 326) & 0x200;
    if ( *(_BYTE *)(a2 + 4) )
    {
      if ( v9 )
        goto LABEL_17;
    }
    else if ( !v9 )
    {
      goto LABEL_17;
    }
  }
  if ( (v6 & 4) != 0 )
  {
    v8 = *((_DWORD *)Object + 326) & 0x80000;
    if ( *(_BYTE *)(a2 + 5) )
    {
      if ( !v8 )
        goto LABEL_3;
    }
    else if ( v8 )
    {
      goto LABEL_3;
    }
LABEL_17:
    LODWORD(v13) = -1073741811;
    ExReleaseResourceLite(Resource);
    return (unsigned int)v13;
  }
LABEL_3:
  if ( (v6 & 2) != 0 )
  {
    if ( (*((_DWORD *)Object + 326) & 0x800) != 0 )
    {
      LOBYTE(v5) = 1;
      PspComputeReportWakeFilter(Object, &v14, a2 + 8, v5);
      if ( v14 )
      {
        v10 = *((_OWORD *)Object + 56);
        v19[0] = *((_OWORD *)Object + 55);
        v11 = *((_OWORD *)Object + 57);
        v19[1] = v10;
        v12 = *((_OWORD *)Object + 58);
        v19[2] = v11;
        v19[3] = v12;
      }
    }
    *((_QWORD *)Object + 119) = *(_QWORD *)(a2 + 8);
    v6 = *(_DWORD *)a2;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( *(_BYTE *)(a2 + 4) )
      _interlockedbittestandset((volatile signed __int32 *)Object + 326, 9u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)Object + 326, 9u);
    v6 = *(_DWORD *)a2;
    v4 = 5;
  }
  if ( (v6 & 4) != 0 )
  {
    if ( *(_BYTE *)(a2 + 5) )
      _interlockedbittestandset((volatile signed __int32 *)Object + 326, 0x13u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)Object + 326, 0x13u);
    v4 = 5;
  }
  if ( v4 )
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)v16, v4);
  ExReleaseResourceLite((PERESOURCE)(Object + 56));
  if ( v4 )
  {
    PspEnumJobsAndProcessesInJobHierarchy(Object, (__int64)&v13, 0);
    if ( (int)v13 < 0 )
    {
      *(_DWORD *)a2 &= ~4u;
      v17 = 4;
      v18 = 0;
      PspFreezeJobTree(Object);
      LODWORD(v13) = 262;
    }
  }
  PspDispatchWakeNotification(Object, &v14, (__int64)v19);
  return (unsigned int)v13;
}
