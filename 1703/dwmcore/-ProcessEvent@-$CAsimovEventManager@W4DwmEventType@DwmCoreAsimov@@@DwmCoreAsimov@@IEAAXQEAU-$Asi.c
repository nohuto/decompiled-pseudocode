/*
 * XREFs of ?ProcessEvent@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@IEAAXQEAU?$AsimovEvent@W4DwmEventType@DwmCoreAsimov@@@2@IIIII@Z @ 0x1800CF2AC
 * Callers:
 *     ?PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x18003E0C0 (-PresentInternal@CDWMSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z.c)
 *     ?SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z @ 0x1800CE118 (-SetFlipState@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAXW4HwFlipState@2@@Z.c)
 *     ?RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ @ 0x1800CE220 (-RecordErrorForAggregation@CDwmEventManager@DwmCoreAsimov@@AEAAXXZ.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z @ 0x180187194 (-EndUsageLogging@CDwmEventManager@DwmCoreAsimov@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??A?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@QEAAAEAUThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@AEBW4DwmEventType@4@@Z @ 0x1800CF560 (--A-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4DwmEventTy.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ProcessEvent(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, _QWORD))
{
  unsigned int *v2; // r14
  char v5; // bl
  __int64 v6; // rax
  ULONGLONG TickCount64; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // xmm0_8
  unsigned __int64 v10; // r8
  __int64 result; // rax
  __int64 (__fastcall ***v12)(_QWORD, _QWORD); // rcx
  unsigned int v13; // ecx
  int v14; // edx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD); // rcx
  __int64 (__fastcall **v16)(_QWORD, _QWORD); // rax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD); // rdx
  __m128i v18; // [rsp+20h] [rbp-30h]
  __m128i v19; // [rsp+30h] [rbp-20h]
  ULONGLONG v20; // [rsp+70h] [rbp+20h]

  v2 = (unsigned int *)(a2 + 1);
  v5 = 0;
  v6 = ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::operator[](
         a1 + 3,
         a2 + 1);
  v18 = *(__m128i *)v6;
  v19 = *(__m128i *)v6;
  v20 = *(_QWORD *)(v6 + 16);
  TickCount64 = GetTickCount64();
  v8 = v20;
  v9 = _mm_srli_si128(v18, 8).m128i_u64[0];
  if ( v9 > v20 )
    v8 = v9;
  v10 = TickCount64 - v8;
  if ( TickCount64 - v8 >= 0x3E8 )
  {
    v13 = _mm_cvtsi128_si32(v18);
    v14 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 4));
    v19.m128i_i64[0] = __PAIR64__(v14, v13);
    if ( v13 + v14 >= 0x78 && v10 >= 0x6DDD00 )
    {
      v14 = 0;
      v19.m128i_i64[0] = 0LL;
      v13 = 0;
      v18 = v19;
    }
    if ( v13 >= 0xA )
    {
      if ( v10 < 0xEA60 )
        goto LABEL_4;
    }
    else if ( v10 < 0xEA60 )
    {
      v5 = 1;
      v19.m128i_i64[1] = TickCount64;
      v19.m128i_i32[0] = v13 + 1;
LABEL_12:
      v18 = v19;
      goto LABEL_4;
    }
    if ( v13 + v14 > 0x78 )
      goto LABEL_4;
    v5 = 1;
    v20 = TickCount64;
    v19.m128i_i64[1] = v9 & -(__int64)(v10 < 0x927C0);
    goto LABEL_12;
  }
LABEL_4:
  result = ATL::CAtlMap<enum DwmCoreAsimov::DwmEventType,DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo,ATL::CElementTraits<enum DwmCoreAsimov::DwmEventType>,ATL::CElementTraits<DwmCoreAsimov::CAsimovEventManager<enum DwmCoreAsimov::DwmEventType>::ThrottleEventInfo>>::operator[](
             a1 + 3,
             v2);
  *(__m128i *)result = v18;
  *(_QWORD *)(result + 16) = v20;
  if ( v5 )
  {
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[2];
    if ( v15 )
    {
      v16 = *v15;
      v17 = a2;
    }
    else
    {
      v16 = *a2;
      v15 = a2;
      v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD))*a1;
    }
    result = (*v16)(v15, v17);
  }
  v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD))a1[1];
  if ( v12 )
    return (**v12)(v12, *v2);
  return result;
}
