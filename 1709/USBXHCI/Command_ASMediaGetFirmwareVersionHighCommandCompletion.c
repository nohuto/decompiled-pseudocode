/*
 * XREFs of Command_ASMediaGetFirmwareVersionHighCommandCompletion @ 0x1C000C550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 */

LONG __fastcall Command_ASMediaGetFirmwareVersionHighCommandCompletion(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi
  int v3; // edx
  int v5; // [rsp+28h] [rbp-20h]

  v1 = *(__int64 **)(a1 + 48);
  v2 = *v1;
  if ( *((_BYTE *)v1 + 43) == 1 )
  {
    v3 = *((unsigned __int8 *)v1 + 42);
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v2 + 16),
      v3,
      7,
      23,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      *((_BYTE *)v1 + 42),
      *((_BYTE *)v1 + 41),
      *((_DWORD *)v1 + 10));
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 264LL) |= ((unsigned __int8)*((_DWORD *)v1 + 10) | ((unsigned __int64)*(unsigned __int16 *)((char *)v1 + 41) << 8)) << 24;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v2 + 8) + 264LL) = -1LL;
    v5 = *((unsigned __int8 *)v1 + 43);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v2 + 16),
      3u,
      7u,
      0x18u,
      (__int64)&WPP_4a3e8e10b96b3f34321a03f5c4659816_Traceguids,
      v5);
  }
  return KeSetEvent((PRKEVENT)(v1 + 13), 0, 0);
}
