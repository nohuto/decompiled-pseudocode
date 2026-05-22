/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x1800580B0
 * Callers:
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x18004E850 (-TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_::_Do_call @ 0x180050FE0 (std--_Func_impl_no_alloc__lambda_739338be7cb217051fff1cec4ae0b0f4__void_--_Do_call.c)
 *     ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180093660 (-OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x180058244 (-MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z @ 0x180077280 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJKK@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  __int64 v2; // rax
  int v3; // eax
  int *v4; // rsi
  EdgyInputTarget *v5; // rbx
  bool v6; // cl
  bool v7; // bp
  __int64 v8; // rax
  _DWORD *v9; // rcx
  bool v10; // [rsp+88h] [rbp+10h] BYREF
  int v11; // [rsp+90h] [rbp+18h] BYREF

  if ( ((1LL << gdwDeviceFamily) & 0x400) == 0 )
  {
    if ( !*((_BYTE *)this + 36)
      || *((_BYTE *)this + 37)
      || *((_BYTE *)this + 1)
      || *((_BYTE *)this + 40)
      || *((_BYTE *)this + 38) )
    {
      v3 = 0;
    }
    else
    {
      MPCHolographicInputManager::GetInstance();
      if ( *(_BYTE *)(v2 + 2009) || !*((_BYTE *)this + 39) && (!*(_BYTE *)this || *((_BYTE *)this + 41)) )
        v3 = *((_DWORD *)this + 7);
      else
        v3 = *((_DWORD *)this + 6);
    }
    v4 = (int *)((char *)this + 32);
    if ( v3 != *((_DWORD *)this + 8) )
    {
      *v4 = v3;
      v5 = WGIRawInputProvider::s_spInstance;
      v6 = v3 != 0;
      v10 = v3 != 0;
      v7 = v3 == 0;
      if ( *((_BYTE *)WGIRawInputProvider::s_spInstance + 160) != (v3 == 0) )
      {
        if ( !v3 )
          WGIRawInputProvider::SetInputFocusProcess(
            WGIRawInputProvider::s_spInstance,
            *((_DWORD *)WGIRawInputProvider::s_spInstance + 41),
            *((_DWORD *)WGIRawInputProvider::s_spInstance + 42));
        *((_BYTE *)v5 + 160) = v7;
        v6 = v10;
      }
      if ( v6 )
      {
        v11 = *v4;
        RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v11, 4LL, 0LL);
      }
      MPCHolographicInputManager::GetInstance();
      LOBYTE(v11) = *(_BYTE *)(v8 + 2009);
      v9 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v9 )
      {
        if ( *v9 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
            (MPCGamepadInputHelper *)((char *)this + 41),
            &v10,
            (const unsigned int *)this + 8,
            (const bool *)this + 36,
            (const bool *)this + 37,
            (const bool *)this + 1,
            (const bool *)&v11,
            (const bool *)this + 39,
            (const bool *)this,
            (const bool *)this + 41,
            (const bool *)this + 40);
        }
      }
    }
  }
}
