/*
 * XREFs of EtwpCheckGuidAccessAndDoRundown @ 0x14074CB5C
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404EEB84 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpCheckGuidAccess @ 0x1404EF040 (EtwpCheckGuidAccess.c)
 *     EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4 (EtwpCheckLoggerAccessAndDoRundown.c)
 *     EtwpLogKernelTraceRundown @ 0x14074D398 (EtwpLogKernelTraceRundown.c)
 */

__int64 __fastcall EtwpCheckGuidAccessAndDoRundown(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        unsigned __int16 **a5,
        unsigned int a6)
{
  __int64 result; // rax
  __int64 v10; // r9
  unsigned int v11; // ebx
  int v12; // eax
  size_t v13; // rbp
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  int v16; // r9d
  _BYTE v17[32]; // [rsp+30h] [rbp-68h] BYREF

  result = EtwpCheckGuidAccess(&SystemTraceControlGuid.Data1, 0x80u, 0LL);
  v11 = result;
  if ( (int)result >= 0 )
  {
    v12 = *((_DWORD *)a5 + 3);
    if ( v12 == -2147483647 )
    {
      v13 = *((unsigned int *)a5 + 2);
      if ( (unsigned int)v13 <= 0x20 && (v13 & 3) == 0 )
      {
        v14 = 1;
        if ( a6 > 1 )
        {
          v15 = a5 + 3;
          while ( v15[1] != -2147483644 || (*v15 & 3) == 0 )
          {
            ++v14;
            v15 += 4;
            if ( v14 >= a6 )
              goto LABEL_10;
          }
          return 3221225485LL;
        }
LABEL_10:
        memset(v17, 0, sizeof(v17));
        memmove(v17, *a5, v13);
        LOBYTE(v16) = a4;
        if ( a6 <= 1 )
          EtwpLogKernelTraceRundown(a1, a3, (unsigned int)v17, v16, 0LL, 0);
        else
          EtwpLogKernelTraceRundown(a1, a3, (unsigned int)v17, v16, (__int64)(a5 + 2), a6 - 1);
        return v11;
      }
      return 3221225485LL;
    }
    if ( v12 == -2147483646 )
    {
      if ( *((_DWORD *)a5 + 2) != 8 )
        return 3221225485LL;
      LOBYTE(v10) = a4;
      return (unsigned int)EtwpCheckLoggerAccessAndDoRundown(a1, **a5, a3, v10);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return result;
}
