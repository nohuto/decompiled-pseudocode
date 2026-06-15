/*
 * XREFs of ??$MakeAndInitialize@VSendCommandAsyncOperation@Devices@Media@Windows@@V1234@QEAVAudioDeviceModule@234@AEAPEAUIBuffer@Streams@Storage@4@@Details@WRL@Microsoft@@YAJPEAPEAVSendCommandAsyncOperation@Devices@Media@Windows@@$$QEBQEAVAudioDeviceModule@456@AEAPEAUIBuffer@Streams@Storage@6@@Z @ 0x140048BB8
 * Callers:
 *     ?SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PEAPEAU?$IAsyncOperation@PEAVModuleCommandResult@Devices@Media@Windows@@@Foundation@4@@Z @ 0x14004EC70 (-SendCommandAsync@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAUIBuffer@Streams@Storage@4@PE.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D508 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ @ 0x140049684 (--0SendCommandAsyncOperation@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14004CF2C (-InternalRelease@-$ComPtr@VSendCommandAsyncOperation@Devices@Media@Windows@@@WRL@Microsoft@@IEAA.c)
 *     ?RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceModule@234@PEAUIBuffer@Streams@Storage@4@@Z @ 0x14004E8D8 (-RuntimeClassInitialize@SendCommandAsyncOperation@Devices@Media@Windows@@QEAAJPEAVAudioDeviceMod.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::SendCommandAsyncOperation,Windows::Media::Devices::AudioDeviceModule * const,Windows::Storage::Streams::IBuffer * &>(
        Windows::Media::Devices::SendCommandAsyncOperation **a1,
        struct Windows::Media::Devices::AudioDeviceModule **a2,
        struct Windows::Storage::Streams::IBuffer **a3)
{
  Windows::Media::Devices::SendCommandAsyncOperation *v6; // rax
  int v7; // edi
  Windows::Media::Devices::SendCommandAsyncOperation *v8; // rax
  struct Windows::Storage::Streams::IBuffer *v9; // r8
  struct Windows::Media::Devices::AudioDeviceModule *v10; // rdx
  Windows::Media::Devices::SendCommandAsyncOperation *v11; // rbx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  Windows::Media::Devices::SendCommandAsyncOperation *v15; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v15 = 0LL;
  v6 = (Windows::Media::Devices::SendCommandAsyncOperation *)operator new(
                                                               0xA8uLL,
                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (Windows::Media::Devices::SendCommandAsyncOperation *)Windows::Media::Devices::SendCommandAsyncOperation::SendCommandAsyncOperation(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v15 = v8;
    v7 = Windows::Media::Devices::SendCommandAsyncOperation::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 16);
        while ( v12 >= 0 )
        {
          v13 = v12;
          v12 = _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 16, v12 + 1, v12);
          if ( v13 == v12 )
            goto LABEL_10;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
      }
LABEL_10:
      *a1 = v11;
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::ComPtr<Windows::Media::Devices::SendCommandAsyncOperation>::InternalRelease(&v15);
  return (unsigned int)v7;
}
