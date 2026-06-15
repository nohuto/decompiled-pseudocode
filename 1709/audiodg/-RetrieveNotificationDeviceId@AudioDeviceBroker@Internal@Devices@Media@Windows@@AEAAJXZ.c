/*
 * XREFs of ?RetrieveNotificationDeviceId@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJXZ @ 0x140018694
 * Callers:
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400186F4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIPEAK@Z @ 0x140018370 (-KsSendProperty@AudioDeviceBroker@Internal@Devices@Media@Windows@@AEAAJPEAUKSIDENTIFIER@@KPEAXIP.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::RetrieveNotificationDeviceId(
        RTL_SRWLOCK *this)
{
  __int64 result; // rax
  struct KSIDENTIFIER v2; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  *(&v2.Alignment + 2) = 0x100000003LL;
  v2.Set = GUID_c034fdb0_ff75_47c8_aa3c_ee46716b50c6;
  result = Windows::Media::Devices::Internal::AudioDeviceBroker::KsSendProperty(this, &v2, 0x18u, &this[15], 0x10u, &v3);
  if ( (int)result >= 0 && v3 < 0x10 )
    return 2147500037LL;
  return result;
}
