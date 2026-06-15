/*
 * XREFs of ?RecalculateSessionVolume@CAudioSession@@UEAAXW4AudioVolumeChangeType@@PEBU_GUID@@K_NPEA_J@Z @ 0x180005070
 * Callers:
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800AB760 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _lambda_041b38cc9b1c9530af273109c15771c6_::operator() @ 0x1800635C8 (_lambda_041b38cc9b1c9530af273109c15771c6_--operator().c)
 */

__int64 __fastcall CAudioSession::RecalculateSessionVolume(__int64 a1, int a2, __int64 a3, int a4, char a5)
{
  _QWORD v6[6]; // [rsp+20h] [rbp-30h] BYREF
  int v7; // [rsp+68h] [rbp+18h] BYREF
  __int64 v8; // [rsp+70h] [rbp+20h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF

  v9 = a4;
  v8 = a3;
  v7 = a2;
  v6[0] = a1 - 16;
  v6[1] = &v8;
  v6[2] = &a5;
  v6[3] = &v7;
  v6[4] = &v9;
  return lambda_041b38cc9b1c9530af273109c15771c6_::operator()(v6);
}
