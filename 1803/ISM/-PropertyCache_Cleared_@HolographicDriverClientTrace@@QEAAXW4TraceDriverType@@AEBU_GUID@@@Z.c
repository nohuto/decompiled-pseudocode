/*
 * XREFs of ?PropertyCache_Cleared_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@AEBU_GUID@@@Z @ 0x1800BE100
 * Callers:
 *     ?LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ @ 0x1800C1150 (-LogCleared@PropertyCache@Holographic@Internal@Windows@@MEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800BABC0 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::PropertyCache_Cleared_(__int64 a1, int a2, __int64 a3)
{
  struct HolographicDriverClientTrace *v5; // rax
  __int64 v6; // rcx
  const char *v7; // rax
  __int64 v8; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-58h] BYREF
  const char *v11; // [rsp+50h] [rbp-38h]
  int v12; // [rsp+58h] [rbp-30h]
  int v13; // [rsp+5Ch] [rbp-2Ch]
  __int64 v14; // [rsp+60h] [rbp-28h]
  __int64 v15; // [rsp+68h] [rbp-20h]

  v5 = HolographicDriverClientTrace::Instance();
  v6 = *((_QWORD *)v5 + 1);
  if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 2) != 0 )
  {
    v5 = (struct HolographicDriverClientTrace *)(*(_QWORD *)(v6 + 24) & 2LL);
    if ( v5 == *(struct HolographicDriverClientTrace **)(v6 + 24) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v7 = "SpatialGraph";
        else
          v7 = "(unknown)";
      }
      else
      {
        v7 = "Display";
      }
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v11 = v7;
      v12 = v8 + 1;
      v13 = 0;
      v14 = a3;
      v15 = 16LL;
      LODWORD(v5) = TlgWrite((TraceLoggingHProvider)v6, &unk_180112719, 0LL, 0LL, 4u, &pData);
    }
  }
  return (int)v5;
}
