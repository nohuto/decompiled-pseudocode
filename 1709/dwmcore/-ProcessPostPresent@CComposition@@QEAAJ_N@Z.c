/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x1800AB6B0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800B0560 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z @ 0x180018550 (-PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z @ 0x18011D224 (-DrawSuperWetPassForFrame@CWetInkManager@@AEAAJ_K@Z.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1801C8210 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, unsigned __int8 a2)
{
  CComposition *v3; // rbx
  unsigned __int64 v4; // r12
  signed int v5; // r15d
  signed int v6; // esi
  __int64 v7; // rbp
  unsigned int i; // r14d
  CD3DDeviceManager *v9; // rcx
  __int64 v10; // rdi
  int v11; // r14d
  unsigned int j; // ebp
  __int64 v13; // rdi
  char v14; // bp
  signed int v15; // eax
  int v16; // r15d
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rax
  CHwndRenderTarget *v20; // rcx
  __int64 (__fastcall *v21)(CHwndRenderTarget *, char, bool); // rax
  signed int v22; // eax
  int v23; // r12d
  _QWORD *v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  _QWORD *v27; // rcx
  int v28; // eax
  signed int v29; // edi
  unsigned int k; // ebp
  __int64 v31; // rcx
  __int64 v33; // r15
  signed int v34; // eax
  unsigned int v35; // edi
  __int64 v36; // r14
  int v37; // eax
  signed int v38; // eax
  __int64 v39; // rax
  signed int v40; // eax
  int v41; // ebx
  unsigned int v42; // [rsp+20h] [rbp-48h]
  CComposition *v43; // [rsp+70h] [rbp+8h] BYREF
  HANDLE hEvent; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v45; // [rsp+88h] [rbp+20h]

  v43 = this;
  v3 = this;
  v4 = *((_QWORD *)this + 45);
  v5 = 0;
  v45 = v4;
  if ( byte_180272A00 )
  {
    v38 = CWetInkManager::DrawSuperWetPassForFrame(*((CWetInkManager **)this + 15), v4);
    v6 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v38, 0x479u);
      goto LABEL_29;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = *((_QWORD *)v3 + 10);
  for ( i = 0; i < *(_DWORD *)(v7 + 368); ++i )
  {
    v39 = *(_QWORD *)(v7 + 344);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v39 + 8LL * i), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *(_DWORD *)(v7 + 368) = 0;
  DynArrayImpl<0>::ShrinkToSize(v7 + 344, 8u);
  v10 = *((_QWORD *)v3 + 10);
  v11 = 0;
  for ( j = 0; j < *(_DWORD *)(v10 + 336); ++j )
  {
    v33 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 8LL * j);
    v34 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 24LL))(v33);
    LODWORD(hEvent) = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v34, 0x2C0u);
      v34 = (int)hEvent;
    }
    if ( !v11 || v11 >= 0 && v34 < 0 )
      v11 = v34;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
  }
  *(_DWORD *)(v10 + 336) = 0;
  v13 = *((_QWORD *)v3 + 9);
  v14 = a2 ^ 1;
  if ( *(_BYTE *)(v13 + 144) )
    v14 = 0;
  v15 = CD3DDeviceManager::HandleAdvanceFrame(v9, *(_QWORD *)(*(_QWORD *)(v13 + 16) + 360LL), v14);
  v16 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x210u);
  v17 = 0LL;
  if ( *(_DWORD *)(v13 + 48) )
  {
    do
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v13 + 24) + 8 * v17);
      v19 = *(_QWORD *)(v18 + 64);
      v20 = (CHwndRenderTarget *)(v18 + 64);
      v21 = *(__int64 (__fastcall **)(CHwndRenderTarget *, char, bool))(v19 + 72);
      if ( v21 == CHwndRenderTarget::PostPresent )
        v22 = CHwndRenderTarget::PostPresent(v20, a2, v14);
      else
        v22 = v21(v20, a2, v14);
      v23 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x215u);
      if ( !v16 || v16 >= 0 && v23 < 0 )
        v16 = v23;
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < *(_DWORD *)(v13 + 48) );
    v3 = v43;
    v4 = v45;
  }
  v5 = 0;
  *(_BYTE *)(v13 + 144) = 0;
  if ( !v4 )
    goto LABEL_28;
  v24 = (_QWORD *)*((_QWORD *)v3 + 65);
  v43 = (CComposition *)v4;
  v6 = 0;
  v25 = NtDCompositionConfirmFrame(*v24, &v43);
  if ( v25 < 0 )
  {
    v6 = v25 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25 | 0x10000000, 0x91u);
  }
  if ( v6 < 0 )
  {
    v42 = 1155;
    goto LABEL_68;
  }
  v26 = *((_QWORD *)v3 + 44);
  if ( !v26 )
  {
LABEL_25:
    v27 = (_QWORD *)*((_QWORD *)v3 + 65);
    v43 = (CComposition *)v4;
    v6 = 0;
    v28 = NtDCompositionDiscardFrame(*v27, &v43);
    if ( v28 < 0 )
    {
      v6 = v28 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v28 | 0x10000000, 0xA5u);
    }
    if ( v6 >= 0 )
      goto LABEL_28;
    v42 = 1169;
LABEL_68:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v42);
    goto LABEL_29;
  }
  if ( a2 )
  {
    *(_QWORD *)(*(_QWORD *)v26 + 8LL) = 0LL;
    goto LABEL_25;
  }
LABEL_28:
  if ( *((_DWORD *)v3 + 190) )
  {
    v35 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)v3 + 92) + 8LL * v35++));
    while ( v35 < *((_DWORD *)v3 + 190) );
    *((_DWORD *)v3 + 190) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)v3 + 736, 8u);
  }
LABEL_29:
  v29 = 0;
  for ( k = 0; k < *((_DWORD *)v3 + 178); v5 = 0 )
  {
    v36 = *(_QWORD *)(*((_QWORD *)v3 + 86) + 8LL * k);
    v37 = NtSetCompositionSurfaceBufferUsage(
            *(_QWORD *)(v36 + 32),
            v36 + 56,
            *(unsigned int *)(v36 + 136),
            *(unsigned int *)(v36 + 140));
    if ( v37 < 0 )
    {
      v5 = v37 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v37 | 0x10000000, 0xE2u);
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x335u);
    }
    if ( !v29 || v29 >= 0 && v5 < 0 )
      v29 = v5;
    CMILCOMBase::InternalRelease((CMILCOMBase *)v36);
    ++k;
  }
  *((_DWORD *)v3 + 178) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v3 + 688, 8u);
  if ( v29 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v29, 0x49Au);
  if ( !v6 || v6 >= 0 && v29 < 0 )
    v6 = v29;
  v31 = *((_QWORD *)v3 + 67);
  if ( v31 )
  {
    v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v31 + 24) + 96LL))(*(_QWORD *)(v31 + 24), a2 ^ 1u);
    v41 = v40;
    if ( v40 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0x49Eu);
    if ( !v6 || v6 >= 0 && v41 < 0 )
      return (unsigned int)v41;
  }
  return (unsigned int)v6;
}
