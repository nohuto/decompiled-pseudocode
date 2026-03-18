/*
 * XREFs of BapdpProcessEDrvHintInfo @ 0x140811CD8
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140811C0C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     BapdpQueryData @ 0x1408121E8 (BapdpQueryData.c)
 *     BapdpRegisterEDrvHintInfo @ 0x140835E24 (BapdpRegisterEDrvHintInfo.c)
 */

void __fastcall BapdpProcessEDrvHintInfo(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  int v2; // eax
  __int64 v3; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  v5[0] = -434226978;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v5[1] = 1092265705;
  v5[2] = 176510397;
  v5[3] = 1684214913;
  v2 = BapdpQueryData(a1, v5, 0LL, 0LL, &NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
    v2 = 0;
  }
  if ( v2 >= 0 && (int)BapdpQueryData(v3, v5, 0LL, PoolWithTag, &NumberOfBytes) >= 0 && (unsigned int)NumberOfBytes >= 8 )
    BapdpRegisterEDrvHintInfo(PoolWithTag);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
