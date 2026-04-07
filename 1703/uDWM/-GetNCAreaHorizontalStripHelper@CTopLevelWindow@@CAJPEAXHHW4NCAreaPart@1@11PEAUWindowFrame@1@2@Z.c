/*
 * XREFs of ?GetNCAreaHorizontalStripHelper@CTopLevelWindow@@CAJPEAXHHW4NCAreaPart@1@11PEAUWindowFrame@1@2@Z @ 0x1800452DC
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180044A50 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
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
  int v8; // edi
  int v9; // r13d
  unsigned int v10; // esi
  __int64 v11; // r14
  HRESULT ThemeRect; // eax
  unsigned int v13; // ebx
  LONG top; // ecx
  int v15; // eax
  int v16; // edi
  int v17; // r15d
  int v18; // r12d
  __int64 v19; // rax
  int *v20; // r13
  CBaseObject *v21; // rbx
  void *(__fastcall *v22)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v23; // rax
  _DWORD *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  unsigned int v29; // [rsp+30h] [rbp-A9h]
  int v32; // [rsp+3Ch] [rbp-9Dh]
  _OWORD *v33; // [rsp+40h] [rbp-99h]
  __int64 v34; // [rsp+58h] [rbp-81h]
  __int64 v35; // [rsp+60h] [rbp-79h]
  void *v36; // [rsp+68h] [rbp-71h]
  struct tagRECT rc; // [rsp+70h] [rbp-69h] BYREF
  struct tagRECT pRect; // [rsp+80h] [rbp-59h] BYREF
  _DWORD v39[4]; // [rsp+90h] [rbp-49h] BYREF
  _DWORD v40[6]; // [rsp+A0h] [rbp-39h] BYREF
  int v41; // [rsp+B8h] [rbp-21h]
  LONG bottom; // [rsp+BCh] [rbp-1Dh]
  int v43; // [rsp+C0h] [rbp-19h]
  LONG v44; // [rsp+C4h] [rbp-15h]
  LONG right; // [rsp+C8h] [rbp-11h]
  LONG v46; // [rsp+CCh] [rbp-Dh]

  v8 = a4;
  v9 = a3;
  v32 = a2;
  v36 = a1;
  if ( (dword_1800C11C4 & 1) == 0 )
  {
    dword_1800C1158 = -2147023728;
    dword_1800C11C4 |= 1u;
  }
  v10 = 0;
  v11 = 0LL;
  while ( 1 )
  {
    ThemeRect = GetThemeRect(a1, a2, 0, 8002, &pRect);
    v13 = ThemeRect;
    if ( ThemeRect < 0 && (_WORD)ThemeRect != 1168 )
      break;
    if ( (_WORD)ThemeRect == 1168 )
    {
      v13 = 0;
    }
    else
    {
      top = pRect.top;
      v15 = pRect.bottom - pRect.top;
      v39[0] = v8;
      v16 = 0;
      if ( pRect.bottom - pRect.top < 0 )
        v15 = 0;
      v17 = 0;
      v18 = v15 / 2;
      v39[1] = a5;
      v39[2] = a6;
      while ( 2 )
      {
        v19 = a7;
        if ( v16 )
          v19 = a8;
        v35 = v19;
        rc.left = pRect.left;
        rc.right = pRect.right;
        rc.top = v17 + top;
        rc.bottom = v18 + v17 + top;
        InflateRect(&rc, -1, -1);
        v40[0] = rc.left;
        v40[1] = rc.top;
        v40[2] = rc.left + v9;
        v40[4] = rc.left + v9;
        v40[3] = rc.bottom;
        v41 = rc.right - v9;
        v20 = v39;
        v43 = v41;
        v29 = 0;
        v33 = v40;
        v40[5] = rc.top;
        bottom = rc.bottom;
        v44 = rc.top;
        right = rc.right;
        v46 = rc.bottom;
        do
        {
          v21 = CTopLevelWindow::s_pbsNonClientAtlas;
          v34 = v11 + 2LL * *v20;
          v22 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
          if ( v22 == WPF::ProcessHeapImpl::AllocClear )
            v23 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x68uLL);
          else
            v23 = (_DWORD *)v22(WPF::g_pProcessHeap, 104LL);
          v24 = v23;
          if ( v23 )
          {
            v23[2] = 1;
            *(_QWORD *)v23 = &CBitmapSource::`vftable';
            v23[20] = 0x80000000;
            v23[22] = 0x80000000;
            v23[21] = 0x80000000;
            v23[23] = 0x80000000;
            *((_QWORD *)v23 + 2) = 0LL;
            *((_QWORD *)v23 + 12) = 0LL;
          }
          else
          {
            v24 = 0LL;
          }
          if ( !v24 )
          {
            v13 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xDAu);
            MilInstrumentationCheckHR(0x14u, &dword_1800C1158, 1u, -2147024882, 0x4F0u);
            return v13;
          }
          *((_QWORD *)v24 + 2) = *((_QWORD *)v21 + 2);
          v25 = *((_QWORD *)v21 + 2);
          if ( v25 )
            _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
          v26 = 0;
          *((_OWORD *)v24 + 5) = *v33;
          if ( v24[22] - v24[20] >= 0 )
            v26 = v24[22] - v24[20];
          v24[6] = v26;
          v27 = 0;
          if ( v24[23] - v24[21] >= 0 )
            v27 = v24[23] - v24[21];
          v24[7] = v27;
          *(_QWORD *)(v35 + 8 * v34 + 1496) = v24;
          ++v33;
          ++v20;
          ++v29;
          v13 = 0;
        }
        while ( v29 < 3 );
        v9 = a3;
        ++v16;
        v17 += v18;
        if ( v16 < 2 )
        {
          top = pRect.top;
          continue;
        }
        break;
      }
      v8 = a4;
    }
    ++v10;
    ++v11;
    if ( v10 >= 2 )
      return v13;
    a1 = v36;
    a2 = v32;
  }
  MilInstrumentationCheckHR(0x14u, &dword_1800C1158, 1u, ThemeRect, 0x4C4u);
  return v13;
}
