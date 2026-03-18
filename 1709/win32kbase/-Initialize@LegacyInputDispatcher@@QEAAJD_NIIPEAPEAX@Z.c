/*
 * XREFs of ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAPEAX@Z @ 0x1C003BE20
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  if ( *((_DWORD *)this + 11) )
    return 3221225473LL;
  *((_QWORD *)this + 1) = Win32AllocPoolNonPaged(8LL * a4, 0x79737355u);
  *((_QWORD *)this + 3) = Win32AllocPoolNonPaged(48 * v7, 0x774B7355u);
  *((_DWORD *)this + 12) = 1;
  if ( (unsigned int)v7 > a5 )
  {
    v10 = Win32AllocPool(16LL * ((unsigned int)v7 - a5), 1885947971LL);
    *((_QWORD *)this + 4) = v10;
    if ( !v10 )
      return 3221225495LL;
  }
  if ( !*((_QWORD *)this + 3) )
    return 3221225495LL;
  v11 = (void *)*((_QWORD *)this + 1);
  if ( !v11 )
    return 3221225495LL;
  memset(v11, 0, 8LL * (unsigned int)v7);
  memset(*((void **)this + 4), 0, 16LL * ((unsigned int)v7 - a5));
  memmove(*((void **)this + 1), Src, 8LL * a5);
  result = 0LL;
  *((_DWORD *)this + 11) = v7;
  *((_DWORD *)this + 13) = a5;
  *((_BYTE *)this + 56) = a2;
  *((_BYTE *)this + 57) = a3;
  return result;
}
