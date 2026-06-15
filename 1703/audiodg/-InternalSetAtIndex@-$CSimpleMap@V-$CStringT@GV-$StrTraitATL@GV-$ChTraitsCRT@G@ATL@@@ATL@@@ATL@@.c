/*
 * XREFs of ?InternalSetAtIndex@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCSystemAudioDeviceBase@@@2@@ATL@@QEAAXHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAVCSystemAudioDeviceBase@@@Z @ 0x140031778
 * Callers:
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140038EC8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@AEBV01@@Z @ 0x14003186C (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void *__fastcall ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CSystemAudioDeviceBase *>>::InternalSetAtIndex(
        __int64 a1,
        int a2,
        __int64 a3,
        void **a4)
{
  __int64 v5; // rbx
  char *v6; // rcx
  void *result; // rax
  void **v8; // rcx

  v5 = a2;
  v6 = (char *)qword_140086290 + 8 * a2;
  if ( v6 )
    ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v6, a3);
  result = qword_140086298;
  v8 = (void **)((char *)qword_140086298 + 8 * v5);
  if ( v8 )
  {
    result = *a4;
    *v8 = *a4;
  }
  return result;
}
