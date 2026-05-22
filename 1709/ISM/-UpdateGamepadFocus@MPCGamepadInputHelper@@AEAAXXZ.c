/*
 * XREFs of ?UpdateGamepadFocus@MPCGamepadInputHelper@@AEAAXXZ @ 0x180055860
 * Callers:
 *     ?OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z @ 0x180037550 (-OnTargetWithFocus3dChanged@MPCGamepadProcessor@@UEAAJPEAUIMPCInputTarget@@0@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056074 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 *     ?TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z @ 0x180057634 (-TickAndUpdateCursorsForProviders@MPCHolographicInputManager@@AEAAXPEAUInputInfo@@@Z.c)
 *     std::_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std::allocator_int__void_::_Do_call @ 0x180059CA0 (std--_Func_impl__lambda_739338be7cb217051fff1cec4ae0b0f4__std--allocator_int__void_--_Do_call.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x180055710 (-MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z @ 0x18009DEE8 (-SetInputFocusProcess@WGIRawInputProvider@@AEAAJK@Z.c)
 */

void __fastcall MPCGamepadInputHelper::UpdateGamepadFocus(MPCGamepadInputHelper *this)
{
  int v2; // eax
  int *v3; // rsi
  GazeProcessor *v4; // rbx
  bool v5; // al
  bool v6; // bp
  _DWORD *v7; // rcx
  bool v8; // [rsp+88h] [rbp+10h] BYREF
  int v9; // [rsp+90h] [rbp+18h] BYREF

  if ( ((1LL << gdwDeviceFamily) & 0x400) == 0 )
  {
    if ( !*((_BYTE *)this + 36) || *((_BYTE *)this + 37) || *((_BYTE *)this + 1) || *((_BYTE *)this + 39) )
      v2 = 0;
    else
      v2 = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3129)
        || !*((_BYTE *)this + 38) && (!*(_BYTE *)this || *((_BYTE *)this + 40))
         ? *((_DWORD *)this + 7)
         : *((_DWORD *)this + 6);
    v3 = (int *)((char *)this + 32);
    if ( v2 != *((_DWORD *)this + 8) )
    {
      *v3 = v2;
      v4 = WGIRawInputProvider::s_spInstance;
      v5 = v2 != 0;
      v8 = v5;
      v6 = !v5;
      if ( *((_BYTE *)WGIRawInputProvider::s_spInstance + 160) != !v5 )
      {
        if ( !v5 )
          WGIRawInputProvider::SetInputFocusProcess(
            WGIRawInputProvider::s_spInstance,
            *((_DWORD *)WGIRawInputProvider::s_spInstance + 41));
        *((_BYTE *)v4 + 160) = v6;
        v5 = v8;
      }
      if ( v5 )
      {
        v9 = *v3;
        RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v9, 4LL, 0LL);
      }
      LOBYTE(v9) = *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3129);
      v7 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
      if ( v7 )
      {
        if ( *v7 )
        {
          ISMTracing::Instance();
          ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
            (MPCGamepadInputHelper *)((char *)this + 40),
            &v8,
            (const unsigned int *)this + 8,
            (const bool *)this + 36,
            (const bool *)this + 37,
            (const bool *)this + 1,
            (const bool *)&v9,
            (const bool *)this + 38,
            (const bool *)this,
            (const bool *)this + 40,
            (const bool *)this + 39);
        }
      }
    }
  }
}
