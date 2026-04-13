/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@detail@XWinRT@@IPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180066550
 * Callers:
 *     ?IndexOf@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@PEAIPEAE@Z @ 0x180064AC0 (-IndexOf@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __m128i *),
        unsigned int *a5,
        _BYTE *a6)
{
  unsigned int v7; // r15d
  int v9; // edi
  unsigned int i; // r14d
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rsi
  bool v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __m128i v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  __int64 v22; // [rsp+58h] [rbp-8h]
  __int64 v23; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v24; // [rsp+B0h] [rbp+50h]

  v24 = a3;
  v23 = a1;
  v22 = -2LL;
  v7 = a3;
  v9 = 0;
  for ( i = 0; i < v7; ++i )
  {
    if ( v9 < 0 )
      return (unsigned int)v9;
    v11 = 0LL;
    v21 = 0LL;
    v20 = *a2;
    v9 = 0;
    if ( (unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v20, 8)) )
    {
      v19 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)qword_18017C180 + 40LL))(
             qword_18017C180,
             *(unsigned int *)(v20.m128i_i64[0] + 4),
             &GUID_e3297f48_7b89_4112_ae16_4426007135d4,
             &v19);
    }
    else
    {
      v12 = v20.m128i_i64[0];
      v19 = v20.m128i_i64[0];
      if ( !v20.m128i_i64[0] )
        goto LABEL_8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20.m128i_i64[0] + 8LL))(v20.m128i_i64[0]);
    }
    v12 = v19;
LABEL_8:
    if ( v9 >= 0 )
    {
      v11 = v12;
      v21 = v12;
      v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v12;
      v14 = 0;
      v9 = 0;
      if ( a4 == (__int64 (__fastcall ***)(_QWORD, GUID *, __m128i *))v12 )
        goto LABEL_30;
      if ( a4 && v12 )
      {
        v20.m128i_i64[0] = 0LL;
        v23 = 0LL;
        v9 = (**a4)(a4, &GUID_00000000_0000_0000_c000_000000000046, &v20);
        if ( v9 < 0 )
          goto LABEL_17;
        v15 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        v9 = (**v13)(v13, &GUID_00000000_0000_0000_c000_000000000046, &v23);
        if ( v9 < 0 )
        {
LABEL_17:
          v16 = v23;
        }
        else
        {
          v16 = v23;
          v14 = v20.m128i_i64[0] == v23;
        }
        if ( v16 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v20.m128i_i64[0];
        if ( v20.m128i_i64[0] )
        {
          v20.m128i_i64[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      else
      {
        v14 = 0;
      }
      if ( v9 >= 0 && v14 )
      {
LABEL_30:
        *a6 = 1;
        *a5 = i;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        return (unsigned int)v9;
      }
      v7 = v24;
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    ++a2;
  }
  return (unsigned int)v9;
}
