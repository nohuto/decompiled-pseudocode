/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C0059548
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C0058160 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C0058760 (SfnINLBOXSTRING.c)
 * Callees:
 *     SfnINSTRING @ 0x1C0059620 (SfnINSTRING.c)
 *     SfnINSTRINGNULL @ 0x1C005C9F0 (SfnINSTRINGNULL.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  int v10; // ebx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  v10 = (int)a2;
  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  LOBYTE(a2) = 1;
  if ( !HMValidateHandleNoSecure(v12, a2) )
    return 0LL;
  v13 = *(_DWORD *)(gptiCurrent + 1372LL);
  if ( v13 == 1 )
    return SfnDWORD(v10, a3, a4, a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v14 = 399;
  if ( a1 != 678 )
    v14 = 332;
  if ( a3 == v14 )
    return SfnINSTRINGNULL(v10, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING(v10, a3, a4, a5, a6, (__int64)a7, a8);
}
