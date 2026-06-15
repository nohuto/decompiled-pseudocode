/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1800C7FFC
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18003BCD0 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800BB67C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(struct _RTL_CRITICAL_SECTION *this)
{
  unsigned int v1; // edx
  __int64 i; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp+8h] BYREF

  lpCriticalSection = this;
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)&CriticalSection, (__int64)&lpCriticalSection);
  if ( !--dword_18012C1E0 )
  {
    v1 = g_ListOfSpatialTech[0];
    for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_18012C178[i];
      if ( v3 )
      {
        (**v3)(v3, 1LL);
        v1 = g_ListOfSpatialTech[0];
      }
    }
    g_ListOfSpatialTech[0] = 0;
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
