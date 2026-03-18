/*
 * XREFs of Command_ASMediaGetFirmwareVersionLowCommandCompletion @ 0x1C000C630
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionLowCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  int v4; // edx
  int v6; // [rsp+28h] [rbp-20h]

  v1 = *(__int64 **)(a1 + 48);
  v2 = *((_BYTE *)v1 + 43);
  v3 = *v1;
  if ( v2 == 1 )
  {
    v4 = *((unsigned __int8 *)v1 + 42);
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v3 + 16),
      v4,
      7,
      21,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      *((_BYTE *)v1 + 42),
      *((_BYTE *)v1 + 41),
      *((_DWORD *)v1 + 10));
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 264LL) = (unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8);
  }
  else
  {
    v6 = v2;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v3 + 16),
      3u,
      7u,
      0x16u,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      v6);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
