/*
 * XREFs of McTemplateU0q @ 0x1800D9A8C
 * Callers:
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001DAEC (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800D9518 (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x18006487C (McGenEventWriteUM.c)
 */

__int64 __fastcall McTemplateU0q(__int64 a1, __int128 *a2, int a3)
{
  _QWORD v4[3]; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]
  int v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 4;
  return McGenEventWriteUM(AUDIO_EVENT_PROVIDER_Context, a2, 2LL, (__int64)v4);
}
