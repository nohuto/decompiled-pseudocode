/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140013610
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x140013A50 (-Release@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140013E40 (-QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x140013E80 (-AddRef@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x1400158B4 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015B70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     __security_check_cookie @ 0x14001BC70 (__security_check_cookie.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140032528 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z @ 0x14004643C (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGW4APO_TYPE@@U_GUID@@PEADKJ_N5@Z.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        char *a3,
        int a4,
        struct _GUID *a5,
        _QWORD *a6)
{
  CSystemEffectWrapper *v9; // rbx
  void *v10; // rdx
  char *v11; // rax
  const struct _GUID *v12; // r9
  char *v13; // r15
  struct IUnknown *v14; // rcx
  LPVOID *v15; // r8
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // r12
  const struct _GUID *v18; // rax
  int ExceptionRecord; // r14d
  unsigned __int64 v20; // rax
  struct _GUID *v21; // rdx
  int v22; // r10d
  __int64 v23; // r8
  unsigned __int64 v24; // rdi
  signed __int64 v25; // rsi
  __int16 v26; // cx
  unsigned __int64 v27; // r12
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  __int64 (__fastcall *v31)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **); // rax
  PCONTEXT ContextRecord; // rdi
  unsigned int (__fastcall *v33)(CSystemEffectWrapper *__hidden); // rax
  __int64 v34; // rcx
  __int64 v35; // rcx
  void (*v36)(void); // rax
  unsigned int (__fastcall *v37)(CSystemEffectWrapper *__hidden); // rax
  LPVOID *v39; // [rsp+20h] [rbp-99h]
  struct _EXCEPTION_POINTERS v40; // [rsp+50h] [rbp-69h] BYREF
  void *v41; // [rsp+60h] [rbp-59h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-51h] BYREF
  struct _GUID *v43; // [rsp+70h] [rbp-49h]
  _QWORD *v44; // [rsp+78h] [rbp-41h]
  __int64 v45; // [rsp+80h] [rbp-39h]
  __int64 v46; // [rsp+88h] [rbp-31h]
  __int128 v47; // [rsp+90h] [rbp-29h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-19h]
  __int128 v49; // [rsp+B0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v45 = -2LL;
  v43 = a5;
  v44 = a6;
  v48 = *a2;
  v49 = v48;
  EtwEventActivityIdControl(4LL, &v49);
  *a6 = 0LL;
  if ( !a4 )
  {
    ExceptionRecord = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
      (const char *)0x80070057LL,
      (int)v39);
    goto LABEL_54;
  }
  v9 = 0LL;
  v46 = 0LL;
  if ( InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context) )
    v10 = Context;
  else
    v10 = 0LL;
  v11 = (char *)AERTAllocate(0xD0uLL, v10);
  v13 = v11;
  if ( !v11 )
  {
    ExceptionRecord = -2147024882;
    goto LABEL_76;
  }
  *(_QWORD *)v11 = &CSystemEffectWrapper::`vftable'{for `INDUnknown'};
  v14 = (struct IUnknown *)(v11 + 8);
  *((_QWORD *)v11 + 1) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)v11 + 2) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectConfiguration'};
  *((_QWORD *)v11 + 3) = &CSystemEffectWrapper::`vftable'{for `IAudioProcessingObjectRT'};
  *((_QWORD *)v11 + 4) = &CSystemEffectWrapper::`vftable'{for `IAudioSystemEffects2'};
  *((_QWORD *)v11 + 5) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputConfiguration'};
  *((_QWORD *)v11 + 6) = &CSystemEffectWrapper::`vftable'{for `IAPOAuxiliaryInputRT'};
  *((_QWORD *)v11 + 7) = &CSystemEffectWrapper::`vftable'{for `IAPOAcousticEchoCancellation'};
  *((_QWORD *)v11 + 8) = &CSystemEffectWrapper::`vftable'{for `IAudioAmbisonics'};
  *((_DWORD *)v11 + 18) = 1;
  v15 = (LPVOID *)(v11 + 80);
  *((_QWORD *)v11 + 10) = 0LL;
  *((_QWORD *)v11 + 13) = 0LL;
  *((_QWORD *)v11 + 15) = 0LL;
  *((_QWORD *)v11 + 16) = 0LL;
  *((_QWORD *)v11 + 17) = 0LL;
  *((_QWORD *)v11 + 18) = 0LL;
  *((_QWORD *)v11 + 19) = 0LL;
  *((_QWORD *)v11 + 20) = 0LL;
  *((_QWORD *)v11 + 21) = 0LL;
  *((_QWORD *)v11 + 22) = 0LL;
  *((_QWORD *)v11 + 23) = 0LL;
  *((_QWORD *)v11 + 24) = 0LL;
  *((_DWORD *)v11 + 50) = 0;
  *(struct _GUID *)(v11 + 88) = *a5;
  *((_DWORD *)v11 + 28) = a4;
  *((_QWORD *)v11 + 15) = 0LL;
  v16 = -1LL;
  do
    ++v16;
  while ( *(_WORD *)&a3[2 * v16] );
  *((_QWORD *)v11 + 13) = 0LL;
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    ExceptionRecord = -2147024362;
  }
  else
  {
    *((_QWORD *)v11 + 13) = 0LL;
    if ( !is_mul_ok(v17, 2uLL) )
    {
      ExceptionRecord = -2147024362;
      goto LABEL_23;
    }
    v18 = (const struct _GUID *)CoTaskMemAlloc(2 * v17);
    v12 = v18;
    *((_QWORD *)v13 + 13) = v18;
    if ( v18 )
    {
      ExceptionRecord = 0;
      if ( v17 > 0x7FFFFFFF )
      {
        if ( v16 != -1LL )
          LOWORD(v18->Data1) = 0;
      }
      else
      {
        if ( v16 >= 0x7FFFFFFF )
        {
          v14 = (struct IUnknown *)(v13 + 8);
          v15 = (LPVOID *)(v13 + 80);
          if ( v16 != -1LL )
            LOWORD(v18->Data1) = 0;
          goto LABEL_23;
        }
        if ( !a3 )
        {
          a3 = (char *)&unk_14006B264;
          v16 = 0LL;
        }
        if ( v17 )
        {
          v20 = v17;
          v21 = (struct _GUID *)v12;
          v22 = 0;
          v23 = 0LL;
          v24 = v16 - v17;
          v25 = a3 - (char *)v12;
          while ( v24 + v20 )
          {
            v26 = *(_WORD *)((char *)&v21->Data1 + v25);
            if ( !v26 )
              break;
            LOWORD(v21->Data1) = v26;
            v21 = (struct _GUID *)((char *)v21 + 2);
            ++v23;
            if ( !--v20 )
            {
              v21 = (struct _GUID *)((char *)v21 - 2);
              --v23;
              v22 = -2147024774;
              break;
            }
          }
          LOWORD(v21->Data1) = 0;
          v27 = v17 - v23;
          if ( v22 >= 0 && v27 > 1 && 2 * v27 > 2 )
            memset_0((char *)&v12->Data1 + 2 * v23 + 2, 0, 2 * v27 - 2);
        }
      }
      v14 = (struct IUnknown *)(v13 + 8);
      v15 = (LPVOID *)(v13 + 80);
LABEL_23:
      LODWORD(v40.ExceptionRecord) = ExceptionRecord;
      if ( ExceptionRecord < 0 )
        goto LABEL_76;
      ExceptionRecord = APOCatchCoCreateInstance(v43, v14, (unsigned int)v15, v12, v15, &v40);
      if ( ExceptionRecord < 0 )
      {
        v47 = *(_OWORD *)(v13 + 88);
        v39 = (LPVOID *)"CSystemEffectWrapper::Init";
        APOTrackAndLogException(v28, *((_QWORD *)v13 + 13), *((unsigned int *)v13 + 28), &v47);
      }
      else
      {
        ExceptionRecord = (int)v40.ExceptionRecord;
      }
      if ( ExceptionRecord < 0 )
        goto LABEL_76;
      v9 = (CSystemEffectWrapper *)(v13 + 8);
      goto LABEL_28;
    }
    ExceptionRecord = -2147024882;
  }
LABEL_28:
  if ( ExceptionRecord >= 0 )
  {
    v40.ContextRecord = 0LL;
    v29 = **(__int64 (__fastcall ***)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v9;
    if ( v29 == CSystemEffectWrapper::QueryInterface )
      Interface = CSystemEffectWrapper::QueryInterface(
                    v9,
                    &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
                    (void **)&v40.ContextRecord);
    else
      Interface = v29(v9, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, (void **)&v40.ContextRecord);
    ExceptionRecord = Interface;
    if ( Interface < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
        (const char *)(unsigned int)Interface,
        (int)v39);
    }
    else
    {
      v41 = 0LL;
      if ( !v40.ContextRecord )
        goto LABEL_74;
      v31 = *(__int64 (__fastcall **)(CSystemEffectWrapper *__hidden, const struct _GUID *, void **))v40.ContextRecord->P1Home;
      if ( v31 == CSystemEffectWrapper::QueryInterface )
        CSystemEffectWrapper::QueryInterface(
          (CSystemEffectWrapper *)v40.ContextRecord,
          &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
          &v41);
      else
        v31((CSystemEffectWrapper *)v40.ContextRecord, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b, &v41);
      if ( v41 )
      {
        ContextRecord = v40.ContextRecord;
        if ( *(PCONTEXT *)(a1 + 88) != v40.ContextRecord )
        {
          if ( v40.ContextRecord )
          {
            v33 = *(unsigned int (__fastcall **)(CSystemEffectWrapper *__hidden))(v40.ContextRecord->P1Home + 8);
            if ( v33 == CSystemEffectWrapper::AddRef )
              CSystemEffectWrapper::AddRef((CSystemEffectWrapper *)v40.ContextRecord);
            else
              v33((CSystemEffectWrapper *)v40.ContextRecord);
          }
          v34 = *(_QWORD *)(a1 + 88);
          if ( v34 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
          *(_QWORD *)(a1 + 88) = ContextRecord;
        }
        if ( a1 )
          v35 = a1 + 8;
        else
          v35 = 0LL;
        *v44 = v35;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        ExceptionRecord = 0;
      }
      else
      {
LABEL_74:
        ExceptionRecord = -2147467262;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
          (const char *)0x80004002LL,
          (int)v39);
      }
      if ( v41 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
    }
    if ( v40.ContextRecord )
    {
      v36 = *(void (**)(void))(v40.ContextRecord->P1Home + 16);
      if ( (char *)v36 == (char *)CSystemEffectWrapper::Release )
        CSystemEffectWrapper::Release((CSystemEffectWrapper *)v40.ContextRecord);
      else
        v36();
    }
    goto LABEL_51;
  }
LABEL_76:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp",
    (const char *)(unsigned int)ExceptionRecord,
    (int)v39);
LABEL_51:
  if ( v9 )
  {
    v37 = *(unsigned int (__fastcall **)(CSystemEffectWrapper *__hidden))(*(_QWORD *)v9 + 16LL);
    if ( v37 == CSystemEffectWrapper::Release )
      CSystemEffectWrapper::Release(v9);
    else
      v37(v9);
  }
LABEL_54:
  EtwEventActivityIdControl(4LL, &v49);
  return (unsigned int)ExceptionRecord;
}
