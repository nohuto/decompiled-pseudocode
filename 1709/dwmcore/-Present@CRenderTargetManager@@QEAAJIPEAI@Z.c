/*
 * XREFs of ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18001B8C4
 * Callers:
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x1800B0560 (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800185B0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180019AA0 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 */

__int64 __fastcall CRenderTargetManager::Present(CRenderTargetManager *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r13d
  int v4; // esi
  __int64 v5; // r12
  unsigned int v6; // ebp
  __int64 v8; // r15
  unsigned int v9; // r14d
  _QWORD *v10; // rbx
  bool (__fastcall *v11)(__int64, int); // rax
  bool v12; // al
  bool (__fastcall *v13)(__int64, int); // rax
  bool v14; // al
  __int64 v15; // rdx
  CHwndRenderTarget *v16; // rcx
  __int64 (__fastcall *v17)(CHwndRenderTarget *, char, int); // rax
  int v18; // eax
  bool (__fastcall *v19)(__int64, int); // rax
  __int64 v21; // rax
  bool v22; // al
  __int64 result; // rax

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( v3 )
  {
    v8 = 0LL;
    do
    {
      v9 = 0;
      v10 = *(_QWORD **)(v8 + *((_QWORD *)this + 3));
      v11 = *(bool (__fastcall **)(__int64, int))(*v10 + 48LL);
      if ( v11 == CHwndRenderTarget::IsOfType )
        v12 = CHwndRenderTarget::IsOfType((__int64)v10, 70);
      else
        v12 = v11((__int64)v10, 70);
      if ( v12
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 84LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 73LL)
        || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v10 + 48LL))(v10, 65LL) )
      {
        v13 = *(bool (__fastcall **)(__int64, int))(*v10 + 48LL);
        if ( v13 == CHwndRenderTarget::IsOfType )
          v14 = CHwndRenderTarget::IsOfType((__int64)v10, 70);
        else
          v14 = v13((__int64)v10, 70);
        if ( v14 && v6 < a2 )
        {
          v9 = a3[v5];
          v5 = (unsigned int)(v5 + 1);
        }
        LOBYTE(v15) = *((_BYTE *)this + 147);
        v16 = (CHwndRenderTarget *)(v10 + 8);
        v17 = *(__int64 (__fastcall **)(CHwndRenderTarget *, char, int))(v10[8] + 64LL);
        if ( v17 == CHwndRenderTarget::Present )
          v18 = CHwndRenderTarget::Present(v16, v15, v9);
        else
          v18 = v17(v16, v15, v9);
        v4 = v18;
        if ( v18 == 142213130 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_PRESENT_POSTPONED);
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 528LL) + 104LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 528LL),
            0LL,
            2048LL);
        }
        if ( v4 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x1E0u);
        if ( !*((_BYTE *)this + 144) )
        {
          v19 = *(bool (__fastcall **)(__int64, int))(*v10 + 48LL);
          if ( v19 == CHwndRenderTarget::IsOfType
             ? CHwndRenderTarget::IsOfType((__int64)v10, 70)
             : v19((__int64)v10, 70) )
          {
            v21 = v10[99];
            v22 = v21 && *(_BYTE *)(v21 + 1182);
            *((_BYTE *)this + 144) = v22;
          }
        }
      }
      ++v6;
      v8 += 8LL;
    }
    while ( v6 < v3 );
  }
  result = (unsigned int)v4;
  *((_BYTE *)this + 147) = 0;
  return result;
}
