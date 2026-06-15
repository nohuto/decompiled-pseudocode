/*
 * XREFs of ?DeactivateEndpointForCellular@PhoneTopology@@UEAAJPEAUIEndpointDevice@@PEAH@Z @ 0x1801184E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology::DeactivateEndpointForCellular(
        PhoneTopology *this,
        struct IEndpointDevice *a2,
        int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  unsigned int (__fastcall *v7)(struct IEndpointDevice *, GUID *); // rax
  unsigned int (__fastcall *v8)(struct IEndpointDevice *, GUID *); // rax
  GUID v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0;
      v6 = *(_QWORD *)a2;
      v10 = GUID_999f3787_7f77_4a90_aa01_00e70227010c;
      if ( (*(unsigned int (__fastcall **)(struct IEndpointDevice *, GUID *))(v6 + 64))(a2, &v10)
        || (v7 = *(unsigned int (__fastcall **)(struct IEndpointDevice *, GUID *))(*(_QWORD *)a2 + 64LL),
            v10 = GUID_686d7cc0_d903_4258_b443_3a3d3580741c,
            v7(a2, &v10))
        || (v8 = *(unsigned int (__fastcall **)(struct IEndpointDevice *, GUID *))(*(_QWORD *)a2 + 64LL),
            v10 = GUID_d4819615_8194_46fe_88d0_4e8b8bcb9ae4,
            v8(a2, &v10)) )
      {
        *a3 = 1;
      }
    }
    else
    {
      return (unsigned int)-2147467261;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
