/*
 * XREFs of ?UpdateTitle@CTaskWindow@@UEAAXXZ @ 0x180047960
 * Callers:
 *     ?RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4TASK_WINDOW_TYPE@@PEAUIImmersiveApplicationInternal@@PEBUtagRECT@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180047EFC (-RuntimeClassInitialize@CTaskWindow@@QEAAJPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@.c)
 *     ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x18004C600 (-OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x18000C4E0 (StringCopyWorkerW.c)
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1800834B0 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 *     McTemplateU0dz @ 0x18008F814 (McTemplateU0dz.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTaskWindow::UpdateTitle(CTaskWindow *this)
{
  __int64 (*v2)(void); // rax
  unsigned __int128 v3; // rax
  size_t v4; // rcx
  HWND v5; // rbp
  void *v6; // rcx
  size_t cchToCopy; // rsi
  const wchar_t *v8; // r15
  size_t v9; // rdi
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  size_t pcchNewDestLength[2]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int16 v13[256]; // [rsp+40h] [rbp-238h] BYREF

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
  if ( (char *)v2 == (char *)CTaskWindow::GetNativeWindow )
    *(_QWORD *)&v3 = CTaskWindow::GetNativeWindow(this);
  else
    *(_QWORD *)&v3 = v2();
  v5 = (HWND)v3;
  if ( (_QWORD)v3 )
  {
    v6 = (void *)*((_QWORD *)this + 8);
    if ( v6 )
    {
      CoTaskMemFree(v6);
      *((_QWORD *)this + 8) = 0LL;
    }
    cchToCopy = -1LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = -1LL;
    *((_QWORD *)this + 10) = -1LL;
    if ( (int)GetFirstApplicationViewTitleProperty(v5, *((unsigned __int64 *)&v3 + 1), v13, pcchNewDestLength) >= 0 )
    {
      v8 = &v13[pcchNewDestLength[0]];
      do
        ++cchToCopy;
      while ( v8[cchToCopy] );
      v9 = cchToCopy + 1;
      *((_QWORD *)this + 8) = 0LL;
      if ( cchToCopy + 1 >= cchToCopy )
      {
        *((_QWORD *)this + 8) = 0LL;
        v3 = v9 * (unsigned __int128)2uLL;
        if ( is_mul_ok(v9, 2uLL) )
        {
          *(_QWORD *)&v3 = CoTaskMemAlloc(2 * v9);
          *((_QWORD *)this + 8) = v3;
          v10 = v3;
          if ( (_QWORD)v3 )
          {
            if ( v9 > 0x7FFFFFFF || cchToCopy >= 0x7FFFFFFF )
            {
              if ( cchToCopy != -1LL )
                *(_WORD *)v3 = 0;
            }
            else
            {
              if ( !v8 )
              {
                v8 = &word_18035ABCC;
                cchToCopy = 0LL;
              }
              if ( v9 )
              {
                pcchNewDestLength[0] = 0LL;
                LODWORD(v3) = StringCopyWorkerW((STRSAFE_LPWSTR)v3, v9, pcchNewDestLength, v8, cchToCopy);
                v4 = pcchNewDestLength[0];
                v11 = v9 - pcchNewDestLength[0];
                if ( (v3 & 0x80000000) == 0LL && v11 > 1 && 2 * v11 > 2 )
                  memset_0((void *)(v10 + 2 * (pcchNewDestLength[0] + 1)), 0, 2 * v11 - 2);
              }
            }
          }
        }
      }
    }
  }
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0dz(v4, *((_QWORD *)&v3 + 1), (unsigned int)v5, *((_QWORD *)this + 8));
}
