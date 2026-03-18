/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C006E510
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall LegacyInputDispatcher::Initialize(
        LegacyInputDispatcher *this,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int a5,
        void **Src)
{
  __int64 v7; // rsi
  __int64 v10; // rax
  void *v11; // rcx
  __int64 result; // rax

  v7 = a4;
  if ( *((_DWORD *)this + 9) )
    return 3221225473LL;
  *((_QWORD *)this + 1) = Win32AllocPoolNonPaged(8LL * a4, 0x79737355u);
  *((_QWORD *)this + 2) = Win32AllocPoolNonPaged(48 * v7, 0x774B7355u);
  if ( (unsigned int)v7 > a5 )
  {
    v10 = Win32AllocPool(16LL * ((unsigned int)v7 - a5), 0x70694843u);
    *((_QWORD *)this + 3) = v10;
    if ( !v10 )
      return 3221225495LL;
  }
  if ( !*((_QWORD *)this + 2) )
    return 3221225495LL;
  v11 = (void *)*((_QWORD *)this + 1);
  if ( !v11 )
    return 3221225495LL;
  memset(v11, 0, 8LL * (unsigned int)v7);
  memset(*((void **)this + 3), 0, 16LL * ((unsigned int)v7 - a5));
  memmove(*((void **)this + 1), Src, 8LL * a5);
  result = 0LL;
  *((_DWORD *)this + 9) = v7;
  *((_DWORD *)this + 10) = a5;
  *((_BYTE *)this + 44) = a2;
  *((_BYTE *)this + 45) = a3;
  return result;
}
