/*
 * XREFs of ?CheckConnectorSupportForPeriodicity@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@PEAUAUDIO_ENDPOINT_SHARED_CREATE_PARAMS_FOR_KS_ENDPOINTS@@I_JPEAI@Z @ 0x1800B2940
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800B337C (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CheckConnectorSupportForPeriodicity(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  int v7; // ebx
  void (*v8)(void); // rax
  __int64 v9; // rcx
  double v10; // xmm1_8
  double v11; // xmm0_8
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v16; // [rsp+48h] [rbp-18h] BYREF
  int v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  int v19; // [rsp+88h] [rbp+28h] BYREF
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF
  int v21; // [rsp+98h] [rbp+38h] BYREF

  v15[1] = -2LL;
  v15[0] = 0LL;
  v16 = 65;
  v17 = a4;
  v18 = a3;
  v20 = 0LL;
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &GUID_8026ab61_92b2_43c1_a1df_5c37ebd08d82,
           1LL,
           &v16,
           &v20);
    if ( v7 < 0 )
    {
      v9 = v20;
      goto LABEL_7;
    }
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int16 *, __int64 *))(*(_QWORD *)a1 + 24LL))(
           a1,
           &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
           1LL,
           &v16,
           &v20);
    if ( v7 < 0 )
    {
      if ( !v20 )
        goto LABEL_32;
      v8 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
      goto LABEL_5;
    }
  }
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v20)(
         v20,
         &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
         v15);
  v9 = v20;
  if ( v7 < 0 )
    goto LABEL_7;
  if ( v20 )
    (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v15[0] + 40LL))(v15[0], &v19);
  if ( v7 < 0 )
    goto LABEL_32;
  if ( !v19 )
  {
    v10 = (double)*(int *)(a3 + 48);
    v11 = (double)(int)a5;
LABEL_31:
    *a6 = (int)(v10 * v11 / 10000000.0 + 0.5);
    goto LABEL_32;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v15[0] + 32LL))(v15[0], &v21);
  if ( v7 < 0 )
    goto LABEL_32;
  if ( !v21 )
  {
    v12 = 20000;
    if ( a5 >= 0x4E20 )
      v12 = a5;
    v10 = (double)v12;
    v11 = (double)*(int *)(a3 + 48);
    goto LABEL_31;
  }
  v14 = 0LL;
  v20 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15[0])(
         v15[0],
         &GUID_30a99515_1527_4451_af9f_00c5f0234daf,
         &v20);
  if ( v7 >= 0 )
  {
    v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15[0])(
           v15[0],
           &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
           &v14);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 0x40000LL);
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(*(_QWORD *)v15[0] + 24LL))(v15[0], a5, 0LL);
        if ( (int)(v7 + 0x80000000) < 0 || v7 == -2005139372 )
          v7 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v14 + 32LL))(v14, a6);
      }
    }
  }
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v9 = v14;
LABEL_7:
  if ( v9 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
LABEL_5:
    v8();
  }
LABEL_32:
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  return (unsigned int)v7;
}
