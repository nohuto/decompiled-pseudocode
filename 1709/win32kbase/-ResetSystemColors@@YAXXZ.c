/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C0062C60
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetSysColors @ 0x1C0063184 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  _BYTE v2[16]; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v3[128]; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v4[32]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v3, (char *)gpsi + 4428, 0x7CuLL);
  v1 = 0LL;
  do
    v4[v1++] = v0++;
  while ( v0 < 0x1F );
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v2);
  xxxSetSysColors(0, v0, (unsigned int)v4, (unsigned int)v3, 6);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v2);
}
