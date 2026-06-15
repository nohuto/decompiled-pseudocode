/*
 * XREFs of ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@4@PEAI@Z @ 0x14004BA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Internal::AggregateType<Windows::Media::Devices::AudioDeviceModule *,Windows::Media::Devices::IAudioDeviceModule *>,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  return Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Storage::Streams::IBuffer *,1>,Windows::Storage::Streams::IBuffer *>(
           a1,
           a2,
           a3,
           a4);
}
