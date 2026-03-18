/*
 * XREFs of rimDoRimDevChangeCallback @ 0x1C001AE20
 * Callers:
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall rimDoRimDevChangeCallback(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r11
  int v7; // r8d
  void (__fastcall *v8)(_DWORD *); // r10
  _DWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 760) )
  {
    v9[0] = a3;
    v3 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
    v5 = *(_QWORD *)(v4 + 528);
    v12 = 0LL;
    v10 = v5;
    v11 = *(_QWORD *)(v6 + 32);
    v9[2] = v3;
    v9[1] = v7;
    v8(v9);
  }
}
