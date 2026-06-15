/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x1800CE1C4
 * Callers:
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x1800C95DC (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800331F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDCE4 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDD90 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDE7C (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1800CDF28 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1800CE510 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800CF868 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v3; // edi
  CSpatialAudioMSHRTF *v4; // rax
  CSpatialAudioMSHRTF *v5; // rcx
  __int64 v6; // rcx
  CSpatialAudioDolbyHeadphones *v7; // rax
  CSpatialAudioDolbyHeadphones *v8; // rcx
  CSpatialAudioDolbyStereo *v9; // rax
  CSpatialAudioDolbyStereo *v10; // rcx
  CSpatialAudioDolbyAtmosMAT *v11; // rax
  CSpatialAudioDolbyAtmosMAT *v12; // rcx
  int v13; // eax
  int v14; // ebx

  v3 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates();
  EnterCriticalSection(&stru_18014C4B8);
  if ( ++dword_18014C4E0 == 1 )
  {
    v4 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v4, a2);
    else
      v5 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v5;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v7 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v7, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v8;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_6;
    ++g_ListOfSpatialTech[0];
    v9 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v9, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v10;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2]
      || ((++g_ListOfSpatialTech[0],
           (v11 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow)) == 0LL)
        ? (v12 = 0LL)
        : (v12 = CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v11, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v12) == 0LL) )
    {
LABEL_6:
      LeaveCriticalSection(&stru_18014C4B8);
LABEL_24:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v6);
      return v3;
    }
    v13 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v13 = g_ListOfSpatialTech[0];
  }
  v14 = v13;
  LeaveCriticalSection(&stru_18014C4B8);
  v6 = 0LL;
  if ( !v14 )
    v6 = 2147942414LL;
  v3 = v6;
  if ( !v14 )
    goto LABEL_24;
  return v3;
}
