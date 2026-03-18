/*
 * XREFs of CpInitialize @ 0x14026AC80
 * Callers:
 *     InbvPortInitialize @ 0x14026AF34 (InbvPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CpSetBaud @ 0x14026AE18 (CpSetBaud.c)
 */

__int64 __fastcall CpInitialize(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdx

  *((_DWORD *)a1 + 2) = 0;
  *a1 = a2;
  CpSetBaud(a1, a3);
  v4 = *a1;
  LOBYTE(v4) = 3;
  ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR)(*a1 + 4 * CpRegisterWidth, v4);
  return ((__int64 (__fastcall *)(__int64, _QWORD))WRITE_UCHAR)(CpRegisterWidth + *a1, 0LL);
}
