/*
 * XREFs of ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140001728
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14000162C (-InitializeCpuManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140001790 (--$MakeAndInitialize@VCpuManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     _dynamic_atexit_destructor_for__g_CpuManager__ @ 0x1400221F0 (_dynamic_atexit_destructor_for__g_CpuManager__.c)
 *     ??1?$ComPtr@VCpuManager@@@WRL@Microsoft@@QEAA@XZ @ 0x140031620 (--1-$ComPtr@VCpuManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035A80 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140037560 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140001770 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( v4 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
    else
      return v4();
  }
  return result;
}
