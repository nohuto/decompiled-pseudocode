/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C005C874
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005C620 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetSysColors @ 0x1C005C910 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // ecx
  _BYTE v3[16]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v4[128]; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v5[32]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v4, (char *)gpsi + 4444, 0x7CuLL);
  v1 = 0LL;
  do
    v5[v1++] = v0++;
  while ( v0 < 0x1F );
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v3);
  xxxSetSysColors(v2, v0, (unsigned int)v5, (unsigned int)v4, 6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v3);
}
