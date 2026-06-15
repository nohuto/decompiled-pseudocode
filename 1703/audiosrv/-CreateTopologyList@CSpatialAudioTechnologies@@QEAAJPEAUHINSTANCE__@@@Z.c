/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18003BCD0
 * Callers:
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x18004054C (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003CAA0 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18003CB48 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003D880 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18003DBB0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180040B80 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1800C7FFC (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(struct _RTL_CRITICAL_SECTION *this, HINSTANCE a2)
{
  int v3; // ebx
  int v4; // ecx
  int v5; // eax
  CSpatialAudioTechnologies *v6; // rcx
  CSpatialAudioMSHRTF *v8; // rax
  CSpatialAudioMSHRTF *v9; // rcx
  CSpatialAudioDolbyHeadphones *v10; // rax
  CSpatialAudioDolbyHeadphones *v11; // rcx
  CSpatialAudioDolbyStereo *v12; // rax
  CSpatialAudioDolbyStereo *v13; // rcx
  CSpatialAudioDolbyAtmosMAT *v14; // rax
  CSpatialAudioDolbyAtmosMAT *v15; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+8h] BYREF
  CSpatialAudioMSHRTF *v17; // [rsp+60h] [rbp+18h]

  lpCriticalSection = this;
  v3 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates();
  Microsoft::WRL::Wrappers::CriticalSection::Lock((__int64)&CriticalSection, (__int64)&lpCriticalSection);
  if ( ++dword_18012C1E0 == 1 )
  {
    v8 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v8;
    if ( v8 )
      v9 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v8, a2);
    else
      v9 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v9;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_25;
    ++g_ListOfSpatialTech[0];
    v10 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v10;
    v11 = v10 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v10, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v11;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_25;
    ++g_ListOfSpatialTech[0];
    v12 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v17 = v12;
    v13 = v12 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v12, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v13;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2]
      || ((++g_ListOfSpatialTech[0],
           v14 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow),
           (v17 = v14) == 0LL)
        ? (v15 = 0LL)
        : (v15 = CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v14, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v15) == 0LL) )
    {
LABEL_25:
      v6 = (CSpatialAudioTechnologies *)lpCriticalSection;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_28;
    }
    v4 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v4 = g_ListOfSpatialTech[0];
  }
  v5 = 0;
  if ( !v4 )
    v5 = -2147024882;
  v3 = v5;
  v6 = (CSpatialAudioTechnologies *)lpCriticalSection;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 < 0 )
LABEL_28:
    CSpatialAudioTechnologies::FreeTopologyList(v6);
  return (unsigned int)v3;
}
