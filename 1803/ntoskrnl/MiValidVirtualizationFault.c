/*
 * XREFs of MiValidVirtualizationFault @ 0x140262110
 * Callers:
 *     MiValidFault @ 0x14001ECF0 (MiValidFault.c)
 *     MiLargePageFault @ 0x140261DA4 (MiLargePageFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPerformSafePdeWrite @ 0x1400CD48C (MiPerformSafePdeWrite.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiCompleteSecureProcessFault @ 0x1402618AC (MiCompleteSecureProcessFault.c)
 *     MiFillVirtualFaultInfo @ 0x140261A04 (MiFillVirtualFaultInfo.c)
 *     MiGetVirtualFaultPageInfo @ 0x140261C24 (MiGetVirtualFaultPageInfo.c)
 *     MiSetFaultPacketDirectives @ 0x1402620F0 (MiSetFaultPacketDirectives.c)
 */

void __fastcall MiValidVirtualizationFault(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *VirtualFaultPageInfo; // r15
  __int64 v6; // rax
  __int64 v7; // r10
  int v8; // r9d
  signed __int64 v9; // rbx
  char v10; // bp
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  char v13; // r9
  ULONG_PTR v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  VirtualFaultPageInfo = (unsigned __int64 *)MiGetVirtualFaultPageInfo(a2, *a1);
  v6 = MI_READ_PTE_LOCK_FREE(a3);
  v8 = *(_DWORD *)(v7 + 48);
  v9 = v6;
  v16 = v6;
  if ( (v8 & 1) == 0 || (v6 & 0x42) != 0 )
  {
    v10 = v6;
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
    if ( (v13 & 0x20) != 0 )
    {
      v14 = 48 * v12 - 0x58000000000LL;
      if ( *(__int64 *)(v14 + 8) >= 0 )
      {
        v15 = MiCopyOnWrite((__int64)(a3 << 25) >> 16, a3, 0xFFFFFFFFFFFFFFFFuLL, 0);
        if ( v15 < 0 )
        {
          MiSetFaultPacketDirectives((__int64)a1, v15);
          return;
        }
        v16 = MI_READ_PTE_LOCK_FREE(a3);
        v9 = v16;
        v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v16) >> 12) & 0xFFFFFFFFFLL;
        v14 = 48 * v12 - 0x58000000000LL;
        v10 = v9;
      }
      MiCompleteSecureProcessFault(v14);
    }
    if ( (v10 & 0x20) == 0 )
      MiPerformSafePdeWrite(v11, (volatile signed __int64 *)a3, v9, 1);
    MiFillVirtualFaultInfo(VirtualFaultPageInfo, v12, v9);
  }
}
