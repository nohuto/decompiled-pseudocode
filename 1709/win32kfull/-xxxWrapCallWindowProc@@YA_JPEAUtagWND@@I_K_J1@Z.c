/*
 * XREFs of ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00DFCD0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0053EA8 (HMValidateHandleNoRip.c)
 *     SfnDWORD @ 0x1C00AA690 (SfnDWORD.c)
 *     ?CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z @ 0x1C00DFDC0 (-CheckProcessIdentity@@YAHPEAUtagWND@@I_K_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWrapCallWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v9; // rax

  if ( !(unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return 0LL;
  v9 = HMValidateHandleNoRip(a5, 7);
  if ( v9 )
  {
    if ( (a2 & 0x1FFFF) >= 0x400 )
      return SfnDWORD(
               (volatile signed __int32 *)a1,
               a2,
               a3,
               a4,
               *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL),
               *(_QWORD *)(gpsi + 744LL));
    else
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               a4,
               *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL),
               *(_QWORD *)(gpsi + 744LL),
               (*(unsigned __int16 *)(*(_QWORD *)(v9 + 40) + 24LL) >> 1) & 1,
               0LL);
  }
  else if ( (a2 & 0x1FFFF) < 0x400 )
  {
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64, unsigned __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
             a1,
             a2,
             a3,
             a4,
             a5,
             *(_QWORD *)(gpsi + 560LL),
             a5 == *(_QWORD *)(gpsi + 480LL),
             0LL);
  }
  else
  {
    return SfnDWORD((volatile signed __int32 *)a1, a2, a3, a4, a5, *(_QWORD *)(gpsi + 560LL));
  }
}
