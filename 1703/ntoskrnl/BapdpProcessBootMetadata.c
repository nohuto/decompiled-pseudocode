/*
 * XREFs of BapdpProcessBootMetadata @ 0x140811B90
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140811C0C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x1408121E8 (BapdpQueryData.c)
 */

void __fastcall BapdpProcessBootMetadata(__int64 a1)
{
  __int64 v1; // rcx
  _DWORD *PoolWithTag; // rdi
  unsigned int v3; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v4[4]; // [rsp+38h] [rbp-18h] BYREF

  ExSoftRebootFlags = 0;
  ExBootLoaderMetadata = 0LL;
  v4[0] = 1527004268;
  v4[1] = 1201445829;
  v4[2] = 1736995215;
  v4[3] = 1054971003;
  if ( (qword_140344B38 & 4) != 0 )
  {
    v3 = 0;
    ExSoftRebootFlags = 2;
    if ( (unsigned int)BapdpQueryData(a1, v4, 0LL, 0LL, &v3) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 + 4LL, 0x64506142u);
      if ( PoolWithTag )
      {
        BapdpQueryData(v1, v4, 0LL, PoolWithTag + 1, &v3);
        *PoolWithTag = v3;
        ExBootLoaderMetadata = (__int64)PoolWithTag;
        if ( (int)KsrInitPageDatabase(PoolWithTag + 1) >= 0 )
          ExSoftRebootFlags |= 4u;
      }
    }
  }
}
