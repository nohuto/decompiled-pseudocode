/*
 * XREFs of ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x18005C970
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180065118 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180131750 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?NotifyCaptureCompleted@CVisualCapture@@QEAAXXZ @ 0x180026D74 (-NotifyCaptureCompleted@CVisualCapture@@QEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006BEC0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800B44A8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?OpenDxBltEvent@@YAJ_KPEAPEAX@Z @ 0x1800CA9A4 (-OpenDxBltEvent@@YAJ_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z @ 0x180149030 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_NI@Z.c)
 */

__int64 __fastcall CComposition::ProcessPostPresent(CComposition *this, unsigned __int8 a2)
{
  __int64 v3; // rbp
  int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // rdi
  int v8; // r14d
  unsigned int i; // ebp
  char v10; // r14
  __int64 v11; // rdi
  unsigned int v12; // ebp
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64); // rax
  char v16; // al
  _BYTE *v17; // rcx
  __int64 v18; // rdi
  _QWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  _QWORD *v22; // rcx
  int v23; // eax
  int v24; // edi
  unsigned int j; // ebp
  __int64 v26; // rcx
  __int64 v28; // r15
  int v29; // eax
  int v30; // r13d
  unsigned int v31; // edi
  int v32; // r15d
  __int64 v33; // r14
  int v34; // eax
  bool v35; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r13
  int Buffer; // eax
  int v40; // r15d
  int v41; // eax
  int v42; // eax
  int v43; // ebx
  __int64 v44; // [rsp+70h] [rbp+8h] BYREF
  HANDLE hEvent; // [rsp+80h] [rbp+18h] BYREF

  v3 = *((_QWORD *)this + 5);
  v5 = 0;
  v6 = 0;
  for ( LODWORD(v44) = 0; v6 < *(_DWORD *)(v3 + 368); ++v6 )
  {
    v37 = *(_QWORD *)(v3 + 344);
    hEvent = 0LL;
    if ( (int)OpenDxBltEvent(*(_QWORD *)(v37 + 8LL * v6), &hEvent) >= 0 )
    {
      SetEvent(hEvent);
      CloseHandle(hEvent);
    }
  }
  *(_DWORD *)(v3 + 368) = 0;
  DynArrayImpl<0>::ShrinkToSize(v3 + 344, 8LL);
  v7 = *((_QWORD *)this + 5);
  v8 = 0;
  for ( i = 0; i < *(_DWORD *)(v7 + 336); ++i )
  {
    v28 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 8LL * i);
    v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 24LL))(v28);
    v30 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x2C0u);
    if ( !v8 || v8 >= 0 && v30 < 0 )
      v8 = v30;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  }
  *(_DWORD *)(v7 + 336) = 0;
  v10 = 0;
  v11 = *((_QWORD *)this + 4);
  v12 = 0;
  if ( *(_DWORD *)(v11 + 48) )
  {
    do
    {
      v13 = 8LL * v12;
      v14 = *(_QWORD *)(v13 + *(_QWORD *)(v11 + 24));
      v15 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 48LL);
      if ( v15 == CHwndRenderTarget::IsOfType )
        v16 = CHwndRenderTarget::IsOfType(v14, 38LL);
      else
        v16 = v15(v14, 38LL);
      v17 = *(_BYTE **)(v13 + *(_QWORD *)(v11 + 24));
      if ( v16 )
      {
        v17[801] = 0;
      }
      else
      {
        v35 = (*(unsigned __int8 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 59LL) == 0;
        v36 = *(_QWORD *)(v11 + 24);
        if ( v35 )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v13 + v36) + 48LL))(
                 *(_QWORD *)(v13 + v36),
                 43LL) )
          {
            CVisualCapture::NotifyCaptureCompleted(*(CVisualCapture **)(v13 + *(_QWORD *)(v11 + 24)));
          }
        }
        else
        {
          v38 = *(_QWORD *)(v13 + v36);
          if ( a2 && (*(_BYTE *)(v38 + 456) & 3) != 0 )
          {
            if ( *(_QWORD *)(v38 + 472)
              || (Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(*(CIndirectSwapchainRenderTarget **)(v13 + v36)),
                  v40 = Buffer,
                  Buffer >= 0) )
            {
              v41 = CIndirectSwapchainRenderTarget::Present((CIndirectSwapchainRenderTarget *)(v38 + 64), 0, 0);
              v40 = v41;
              if ( v41 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x130u);
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0x12Cu);
            }
            if ( v40 == 142213130 )
              v10 = 1;
          }
        }
      }
      ++v12;
    }
    while ( v12 < *(_DWORD *)(v11 + 48) );
    v5 = v44;
    if ( v10 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 70) + 104LL))(*((_QWORD *)this + 70));
  }
  v18 = *((_QWORD *)this + 50);
  if ( v18 )
  {
    v19 = (_QWORD *)*((_QWORD *)this + 69);
    v44 = *((_QWORD *)this + 50);
    v5 = 0;
    v20 = NtDCompositionConfirmFrame(*v19, &v44);
    if ( v20 < 0 )
    {
      v5 = v20 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20 | 0x10000000, 0x91u);
    }
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4E3u);
      goto LABEL_22;
    }
    v21 = *((_QWORD *)this + 49);
    if ( !v21 )
      goto LABEL_18;
    if ( a2 )
    {
      *(_QWORD *)(*(_QWORD *)v21 + 8LL) = 0LL;
LABEL_18:
      v22 = (_QWORD *)*((_QWORD *)this + 69);
      v44 = v18;
      v5 = 0;
      v23 = NtDCompositionDiscardFrame(*v22, &v44);
      if ( v23 < 0 )
      {
        v5 = v23 | 0x10000000;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23 | 0x10000000, 0xA5u);
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4F5u);
        goto LABEL_22;
      }
    }
  }
  if ( *((_DWORD *)this + 198) )
  {
    v31 = 0;
    do
      UnmapViewOfFile(*(LPCVOID *)(*((_QWORD *)this + 96) + 8LL * v31++));
    while ( v31 < *((_DWORD *)this + 198) );
    *((_DWORD *)this + 198) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 768, 8LL);
  }
LABEL_22:
  v24 = 0;
  for ( j = 0; j < *((_DWORD *)this + 186); ++j )
  {
    v32 = 0;
    v33 = *(_QWORD *)(*((_QWORD *)this + 90) + 8LL * j);
    v34 = NtSetCompositionSurfaceBufferUsage(
            *(_QWORD *)(v33 + 32),
            v33 + 56,
            *(unsigned int *)(v33 + 136),
            *(unsigned int *)(v33 + 140));
    if ( v34 < 0 )
    {
      v32 = v34 | 0x10000000;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34 | 0x10000000, 0xE2u);
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x365u);
    }
    if ( !v24 || v24 >= 0 && v32 < 0 )
      v24 = v32;
    CMILCOMBase::InternalRelease((CMILCOMBase *)v33);
  }
  *((_DWORD *)this + 186) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 720, 8LL);
  if ( v24 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x502u);
  if ( !v5 || v5 >= 0 && v24 < 0 )
    v5 = v24;
  v26 = *((_QWORD *)this + 71);
  if ( v26 )
  {
    v42 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v26 + 24) + 96LL))(*(_QWORD *)(v26 + 24), a2 ^ 1u);
    v43 = v42;
    if ( v42 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, 0x506u);
    if ( !v5 || v5 >= 0 && v43 < 0 )
      return (unsigned int)v43;
  }
  return (unsigned int)v5;
}
