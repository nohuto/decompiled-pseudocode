/*
 * XREFs of BapdpProcessHSTIResults @ 0x1408A49CC
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x1408A2DC0 (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x1408A339C (BapdpQueryData.c)
 */

void __fastcall BapdpProcessHSTIResults(__int64 a1)
{
  PVOID PoolWithTag; // rbx
  int v2; // eax
  __int64 v3; // rcx
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-18h] BYREF
  int v6; // [rsp+40h] [rbp-10h]
  int v7; // [rsp+44h] [rbp-Ch]

  v5 = 0x4E53D1DDC0D9DF24LL;
  PoolWithTag = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = -657724523;
  v7 = -2040154073;
  v2 = BapdpQueryData(a1, &v5, 0, 0LL, (unsigned int *)&NumberOfBytes);
  if ( v2 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x49545348u);
    if ( !PoolWithTag )
      return;
    v2 = 0;
  }
  if ( v2 >= 0 && (int)BapdpQueryData(v3, &v5, 0, PoolWithTag, (unsigned int *)&NumberOfBytes) >= 0 )
  {
    qword_140873048 = PoolWithTag;
    PoolWithTag = 0LL;
    LODWORD(dword_140873040) = NumberOfBytes;
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
}
