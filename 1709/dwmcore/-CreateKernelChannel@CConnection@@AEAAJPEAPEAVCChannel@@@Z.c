/*
 * XREFs of ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x180120898
 * Callers:
 *     ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1801204F0 (-MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1801205A8 (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180120A4C (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180120E70 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180120F54 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1801216F0 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CConnection::CreateKernelChannel(CConnection *this, struct CChannel **a2)
{
  unsigned int v2; // edi
  int v5; // ebx
  signed int v6; // ebx
  signed int v7; // eax
  struct CChannel *v8; // rcx
  struct CChannel *v9; // rax
  CConnection *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-20h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v13; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  struct CChannel *v15; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v5 = NtDCompositionCreateDwmChannel(&v14);
  if ( v5 >= 0 )
  {
    v2 = v14;
    v7 = CChannelTable::AssignChannelEntry((CConnection *)((char *)this + 16), v14, &v13);
    v6 = v7;
    if ( v7 < 0 )
    {
      v12 = 165;
    }
    else
    {
      v7 = CChannel::Create(this, v2, &v15);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v8 = v15;
        *((_QWORD *)v13 + 1) = v15;
        _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
        v9 = v15;
        v15 = 0LL;
        v2 = 0;
        *a2 = v9;
        goto LABEL_9;
      }
      v12 = 173;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, v12);
    goto LABEL_9;
  }
  v6 = v5 | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xA1u);
LABEL_9:
  if ( v6 < 0 && v2 )
  {
    CChannelTable::DestroyHandle((CConnection *)((char *)this + 16), v2);
    CConnection::DestroyKernelChannel(v10, v2);
  }
  ReleaseInterface<CChannel>(&v15);
  return (unsigned int)v6;
}
