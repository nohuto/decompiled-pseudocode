/*
 * XREFs of rimDoSecondaryRimDevChangeCallback @ 0x1C01108CC
 * Callers:
 *     rimDoScheduledSecondaryRimPnpWorkPending @ 0x1C011069C (rimDoScheduledSecondaryRimPnpWorkPending.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall rimDoSecondaryRimDevChangeCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // r10d
  int v7; // eax
  __int64 v8; // r9
  int v9; // r10d
  __int64 v10; // r8
  void (__fastcall *v11)(_DWORD *); // r11
  _DWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 760) )
  {
    v6 = *(unsigned __int8 *)(a4 + 48);
    v12[0] = a5;
    v7 = RimDeviceTypeToRimInputType(a4, v6);
    v14 = *(_QWORD *)(v8 + 32);
    v12[2] = v7;
    v12[1] = v9;
    v13 = v10;
    v15 = a2;
    v11(v12);
  }
}
