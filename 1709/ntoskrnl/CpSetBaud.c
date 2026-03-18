/*
 * XREFs of CpSetBaud @ 0x140295284
 * Callers:
 *     CpInitialize @ 0x1402950F0 (CpInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpSetBaud(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 result; // rax

  v4 = *(_QWORD *)a1 + 3 * CpRegisterWidth;
  v5 = 0x1C200 / a2;
  LOBYTE(v6) = ((__int64 (__fastcall *)(__int64, _QWORD))READ_UCHAR)(v4, 0x1C200 % a2) | 0x80;
  ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR[0])(v4, v6);
  v7 = *(_QWORD *)a1 + CpRegisterWidth;
  ((void (__fastcall *)(__int64, _QWORD))WRITE_UCHAR[0])(v7, v5 >> 8);
  LOBYTE(v8) = 0x1C200 / a2;
  ((void (__fastcall *)(__int64, __int64))WRITE_UCHAR[0])(v7 - 1, v8);
  LOBYTE(v9) = 3;
  result = ((__int64 (__fastcall *)(__int64, __int64))WRITE_UCHAR[0])(*(_QWORD *)a1 + 3 * CpRegisterWidth, v9);
  *(_DWORD *)(a1 + 8) = a2;
  return result;
}
