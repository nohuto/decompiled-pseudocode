/*
 * XREFs of ?ActivateEndpointForCellular@PhoneTopology3@@UEAAJPEAUIEndpointDevice@@@Z @ 0x1800EAA20
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneTopology3::ActivateEndpointForCellular(PhoneTopology3 *this, struct IEndpointDevice *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  size_t *v6; // r8
  unsigned __int16 *v7; // rcx
  _OWORD *v8; // rcx
  _OWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v15; // [rsp+28h] [rbp-E0h] BYREF
  int v16; // [rsp+30h] [rbp-D8h] BYREF
  int v17; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  BSTR bstrString[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v20[1056]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v21[2]; // [rsp+478h] [rbp+370h] BYREF
  _DWORD v22[264]; // [rsp+488h] [rbp+380h] BYREF

  bstrString[1] = (BSTR)-2LL;
  v4 = 0;
  bstrString[0] = 0LL;
  v17 = 0;
  if ( a2 )
  {
    memset(v22, 0, 0x418uLL);
    v5 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v18);
    if ( v5 < 0 )
      goto LABEL_4;
    v5 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, BSTR *))(*(_QWORD *)a2 + 152LL))(a2, bstrString);
    if ( v5 < 0 )
      goto LABEL_4;
    v5 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, int *))(*(_QWORD *)a2 + 144LL))(a2, &v16);
    if ( v5 < 0 )
      goto LABEL_4;
    v6 = (size_t *)bstrString[0];
    if ( !bstrString[0] )
      goto LABEL_28;
    if ( (_DWORD)v18 )
    {
      v22[261] = v16;
      v6 = (size_t *)bstrString[0];
      v7 = (unsigned __int16 *)&v22[131];
    }
    else
    {
      v22[130] = v16;
      v7 = (unsigned __int16 *)v22;
    }
    StringCchCopyW(v7, 0x104uLL, v6);
    v8 = v20;
    v9 = v22;
    v10 = 8LL;
    do
    {
      *v8 = *v9;
      v8[1] = v9[1];
      v8[2] = v9[2];
      v8[3] = v9[3];
      v8[4] = v9[4];
      v8[5] = v9[5];
      v8[6] = v9[6];
      v8 += 8;
      *(v8 - 1) = v9[7];
      v9 += 8;
      --v10;
    }
    while ( v10 );
    *v8 = *v9;
    *((_QWORD *)v8 + 2) = *((_QWORD *)v9 + 2);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, int *))(**((_QWORD **)this + 5) + 96LL))(
           *((_QWORD *)this + 5),
           v20,
           &v17);
    if ( v5 < 0 )
    {
LABEL_4:
      v4 = v5;
    }
    else if ( v17 )
    {
      v15 = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v15);
      if ( v11 < 0 )
        goto LABEL_16;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 32LL))(v15, v21);
      if ( v11 < 0 )
        goto LABEL_16;
      v12 = v21[0] - *(_QWORD *)&GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data1;
      if ( v21[0] == *(_QWORD *)&GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data1 )
        v12 = v21[1] - *(_QWORD *)GUID_dff21de1_f70f_11d0_b917_00a0c9223196.Data4;
      if ( !v12
        && (v11 = (*(__int64 (__fastcall **)(PhoneTopology3 *, _QWORD, struct IEndpointDevice *))(*(_QWORD *)this + 24LL))(
                    this,
                    (unsigned int)v18,
                    a2),
            v11 < 0)
        || (v11 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, __int64 *, _QWORD))(*(_QWORD *)a2 + 184LL))(
                    a2,
                    &ADAPTERCLASS_PHONE_PRIMARY,
                    0LL),
            v11 < 0) )
      {
LABEL_16:
        v4 = v11;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct IEndpointDevice *, const struct _GUID *, _QWORD))(*(_QWORD *)a2 + 184LL))(
              a2,
              &ADAPTERCLASS_OTHER,
              0LL);
      if ( v13 < 0 )
        v4 = v13;
    }
  }
  else
  {
    v4 = -2147467261;
  }
LABEL_28:
  SysFreeString(bstrString[0]);
  return v4;
}
