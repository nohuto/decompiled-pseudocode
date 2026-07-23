/*
 * XREFs of sub_1800F110C @ 0x1800F110C
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_1800F110C()
{
  NTSTATUS result; // eax
  char v1; // al
  _BYTE SystemInformation[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int32 v3; // [rsp+24h] [rbp-34h]
  char v4; // [rsp+28h] [rbp-30h]

  result = ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    v1 = byte_1801597A0;
    if ( (v4 & 1) != 0 )
      v1 = 0;
    byte_1801597A0 = v1;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      dword_180159790 = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_9:
        result = v3;
        qword_180159798 = v3;
        return result;
      }
      dword_180159790 = 3;
    }
    byte_18015D7A8 = 1;
    goto LABEL_9;
  }
  return result;
}
