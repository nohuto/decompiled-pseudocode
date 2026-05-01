/*
 * XREFs of CreateResourceManagerProxy @ 0x180003EF8
 * Callers:
 *     ?GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z @ 0x180003CA8 (-GetResourceManagerProxy@@YAJPEAPEAVResourceManagerProxy@@@Z.c)
 * Callees:
 *     CempRpcBindToServer @ 0x180003DDC (CempRpcBindToServer.c)
 *     ??2@YAPEAX_K@Z @ 0x180007550 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 CreateResourceManagerProxy()
{
  _QWORD *v0; // rax
  int v1; // eax
  int v2; // ebx

  v0 = operator new(0x10uLL);
  if ( v0 )
  {
    v0[1] = 0LL;
    *v0 = &ResourceManagerProxy::`vftable';
  }
  qword_18001C720 = (__int64)v0;
  if ( v0 )
  {
    v1 = CempRpcBindToServer(&unk_180010810, v0 + 1) | 0x10000000;
    v2 = 0;
    if ( v1 < 0 )
      v2 = v1;
    if ( v2 < 0 )
    {
      if ( qword_18001C720 )
      {
        (**(void (__fastcall ***)(__int64, __int64))qword_18001C720)(qword_18001C720, 1LL);
        qword_18001C720 = 0LL;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v2;
}
