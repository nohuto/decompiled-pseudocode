/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUIBuffer@Streams@Storage@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAUIBuffer@Streams@Storage@Windows@@@567@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400191AC
 * Callers:
 *     ??0?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@1234@Upermission@01234@@Z @ 0x140016098 (--0-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqualityPredicate@PEAVAudioDe.c)
 *     ??0?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@1234@Upermission@01234@@Z @ 0x140048A90 (--0-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@Streams.c)
 * Callees:
 *     ??0IUnknown@@QEAA@XZ @ 0x140002C00 (--0IUnknown@@QEAA@XZ.c)
 */

IUnknown *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>>(
        IUnknown *a1)
{
  IUnknown *result; // rax

  IUnknown::IUnknown(a1);
  a1->lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>::`vftable';
  IUnknown::IUnknown(a1 + 1);
  IUnknown::IUnknown(a1 + 2);
  a1[2].lpVtbl = (struct IUnknownVtbl *)&Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>::`vftable';
  result = a1;
  a1[4].lpVtbl = (struct IUnknownVtbl *)1;
  return result;
}
