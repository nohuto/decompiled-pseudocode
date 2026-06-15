/*
 * XREFs of _lambda_cb1a7eba790d7310050f17c894bfcd12_::operator() @ 0x18004C8E4
 * Callers:
 *     _lambda_2cdbfdbf6a906d093ee55c9100591272_::operator() @ 0x18000FC80 (_lambda_2cdbfdbf6a906d093ee55c9100591272_--operator().c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x1800139E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18002C540 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18004415C (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ @ 0x18007CE74 (--1-$CComPtr@UICompositeSystemEffect@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_cb1a7eba790d7310050f17c894bfcd12_::operator()(
        __int64 a1,
        SystemEffectDescriptor *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  int v7; // r11d
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // [rsp+28h] [rbp-31h]
  int v13; // [rsp+48h] [rbp-11h] BYREF
  int v14; // [rsp+50h] [rbp-9h] BYREF
  __int64 (__fastcall ***v15)(__int64, const struct _GUID *, __int64); // [rsp+58h] [rbp-1h] BYREF
  struct _GUID *v16; // [rsp+60h] [rbp+7h] BYREF
  __int128 v17; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  __int64 v19; // [rsp+80h] [rbp+27h] BYREF
  int v20; // [rsp+88h] [rbp+2Fh]
  int v21; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  unsigned int v23; // [rsp+D0h] [rbp+77h] BYREF

  v18 = -2LL;
  v16 = 0LL;
  v23 = 0;
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  *a4 = 0LL;
  *a5 = 0LL;
  if ( (int)SystemEffectDescriptor::GetDefaultEffectChainClsids(
              a2,
              (struct CAudioSignalProcessingModeArray *)&v19,
              &v23,
              &v16) < 0
    || !v23
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&v19, a3) == -1 )
  {
    goto LABEL_10;
  }
  v15 = 0LL;
  *(_QWORD *)&v17 = v16;
  LODWORD(a5) = v7;
  v23 = 0;
  v13 = 0;
  v14 = 1;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
         &v15,
         &v14,
         &v13,
         (int *)&v23,
         (unsigned int *)&a5,
         (_OWORD **)&v17);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v17 = *(_OWORD *)a3;
    v12 = 0;
    v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, const struct _GUID *, __int64), _QWORD, __int128 *, _QWORD))(*v15)[3])(
           v15,
           *(_QWORD *)(*(_QWORD *)a1 + 16LL),
           &v17,
           0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1523LL;
      goto LABEL_8;
    }
    ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v15);
LABEL_10:
    v9 = 0;
    goto LABEL_11;
  }
  v10 = 1522LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v8,
    v12);
  ATL::CComPtr<ICompositeSystemEffect>::~CComPtr<ICompositeSystemEffect>(&v15);
LABEL_11:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v19);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v16);
  return v9;
}
