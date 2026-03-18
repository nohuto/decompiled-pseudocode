/*
 * XREFs of ArbQueryConflict @ 0x1407893F0
 * Callers:
 *     IopMemQueryConflict @ 0x1406C2410 (IopMemQueryConflict.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlCopyRangeList @ 0x140466970 (RtlCopyRangeList.c)
 *     RtlFreeRangeList @ 0x14053F020 (RtlFreeRangeList.c)
 *     IoGetDeviceProperty @ 0x140556EB0 (IoGetDeviceProperty.c)
 *     RtlDeleteOwnersRanges @ 0x14055AF80 (RtlDeleteOwnersRanges.c)
 *     ArbpBuildAlternative @ 0x1405CF810 (ArbpBuildAlternative.c)
 */

__int64 __fastcall ArbQueryConflict(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  PVOID PoolWithTag; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  struct _RTL_RANGE_LIST *v8; // rdx
  struct _RTL_RANGE_LIST *v9; // rcx
  int v10; // edi
  NTSTATUS DeviceProperty; // eax
  int v12; // ecx
  NTSTATUS v13; // eax
  int v14; // ecx
  unsigned __int8 (__fastcall *v15)(__int64, _QWORD *); // rax
  void *v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h]
  _QWORD v25[10]; // [rsp+50h] [rbp-B0h] BYREF
  PDEVICE_OBJECT v26[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v27; // [rsp+100h] [rbp+0h] BYREF
  __int64 v28; // [rsp+108h] [rbp+8h]

  v4 = 0;
  PoolWithTag = 0LL;
  LODWORD(v6) = 10;
  memset(v25, 0, sizeof(v25));
  v7 = *(_QWORD *)(a1 + 328);
  v8 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  v21 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 328) = ArbpQueryConflictCallback;
  v9 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  *(_QWORD *)(a1 + 320) = &v22;
  v24 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), &v27);
  if ( v10 < 0 )
    goto LABEL_18;
  memset(v25, 0, sizeof(v25));
  v25[1] = v28;
  v25[3] = v28;
  v25[0] = v27;
  v25[5] = &v27;
  v25[7] = &v27;
  v25[2] = v27;
  v25[4] = v26;
  LODWORD(v25[6]) = 1;
  LOWORD(v25[8]) = 4;
  memset(v26, 0, sizeof(v26));
  v26[4] = *(PDEVICE_OBJECT *)a2;
  LODWORD(v26[5]) = 4;
  DeviceProperty = IoGetDeviceProperty(v26[4], DevicePropertyLegacyBusType, 4u, &v26[7], &ResultLength);
  v12 = (int)v26[7];
  if ( DeviceProperty < 0 )
    v12 = 1;
  LODWORD(v26[7]) = v12;
  v13 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, &v26[8], &ResultLength);
  v14 = (int)v26[8];
  if ( v13 < 0 )
    v14 = 0;
  LODWORD(v26[8]) = v14;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xF0uLL, 0x43627241u);
  if ( !PoolWithTag )
  {
    v10 = -1073741670;
LABEL_18:
    v18 = v21;
    goto LABEL_19;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v25);
  if ( v10 < 0 )
    goto LABEL_18;
  RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), *(PVOID *)(v25[4] + 32LL));
  while ( 1 )
  {
    v25[2] = v25[0];
    v10 = 0;
    v25[3] = v25[1];
    v15 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 248);
    v22 = 0LL;
    if ( v15(a1, v25) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v16 = PoolWithTag;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24 * v6, 0x43627241u);
      if ( !PoolWithTag )
      {
        v10 = -1073741670;
        PoolWithTag = v16;
LABEL_17:
        v7 = v24;
        goto LABEL_18;
      }
      memmove(PoolWithTag, v16, 24LL * v4);
      ExFreePoolWithTag(v16, 0);
    }
    if ( !v22 )
    {
      v20 = 3LL * v4;
      *((_QWORD *)PoolWithTag + v20 + 2) = -1LL;
      ++v4;
      *((_QWORD *)PoolWithTag + v20) = 0LL;
      *((_QWORD *)PoolWithTag + v20 + 1) = 0LL;
      break;
    }
    v17 = 3LL * v4++;
    *((_QWORD *)PoolWithTag + v17) = *(_QWORD *)(v22 + 24);
    *((_QWORD *)PoolWithTag + v17 + 1) = *(_QWORD *)v22;
    *((_QWORD *)PoolWithTag + v17 + 2) = *(_QWORD *)(v22 + 8);
    v10 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), *(PVOID *)(v22 + 24));
    if ( v10 < 0 )
      goto LABEL_17;
  }
  RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
  v7 = v24;
  v18 = v21;
  *(_QWORD *)(a1 + 328) = v24;
  *(_QWORD *)(a1 + 320) = v21;
  **(_QWORD **)(a2 + 24) = PoolWithTag;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_19:
  if ( (v25[8] & 0x10) != 0 )
  {
    ExFreePoolWithTag((PVOID)v25[9], 0);
    LOWORD(v25[8]) &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
    *(_QWORD *)(a1 + 328) = v7;
    *(_QWORD *)(a1 + 320) = v18;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
