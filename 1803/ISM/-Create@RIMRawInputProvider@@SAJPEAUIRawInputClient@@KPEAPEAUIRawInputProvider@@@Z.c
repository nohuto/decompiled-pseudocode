/*
 * XREFs of ?Create@RIMRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006C2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18006BF3C (--0RIMRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18006C364 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMRawInputProvider::Create(
        struct IRawInputClient *a1,
        unsigned int a2,
        struct IRawInputProvider **a3)
{
  RIMRawInputProvider *v6; // rax
  RIMRawInputProvider *v7; // rbx
  RIMRawInputProvider *v8; // rdi
  int v9; // ebx

  if ( a1 && a3 )
  {
    v6 = (RIMRawInputProvider *)malloc(0x60uLL);
    v7 = v6;
    if ( v6 )
      memset_0(v6, 0, 0x60uLL);
    if ( v7 )
      v8 = RIMRawInputProvider::RIMRawInputProvider(v7, a1);
    else
      v8 = 0LL;
    if ( v8 )
    {
      v9 = RIMRawInputProvider::Initialize(v8, a2);
      if ( v9 < 0 )
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v8 + 1) + 24LL))((__int64)v8 + 8, 1LL);
      else
        *a3 = v8;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v9;
}
