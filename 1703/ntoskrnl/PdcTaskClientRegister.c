/*
 * XREFs of PdcTaskClientRegister @ 0x1405B9024
 * Callers:
 *     PopDiagInitialize @ 0x140812630 (PopDiagInitialize.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PdcPortOpen @ 0x1405B90D0 (PdcPortOpen.c)
 */

__int64 __fastcall PdcTaskClientRegister(__int64 a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v8 = a2;
  PopSleepStudyTaskClientActivator = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x63636450u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x40uLL);
    *v3 = 1667458128;
    v3[8] = 68;
    *((_QWORD *)v3 + 1) = 0LL;
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    v8 = 0LL;
    v6 = PdcPortOpen(v5, v4, (_DWORD)v3, (unsigned int)&v8);
    if ( !v6 )
    {
      PopSleepStudyTaskClientActivator = (__int64)v3;
      v3 = 0LL;
    }
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
