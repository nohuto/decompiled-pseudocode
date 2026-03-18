/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18002E2A8
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18003444C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z @ 0x180060C30 (-PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x18020493C (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, bool a2)
{
  __int64 v2; // rsi
  bool v3; // r12
  int v6; // ebx
  unsigned int i; // ebp
  CD3DDeviceManager *v8; // rcx
  __int64 v9; // rsi
  int v10; // r14d
  unsigned int v11; // r15d
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r8
  int v15; // ebp
  __int64 j; // r15
  CHwndRenderTarget *v17; // rcx
  int (*v18)(CHwndRenderTarget *__hidden, bool, bool); // rax
  int (*v19)(CHwndRenderTarget *__hidden, bool, bool); // rdx
  int v20; // eax
  int v21; // esi
  void *v22; // rsi
  _QWORD *v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  int v26; // esi
  unsigned int k; // r14d
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v31; // rcx
  int v32; // eax
  unsigned int v33; // esi
  __int64 v34; // r12
  int v35; // eax
  int v36; // ebp
  int v37; // ebp
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  int v42; // edi
  HANDLE hEvent; // [rsp+70h] [rbp+8h] BYREF
  int v44; // [rsp+78h] [rbp+10h]
  void *v45; // [rsp+80h] [rbp+18h]

  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  v45 = (void *)*((_QWORD *)this + 48);
  v6 = 0;
  for ( i = 0; i < *(_DWORD *)(v2 + 296); ++i )
  {
    v40 = *(_QWORD *)(v2 + 272);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v40 + 8LL * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *(_DWORD *)(v2 + 296) = 0;
  DynArrayImpl<0>::ShrinkToSize(v2 + 272, 8LL);
  v9 = *((_QWORD *)this + 10);
  v10 = 0;
  v11 = 0;
  if ( *(_DWORD *)(v9 + 264) )
  {
    do
    {
      v34 = *(_QWORD *)(*(_QWORD *)(v9 + 240) + 8LL * v11);
      v35 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 24LL))(v34);
      v36 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x175u);
      if ( !v10 || v10 >= 0 && v36 < 0 )
        v10 = v36;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 8LL))(v34);
      ++v11;
    }
    while ( v11 < *(_DWORD *)(v9 + 264) );
    v3 = 0;
  }
  *(_DWORD *)(v9 + 264) = 0;
  v12 = *((_QWORD *)this + 9);
  v44 = !a2;
  if ( !*(_BYTE *)(v12 + 112) )
    v3 = !a2;
  v13 = CD3DDeviceManager::HandleAdvanceFrame(v8, v3);
  v15 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1D7u);
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(v12 + 48); j = (unsigned int)(j + 1) )
  {
    v19 = CHwndRenderTarget::PostPresent;
    LOBYTE(v14) = v3;
    v17 = (CHwndRenderTarget *)(*(_QWORD *)(*(_QWORD *)(v12 + 24) + 8 * j) + 64LL);
    v18 = *(int (**)(CHwndRenderTarget *__hidden, bool, bool))(*(_QWORD *)v17 + 72LL);
    LOBYTE(v19) = a2;
    if ( v18 == CHwndRenderTarget::PostPresent )
      v20 = CHwndRenderTarget::PostPresent(v17, a2, v3);
    else
      v20 = ((__int64 (__fastcall *)(CHwndRenderTarget *, int (*)(CHwndRenderTarget *__hidden, bool, bool), __int64))v18)(
              v17,
              v19,
              v14);
    v21 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1DCu);
    if ( !v15 || v15 >= 0 && v21 < 0 )
      v15 = v21;
  }
  v22 = v45;
  *(_BYTE *)(v12 + 112) = 0;
  if ( !v22 )
    goto LABEL_21;
  v23 = (_QWORD *)*((_QWORD *)this + 68);
  hEvent = v22;
  v24 = NtDCompositionConfirmFrame(*v23, &hEvent);
  if ( v24 < 0 )
  {
    v6 = v24 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24 | 0x10000000, 0x91u);
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x45Du);
    goto LABEL_22;
  }
  v25 = *((_QWORD *)this + 47);
  if ( !v25 )
  {
LABEL_30:
    v31 = (_QWORD *)*((_QWORD *)this + 68);
    hEvent = v22;
    v6 = 0;
    v32 = NtDCompositionDiscardFrame(*v31, &hEvent);
    if ( v32 < 0 )
    {
      v6 = v32 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32 | 0x10000000, 0xA5u);
    }
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x46Bu);
      goto LABEL_22;
    }
    goto LABEL_21;
  }
  if ( a2 )
  {
    *(_QWORD *)(*(_QWORD *)v25 + 24LL) = 0LL;
    goto LABEL_30;
  }
LABEL_21:
  if ( *((_DWORD *)this + 196) )
  {
    v33 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 95) + 8LL * v33++));
    while ( v33 < *((_DWORD *)this + 196) );
    *((_DWORD *)this + 196) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 760, 8LL);
  }
LABEL_22:
  v26 = 0;
  for ( k = 0; k < *((_DWORD *)this + 184); ++k )
  {
    v37 = 0;
    v38 = *(_QWORD *)(*((_QWORD *)this + 89) + 8LL * k);
    v39 = NtSetCompositionSurfaceBufferUsage(
            *(_QWORD *)(v38 + 32),
            v38 + 56,
            *(unsigned int *)(v38 + 136),
            *(unsigned int *)(v38 + 140));
    if ( v39 < 0 )
    {
      v37 = v39 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39 | 0x10000000, 0xE2u);
      if ( v37 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x33Cu);
    }
    if ( !v26 || v26 >= 0 && v37 < 0 )
      v26 = v37;
    CMILCOMBase::InternalRelease((CMILCOMBase *)v38);
  }
  *((_DWORD *)this + 184) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 712, 8LL);
  if ( v26 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x474u);
  if ( !v6 || v6 >= 0 && v26 < 0 )
    v6 = v26;
  v29 = *((_QWORD *)this + 70);
  if ( v29 )
  {
    LOBYTE(v28) = v44;
    v41 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v29 + 24) + 96LL))(*(_QWORD *)(v29 + 24), v28);
    v42 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x478u);
    if ( !v6 || v6 >= 0 && v42 < 0 )
      return (unsigned int)v42;
  }
  return (unsigned int)v6;
}
