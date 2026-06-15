/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013940
 * Callers:
 *     <none>
 * Callees:
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x140012560 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140013D30 (-Release@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140014170 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400143D0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14001BF70 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x140036120 (_TlgWrite.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004823C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        char *a3,
        int a4,
        struct _GUID *a5,
        _QWORD *a6)
{
  CSystemEffectWrapper *v8; // rbx
  PCONTEXT ContextRecord; // rdx
  struct IUnknown *v10; // rax
  const GUID *v11; // r8
  const GUID *v12; // r9
  struct IUnknown *v13; // r15
  LPVOID *p_lpVtbl; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r12
  const GUID *v17; // rax
  int ExceptionRecord; // r14d
  unsigned __int64 v19; // rax
  GUID *v20; // rdx
  int v21; // r10d
  unsigned __int64 v22; // rdi
  signed __int64 v23; // rsi
  __int16 v24; // cx
  char *v25; // rcx
  unsigned __int64 v26; // r12
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r15
  __int64 (__fastcall *v30)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  void **v31; // r8
  int v32; // eax
  CSystemEffectWrapper *v33; // rcx
  void *v34; // rdi
  __int64 (__fastcall *v35)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  unsigned int (__fastcall *v36)(CSystemEffectWrapper *__hidden); // rax
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  void *v39; // [rsp+58h] [rbp-A8h] BYREF
  struct _EXCEPTION_POINTERS v40; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID *v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  _QWORD *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-50h]
  __int128 v48; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  const char *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  char *v52; // [rsp+100h] [rbp+0h]
  __int64 v53; // [rsp+108h] [rbp+8h]
  int *v54; // [rsp+110h] [rbp+10h]
  __int64 v55; // [rsp+118h] [rbp+18h]

  v44 = -2LL;
  v42 = a1;
  v41 = a5;
  v43 = a6;
  v38 = 0;
  v39 = 0LL;
  v47 = *a2;
  v48 = v47;
  EtwEventActivityIdControl(4LL, &v48);
  *a6 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  if ( InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, (LPVOID *)&v40.ContextRecord) )
    ContextRecord = v40.ContextRecord;
  else
    ContextRecord = 0LL;
  v10 = (struct IUnknown *)AERTAllocate(0xC0uLL, ContextRecord);
  v13 = v10;
  if ( !v10 )
  {
    ExceptionRecord = -2147024882;
LABEL_63:
    v38 = ExceptionRecord;
    goto LABEL_64;
  }
  v10->lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `INDUnknown'};
  v10[1].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAudioProcessingObject'};
  v10[2].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  v10[3].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  v10[4].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAudioSystemEffects2'};
  v10[5].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  v10[6].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputRT'};
  v10[7].lpVtbl = (struct IUnknownVtbl *)&CSystemEffectWrapper::`vftable'{for `IAPOAcousticEchoCancellation'};
  LODWORD(v10[8].lpVtbl) = 1;
  p_lpVtbl = (LPVOID *)&v10[9].lpVtbl;
  v10[9].lpVtbl = 0LL;
  v10[12].lpVtbl = 0LL;
  v10[14].lpVtbl = 0LL;
  v10[15].lpVtbl = 0LL;
  v10[16].lpVtbl = 0LL;
  v10[17].lpVtbl = 0LL;
  v10[18].lpVtbl = 0LL;
  v10[19].lpVtbl = 0LL;
  v10[20].lpVtbl = 0LL;
  v10[21].lpVtbl = 0LL;
  v10[22].lpVtbl = 0LL;
  LODWORD(v10[23].lpVtbl) = 0;
  *(struct _GUID *)&v10[10].lpVtbl = *a5;
  LODWORD(v10[13].lpVtbl) = a4;
  v10[14].lpVtbl = 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)&a3[2 * v15] );
  v10[12].lpVtbl = 0LL;
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    ExceptionRecord = -2147024362;
    goto LABEL_27;
  }
  v10[12].lpVtbl = 0LL;
  if ( is_mul_ok(v16, 2uLL) )
  {
    v17 = (const GUID *)CoTaskMemAlloc(2 * v16);
    v12 = v17;
    v13[12].lpVtbl = (struct IUnknownVtbl *)v17;
    if ( !v17 )
    {
      ExceptionRecord = -2147024882;
      goto LABEL_27;
    }
    ExceptionRecord = 0;
    if ( v16 > 0x7FFFFFFF )
    {
      if ( v15 != -1LL )
        LOWORD(v17->Data1) = 0;
    }
    else
    {
      if ( v15 >= 0x7FFFFFFF )
      {
        p_lpVtbl = (LPVOID *)&v13[9].lpVtbl;
        if ( v15 != -1LL )
          LOWORD(v17->Data1) = 0;
        goto LABEL_22;
      }
      if ( !a3 )
      {
        a3 = (char *)&unk_14006DFC4;
        v15 = 0LL;
      }
      if ( v16 )
      {
        v19 = v16;
        v20 = (GUID *)v12;
        v21 = 0;
        v11 = 0LL;
        v22 = v15 - v16;
        v23 = a3 - (char *)v12;
        while ( v22 + v19 )
        {
          v24 = *(_WORD *)((char *)&v20->Data1 + v23);
          if ( !v24 )
            break;
          LOWORD(v20->Data1) = v24;
          v20 = (GUID *)((char *)v20 + 2);
          v11 = (const GUID *)((char *)v11 + 1);
          if ( !--v19 )
          {
            v20 = (GUID *)((char *)v20 - 2);
            v11 = (const GUID *)((char *)v11 - 1);
            v21 = -2147024774;
            break;
          }
        }
        LOWORD(v20->Data1) = 0;
        v25 = (char *)v12 + 2 * ((_QWORD)&v11->Data1 + 1);
        v26 = v16 - (_QWORD)v11;
        if ( v21 >= 0 && v26 > 1 )
        {
          v11 = (const GUID *)(2 * v26);
          if ( 2 * v26 > 2 )
            memset(v25, 0, (size_t)&v11[-1].Data4[6]);
        }
      }
    }
    p_lpVtbl = (LPVOID *)&v13[9].lpVtbl;
  }
  else
  {
    ExceptionRecord = -2147024362;
  }
LABEL_22:
  LODWORD(v40.ExceptionRecord) = ExceptionRecord;
  if ( ExceptionRecord >= 0 )
  {
    v27 = APOCatchCoCreateInstance(v41, v13 + 1, (__int64)v11, v12, p_lpVtbl, &v40);
    ExceptionRecord = v27;
    if ( v27 < 0 )
    {
      v46 = *(_OWORD *)&v13[10].lpVtbl;
      APOTrackAndLogException(v28, v13[12].lpVtbl, LODWORD(v13[13].lpVtbl), &v46, "CSystemEffectWrapper::Init", 81, v27);
    }
    else
    {
      ExceptionRecord = (int)v40.ExceptionRecord;
    }
    if ( ExceptionRecord >= 0 )
      v8 = (CSystemEffectWrapper *)&v13[1];
  }
LABEL_27:
  v38 = ExceptionRecord;
  if ( ExceptionRecord >= 0 )
  {
    v29 = v42;
    v30 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v8;
    v31 = (void **)(v42 + 88);
    v32 = v30 == CSystemEffectWrapper::QueryInterface
        ? CSystemEffectWrapper::QueryInterface(v8, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, v31)
        : ((__int64 (__fastcall *)(CSystemEffectWrapper *, GUID *, void **, const GUID *))v30)(
            v8,
            &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
            v31,
            v12);
    v38 = v32;
    ExceptionRecord = v32;
    if ( v32 >= 0 )
    {
      v33 = *(CSystemEffectWrapper **)(v29 + 88);
      v34 = v39;
      if ( v39 != v33 )
      {
        v39 = 0LL;
        if ( v33 )
        {
          v35 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v33;
          if ( v35 == CSystemEffectWrapper::QueryInterface )
            CSystemEffectWrapper::QueryInterface(v33, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v39);
          else
            v35(v33, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v39);
        }
        if ( v34 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 16LL))(v34);
      }
      if ( v39 )
      {
        *v43 = v29 + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v29 + 8) + 8LL))(v29 + 8);
        ExceptionRecord = v38;
        if ( v38 >= 0 )
          goto LABEL_39;
        goto LABEL_64;
      }
      if ( *(_QWORD *)(v29 + 88) )
        ATL::AtlComPtrAssign((struct IUnknown **)(v29 + 88), 0LL);
      ExceptionRecord = -2147467262;
      goto LABEL_63;
    }
  }
LABEL_64:
  if ( (unsigned int)hProvider > 2 )
  {
    v50 = "CAPOWrapperSrv::CreateSystemEffect";
    v51 = 35LL;
    HIDWORD(v40.ExceptionRecord) = 63;
    v52 = (char *)&v40.ExceptionRecord + 4;
    v53 = 4LL;
    v54 = &v38;
    v55 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400725B4, v11, v12, 5u, &pData);
    ExceptionRecord = v38;
  }
LABEL_39:
  if ( v8 )
  {
    v36 = *(unsigned int (__fastcall **)(CSystemEffectWrapper *__hidden))(*(_QWORD *)v8 + 16LL);
    if ( v36 == CSystemEffectWrapper::Release )
      CSystemEffectWrapper::Release(v8);
    else
      v36(v8);
  }
  EtwEventActivityIdControl(4LL, &v48);
  if ( v39 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v39 + 16LL))(v39);
  return (unsigned int)ExceptionRecord;
}
