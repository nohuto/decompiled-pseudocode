/*
 * XREFs of ?HandleFramePositionAndSizeUpdateCompleted@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x1801AAB40
 * Callers:
 *     ?NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame@@@Z @ 0x18019BA5C (-NotifyPositionAndSizeUpdateCompleted@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrame.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1801AB48C (-GetPositionAndSizeOptions@TabTipAdapterPolicy@KeyboardHosting@@AEAAJPEAPEAU-$IVectorView@UCoreK.c)
 *     ?GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundation@Windows@@@Z @ 0x1801AB57C (-GetCurrentMonitorWithRect@TabTipAdapterPolicy@KeyboardHosting@@CAPEAUHMONITOR__@@URect@Foundati.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x1801ABB58 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windo.c)
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801AC3C4 (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::HandleFramePositionAndSizeUpdateCompleted(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const __m128i *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  __m128i v8; // xmm6
  KeyboardHosting::MonitorInformation *v9; // r14
  HMONITOR v10; // r12
  HMONITOR CurrentMonitorWithRect; // rax
  HMONITOR v12; // rdi
  KeyboardHosting::MonitorInformation *v13; // rcx
  int PositionAndSizeOptions; // eax
  unsigned int v15; // edi
  __int32 v17; // xmm1_4
  __m128i v18; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int32 v20; // [rsp+70h] [rbp+8h] BYREF
  __int32 v21; // [rsp+74h] [rbp+Ch]

  *a3 = 0LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 360) )
  {
    v8 = _mm_loadu_si128(a2);
    v9 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 192);
    v10 = (HMONITOR)*((_QWORD *)this + 24);
    if ( GetSystemMetrics(80) <= 1 )
    {
      CurrentMonitorWithRect = MonitorFromWindow(0LL, 1u);
    }
    else
    {
      v18 = v8;
      CurrentMonitorWithRect = (HMONITOR)KeyboardHosting::TabTipAdapterPolicy::GetCurrentMonitorWithRect(&v18);
    }
    v12 = CurrentMonitorWithRect;
    if ( v10 != CurrentMonitorWithRect )
    {
      *(_QWORD *)v9 = CurrentMonitorWithRect;
      KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v9);
      if ( *((_BYTE *)this + 400) )
      {
        v13 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)this + 248);
        if ( *((HMONITOR *)this + 31) != v12 )
        {
          *(_QWORD *)v13 = v12;
          KeyboardHosting::MonitorInformation::UpdateMonitorInfo(v13);
        }
      }
      PositionAndSizeOptions = KeyboardHosting::TabTipAdapterPolicy::GetPositionAndSizeOptions(this, a3);
      v15 = PositionAndSizeOptions;
      if ( PositionAndSizeOptions < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x93,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
          (const char *)(unsigned int)PositionAndSizeOptions);
        return v15;
      }
      *a4 = 3;
    }
    if ( !*((_DWORD *)this + 112)
      && *((_DWORD *)this + 101) == 1
      && *((_DWORD *)this + 106) == 2
      && (*((_BYTE *)this + 428) || *((_BYTE *)this + 429)) )
    {
      v17 = a2->m128i_i32[1];
      v20 = a2->m128i_i32[0];
      v21 = v17;
      KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
        this,
        (const struct Windows::Foundation::Point *)&v20);
    }
    if ( *((_DWORD *)this + 101) == 2 && (*((_BYTE *)this + 428) || *((_BYTE *)this + 429)) )
    {
      *((_DWORD *)this + 92) = a2->m128i_i32[0];
      *((_DWORD *)this + 93) = a2->m128i_i32[1];
      *((_BYTE *)this + 376) = 1;
    }
    *((_BYTE *)this + 361) = 1;
  }
  return 0LL;
}
