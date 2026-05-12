/*
 * XREFs of StorpLogSystemEvent @ 0x1C00333E8
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 *     StorCreateSystemLogEntry @ 0x1C0039C0C (StorCreateSystemLogEntry.c)
 */

__int64 __fastcall StorpLogSystemEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // ecx
  void *v8; // rcx
  unsigned __int8 v9; // si
  unsigned __int8 v10; // bp
  unsigned __int8 v11; // r14
  __int64 Unit; // rax
  unsigned int v13; // [rsp+58h] [rbp+10h]

  if ( (*(_DWORD *)a2 & 0xFFFFFF00) > 0x100 )
  {
    *(_DWORD *)a2 = 511;
    return 3238002699LL;
  }
  if ( *(_DWORD *)(a2 + 40) && !*(_QWORD *)(a2 + 48) )
    return 3238002694LL;
  if ( *(_DWORD *)(a2 + 56) && !*(_QWORD *)(a2 + 64) )
    return 3238002694LL;
  v5 = **(_QWORD **)(a1 - 16);
  if ( !v5 )
    return 3238002694LL;
  if ( KeGetCurrentIrql() > 2u )
    return 3238002696LL;
  v6 = *(_DWORD *)(a2 + 12);
  if ( !v6 )
    goto LABEL_14;
  v7 = v6 - 1;
  if ( v7 )
  {
    if ( v7 == 1 )
      goto LABEL_14;
    return 3238002694LL;
  }
  v9 = *(_BYTE *)(a2 + 16);
  v10 = *(_BYTE *)(a2 + 20);
  v11 = *(_BYTE *)(a2 + 24);
  LOBYTE(v13) = v9;
  BYTE1(v13) = v10;
  BYTE2(v13) = v11;
  Unit = RaidAdapterFindUnit(v5, v13, a3, a4);
  if ( Unit )
  {
    v8 = *(void **)(Unit + 8);
    return StorCreateSystemLogEntry(v8);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x18u,
      (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids,
      v9,
      v10,
      v11);
  }
LABEL_14:
  v8 = *(void **)(v5 + 8);
  return StorCreateSystemLogEntry(v8);
}
