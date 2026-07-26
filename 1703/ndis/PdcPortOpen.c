/*
 * XREFs of PdcPortOpen @ 0x1C00F44C4
 * Callers:
 *     PdcTaskClientRegister @ 0x1C00F4264 (PdcTaskClientRegister.c)
 * Callees:
 *     memset @ 0x1C0028B80 (memset.c)
 *     PdcpPortReleaseResources @ 0x1C00F460C (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpen(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        struct _EX_RUNDOWN_REF **a8)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v11; // rbx
  NTSTATUS v12; // edi
  _QWORD InputBuffer[16]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v15[96]; // [rsp+B8h] [rbp-50h] BYREF

  *a8 = 0LL;
  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x6A8uLL, 0x50636450u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x6A8uLL);
    v11[210].Count = a3;
    LODWORD(v11->Count) = 1348691024;
    HIDWORD(v11[2].Ptr) = 4;
    LODWORD(v11[2].Count) = 95;
    ExInitializeRundownProtection(v11 + 1);
    v11[211].Count = *a4;
    memset(v15, 0, sizeof(v15));
    LODWORD(v15[5]) = 0;
    v15[1] = 0LL;
    v15[2] = 0LL;
    InputBuffer[1] = v15;
    v15[6] = 0x40000005FLL;
    v15[0] = 50332376LL;
    LODWORD(InputBuffer[0]) = 1;
    InputBuffer[2] = v11;
    v12 = ZwPowerInformation(PdcInvocation, InputBuffer, 0x80u, 0LL, 0);
    if ( v12 >= 0 )
    {
      *a8 = v11;
      v12 = 0;
    }
  }
  else
  {
    v12 = -1073741801;
  }
  if ( v12 < 0 && v11 )
    PdcpPortReleaseResources(v11);
  return (unsigned int)v12;
}
