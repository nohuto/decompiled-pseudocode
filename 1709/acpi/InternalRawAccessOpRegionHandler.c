/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x1C0055F00
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     GetFieldUnitRegionObj @ 0x1C00185FC (GetFieldUnitRegionObj.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     AMLIGetParent @ 0x1C001BBA0 (AMLIGetParent.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0021340 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C004FBAC (ACPIInternalGetDeviceFromNSOBJ.c)
 */

__int64 __fastcall InternalRawAccessOpRegionHandler(
        char a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // rbx
  int FieldUnitRegionObj; // ebp
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // edx
  __int64 v14; // r13
  unsigned int v15; // ebp
  char *PoolWithTag; // rax
  char *v17; // rbx
  __int64 v19; // r8
  unsigned int v20; // eax
  PVOID v21; // rbp
  unsigned int v22; // edi
  int v23; // edx
  int v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object[9]; // [rsp+50h] [rbp-48h] BYREF

  dword_1C00797B8 = 0;
  v7 = 0LL;
  pszDest = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj((__int64 *)a3, &v25, a3);
  if ( FieldUnitRegionObj >= 0 )
  {
    v11 = v25;
    if ( v25 )
    {
      v7 = v25 + 120;
      dword_1C00797B8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v25 + 128), 1u);
        v11 = v25;
      }
      DereferenceObjectEx(v11);
    }
  }
  if ( FieldUnitRegionObj )
    return 3221225473LL;
  if ( !v7 )
    return 3221225473LL;
  v12 = AMLIGetParent(v7);
  AMLIDereferenceHandleEx(v7);
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_qq(
    WPP_GLOBAL_Control->DeviceExtension,
    v13,
    3,
    10,
    (__int64)&WPP_db840bf6d90e33f77fa26caded1be1bf_Traceguids,
    a3,
    v12);
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v14 = a4 + 16;
    v24 = 8;
  }
  else
  {
    v14 = *(_QWORD *)(a4 + 32);
    v24 = *(_DWORD *)(a4 + 24);
  }
  if ( !*(_DWORD *)(a3 + 28) || (v15 = *(_DWORD *)(a3 + 36) + 56, v15 <= 0x40) )
    v15 = 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x4F706341u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v15);
  v17[8] = a1;
  *(_DWORD *)v17 = 1;
  *((_DWORD *)v17 + 1) = v15;
  v17[9] = *(_BYTE *)(a3 + 20) & 0xF;
  v17[12] = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  v17[10] = BYTE1(*(_DWORD *)(a3 + 20));
  *((_QWORD *)v17 + 2) = a2;
  *((_DWORD *)v17 + 6) = *(_DWORD *)(a3 + 8);
  *((_DWORD *)v17 + 7) = *(_DWORD *)(a3 + 12);
  *((_DWORD *)v17 + 8) = *(_DWORD *)(a3 + 16);
  v17[11] = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *((_DWORD *)v17 + 12) = *(_DWORD *)(a3 + 32);
    v20 = *(_DWORD *)(a3 + 36);
    *((_DWORD *)v17 + 13) = v20;
    memmove(v17 + 56, (const void *)(a3 + 40), v20);
  }
  ACPIInternalGetDeviceFromNSOBJ(v12, Object, v19, 0LL);
  v21 = Object[0];
  *((PVOID *)v17 + 5) = Object[0];
  v22 = (*(__int64 (__fastcall **)(char *, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v17,
          v14,
          &v24,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  LOBYTE(v23) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v23,
    3,
    11,
    (__int64)&WPP_db840bf6d90e33f77fa26caded1be1bf_Traceguids,
    v22);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( v22 == -1073741789 )
  {
    *(_DWORD *)(a4 + 16) = v24;
    *(_WORD *)(a4 + 2) = 1;
  }
  ExFreePoolWithTag(v17, 0x4F706341u);
  AMLIDereferenceHandleEx(v12);
  return v22;
}
