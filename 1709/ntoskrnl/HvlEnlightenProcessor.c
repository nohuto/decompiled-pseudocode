/*
 * XREFs of HvlEnlightenProcessor @ 0x140139EB4
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1401EA96C (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x140425860 (KiInitializeKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401EA7F0 (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpGetLpcbByLpIndex @ 0x1401EA860 (HvlpGetLpcbByLpIndex.c)
 *     HvlpSetupSchedulerAssist @ 0x1401EB53C (HvlpSetupSchedulerAssist.c)
 *     HvlpGetRegister64 @ 0x1401F0A40 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401F0AF4 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x1406B319C (HvlpDiscoverTopologyLocal.c)
 */

void HvlEnlightenProcessor()
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v1; // cl
  unsigned int v2; // edx
  PHYSICAL_ADDRESS v3; // rbx
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  char v7; // r10
  __int64 LpcbByLpIndex; // rsi
  unsigned int LpIndexFromProcessorIndex; // eax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  PHYSICAL_ADDRESS v15; // [rsp+48h] [rbp+10h] BYREF

  if ( HvlHypervisorConnected )
  {
    HvlpGetRegister64(589827LL, &v14);
    CurrentPrcb = KeGetCurrentPrcb();
    v1 = v14 & 0x3F;
    v2 = (unsigned int)v14 >> 6;
    *((_BYTE *)&HvlpVirtualProcessorMapping + 2 * CurrentPrcb->Number) = (unsigned int)v14 >> 6;
    *((_BYTE *)&HvlpVirtualProcessorMapping + 2 * CurrentPrcb->Number + 1) = v1;
    if ( (_DWORD)v14 != CurrentPrcb->Number )
      HvlpVirtualProcessorsIdentityMapped = 0;
    if ( v2 < 0x10 )
    {
      if ( v2 > (((unsigned int)HvlpFlags >> 8) & 0xF) )
        HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v2 << 8)) & 0xF00;
    }
    else
    {
      HvlEnlightenments &= ~0x80u;
      HvlpEnlightenments &= ~0x80u;
    }
    if ( (HvlpFlags & 1) != 0 )
    {
      v15.QuadPart = 0LL;
      if ( (HvlpFlags & 2) != 0 )
      {
        HvlpGetRegister64(589843LL, &v15);
        v3 = v15;
        v4 = v15.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v5 = MmMapIoSpaceEx(v4, 4096LL, 4u);
        else
          v5 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_140353460)(v4, 1LL, 4LL);
        CurrentPrcb->VirtualApicAssist = (void *)v5;
      }
      else
      {
        v3.QuadPart = MmGetPhysicalAddress(CurrentPrcb->VirtualApicAssist).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843LL, v3.QuadPart | 1);
    }
    HvlpSetupSchedulerAssist(CurrentPrcb);
    v7 = HvlpFlags;
    LpcbByLpIndex = 0LL;
    if ( (HvlpFlags & 2) != 0 )
    {
      LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(CurrentPrcb->Number);
      LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex);
    }
    if ( (v7 & 0x20) != 0 )
    {
      v10 = ((unsigned __int64)((v7 & 0x10) == 0) << 17) | 0x30;
      HvlpSetRegister64(655360LL, v10);
      HvlpSetRegister64(655361LL, v10);
      HvlpSetRegister64(655364LL, v10);
      if ( (HvlpFlags & 2) != 0 )
      {
        v11 = __readmsr(0x40000083u);
        v12 = ((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11 & 0xFFFFF000;
        if ( CurrentPrcb->Number )
          v13 = MmMapIoSpaceEx(v12, 4096LL, 4u);
        else
          v13 = ((__int64 (__fastcall *)(unsigned __int64, __int64))qword_140353460)(v12, 1LL);
        *(_QWORD *)(LpcbByLpIndex + 40) = v13;
      }
    }
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( CurrentPrcb->Number )
        HvlpDiscoverTopologyLocal(v6, *(unsigned int *)(LpcbByLpIndex + 8), LpcbByLpIndex + 16, LpcbByLpIndex + 20);
    }
  }
}
