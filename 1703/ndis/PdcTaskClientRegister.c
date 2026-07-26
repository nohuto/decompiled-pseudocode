/*
 * XREFs of PdcTaskClientRegister @ 0x1C00F4264
 * Callers:
 *     ndisMRegisterPDCTaskClient @ 0x1C00E1D94 (ndisMRegisterPDCTaskClient.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     PdcPortOpen @ 0x1C00F44C4 (PdcPortOpen.c)
 */

__int64 __fastcall PdcTaskClientRegister(__int64 a1, _QWORD *a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63636450u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *v4 = 1667458128;
    v4[8] = 95;
    *((_QWORD *)v4 + 1) = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 1) = 0LL;
    v9 = 0LL;
    v5 = PdcPortOpen(v7, v6, (_DWORD)v4, (unsigned int)&v9);
    if ( !v5 )
    {
      *a2 = v4;
      v4 = 0LL;
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
