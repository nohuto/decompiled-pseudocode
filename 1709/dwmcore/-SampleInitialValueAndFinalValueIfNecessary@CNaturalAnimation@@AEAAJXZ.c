/*
 * XREFs of ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180173F8C
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801745E4 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18018766C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SampleInitialValueAndFinalValueIfNecessary(CNaturalAnimation *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  signed int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  char v7; // cl
  int v8; // eax
  char v10; // al
  int v11; // xmm0_4
  int v12; // xmm1_4
  char v13; // al
  int v14; // xmm0_4
  unsigned int v15; // [rsp+20h] [rbp-19h]
  __int64 v16; // [rsp+30h] [rbp-9h] BYREF
  int v17; // [rsp+38h] [rbp-1h]
  int v18; // [rsp+70h] [rbp+37h]
  char v19; // [rsp+74h] [rbp+3Bh]

  if ( (*((_BYTE *)this + 524) & 0x30) == 0x30 )
    return 0;
  memset_0(&v16, 0, 0x40uLL);
  v2 = *((_QWORD *)this + 21);
  v18 = 18;
  v19 = 0;
  if ( v2 )
    v3 = *(_QWORD *)(v2 + 8);
  else
    v3 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 96LL))(
         v3,
         *((unsigned int *)this + 44),
         &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    v15 = 695;
    goto LABEL_10;
  }
  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    if ( *(_BYTE *)(v6 + 4) )
    {
      v4 = CExpressionValue::ApplyMaskToValue((CExpressionValue *)&v16, (struct SubchannelMaskInfo *)v6);
      v5 = v4;
      if ( v4 < 0 )
      {
        v15 = 706;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v15);
        return v5;
      }
    }
  }
  switch ( *((_DWORD *)this + 34) )
  {
    case 0x11:
      return 0;
    case 0x12:
      v13 = *((_BYTE *)this + 524);
      v14 = v16;
      if ( (v13 & 0x10) == 0 )
        *((_DWORD *)this + 68) = v16;
      if ( (v13 & 0x20) == 0 )
        *((_DWORD *)this + 74) = v14;
      return 0;
    case 0x23:
      v10 = *((_BYTE *)this + 524);
      v11 = HIDWORD(v16);
      v12 = v16;
      if ( (v10 & 0x10) == 0 )
      {
        *((_DWORD *)this + 68) = v16;
        *((_DWORD *)this + 69) = v11;
      }
      if ( (v10 & 0x20) == 0 )
      {
        *((_DWORD *)this + 74) = v12;
        *((_DWORD *)this + 75) = v11;
      }
      return 0;
    case 0x34:
      v7 = *((_BYTE *)this + 524);
      v8 = v17;
      if ( (v7 & 0x10) == 0 )
      {
        *((_QWORD *)this + 34) = v16;
        *((_DWORD *)this + 70) = v8;
      }
      if ( (v7 & 0x20) == 0 )
      {
        *((_QWORD *)this + 37) = v16;
        *((_DWORD *)this + 76) = v8;
      }
      return 0;
  }
  v5 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x2F1u);
  return v5;
}
