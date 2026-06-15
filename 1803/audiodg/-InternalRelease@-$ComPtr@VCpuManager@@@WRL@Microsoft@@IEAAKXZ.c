/*
 * XREFs of ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x140001674
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x1400013A4 (-InitializeCpuManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x140001548 (--$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     _dynamic_atexit_destructor_for__g_CpuManager__ @ 0x140020C80 (_dynamic_atexit_destructor_for__g_CpuManager__.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140034170 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140035B20 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
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
    if ( v4 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
    else
      return v4();
  }
  return result;
}
