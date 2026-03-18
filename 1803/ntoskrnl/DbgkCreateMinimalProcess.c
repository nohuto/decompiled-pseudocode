/*
 * XREFs of DbgkCreateMinimalProcess @ 0x14062C8C8
 * Callers:
 *     PsCreateMinimalProcess @ 0x14062C5DC (PsCreateMinimalProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     DbgkpSendApiMessage @ 0x140710C10 (DbgkpSendApiMessage.c)
 */

__int64 __fastcall DbgkCreateMinimalProcess(volatile signed __int32 *Object)
{
  __int64 result; // rax
  _BYTE v3[48]; // [rsp+50h] [rbp-F8h] BYREF

  _InterlockedOr(Object + 193, 0x400001u);
  if ( *((_QWORD *)Object + 132) )
  {
    memset(v3, 0, sizeof(v3));
    return DbgkpSendApiMessage((PVOID)Object);
  }
  return result;
}
