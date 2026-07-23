/*
 * XREFs of PdcPortOpen @ 0x140624808
 * Callers:
 *     PdcTaskClientRegister @ 0x140624758 (PdcTaskClientRegister.c)
 *     PdcNotificationClientRegister @ 0x14078B970 (PdcNotificationClientRegister.c)
 * Callees:
 *     ZwPowerInformation @ 0x1401A80A0 (ZwPowerInformation.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PdcpPortReleaseResources @ 0x14078B698 (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax
  NTSTATUS v15; // edi
  _QWORD InputBuffer[18]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v18[100]; // [rsp+C8h] [rbp-40h] BYREF

  *a8 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x6D8uLL, 0x50636450u);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x6D8uLL);
  v14 = *a4;
  v13[1] = 0LL;
  *(_DWORD *)v13 = 1348691024;
  v13[216] = a3;
  *((_DWORD *)v13 + 4) = a1;
  *((_DWORD *)v13 + 5) = a2;
  v13[217] = v14;
  if ( !v14 && a2 != 4 )
  {
    v15 = -1073741583;
    goto LABEL_9;
  }
  memset(v18, 0, 0x318uLL);
  LODWORD(v18[5]) = 0;
  v18[1] = 0LL;
  v18[2] = 0LL;
  v18[6] = __PAIR64__(a2, a1);
  v18[0] = 51905264LL;
  LODWORD(InputBuffer[0]) = 1;
  InputBuffer[1] = v18;
  InputBuffer[2] = v13;
  v15 = ZwPowerInformation(PdcInvocation, InputBuffer, 0x90u, 0LL, 0);
  if ( v15 < 0 )
  {
LABEL_9:
    PdcpPortReleaseResources(v13);
    return (unsigned int)v15;
  }
  *a8 = v13;
  return 0;
}
