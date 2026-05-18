/*
 * XREFs of ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@IIIII@Z @ 0x180007AD0
 * Callers:
 *     ?ProcessEvent@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmInitEventType@DwmInitAsimov@@@2@@Z @ 0x180007A58 (-ProcessEvent@-$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@IEAAXQEAU-.c)
 * Callees:
 *     ?GetNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEBAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@AEAI1AEAPEAV312@@Z @ 0x18000805C (-GetNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4.c)
 *     ?CreateNode@?$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@V?$CElementTraits@W4DwmInitEventType@DwmInitAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmInitEventType@DwmInitAsimov@@@DwmCoreAsimov@@@7@@ATL@@AEAAPEAVCNode@12@AEBW4DwmInitEventType@DwmInitAsimov@@II@Z @ 0x1800080A8 (-CreateNode@-$CAtlMap@W4DwmInitEventType@DwmInitAsimov@@UThrottleEventInfo@-$CAsimovEventManager.c)
 *     _guard_dispatch_icall_nop @ 0x1800097F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ProcessEvent(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD),
        unsigned int a3,
        unsigned int a4)
{
  unsigned int *v4; // rsi
  _QWORD *v6; // r15
  char v8; // bl
  __int64 Node; // rax
  ULONGLONG TickCount64; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  unsigned __int64 v13; // rdx
  unsigned int v14; // ecx
  int v15; // r8d
  __int64 result; // rax
  ULONGLONG v17; // xmm1_8
  __int64 (__fastcall ***v18)(_QWORD, _QWORD); // rcx
  __int64 (__fastcall **v19)(_QWORD, _QWORD); // rax
  __int64 (__fastcall ***v20)(_QWORD, _QWORD); // rdx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD); // rcx
  __m128i v22; // [rsp+30h] [rbp-38h]
  __m128i v23; // [rsp+40h] [rbp-28h]
  unsigned __int64 v24; // [rsp+50h] [rbp-18h]
  ULONGLONG v25; // [rsp+A0h] [rbp+38h] BYREF
  char v26; // [rsp+A8h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v28; // [rsp+B8h] [rbp+50h] BYREF

  v28 = a4;
  v27 = a3;
  v4 = (unsigned int *)(a2 + 1);
  v6 = a1 + 3;
  v8 = 0;
  Node = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::GetNode(
           (int)a1 + 24,
           (int)a2 + 8,
           (unsigned int)&v27,
           (unsigned int)&v28,
           (__int64)&v25);
  if ( !Node )
    Node = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::CreateNode(
             v6,
             v4,
             v27,
             v28);
  v22 = *(__m128i *)(Node + 8);
  v23.m128i_i64[1] = v22.m128i_i64[1];
  v25 = *(_QWORD *)(Node + 24);
  v24 = v25;
  TickCount64 = GetTickCount64();
  v11 = v24;
  v12 = _mm_srli_si128(v22, 8).m128i_u64[0];
  if ( v12 > v24 )
    v11 = v12;
  v13 = TickCount64 - v11;
  if ( TickCount64 - v11 >= 0x3E8 )
  {
    v14 = _mm_cvtsi128_si32(v22);
    v15 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
    v23.m128i_i64[0] = __PAIR64__(v15, v14);
    if ( v14 + v15 >= 0x78 && v13 >= 0x6DDD00 )
    {
      v15 = 0;
      v23.m128i_i64[0] = 0LL;
      v14 = 0;
      v22 = v23;
    }
    if ( v14 >= 0xA )
    {
      if ( v13 < 0xEA60 )
        goto LABEL_16;
    }
    else if ( v13 < 0xEA60 )
    {
      v8 = 1;
      v23.m128i_i64[1] = TickCount64;
      v23.m128i_i32[0] = v14 + 1;
LABEL_15:
      v22 = v23;
      goto LABEL_16;
    }
    if ( v14 + v15 > 0x78 )
      goto LABEL_16;
    v8 = 1;
    v25 = TickCount64;
    v23.m128i_i64[1] = v12 & -(__int64)(v13 < 0x927C0);
    goto LABEL_15;
  }
LABEL_16:
  result = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::GetNode(
             (_DWORD)v6,
             (_DWORD)v4,
             (unsigned int)&v27,
             (unsigned int)&v28,
             (__int64)&v26);
  if ( !result )
    result = ATL::CAtlMap<enum DwmInitAsimov::DwmInitEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmInitAsimov::DwmInitEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmInitAsimov::DwmInitEventType>::ThrottleEventInfo>>::CreateNode(
               v6,
               v4,
               v27,
               v28);
  v17 = v25;
  *(__m128i *)(result + 8) = v22;
  *(_QWORD *)(result + 24) = v17;
  if ( v8 )
  {
    v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[2];
    if ( v18 )
    {
      v19 = *v18;
      v20 = a2;
    }
    else
    {
      v19 = *a2;
      v18 = a2;
      v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD))*a1;
    }
    result = (*v19)(v18, v20);
  }
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[1];
  if ( v21 )
    return (**v21)(v21, *v4);
  return result;
}
