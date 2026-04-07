/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800149E0
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180025400 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C8A0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x18004DE8A (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rbx
  DWORD v7; // ebp
  signed int v8; // r12d
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  RGNDATA *v10; // rax
  RGNDATA *v11; // rdi
  unsigned __int128 v12; // xmm1
  LONG v13; // edx
  LONG *p_right; // rax
  LONG v15; // r9d
  __int64 v16; // r8
  LONG v17; // r10d
  LONG v18; // r11d
  HRGN Region; // rax
  void (__fastcall *v20)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  signed int LastError; // eax
  unsigned __int128 v23; // [rsp+30h] [rbp-28h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xC5u);
    return 2147942934LL;
  }
  else
  {
    v7 = v3 + 36;
    if ( (int)v3 + 36 < (unsigned int)v3 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xC6u);
      return 2147942934LL;
    }
    else
    {
      v8 = 0;
      v9 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 8LL);
      if ( v9 == WPF::ProcessHeapImpl::Alloc )
        v10 = (RGNDATA *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, v7);
      else
        v10 = (RGNDATA *)v9(WPF::g_pProcessHeap, v7);
      v11 = v10;
      if ( v10 )
      {
        v12 = (unsigned __int128)*Src;
        if ( a2 > 1 )
        {
          v13 = HIDWORD(*(unsigned __int128 *)Src);
          p_right = &Src[1].right;
          v15 = *(_QWORD *)&Src->right;
          v16 = a2 - 1;
          v17 = HIDWORD(*(_QWORD *)&Src->left);
          v18 = (LONG)*Src;
          do
          {
            if ( *(p_right - 2) < v18 )
              v18 = *(p_right - 2);
            if ( *(p_right - 1) < v17 )
              v17 = *(p_right - 1);
            if ( *p_right > v15 )
              v15 = *p_right;
            if ( p_right[1] > v13 )
              v13 = p_right[1];
            p_right += 4;
            --v16;
          }
          while ( v16 );
          *((_QWORD *)&v23 + 1) = __PAIR64__(v13, v15);
          *(_QWORD *)&v23 = __PAIR64__(v17, v18);
          v12 = v23;
        }
        v11->rdh.dwSize = 32;
        v11->rdh.iType = 1;
        v11->rdh.nCount = a2;
        v11->rdh.nRgnSize = v3;
        v11->rdh.rcBound = (RECT)v12;
        memcpy_0(v11->Buffer, Src, (unsigned int)v3);
        SetLastError(0);
        Region = ExtCreateRegion(0LL, v7, v11);
        if ( Region )
        {
          *a3 = Region;
        }
        else
        {
          LastError = GetLastError();
          v8 = LastError;
          if ( LastError > 0 )
            v8 = (unsigned __int16)LastError | 0x80070000;
          if ( v8 >= 0 )
            v8 = -2003304445;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xEAu);
        }
        v20 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
        if ( v20 == WPF::ProcessHeapImpl::Free )
          WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v11);
        else
          v20(WPF::g_pProcessHeap, v11);
        return (unsigned int)v8;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xCFu);
        return 2147942414LL;
      }
    }
  }
}
