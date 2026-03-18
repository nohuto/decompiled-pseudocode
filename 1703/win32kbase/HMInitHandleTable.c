/*
 * XREFs of HMInitHandleTable @ 0x1C01D73A0
 * Callers:
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0075754 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  _WORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 result; // rax

  v0 = gpvSharedBase;
  gHandlePages = 0LL;
  qword_1C018AE28 = 0LL;
  qword_1C018AE20 = 0LL;
  v1 = gpKernelHandleTable;
  qword_1C0189E38 = gpvSharedBase;
  dword_1C0189E40 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 212) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v1 = 0LL;
    result = 1LL;
    v0[13] = 1;
    *((_BYTE *)v0 + 24) = 0;
    qword_1C018AE20 = 2LL;
  }
  else
  {
    qword_1C0189E38 = 0LL;
    return 0LL;
  }
  return result;
}
