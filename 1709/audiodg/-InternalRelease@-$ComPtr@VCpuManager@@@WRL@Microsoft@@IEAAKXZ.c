/*
 * XREFs of ?InternalRelease@?$ComPtr@VCpuManager@@@WRL@Microsoft@@IEAAKXZ @ 0x14001B9EC
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x14001B5C4 (-InitializeCpuManager@@YAJXZ.c)
 *     ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x14001B768 (--$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z.c)
 *     _dynamic_atexit_destructor_for__g_CpuManager__ @ 0x140021ED0 (_dynamic_atexit_destructor_for__g_CpuManager__.c)
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140035300 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ @ 0x140036F50 (-InternalRemoveFromCpuManager@GraphStreamingResourceManager@@EEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400166A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CpuManager>::InternalRelease(volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
    else
      return v4();
  }
  return result;
}
