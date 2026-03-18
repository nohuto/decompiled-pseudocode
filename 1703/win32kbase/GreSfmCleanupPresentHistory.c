/*
 * XREFs of GreSfmCleanupPresentHistory @ 0x1C0066AC4
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0065FD4 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?GreSfmCleanupDxgAdapter@@YAXI@Z @ 0x1C0066C1C (-GreSfmCleanupDxgAdapter@@YAXI@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_BYTE *GreSfmCleanupPresentHistory()
{
  _BYTE *v0; // rdi
  __int64 v1; // r8
  _BYTE *result; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // rsi
  int v6; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v7; // [rsp+40h] [rbp-71h] BYREF
  _BYTE *v8; // [rsp+48h] [rbp-69h]
  _BYTE v9[160]; // [rsp+58h] [rbp-59h] BYREF

  memset(v9, 0, sizeof(v9));
  v7 = 0;
  v0 = v9;
  v8 = 0LL;
  LOBYTE(v1) = 1;
  result = (_BYTE *)((__int64 (__fastcall *)(unsigned int *, _QWORD, __int64, _QWORD))qword_1C018B7A8)(
                      &v7,
                      0LL,
                      v1,
                      0LL);
  if ( (int)result >= 0 )
  {
    v3 = v7;
    if ( v7 )
    {
      if ( v7 <= 8 || (result = PALLOCMEM2(20 * v7, 1886221383LL, 1), (v0 = result) != 0LL) )
      {
        memset(v0, 0, 20 * v3);
        v8 = v0;
        LOBYTE(v4) = 1;
        if ( (int)((__int64 (__fastcall *)(unsigned int *, _QWORD, __int64, _QWORD))qword_1C018B7A8)(&v7, 0LL, v4, 0LL) >= 0
          && v7
          && v7 <= (unsigned int)v3 )
        {
          v5 = 0LL;
          do
          {
            GreSfmCleanupDxgAdapter(*(_DWORD *)&v8[20 * v5]);
            v6 = 0;
            v6 = *(_DWORD *)&v8[20 * v5];
            ((void (__fastcall *)(int *, _QWORD))qword_1C018B7C0)(&v6, 0LL);
            v5 = (unsigned int)(v5 + 1);
          }
          while ( (unsigned int)v5 < v7 );
        }
        result = v9;
        if ( v0 != v9 )
          return (_BYTE *)Win32FreePool((__int64)v0);
      }
    }
  }
  return result;
}
