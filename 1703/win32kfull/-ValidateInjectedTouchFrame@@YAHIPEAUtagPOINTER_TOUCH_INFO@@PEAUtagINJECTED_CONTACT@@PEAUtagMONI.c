/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01B7AFC
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01B85C0 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        unsigned int a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagMONITOR *a4,
        unsigned int a5)
{
  int v5; // edi
  unsigned int v10; // ebp
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  __int128 *v13; // rax
  unsigned int v14; // ecx
  _DWORD *v15; // r8
  int v16; // edx
  _DWORD *i; // rax
  int *j; // rdx
  int v20; // r8d
  unsigned int v21; // r8d
  int v22; // ecx
  bool v23; // zf
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  v10 = 0;
  if ( !a1 )
  {
LABEL_14:
    v14 = 0;
    if ( a5 )
    {
      v15 = (_DWORD *)((char *)a3 + 8);
      do
      {
        if ( ((*v15 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          v16 = 0;
          if ( !a1 )
            return 0LL;
          for ( i = (_DWORD *)((char *)a2 + 4); *i != v14; i += 36 )
          {
            if ( ++v16 >= a1 )
              return 0LL;
          }
        }
        ++v14;
        v15 += 3;
      }
      while ( v14 < a5 );
    }
    if ( !a1 )
      return 1LL;
    for ( j = (int *)((char *)a2 + 12); ; j += 36 )
    {
      v20 = *j;
      if ( (*j & 0x8000) != 0 && ((v20 - 163840) & 0xFFFDFFFF) != 0 )
        return 0LL;
      v21 = v20 & 0xFFFF7FFF;
      v22 = *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2) + 2);
      switch ( v21 )
      {
        case 0x10006u:
          goto LABEL_35;
        case 0x20000u:
          v23 = ((v22 - 131074) & 0xFFFDFFFF) == 0;
          break;
        case 0x20002u:
LABEL_35:
          v23 = ((v22 - 0x20000) & 0xFFFDFFFD) == 0;
          break;
        case 0x20006u:
        case 0x40000u:
        case 0x40002u:
          v23 = ((v22 - 65542) & 0xFFFEFFFF) == 0;
          break;
        default:
          goto LABEL_37;
      }
      if ( !v23 )
        return 0LL;
LABEL_37:
      if ( ((v21 & 2) == 0 || v21 == 262146)
        && (j[5] != *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2))
         || j[6] != *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2) + 1)) )
      {
        return 0LL;
      }
      if ( ++v5 >= a1 )
        return 1LL;
    }
  }
  v11 = (unsigned __int64 *)((char *)a2 + 32);
  while ( 1 )
  {
    v12 = *v11;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v13 = (__int128 *)(*((_QWORD *)a4 + 5) + 44LL);
    }
    else
    {
      v13 = (__int128 *)((W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                    + 52LL) & 1) != 0
                       ? *((_QWORD *)a4 + 5) + 60LL
                       : *((_QWORD *)a4 + 5) + 28LL);
    }
    v24 = *v13;
    if ( !PtInRect(&v24, v12) )
      return 0LL;
    ++v10;
    v11 += 18;
    if ( v10 >= a1 )
      goto LABEL_14;
  }
}
