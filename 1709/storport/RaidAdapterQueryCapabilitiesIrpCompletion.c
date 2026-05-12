/*
 * XREFs of RaidAdapterQueryCapabilitiesIrpCompletion @ 0x1C0013A90
 * Callers:
 *     <none>
 * Callees:
 *     RaidPnPPassToMiniPort @ 0x1C0013B8C (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterQueryCapabilitiesIrpCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // r8
  int v5; // eax
  int v7; // edx
  int v8; // eax
  _TBYTE v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+3Ah] [rbp-1Eh]
  int v11; // [rsp+42h] [rbp-16h]
  __int16 v12; // [rsp+46h] [rbp-12h]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(v2 + 3) |= 1u;
  if ( *(_DWORD *)(v3 + 312) == 5 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    if ( (v5 & 0x10) != 0 )
      *(_DWORD *)(v4 + 4) = v5 & 0xFFFFFDFF;
  }
  if ( (*(_BYTE *)(v3 + 104) & 1) != 0 && (*(_DWORD *)(*(_QWORD *)(v3 + 528) + 184LL) & 4) != 0 )
  {
    *(_QWORD *)((char *)&v9 + 2) = 0LL;
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    v7 = *(_DWORD *)(v4 + 4) & 0x3FF | (*(_DWORD *)(v4 + 4) >> 7) & 0x400;
    LODWORD(v9) = 1572865;
    v8 = *(_DWORD *)(v4 + 12);
    DWORD1(v9) = v7;
    *(_DWORD *)((char *)&v10 + 2) = v8;
    RaidPnPPassToMiniPort(a1, 9, v4, (unsigned int)&v9, 24);
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v3 + 256));
  return 0LL;
}
