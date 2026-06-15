/*
 * XREFs of ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1800CE510
 * Callers:
 *     ??1CSpatialProperties@@QEAA@XZ @ 0x1800C9234 (--1CSpatialProperties@@QEAA@XZ.c)
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1800CE1C4 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialAudioTechnologies::FreeTopologyList(CSpatialAudioTechnologies *this)
{
  unsigned int v1; // ecx
  __int64 i; // rbx
  void (__fastcall ***v3)(_QWORD, __int64); // r8

  EnterCriticalSection(&stru_18014C4B8);
  if ( !--dword_18014C4E0 )
  {
    v1 = g_ListOfSpatialTech[0];
    for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
    {
      v3 = (void (__fastcall ***)(_QWORD, __int64))qword_18014C478[i];
      if ( v3 )
      {
        (**v3)(qword_18014C478[i], 1LL);
        v1 = g_ListOfSpatialTech[0];
      }
    }
    g_ListOfSpatialTech[0] = 0;
  }
  LeaveCriticalSection(&stru_18014C4B8);
}
