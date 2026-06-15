/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIAudioStreamInfo@@AEBVCStreamResource@Sarm@@@Z @ 0x1800C4488
 * Callers:
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x1800C2164 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 * Callees:
 *     ??4CStreamResource@Sarm@@QEAAAEAV01@AEBV01@@Z @ 0x1800C200C (--4CStreamResource@Sarm@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?CreateNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEAAPEAVCNode@12@AEBQEAUIAudioStreamInfo@@II@Z @ 0x1800C25A8 (-CreateNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioS.c)
 *     ?GetNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUIAudioStreamInfo@@AEAI1AEAPEAV312@@Z @ 0x1800C2CE4 (-GetNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStre.c)
 */

__int64 __fastcall ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::SetAt(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v10; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v11 = -2LL;
  Node = ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::GetNode(
           a1,
           a2,
           (int *)&v10,
           (unsigned int *)&v14,
           v12);
  v7 = Node;
  if ( Node )
  {
    Sarm::CStreamResource::operator=(Node + 8, a3);
  }
  else
  {
    v8 = ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::CreateNode(
           a1,
           (__int64)a2,
           v10,
           v14);
    v7 = v8;
    v14 = v8;
    try
    {
      Sarm::CStreamResource::operator=(v8 + 8, a3);
    }
    catch ( ... )
    {
      ATL::CAtlMap<IAudioStreamInfo *,Sarm::CStreamResource,ATL::CElementTraits<IAudioStreamInfo *>,ATL::CElementTraits<Sarm::CStreamResource>>::RemoveAtPos(
        a1,
        v14);
      throw;
    }
  }
  return v7;
}
