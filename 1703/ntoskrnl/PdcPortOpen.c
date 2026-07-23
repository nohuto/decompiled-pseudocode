/*
 * XREFs of PdcPortOpen @ 0x1405B90D0
 * Callers:
 *     PdcTaskClientRegister @ 0x1405B9024 (PdcTaskClientRegister.c)
 * Callees:
 *     ZwPowerInformation @ 0x14017EB20 (ZwPowerInformation.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PdcpPortReleaseResources @ 0x1406EFFA4 (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  NTSTATUS v13; // edi
  _QWORD InputBuffer[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v16[96]; // [rsp+B8h] [rbp-50h] BYREF

  *a8 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6A8uLL, 0x50636450u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x6A8uLL);
    v12 = *a4;
    v11[1] = 0LL;
    v11[210] = a3;
    v11[211] = v12;
    *((_DWORD *)v11 + 5) = 4;
    *(_DWORD *)v11 = 1348691024;
    *((_DWORD *)v11 + 4) = 68;
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[5]) = 0;
    v16[1] = 0LL;
    v16[2] = 0LL;
    InputBuffer[1] = v16;
    v16[6] = 0x400000044LL;
    v16[0] = 50332376LL;
    LODWORD(InputBuffer[0]) = 1;
    InputBuffer[2] = v11;
    v13 = ZwPowerInformation(PdcInvocation, InputBuffer, 0x80u, 0LL, 0);
    if ( v13 >= 0 )
    {
      *a8 = v11;
      v13 = 0;
    }
  }
  else
  {
    v13 = -1073741801;
  }
  if ( v13 < 0 && v11 )
    PdcpPortReleaseResources(v11);
  return (unsigned int)v13;
}
