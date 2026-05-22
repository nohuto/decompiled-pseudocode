/*
 * XREFs of ?CreateReadBuffer@RIMDeviceCollection@@AEAAJK@Z @ 0x18006DFF0
 * Callers:
 *     ?OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z @ 0x18006DDB0 (-OnReadCallbackStatic@RIMDeviceCollection@@SAJPEAXK0@Z.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18006E058 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::CreateReadBuffer(RIMDeviceCollection *this, unsigned int a2)
{
  unsigned __int64 v3; // rsi
  void *v4; // rcx
  unsigned int v5; // ebx
  void *v6; // rax

  v3 = a2;
  v4 = (void *)*((_QWORD *)this + 335);
  v5 = 0;
  if ( v4 )
  {
    operator delete(v4);
    *((_QWORD *)this + 335) = 0LL;
  }
  *((_DWORD *)this + 672) = 0;
  v6 = operator new[](v3);
  *((_QWORD *)this + 335) = v6;
  if ( v6 )
    *((_DWORD *)this + 672) = v3;
  else
    return (unsigned int)-2147024882;
  return v5;
}
