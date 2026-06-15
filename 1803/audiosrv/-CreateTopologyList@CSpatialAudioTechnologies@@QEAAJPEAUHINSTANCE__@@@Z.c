/*
 * XREFs of ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18004E558
 * Callers:
 *     ?InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z @ 0x180054DDC (-InitSpatialTechList@CSpatialProperties@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004EA40 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004EDD0 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004F9E0 (--0CSpatialAudioDolbyStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18004FC60 (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x18004FD08 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180061018 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ @ 0x1800FEF28 (-FreeTopologyList@CSpatialAudioTechnologies@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CSpatialAudioTechnologies::CreateTopologyList(CSpatialAudioTechnologies *this, HINSTANCE a2)
{
  unsigned int v3; // edi
  CSpatialAudioMSHRTF *v4; // rax
  CSpatialAudioMSHRTF *v5; // rcx
  CSpatialAudioDolbyHeadphones *v6; // rax
  CSpatialAudioDolbyHeadphones *v7; // rcx
  CSpatialAudioDolbyStereo *v8; // rax
  CSpatialAudioDolbyStereo *v9; // rcx
  CSpatialAudioDolbyAtmosMAT *v10; // rax
  CSpatialAudioDolbyAtmosMAT *v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx

  v3 = -2147024882;
  CSpatialAudioTechnologies::RegistryGates();
  EnterCriticalSection(&CriticalSection);
  if ( ++dword_18018A9A0 == 1 )
  {
    v4 = (CSpatialAudioMSHRTF *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
      v5 = CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(v4, a2);
    else
      v5 = 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v5;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_22;
    ++g_ListOfSpatialTech[0];
    v6 = (CSpatialAudioDolbyHeadphones *)operator new(0x520uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6 ? CSpatialAudioDolbyHeadphones::CSpatialAudioDolbyHeadphones(v6, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v7;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] )
      goto LABEL_22;
    ++g_ListOfSpatialTech[0];
    v8 = (CSpatialAudioDolbyStereo *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8 ? CSpatialAudioDolbyStereo::CSpatialAudioDolbyStereo(v8, a2) : 0LL;
    *(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v9;
    if ( !*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2]
      || ((++g_ListOfSpatialTech[0],
           (v10 = (CSpatialAudioDolbyAtmosMAT *)operator new(0x320uLL, (const struct std::nothrow_t *)&std::nothrow)) == 0LL)
        ? (v11 = 0LL)
        : (v11 = CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(v10, a2)),
          (*(_QWORD *)&g_ListOfSpatialTech[2 * g_ListOfSpatialTech[0] + 2] = v11) == 0LL) )
    {
LABEL_22:
      LeaveCriticalSection(&CriticalSection);
LABEL_20:
      CSpatialAudioTechnologies::FreeTopologyList((CSpatialAudioTechnologies *)v13);
      return v3;
    }
    v12 = ++g_ListOfSpatialTech[0];
  }
  else
  {
    v12 = g_ListOfSpatialTech[0];
  }
  LeaveCriticalSection(&CriticalSection);
  v13 = 0LL;
  if ( !v12 )
    v13 = 2147942414LL;
  v3 = v13;
  if ( !v12 )
    goto LABEL_20;
  return v3;
}
