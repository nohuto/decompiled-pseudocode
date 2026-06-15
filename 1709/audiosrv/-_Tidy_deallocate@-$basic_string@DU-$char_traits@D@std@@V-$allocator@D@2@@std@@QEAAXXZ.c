/*
 * XREFs of ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180031738
 * Callers:
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x180011868 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x18001B730 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18005A9B4 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002FD8C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::string::_Tidy_deallocate(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    std::_Deallocate(*(_QWORD **)a1, v1 + 1, 1uLL);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
