/*
 * XREFs of PiDqDeleteUserObjectFromLoadedHives @ 0x1406C4190
 * Callers:
 *     PiDqObjectManagerHandleObjectEvent @ 0x1405822A0 (PiDqObjectManagerHandleObjectEvent.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _RegRtlEnumKey @ 0x14057E9B4 (_RegRtlEnumKey.c)
 *     PiDqDeleteUserObject @ 0x1406C4078 (PiDqDeleteUserObject.c)
 */

NTSTATUS __fastcall PiDqDeleteUserObjectFromLoadedHives(int a1, int a2)
{
  __int64 v4; // rcx
  NTSTATUS result; // eax
  ULONG i; // ebx
  __int64 v7; // rcx
  HANDLE v8; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v11[128]; // [rsp+58h] [rbp-B0h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&PiPnpRtlCtx )
    v4 = **(_QWORD **)&PiPnpRtlCtx;
  else
    v4 = 0LL;
  result = SysCtxRegOpenKey(v4, 0LL, (__int64)L"\\REGISTRY\\USER", 0, 8u, (__int64)&v8);
  if ( result >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      LODWORD(v9) = 256;
      result = RegRtlEnumKey(v8, i, v11, (unsigned int *)&v9);
      if ( result < 0 )
        break;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v7 = **(_QWORD **)&PiPnpRtlCtx;
      else
        v7 = 0LL;
      if ( (int)SysCtxRegOpenKey(v7, (__int64)v8, (__int64)v11, 0, 1u, (__int64)Handle) >= 0 )
      {
        PiDqDeleteUserObject((char *)Handle[0], a1, a2);
        ZwClose(Handle[0]);
      }
    }
  }
  if ( v8 )
    return ZwClose(v8);
  return result;
}
