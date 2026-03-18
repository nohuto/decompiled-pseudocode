/*
 * XREFs of ?EnsureVideoProcessor@CD3DDeviceLevel1@@AEAAJIIII@Z @ 0x1801A71F4
 * Callers:
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@0II2@Z @ 0x1801A85C0 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUt.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureVideoProcessor(
        CD3DDeviceLevel1 *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 *v5; // r14
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  int v9; // edi
  __int64 *v10; // rsi
  signed int v11; // eax
  signed int v12; // eax
  _QWORD *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  __int64 v18; // rdi
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rcx
  signed int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  signed int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned int v33; // [rsp+30h] [rbp-48h]
  _DWORD v34[10]; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v35; // [rsp+E0h] [rbp+68h]

  v5 = (__int64 *)((char *)this + 688);
  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( !*((_QWORD *)this + 86)
    || a2 < *((_DWORD *)this + 174)
    || a3 < *((_DWORD *)this + 175)
    || a4 < *((_DWORD *)this + 176)
    || a5 < *((_DWORD *)this + 177) )
  {
    memset_0(v34, 0, sizeof(v34));
    v10 = (__int64 *)((char *)this + 664);
    if ( *((_QWORD *)this + 83)
      || (v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 81))(
                  *((_QWORD *)this + 81),
                  &GUID_10ec4d5b_975a_4689_b9e4_d0aac30fe333,
                  (char *)this + 664),
          v9 = v11,
          v11 >= 0) )
    {
      if ( *((_QWORD *)this + 84)
        || (v12 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 82))(
                    *((_QWORD *)this + 82),
                    &GUID_a7f026da_a5f8_4487_a564_15e34357651e,
                    (char *)this + 672),
            v9 = v12,
            v12 >= 0) )
      {
        v13 = (_QWORD *)((char *)this + 680);
        v14 = *((_QWORD *)this + 85);
        if ( v14 )
        {
          *v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        v15 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v16 = a4;
        v17 = a5;
        v18 = *v10;
        if ( v7 <= *((_DWORD *)this + 174) )
          v7 = *((_DWORD *)this + 174);
        v19 = *((_DWORD *)this + 175);
        v34[3] = v7;
        if ( v6 <= v19 )
          v6 = v19;
        v20 = *((_DWORD *)this + 176);
        v34[4] = v6;
        if ( a4 <= v20 )
          v16 = v20;
        v21 = *((_DWORD *)this + 177);
        v33 = v16;
        v34[7] = v16;
        v22 = *v13;
        if ( a5 <= v21 )
          v17 = v21;
        v34[0] = 0;
        v34[9] = 0;
        v35 = v17;
        v34[1] = 1;
        v34[2] = 1;
        v34[5] = 1;
        v34[6] = 1;
        v34[8] = v17;
        if ( v22 )
        {
          *v13 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        }
        v23 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v18 + 80LL))(
                v18,
                v34,
                (char *)this + 680);
        v9 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x97Fu);
        }
        else
        {
          v24 = *v5;
          v25 = *v10;
          if ( *v5 )
          {
            *v5 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v25 + 32LL))(
                  v25,
                  *v13,
                  0LL,
                  v5);
          v9 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x983u);
          }
          else
          {
            *((_DWORD *)this + 176) = v33;
            *((_DWORD *)this + 177) = v35;
            *((_DWORD *)this + 174) = v7;
            *((_DWORD *)this + 175) = v6;
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x968u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x963u);
    }
    if ( v9 < 0 )
    {
      v27 = *v5;
      if ( *v5 )
      {
        *v5 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v28 = *((_QWORD *)this + 85);
      if ( v28 )
      {
        *((_QWORD *)this + 85) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      v29 = *((_QWORD *)this + 84);
      if ( v29 )
      {
        *((_QWORD *)this + 84) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      v30 = *v10;
      if ( *v10 )
      {
        *v10 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      }
      *((_QWORD *)this + 87) = 0LL;
      *((_QWORD *)this + 88) = 0LL;
    }
  }
  return (unsigned int)v9;
}
