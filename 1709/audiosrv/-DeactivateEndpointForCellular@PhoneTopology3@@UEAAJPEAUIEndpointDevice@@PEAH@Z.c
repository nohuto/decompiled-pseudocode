/*
 * XREFs of ?DeactivateEndpointForCellular@PhoneTopology3@@UEAAJPEAUIEndpointDevice@@PEAH@Z @ 0x1800EAF00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneTopology3::DeactivateEndpointForCellular(
        PhoneTopology3 *this,
        struct IEndpointDevice *a2,
        int *a3)
{
  struct IEndpointDevice *v4; // r9
  unsigned int v5; // ebx
  _QWORD *v6; // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h]

  v14[1] = -2LL;
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  v14[0] = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v7 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, _QWORD *))(*(_QWORD *)a2 + 40LL))(a2, v14);
      v6 = (_QWORD *)v14[0];
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v14[0] + 32LL))(v14[0], &v15);
        if ( v8 >= 0 )
        {
          v9 = v15 - *(_QWORD *)&GUID_999f3787_7f77_4a90_aa01_00e70227010c.Data1;
          if ( v15 == *(_QWORD *)&GUID_999f3787_7f77_4a90_aa01_00e70227010c.Data1 )
            v9 = v16 - *(_QWORD *)GUID_999f3787_7f77_4a90_aa01_00e70227010c.Data4;
          if ( !v9 )
            goto LABEL_19;
          v10 = v15 - *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1;
          if ( v15 == *(_QWORD *)&GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data1 )
            v10 = v16 - *(_QWORD *)GUID_686d7cc0_d903_4258_b443_3a3d3580741c.Data4;
          if ( !v10 )
            goto LABEL_19;
          v11 = v15 - *(_QWORD *)&GUID_d4819615_8194_46fe_88d0_4e8b8bcb9ae4.Data1;
          if ( v15 == *(_QWORD *)&GUID_d4819615_8194_46fe_88d0_4e8b8bcb9ae4.Data1 )
            v11 = v16 - *(_QWORD *)GUID_d4819615_8194_46fe_88d0_4e8b8bcb9ae4.Data4;
          if ( v11 )
            v12 = 0;
          else
LABEL_19:
            v12 = 1;
          *a3 = v12;
        }
        else
        {
          v5 = v8;
        }
        v6 = (_QWORD *)v14[0];
      }
      else
      {
        v5 = v7;
      }
    }
    else
    {
      v5 = -2147467261;
    }
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v6 )
    (*(void (__fastcall **)(_QWORD *, _QWORD, int *, struct IEndpointDevice *))(*v6 + 16LL))(v6, *v6, a3, v4);
  return v5;
}
