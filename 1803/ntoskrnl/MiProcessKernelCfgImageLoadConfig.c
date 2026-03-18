/*
 * XREFs of MiProcessKernelCfgImageLoadConfig @ 0x1407541FC
 * Callers:
 *     MiProcessKernelCfgImage @ 0x140161788 (MiProcessKernelCfgImage.c)
 *     MiProcessLoadConfigForDriver @ 0x1405FA978 (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140040D20 (RtlImageDirectoryEntryToData.c)
 *     MiSetImageProtection @ 0x14013EAF4 (MiSetImageProtection.c)
 *     MiCheckForDiscardableLongJumpTable @ 0x140266E84 (MiCheckForDiscardableLongJumpTable.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14074C8EC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MiProcessKernelCfgImageLoadConfig(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  void (__fastcall **v6)(uintptr_t); // r14
  __int64 (__fastcall **v8)(); // r14
  ULONG v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &v9);
  v5 = (__int64)v4;
  if ( v4 )
  {
    if ( *(_DWORD *)v4 >= 0x78u )
    {
      v6 = (void (__fastcall **)(uintptr_t))v4[14];
      if ( v6 )
      {
        if ( a2 && !(unsigned int)MiSetImageProtection(a1, v4[14], 8u) )
        {
          MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig", a1);
          dword_1403CB498 = 103;
          return 3221225595LL;
        }
        *v6 = guard_check_icall;
        if ( a2 && *(_QWORD *)(a2 + 16) )
          MiSetImageProtection(a1, (unsigned __int64)v6, 8u);
      }
    }
    if ( *(_DWORD *)v5 >= 0x80u )
    {
      v8 = *(__int64 (__fastcall ***)())(v5 + 120);
      if ( v8 )
      {
        if ( a2 && !(unsigned int)MiSetImageProtection(a1, *(_QWORD *)(v5 + 120), 8u) )
        {
          MiLogStrongCodeDriverLoadFailure("CfgUnwritableLoadConfig", a1);
          dword_1403CB498 = 104;
          return 3221225595LL;
        }
        *v8 = guard_dispatch_icall;
        if ( a2 && *(_QWORD *)(a2 + 16) )
          MiSetImageProtection(a1, (unsigned __int64)v8, 8u);
      }
    }
    if ( *(_DWORD *)v5 >= 0xC0u && (*(_DWORD *)(v5 + 144) & 0x10000) != 0 )
    {
      if ( *(_QWORD *)(v5 + 184) )
        MiCheckForDiscardableLongJumpTable(a1, v5);
    }
  }
  return 0LL;
}
