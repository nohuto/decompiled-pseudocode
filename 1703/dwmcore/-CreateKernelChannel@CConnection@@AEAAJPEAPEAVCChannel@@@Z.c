/*
 * XREFs of ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800657E0
 * Callers:
 *     ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1800CBE80 (-MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18007E254 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z @ 0x1800CA6B8 (-Create@CChannel@@SAJPEAVCConnection@@IPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z @ 0x1800CA74C (--$ReleaseInterface@VCChannel@@@@YAXAEAPEAVCChannel@@@Z.c)
 *     ?DestroyKernelChannel@CConnection@@AEAAJI@Z @ 0x180138A14 (-DestroyKernelChannel@CConnection@@AEAAJI@Z.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x180138BA0 (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 */

__int64 __fastcall CConnection::CreateKernelChannel(CConnection *this, struct CChannel **a2)
{
  unsigned int v2; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  struct CChannel *v8; // rcx
  struct CChannel *v9; // rax
  CConnection *v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-20h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v13; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  struct CChannel *v15; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v5 = NtDCompositionCreateDwmChannel(&v14);
  if ( v5 < 0 )
  {
    v7 = v5 | 0x10000000;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA1u);
    goto LABEL_5;
  }
  v2 = v14;
  v6 = CChannelTable::AssignChannelEntry((CConnection *)((char *)this + 16), v14, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 165;
    goto LABEL_10;
  }
  v6 = CChannel::Create(this, v2, &v15);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 173;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v12);
    goto LABEL_5;
  }
  v8 = v15;
  *((_QWORD *)v13 + 1) = v15;
  _InterlockedIncrement((volatile signed __int32 *)v8 + 2);
  v9 = v15;
  v15 = 0LL;
  v2 = 0;
  *a2 = v9;
LABEL_5:
  if ( v7 < 0 && v2 )
  {
    CChannelTable::DestroyHandle((CConnection *)((char *)this + 16), v2);
    CConnection::DestroyKernelChannel(v11, v2);
  }
  ReleaseInterface<CChannel>(&v15);
  return (unsigned int)v7;
}
