/*
 * XREFs of _lambda_6e535b2589e16be8e59d14ca837e6d0f_::operator() @ 0x1400492CC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@5@PEAI@Z @ 0x14004B330 (-GetMany@-$SimpleVectorIterator@PEAVAudioDeviceModule@Devices@Media@Windows@@V-$Vector@PEAVAudio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_6e535b2589e16be8e59d14ca837e6d0f_::operator()(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v5; // edi
  __int64 result; // rax

  v5 = a2;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)a1 + 32LL)
                                                                              + 128LL))(
             *(_QWORD *)(**(_QWORD **)a1 + 32LL),
             a2,
             **(unsigned int **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             **(_QWORD **)(a1 + 24));
  if ( (int)result >= 0 )
    *a3 = v5 + ***(_DWORD ***)(a1 + 24);
  return result;
}
