/*
 * XREFs of RootHub_ReleaseHardware @ 0x1C005BAE8
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0057260 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rcx
  unsigned int i; // esi
  unsigned __int64 v5; // rdi

  v3 = *(_BYTE **)(a1 + 48);
  if ( v3 )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v3 = *(_BYTE **)(a1 + 48);
      v5 = (unsigned __int64)i << 6;
      if ( v3[v5 + 1] == 2 )
      {
        if ( *(_QWORD *)&v3[v5 + 32] )
        {
          LOBYTE(a2) = 1;
          ExDeleteTimer(*(_QWORD *)&v3[v5 + 32], a2, 0LL, 0LL);
          v3 = *(_BYTE **)(a1 + 48);
        }
        if ( *(_QWORD *)&v3[v5 + 24] )
        {
          ExFreePoolWithTag(*(PVOID *)&v3[v5 + 24], 0x49434858u);
          v3 = *(_BYTE **)(a1 + 48);
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 3056))(
          WdfDriverGlobals,
          *(_QWORD *)&v3[v5 + 40]);
        v3 = *(_BYTE **)(a1 + 48);
      }
    }
    ExFreePoolWithTag(v3, 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
