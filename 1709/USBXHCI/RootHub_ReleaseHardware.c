/*
 * XREFs of RootHub_ReleaseHardware @ 0x1C005E770
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C005A200 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_ReleaseHardware(__int64 a1, __int64 a2)
{
  unsigned int i; // esi
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rcx
  void *v7; // rcx

  if ( *(_QWORD *)(a1 + 48) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
    {
      v4 = *(_QWORD *)(a1 + 48);
      v5 = (unsigned __int64)i << 6;
      if ( *(_BYTE *)(v5 + v4 + 1) == 2 )
      {
        v6 = *(_QWORD *)(v5 + v4 + 32);
        if ( v6 )
        {
          LOBYTE(a2) = 1;
          ExDeleteTimer(v6, a2, 0LL, 0LL);
        }
        v7 = *(void **)(v5 + *(_QWORD *)(a1 + 48) + 24);
        if ( v7 )
          ExFreePoolWithTag(v7, 0x49434858u);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 3056))(
          WdfDriverGlobals,
          *(_QWORD *)(v5 + *(_QWORD *)(a1 + 48) + 40));
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0x49434858u);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
}
