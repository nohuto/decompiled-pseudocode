/*
 * XREFs of InternalRawAccessOpRegionHandler @ 0x1C0035EB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00213B4 (WPP_RECORDER_SF_qq.c)
 *     ACPIInternalGetDeviceFromNSOBJ @ 0x1C0029E0C (ACPIInternalGetDeviceFromNSOBJ.c)
 *     AMLIGetParent @ 0x1C0043D24 (AMLIGetParent.c)
 *     GetFieldUnitRegionObj @ 0x1C0046B60 (GetFieldUnitRegionObj.c)
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
  volatile signed __int32 *v7; // rbx
  int FieldUnitRegionObj; // ebp
  __int64 v11; // rdx
  volatile signed __int32 *v12; // r15
  int v13; // edx
  __int64 v14; // r13
  int v15; // eax
  unsigned int v16; // ebp
  char *PoolWithTag; // rax
  char *v18; // rbx
  __int64 v20; // r8
  unsigned int v21; // eax
  PVOID v22; // rbp
  unsigned int v23; // edi
  int v24; // edx
  int v25; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object[9]; // [rsp+50h] [rbp-48h] BYREF

  dword_1C00677B8 = 0;
  v7 = 0LL;
  pszDest = 0;
  FieldUnitRegionObj = GetFieldUnitRegionObj(a3, &v26);
  if ( FieldUnitRegionObj >= 0 )
  {
    v11 = v26;
    if ( v26 )
    {
      v7 = (volatile signed __int32 *)(v26 + 120);
      dword_1C00677B8 = 0;
      pszDest = 0;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)(v26 + 128), 1u);
        v11 = v26;
      }
      DereferenceObjectEx(v11);
    }
  }
  if ( FieldUnitRegionObj )
    return 3221225473LL;
  if ( !v7 )
    return 3221225473LL;
  v12 = (volatile signed __int32 *)AMLIGetParent(v7);
  AMLIDereferenceHandleEx(v7);
  LOBYTE(v13) = 4;
  WPP_RECORDER_SF_qq(
    WPP_GLOBAL_Control->DeviceExtension,
    v13,
    3,
    10,
    (__int64)&WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids,
    a3,
    (char)v12);
  if ( !a5 || !*(_QWORD *)(a5 + 16) )
    return 3221225473LL;
  if ( *(_WORD *)(a4 + 2) == 1 )
  {
    v14 = a4 + 16;
    v15 = 8;
  }
  else
  {
    v14 = *(_QWORD *)(a4 + 32);
    v15 = *(_DWORD *)(a4 + 24);
  }
  v25 = v15;
  if ( !*(_DWORD *)(a3 + 28) || (v16 = *(_DWORD *)(a3 + 36) + 56, v16 <= 0x40) )
    v16 = 64;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x4F706341u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, v16);
  v18[8] = a1;
  *(_DWORD *)v18 = 1;
  *((_DWORD *)v18 + 1) = v16;
  v18[9] = *(_BYTE *)(a3 + 20) & 0xF;
  v18[12] = (*(_DWORD *)(a3 + 20) >> 4) & 6;
  v18[10] = BYTE1(*(_DWORD *)(a3 + 20));
  *((_QWORD *)v18 + 2) = a2;
  *((_DWORD *)v18 + 6) = *(_DWORD *)(a3 + 8);
  *((_DWORD *)v18 + 7) = *(_DWORD *)(a3 + 12);
  *((_DWORD *)v18 + 8) = *(_DWORD *)(a3 + 16);
  v18[11] = *(_BYTE *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 28) )
  {
    *((_DWORD *)v18 + 12) = *(_DWORD *)(a3 + 32);
    v21 = *(_DWORD *)(a3 + 36);
    *((_DWORD *)v18 + 13) = v21;
    memmove(v18 + 56, (const void *)(a3 + 40), v21);
  }
  ACPIInternalGetDeviceFromNSOBJ((__int64)v12, Object, v20, 0LL);
  v22 = Object[0];
  *((PVOID *)v18 + 5) = Object[0];
  v23 = (*(__int64 (__fastcall **)(char *, __int64, int *, _QWORD, __int64, __int64))(a5 + 16))(
          v18,
          v14,
          &v25,
          *(_QWORD *)(a5 + 24),
          a6,
          a7);
  LOBYTE(v24) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v24,
    3,
    11,
    (__int64)&WPP_5e58a32fdfb43147ae9192110f2623ca_Traceguids,
    v23);
  if ( v22 )
    ObfDereferenceObject(v22);
  if ( v23 == -1073741789 )
  {
    *(_DWORD *)(a4 + 16) = v25;
    *(_WORD *)(a4 + 2) = 1;
  }
  ExFreePoolWithTag(v18, 0x4F706341u);
  AMLIDereferenceHandleEx(v12);
  return v23;
}
