/*
 * XREFs of Command_NvidiaGetFirmwareVersionCommandCompletion @ 0x1C000D610
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0005410 (WPP_RECORDER_SF_DD.c)
 */

LONG __fastcall Command_NvidiaGetFirmwareVersionCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v1 = *(__int64 **)(a1 + 48);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    v7 = (unsigned __int8)*((_DWORD *)v1 + 10);
    v5 = *((unsigned __int8 *)v1 + 41);
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v3 + 16),
      4u,
      7u,
      0x13u,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      v5,
      v7);
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 264LL) = ((unsigned __int64)*((unsigned __int8 *)v1 + 41) << 8) | (unsigned __int8)*((_DWORD *)v1 + 10);
  }
  else
  {
    v6 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 16),
      3u,
      7u,
      0x14u,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      v6);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
