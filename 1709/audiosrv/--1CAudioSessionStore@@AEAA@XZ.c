/*
 * XREFs of ??1CAudioSessionStore@@AEAA@XZ @ 0x18007F480
 * Callers:
 *     ?Release@CAudioSessionStore@@UEAAKXZ @ 0x180086A90 (-Release@CAudioSessionStore@@UEAAKXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001E280 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180028D50 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_qq @ 0x180077320 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 *     ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x18007FD70 (-Commit@CAudioSessionStore@@UEAAJXZ.c)
 */

void __fastcall CAudioSessionStore::~CAudioSessionStore(CAudioSessionStore *this)
{
  _QWORD *v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v4; // [rsp+38h] [rbp-10h]

  *(_QWORD *)this = &CAudioSessionStore::`vftable';
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Au,
      (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
      this);
  }
  v4 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  CAudioSessionStore::Commit(this);
  while ( *((_QWORD *)this + 3) )
  {
    PropVariantClear((PROPVARIANT *)(*((_QWORD *)this + 3) + 24LL));
    v2 = (_QWORD *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v2[6];
    operator delete(v2, 0LL);
  }
  operator delete(*((void **)this + 2));
  if ( *((_QWORD *)this + 4) )
  {
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
        this,
        *((_QWORD *)this + 4));
    }
    RegCloseKey(*((HKEY *)this + 4));
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( v4 )
    LeaveCriticalSection(lpCriticalSection);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}
