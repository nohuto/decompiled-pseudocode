/*
 * XREFs of HMInitHandleTable @ 0x1C01DD870
 * Callers:
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0006C54 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  _WORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 result; // rax

  v0 = gpvSharedBase;
  gHandlePages = 0LL;
  qword_1C018FA78 = 0LL;
  qword_1C018FA70 = 0LL;
  v1 = gpKernelHandleTable;
  qword_1C018E9B8 = gpvSharedBase;
  dword_1C018E9C0 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 212) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v1 = 0LL;
    result = 1LL;
    v0[13] = 1;
    *((_BYTE *)v0 + 24) = 0;
    qword_1C018FA70 = 2LL;
  }
  else
  {
    qword_1C018E9B8 = 0LL;
    return 0LL;
  }
  return result;
}
