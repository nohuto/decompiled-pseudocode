/*
 * XREFs of HvlEnlightenProcessor @ 0x140155924
 * Callers:
 *     HvlpInitializeBootProcessor @ 0x1401E5B04 (HvlpInitializeBootProcessor.c)
 *     KiInitializeKernel @ 0x140411030 (KiInitializeKernel.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1400A7A80 (MmGetPhysicalAddress.c)
 *     MmMapIoSpaceEx @ 0x1401243A0 (MmMapIoSpaceEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     HvlpGetLpIndexFromProcessorIndex @ 0x1401E599C (HvlpGetLpIndexFromProcessorIndex.c)
 *     HvlpGetLpcbByLpIndex @ 0x1401E5A0C (HvlpGetLpcbByLpIndex.c)
 *     HvlpGetRegister64 @ 0x1401EB6DC (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401EB784 (HvlpSetRegister64.c)
 *     HvlpDiscoverTopologyLocal @ 0x140687780 (HvlpDiscoverTopologyLocal.c)
 */

void HvlEnlightenProcessor()
{
  struct _KPRCB *CurrentPrcb; // rdi
  char v1; // cl
  unsigned int v2; // edx
  char v3; // al
  PHYSICAL_ADDRESS v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 Number; // rcx
  unsigned int LpIndexFromProcessorIndex; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 LpcbByLpIndex; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF
  PHYSICAL_ADDRESS v16; // [rsp+38h] [rbp+10h] BYREF

  if ( HvlHypervisorConnected )
  {
    HvlpGetRegister64(589827LL, &v15);
    CurrentPrcb = KeGetCurrentPrcb();
    v1 = v15 & 0x3F;
    v2 = (unsigned int)v15 >> 6;
    *((_BYTE *)&HvlpVirtualProcessorMapping + 2 * CurrentPrcb->Number) = (unsigned int)v15 >> 6;
    *((_BYTE *)&HvlpVirtualProcessorMapping + 2 * CurrentPrcb->Number + 1) = v1;
    if ( (_DWORD)v15 != CurrentPrcb->Number )
      HvlpVirtualProcessorsIdentityMapped = 0;
    if ( v2 < 0x10 )
    {
      v3 = HvlpFlags;
      if ( v2 > (((unsigned int)HvlpFlags >> 8) & 0xF) )
      {
        v3 = HvlpFlags;
        HvlpFlags ^= ((unsigned __int16)HvlpFlags ^ (unsigned __int16)((_WORD)v2 << 8)) & 0xF00;
      }
    }
    else
    {
      HvlEnlightenments &= ~0x80u;
      HvlpEnlightenments &= ~0x80u;
      v3 = HvlpFlags;
    }
    if ( (v3 & 1) != 0 )
    {
      v16.QuadPart = 0LL;
      if ( (v3 & 2) != 0 )
      {
        HvlpGetRegister64(589843LL, &v16);
        v4 = v16;
        v5 = v16.QuadPart & 0xFFFFFFFFFFFFF000uLL;
        if ( CurrentPrcb->Number )
          v6 = MmMapIoSpaceEx(v5, 4096LL, 4u);
        else
          v6 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))qword_14033B430)(v5, 1LL, 4LL);
        CurrentPrcb->VirtualApicAssist = (void *)v6;
      }
      else
      {
        v4.QuadPart = MmGetPhysicalAddress(CurrentPrcb->VirtualApicAssist).QuadPart & 0xFFFFFFFFFFFFF000uLL;
      }
      HvlpSetRegister64(589843LL, v4.QuadPart | 1);
      v3 = HvlpFlags;
    }
    if ( (v3 & 0x20) != 0 )
    {
      v7 = ((unsigned __int64)((v3 & 0x10) == 0) << 17) | 0x30;
      HvlpSetRegister64(655360LL, v7);
      HvlpSetRegister64(655361LL, v7);
      v3 = HvlpFlags;
    }
    if ( (v3 & 2) != 0 )
    {
      Number = CurrentPrcb->Number;
      if ( (_DWORD)Number )
      {
        LpIndexFromProcessorIndex = HvlpGetLpIndexFromProcessorIndex(Number);
        LpcbByLpIndex = HvlpGetLpcbByLpIndex(LpIndexFromProcessorIndex, v10, v11, v12);
        HvlpDiscoverTopologyLocal(v14, *(unsigned int *)(LpcbByLpIndex + 8), LpcbByLpIndex + 16, LpcbByLpIndex + 20);
      }
    }
  }
}
