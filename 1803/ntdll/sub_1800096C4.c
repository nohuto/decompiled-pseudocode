/*
 * XREFs of sub_1800096C4 @ 0x1800096C4
 * Callers:
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 * Callees:
 *     sub_180009558 @ 0x180009558 (sub_180009558.c)
 *     sub_180009804 @ 0x180009804 (sub_180009804.c)
 *     sub_18000983C @ 0x18000983C (sub_18000983C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_1800096C4(_OWORD *a1, _DWORD *a2, _QWORD *a3, _OWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[80]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v14[80]; // [rsp+98h] [rbp-70h] BYREF

  *a2 = 0;
  memset(v13, 0, 0x4CuLL);
  memset(v14, 0, 0x4CuLL);
  LODWORD(v11[0]) = 4980812;
  v11[1] = v13;
  result = sub_18000983C(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control", L"ContainerId", v13);
  if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
  {
    LODWORD(v12[0]) = 4980812;
    v12[1] = v14;
    result = sub_18000983C(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control", L"ContainerCorrelationId", v14);
    if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
    {
      result = sub_180009558(v10, v9, a2);
      if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
      {
        *a3 = 0LL;
        if ( (unsigned int)sub_180009804(v11, a1) )
          *a1 = xmmword_180118FD0;
        result = sub_180009804(v12, a4);
        if ( (_DWORD)result )
        {
          *a4 = xmmword_180118FD0;
          return 0LL;
        }
      }
    }
  }
  return result;
}
