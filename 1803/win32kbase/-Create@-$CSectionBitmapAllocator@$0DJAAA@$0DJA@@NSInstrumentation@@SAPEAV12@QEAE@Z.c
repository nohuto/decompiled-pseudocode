/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C0077544
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ @ 0x1C0077950 (-Initialize@-$CSectionEntry@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NXZ.c)
 * Callees:
 *     ?Destroy@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C007777C (-Destroy@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z @ 0x1C0077898 (-Initialize@-$CSectionBitmapAllocator@$0DJAAA@$0DJA@@NSInstrumentation@@AEAA_NPEAE@Z.c)
 */

void *__fastcall NSInstrumentation::CSectionBitmapAllocator<233472,912>::Create(__int64 a1)
{
  _QWORD *PoolWithTag; // rax
  void *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  PoolWithTag[3] = 0LL;
  *((_DWORD *)PoolWithTag + 8) = 0;
  *((_DWORD *)PoolWithTag + 9) = 0;
  if ( !(unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<233472,912>::Initialize(PoolWithTag, a1) )
  {
    NSInstrumentation::CSectionBitmapAllocator<233472,912>::Destroy(v3);
    return 0LL;
  }
  return v3;
}
