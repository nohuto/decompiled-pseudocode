/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x1800425F0
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180042580 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000B360 (--3@YAXPEAX@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x1800424A0 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1800C01E4 (WPP_SF_q.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(CAudioSessionStore *this)
{
  HKEY v2; // rcx
  _QWORD *v3; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  *(_QWORD *)this = &CAudioSessionStore::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_143dd52affcd33359900bde90742b95f_Traceguids, this);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v5 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CAudioSessionStore::Commit((HKEY *)this);
  while ( *((_QWORD *)this + 3) )
  {
    PropVariantClear((PROPVARIANT *)(*((_QWORD *)this + 3) + 24LL));
    v3 = (_QWORD *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v3[6];
    operator delete(v3, 0LL);
  }
  operator delete(*((void **)this + 2));
  if ( *((_QWORD *)this + 4) )
  {
    v2 = (HKEY)*((_QWORD *)this + 4);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        26LL,
        &WPP_143dd52affcd33359900bde90742b95f_Traceguids,
        this,
        *((_QWORD *)this + 4));
      v2 = (HKEY)*((_QWORD *)this + 4);
    }
    RegCloseKey(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( v5 )
    LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
