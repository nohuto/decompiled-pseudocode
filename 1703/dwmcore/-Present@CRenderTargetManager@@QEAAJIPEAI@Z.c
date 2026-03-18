/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18006BA60
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x180065118 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180042C90 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18005BBA4 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z @ 0x18006B420 (-HandlePresentErrors@CRenderTargetManager@@AEAAJJ@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006BEC0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x18006CDF0 (-AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18006CE40 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800C882C (-IsOOM@@YA_NJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180189608 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  int v3; // ebx
  char v4; // r12
  char v5; // si
  __int64 v6; // r13
  unsigned int v7; // r14d
  int v8; // ebp
  __int64 v10; // r12
  unsigned int v11; // esi
  _QWORD *v12; // rdi
  __int64 (__fastcall *v13)(_QWORD *, __int64); // rax
  __int64 (__fastcall *v15)(_QWORD *, __int64); // rax
  char v16; // al
  __int64 v17; // rdx
  CHwndRenderTarget *v18; // rcx
  __int64 (__fastcall *v19)(CHwndRenderTarget *__hidden, bool, unsigned int); // rax
  int v20; // eax
  __int64 (__fastcall *v21)(_QWORD *, __int64); // rax
  char v22; // al
  __int64 v23; // rax
  char v24; // cl
  char v25; // al
  int v26; // edx
  CD3DDeviceManager *v27; // rcx
  _BOOL8 v28; // r8
  __int64 v29; // rax
  bool v30; // bp
  unsigned __int64 v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rdi
  CHwndRenderTarget *v34; // rcx
  void (__fastcall *v35)(CHwndRenderTarget *__hidden, unsigned __int64, bool); // rax
  int v36; // eax
  int v37; // edi
  int v40; // ecx
  int v41; // eax
  int v42; // edi
  unsigned int v43; // [rsp+30h] [rbp-58h]
  char v44; // [rsp+90h] [rbp+8h]
  char v47; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = 0;
  v43 = *((_DWORD *)this + 12);
  v5 = 0;
  v44 = 0;
  v6 = 0LL;
  v47 = 0;
  v7 = 0;
  v8 = 2;
  if ( !v43 )
  {
LABEL_31:
    if ( v3 )
    {
      if ( v3 == 142213121 )
        goto LABEL_33;
      if ( v3 != 142213130 )
      {
        v8 = 1;
        goto LABEL_33;
      }
    }
    v8 = 3;
LABEL_33:
    CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v8);
    goto LABEL_34;
  }
  v10 = 0LL;
  while ( 1 )
  {
    v11 = 0;
    v12 = *(_QWORD **)(v10 + *((_QWORD *)this + 3));
    v13 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
    if ( (char *)v13 == (char *)CHwndRenderTarget::IsOfType
       ? CHwndRenderTarget::IsOfType(v12, 38LL)
       : (unsigned __int8)v13(v12, 38LL) )
    {
      break;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 58LL) )
      break;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL))(v12, 48LL) )
      break;
LABEL_29:
    ++v7;
    v10 += 8LL;
    if ( v7 >= v43 )
    {
      v5 = v47;
      v4 = v44;
      goto LABEL_31;
    }
  }
  v15 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
  if ( (char *)v15 == (char *)CHwndRenderTarget::IsOfType )
    v16 = CHwndRenderTarget::IsOfType(v12, 38LL);
  else
    v16 = v15(v12, 38LL);
  if ( v16 && v7 < a2 )
  {
    v11 = a3[v6];
    v6 = (unsigned int)(v6 + 1);
  }
  LOBYTE(v17) = *((_BYTE *)this + 150);
  v18 = (CHwndRenderTarget *)(v12 + 8);
  v19 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, unsigned int))(v12[8] + 64LL);
  if ( v19 == CHwndRenderTarget::Present )
    v20 = CHwndRenderTarget::Present(v18, v17, v11);
  else
    v20 = v19(v18, v17, v11);
  v3 = v20;
  if ( v20 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x26Du);
  v21 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v12 + 48LL);
  if ( (char *)v21 == (char *)CHwndRenderTarget::IsOfType )
    v22 = CHwndRenderTarget::IsOfType(v12, 38LL);
  else
    v22 = v21(v12, 38LL);
  if ( v22 )
  {
    v23 = v12[97];
    if ( v23 )
    {
      v24 = v47;
      if ( *(_BYTE *)(v23 + 1094) )
        v24 = 1;
      v47 = v24;
    }
  }
  v25 = v44;
  if ( v3 == 142213130 )
    v25 = 1;
  v44 = v25;
  if ( v3 == -2003304442 || v3 == -2003304307 )
    goto LABEL_58;
  if ( v3 )
  {
    if ( v3 == 142213121 )
    {
      v26 = 2;
      goto LABEL_28;
    }
    if ( v3 != 142213130 )
    {
LABEL_58:
      v26 = 1;
      goto LABEL_28;
    }
  }
  v26 = 3;
LABEL_28:
  CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v26);
  if ( v3 >= 0 )
    goto LABEL_29;
  if ( v3 != -2147024769 && v3 != -2147024882 && !IsOOM(v3) )
  {
    if ( v3 == -2003304442 || v3 == -2003304307 )
      v3 = 0;
    else
      MilUnexpectedError(v40, L"presentation error");
  }
  if ( v3 >= 0 )
    goto LABEL_29;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x27Eu);
  v5 = v47;
  v4 = v44;
LABEL_34:
  v29 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 150) = 0;
  v30 = v5 == 0;
  v31 = *(_QWORD *)(v29 + 400);
  if ( *((_DWORD *)this + 12) )
  {
    v32 = *((unsigned int *)this + 12);
    v33 = 0LL;
    do
    {
      LOBYTE(v28) = v30;
      v34 = (CHwndRenderTarget *)(*(_QWORD *)(v33 + *((_QWORD *)this + 3)) + 64LL);
      v35 = *(void (__fastcall **)(CHwndRenderTarget *__hidden, unsigned __int64, bool))(*(_QWORD *)v34 + 72LL);
      if ( v35 == CHwndRenderTarget::AdvanceFrame )
        CHwndRenderTarget::AdvanceFrame(v34, v31, v30);
      else
        v35(v34, v31, v28);
      v33 += 8LL;
      --v32;
    }
    while ( v32 );
    v4 = v44;
  }
  v36 = CD3DDeviceManager::HandleAdvanceFrame(v27, v31, v30);
  v37 = v36;
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x5A0u);
    v41 = CRenderTargetManager::HandlePresentErrors(this, v37);
    v42 = v41;
    if ( v41 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, 0x299u);
    if ( !v3 || v3 >= 0 && v42 < 0 )
      v3 = v42;
  }
  if ( v4 )
    return 142213130;
  return (unsigned int)v3;
}
