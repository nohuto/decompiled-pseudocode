/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x18003AABC
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003A200 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180020D90 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::GetNCAreaHorizontalStripHelper(
        void *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  int v8; // r10d
  __int64 v9; // r13
  int v10; // r15d
  int v11; // r14d
  unsigned int v12; // edi
  __int64 v13; // rsi
  HRESULT ThemeRect; // eax
  unsigned int v15; // ebx
  int v16; // ebx
  LONG top; // ecx
  int v18; // eax
  int v19; // r14d
  int v20; // r12d
  __int64 v21; // rax
  int *v22; // r13
  CBaseObject *v23; // r15
  void *(__fastcall *v24)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v25; // rax
  _DWORD *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  unsigned int v32; // [rsp+34h] [rbp-A5h]
  void *v35; // [rsp+40h] [rbp-99h]
  _OWORD *v36; // [rsp+48h] [rbp-91h]
  __int64 v37; // [rsp+60h] [rbp-79h]
  __int64 v38; // [rsp+68h] [rbp-71h]
  struct tagRECT rc; // [rsp+70h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v41[4]; // [rsp+90h] [rbp-49h] BYREF
  _DWORD v42[12]; // [rsp+A0h] [rbp-39h] BYREF

  v8 = a2;
  v9 = a7;
  v10 = a3;
  v11 = a4;
  v35 = a1;
  if ( dword_1800C1A7C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C1A7C);
    if ( dword_1800C1A7C == -1 )
    {
      dword_1800C19D0 = -2147023728;
      Init_thread_footer(&dword_1800C1A7C);
    }
    v8 = a2;
    a1 = v35;
  }
  v12 = 0;
  v13 = 0LL;
  while ( 1 )
  {
    ThemeRect = GetThemeRect(a1, v8, 0, 8002, &pRect);
    v15 = ThemeRect;
    if ( ThemeRect < 0 && (_WORD)ThemeRect != 1168 )
      break;
    if ( (_WORD)ThemeRect != 1168 )
    {
      v16 = 0;
      top = pRect.top;
      v18 = pRect.bottom - pRect.top;
      v41[0] = v11;
      v19 = 0;
      if ( pRect.bottom - pRect.top < 0 )
        v18 = 0;
      v20 = v18 / 2;
      v41[1] = a5;
      v41[2] = a6;
      while ( 2 )
      {
        v21 = v9;
        if ( v16 )
          v21 = a8;
        v38 = v21;
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = v19 + top;
        rc.bottom = v20 + v19 + top;
        InflateRect(&rc, -1, -1);
        v22 = v41;
        v42[0] = rc.left;
        v42[1] = rc.top;
        v42[2] = rc.left + v10;
        v42[4] = rc.left + v10;
        v42[3] = rc.bottom;
        v42[6] = rc.right - v10;
        v42[8] = rc.right - v10;
        v32 = 0;
        v36 = v42;
        v42[5] = rc.top;
        v42[7] = rc.bottom;
        v42[9] = rc.top;
        v42[10] = rc.right;
        v42[11] = rc.bottom;
        do
        {
          v23 = CTopLevelWindow::s_pbsNonClientAtlas;
          v37 = v13 + 2LL * *v22;
          v24 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
          if ( v24 == WPF::ProcessHeapImpl::AllocClear )
            v25 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
          else
            v25 = (_DWORD *)v24(WPF::g_pProcessHeap, 104LL);
          v26 = v25;
          if ( v25 )
          {
            v25[2] = 1;
            *(_QWORD *)v25 = &CBitmapSource::`vftable';
            v25[20] = 0x80000000;
            v25[22] = 0x80000000;
            v25[21] = 0x80000000;
            v25[23] = 0x80000000;
            *((_QWORD *)v25 + 2) = 0LL;
            *((_QWORD *)v25 + 12) = 0LL;
          }
          else
          {
            v26 = 0LL;
          }
          if ( !v26 )
          {
            v15 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xDAu);
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19D0, 1u, -2147024882, 0x4E9u);
            return v15;
          }
          *((_QWORD *)v26 + 2) = *((_QWORD *)v23 + 2);
          v27 = *((_QWORD *)v23 + 2);
          if ( v27 )
            _InterlockedIncrement((volatile signed __int32 *)(v27 + 8));
          v28 = 0;
          *((_OWORD *)v26 + 5) = *v36;
          if ( v26[22] - v26[20] >= 0 )
            v28 = v26[22] - v26[20];
          v26[6] = v28;
          v29 = 0;
          if ( v26[23] - v26[21] >= 0 )
            v29 = v26[23] - v26[21];
          v26[7] = v29;
          *(_QWORD *)(v38 + 8 * v37 + 1496) = v26;
          ++v36;
          ++v22;
          ++v32;
        }
        while ( v32 < 3 );
        v10 = a3;
        ++v16;
        v9 = a7;
        v19 += v20;
        if ( v16 < 2 )
        {
          top = pRect.top;
          continue;
        }
        break;
      }
      v11 = a4;
    }
    ++v12;
    ++v13;
    if ( v12 >= 2 )
      return 0;
    a1 = v35;
    v8 = a2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C19D0, 1u, ThemeRect, 0x4BDu);
  return v15;
}
