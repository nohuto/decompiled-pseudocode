/*
 * XREFs of BapdpProcessFwUpdateResults @ 0x1408A4DBC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1408A2DC0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x1408A339C (BapdpQueryData.c)
 *     BapdpRegisterFwUpdateResults @ 0x1408E1F1C (BapdpRegisterFwUpdateResults.c)
 */

void __fastcall BapdpProcessFwUpdateResults(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  int v2; // eax
  __int64 v3; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp-10h]
  int v7; // [rsp+44h] [rbp-Ch]

  v5 = 0x494F152FD5651EBCLL;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = 1011500475;
  v7 = -287708285;
  v2 = BapdpQueryData(a1, &v5, 0, 0LL, (unsigned int *)&NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x64506142u);
    if ( !PoolWithTag )
      return;
    v2 = 0;
  }
  if ( v2 >= 0 && (int)BapdpQueryData(v3, &v5, 0, PoolWithTag, (unsigned int *)&NumberOfBytes) >= 0 )
    BapdpRegisterFwUpdateResults(PoolWithTag, (unsigned int)NumberOfBytes);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
