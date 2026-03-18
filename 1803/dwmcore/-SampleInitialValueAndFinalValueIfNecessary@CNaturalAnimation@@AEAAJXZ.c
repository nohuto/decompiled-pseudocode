/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D19C
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D8EC (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // cl
  int v9; // eax
  char v10; // al
  int v11; // xmm0_4
  int v12; // xmm1_4
  char v13; // al
  int v14; // xmm0_4
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-19h]
  __int64 v18; // [rsp+30h] [rbp-9h] BYREF
  int v19; // [rsp+38h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+37h]
  int v21; // [rsp+78h] [rbp+3Fh]
  char v22; // [rsp+7Ch] [rbp+43h]

  if ( (*((_BYTE *)this + 540) & 0x30) == 0x30 )
    return 0;
  memset_0(&v18, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 22);
  v20 = 0LL;
  v21 = 18;
  v22 = 0;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 8);
  else
    v3 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 96LL))(
         v3,
         *((unsigned int *)this + 46),
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v17 = 687;
    goto LABEL_10;
  }
  v6 = *((_QWORD *)this + 24);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 4) )
    {
      v4 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v18, (struct SubchannelMaskInfo *)v6);
      v5 = v4;
      if ( v4 < 0 )
      {
        v17 = 698;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v17);
        goto LABEL_11;
      }
    }
  }
  switch ( *((_DWORD *)this + 36) )
  {
    case 0x11:
LABEL_30:
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      return 0;
    case 0x12:
      v13 = *((_BYTE *)this + 540);
      v14 = v18;
      if ( (v13 & 0x10) == 0 )
        *((_DWORD *)this + 72) = v18;
      if ( (v13 & 0x20) == 0 )
        *((_DWORD *)this + 78) = v14;
      goto LABEL_30;
    case 0x23:
      v10 = *((_BYTE *)this + 540);
      v11 = HIDWORD(v18);
      v12 = v18;
      if ( (v10 & 0x10) == 0 )
      {
        *((_DWORD *)this + 72) = v18;
        *((_DWORD *)this + 73) = v11;
      }
      if ( (v10 & 0x20) == 0 )
      {
        *((_DWORD *)this + 78) = v12;
        *((_DWORD *)this + 79) = v11;
      }
      goto LABEL_30;
    case 0x34:
      v8 = *((_BYTE *)this + 540);
      v9 = v19;
      if ( (v8 & 0x10) == 0 )
      {
        *((_QWORD *)this + 36) = v18;
        *((_DWORD *)this + 74) = v9;
      }
      if ( (v8 & 0x20) == 0 )
      {
        *((_QWORD *)this + 39) = v18;
        *((_DWORD *)this + 80) = v9;
      }
      goto LABEL_30;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x2E9u);
LABEL_11:
  v7 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}
