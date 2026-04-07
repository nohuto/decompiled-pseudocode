/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180016398
 * Callers:
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x180016348 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180027B00 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180028CE0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180083204 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x180086858 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // si
  CWindowData *v4; // rcx
  bool v5; // bl
  HWND v6; // rcx
  int v7; // ecx
  wchar_t **i; // rdx
  WCHAR *v9; // rax
  int v10; // r10d
  int v11; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 592) & 1) != 0
    && (*((_DWORD *)this + 25) & 0xC00000) != 0xC00000
    && (*((char *)this + 104) >= 0 || (*((_DWORD *)this + 150) & 0xFFF) == 0x11) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v4 = (CWindowData *)*((_QWORD *)this + 68);
      if ( v4 )
      {
        v5 = CWindowData::WillEndAnimationCloaked(v4);
        if ( CWindowData::WillEndAnimationCloaked(this) == v5
          && ContainsRect((const struct tagRECT *)(*((_QWORD *)this + 68) + 48LL), (const struct tagRECT *)this + 3) )
        {
          v6 = (HWND)*((_QWORD *)this + 5);
          ClassName[0] = 0;
          v2 = 1;
          if ( GetClassNameW(v6, ClassName, 260) )
          {
            v7 = 0;
            for ( i = &off_1800B09C8; ; ++i )
            {
              v9 = ClassName;
              do
              {
                v10 = *(WCHAR *)((char *)v9 + (char *)*i - (char *)ClassName);
                v11 = *v9 - v10;
                if ( v11 )
                  break;
                ++v9;
              }
              while ( v10 );
              if ( !v11 )
                break;
              if ( ++v7 )
                return v2;
            }
            return 0;
          }
        }
      }
    }
  }
  return v2;
}
