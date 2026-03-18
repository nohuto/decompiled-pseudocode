/*
 * XREFs of ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1C00EAFA8
 * Callers:
 *     SfnINCBOXSTRING @ 0x1C00EAEF0 (SfnINCBOXSTRING.c)
 *     SfnINLBOXSTRING @ 0x1C00EAF50 (SfnINLBOXSTRING.c)
 * Callees:
 *     SfnINSTRINGNULL @ 0x1C0039AF0 (SfnINSTRINGNULL.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     SfnDWORD @ 0x1C0054BC0 (SfnDWORD.c)
 *     SfnINSTRING @ 0x1C00EB080 (SfnINSTRING.c)
 */

__int64 __fastcall _SfnINBOXSTRING(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int *a5,
        unsigned __int64 a6,
        __int64 (*a7)(void),
        unsigned int a8)
{
  unsigned __int64 v12; // rcx
  int v13; // eax
  int v14; // eax

  if ( a2 )
    v12 = *(_QWORD *)a2;
  else
    v12 = 0LL;
  if ( !HMValidateHandleNoSecure(v12, 1) )
    return 0LL;
  v13 = *(_DWORD *)(gptiCurrent + 1284LL);
  if ( v13 == 1 )
    return SfnDWORD((__int64 *)a2, a3, a4, (__int64)a5, a6, (__int64)a7);
  if ( v13 != 2 )
    return 0LL;
  v14 = 399;
  if ( a1 != 678 )
    v14 = 332;
  if ( a3 == v14 )
    return SfnINSTRINGNULL((__int64 *)a2, a3, a4, a5, a6, (__int64)a7, a8);
  else
    return SfnINSTRING((_DWORD)a2, a3, a4, (_DWORD)a5, a6, (__int64)a7, a8);
}
