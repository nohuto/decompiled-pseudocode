/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00C0BD8
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00C0DB0 (-Initialize@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Initialize@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C00C0CF8 (-Initialize@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

PVOID *__fastcall NSInstrumentation::CSectionBitmapAllocator<81920,320>::Create(__int64 a1)
{
  PVOID *PoolWithTag; // rax
  PVOID *v3; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  *((_DWORD *)PoolWithTag + 9) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<81920,320>::Initialize(PoolWithTag, a1) )
  {
    v5 = (unsigned __int64)v3[3];
    v6 = (unsigned __int64)v3[2];
    if ( v5 != v6 )
      RtlFindSetBits((PRTL_BITMAP)(v5 ^ v6), 1u, 0);
    if ( *v3 )
      ExFreePoolWithTag(*v3, 0);
    if ( v3[2] != v3[3] )
      ExFreePoolWithTag((PVOID)((unsigned __int64)v3[2] ^ (unsigned __int64)v3[3]), 0);
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  return v3;
}
