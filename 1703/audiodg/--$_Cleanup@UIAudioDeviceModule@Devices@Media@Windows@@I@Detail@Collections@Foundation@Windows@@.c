/*
 * XREFs of ??$_Cleanup@UIAudioDeviceModule@Devices@Media@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAudioDeviceModule@Devices@Media@3@I@Z @ 0x140048C70
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x140048CAC (--$_IteratorGetMany@U-$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Found.c)
 *     ??$_VectorGetMany@U?$IVector_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVector_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IIPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x140048D78 (--$_VectorGetMany@U-$IVector_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundatio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Media::Devices::IAudioDeviceModule,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
