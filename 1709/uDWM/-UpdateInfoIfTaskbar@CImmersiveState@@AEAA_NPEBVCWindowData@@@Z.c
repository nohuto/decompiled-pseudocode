/*
 * XREFs of ?UpdateInfoIfTaskbar@CImmersiveState@@AEAA_NPEBVCWindowData@@@Z @ 0x180007640
 * Callers:
 *     ?Initialize@CImmersiveState@@AEAAJ_K@Z @ 0x180007800 (-Initialize@CImmersiveState@@AEAAJ_K@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 *     wcscmp_0 @ 0x18004676C (wcscmp_0.c)
 */

char __fastcall CImmersiveState::UpdateInfoIfTaskbar(CImmersiveState *this, HWND *a2)
{
  char v4; // di
  HMONITOR v6; // rbx
  bool v7; // al
  __int64 v8; // rdx
  __m128i v9; // xmm0
  unsigned int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // xmm0_8
  LONG left; // eax
  unsigned __int64 v14; // rcx
  LONG right; // eax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // [rsp+30h] [rbp-D0h]
  __int128 v23; // [rsp+38h] [rbp-C8h] BYREF
  HMONITOR v24; // [rsp+48h] [rbp-B8h]
  struct tagMONITORINFO mi; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = 0;
  if ( GetClassNameW(a2[5], ClassName, 260)
    && (!wcscmp_0(ClassName, L"Shell_SecondaryTrayWnd") || !wcscmp_0(ClassName, L"Shell_TrayWnd")) )
  {
    v4 = 1;
    v6 = MonitorFromWindow(a2[5], 0);
    if ( v6 )
    {
      if ( !wcscmp_0(ClassName, L"Shell_TrayWnd") )
        *((_QWORD *)this + 8) = v6;
      v7 = 0;
      v8 = 0LL;
      if ( *((_DWORD *)this + 10) )
      {
        while ( !v7 )
        {
          v7 = v6 == *(HMONITOR *)(*((_QWORD *)this + 2) + 24 * v8 + 16);
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *((_DWORD *)this + 10) )
          {
            if ( v7 )
              return v4;
            goto LABEL_9;
          }
        }
      }
      else
      {
LABEL_9:
        mi.cbSize = 40;
        memset_0(&mi.rcMonitor, 0, 0x24uLL);
        if ( GetMonitorInfoW(v6, &mi) )
        {
          v9 = *((__m128i *)a2 + 3);
          v10 = v22;
          v24 = v6;
          v11 = v9.m128i_i64[0];
          v12 = _mm_srli_si128(v9, 8).m128i_u64[0];
          left = v11;
          if ( mi.rcWork.left < (int)v11 )
            left = mi.rcWork.left;
          v14 = HIDWORD(v11);
          LODWORD(v23) = left;
          if ( mi.rcWork.top < (int)v14 )
            LODWORD(v14) = mi.rcWork.top;
          DWORD1(v23) = v14;
          right = v12;
          if ( mi.rcWork.right > (int)v12 )
            right = mi.rcWork.right;
          v16 = HIDWORD(v12);
          DWORD2(v23) = right;
          if ( mi.rcWork.bottom > SHIDWORD(v12) )
            LODWORD(v16) = mi.rcWork.bottom;
          HIDWORD(v23) = v16;
          v17 = *((unsigned int *)this + 10);
          v18 = v17 + 1;
          if ( (int)v17 + 1 >= (unsigned int)v17 )
            v10 = v17 + 1;
          if ( v18 < (unsigned int)v17 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18 < (unsigned int)v17 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v10 <= *((_DWORD *)this + 9) )
          {
            v20 = *((_QWORD *)this + 2);
            v21 = 3 * v17;
            *(_OWORD *)(v20 + 8 * v21) = v23;
            *(_QWORD *)(v20 + 8 * v21 + 16) = v24;
            *((_DWORD *)this + 10) = v10;
          }
          else
          {
            v19 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 16, 24LL, 1LL, &v23);
            if ( v19 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
          }
        }
      }
    }
  }
  return v4;
}
