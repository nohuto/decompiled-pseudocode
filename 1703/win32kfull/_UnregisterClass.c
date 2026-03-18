/*
 * XREFs of _UnregisterClass @ 0x1C0035C58
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0034ED0 (NtUserUnregisterClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C0035E44 (_InnerGetClassPtr.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     DestroyClass @ 0x1C00392B4 (DestroyClass.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterClass(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, _QWORD *a3)
{
  int v6; // r14d
  unsigned __int16 Atom; // r11
  __int64 ClassPtr; // r8
  __int64 v9; // r10
  unsigned __int16 v10; // r11
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]

  v6 = 0;
  v14 = gptiCurrent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  if ( ((unsigned __int64)pszSrc & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, pszSrc) < 0 )
      Atom = 0;
    else
      Atom = UserFindAtom(&gawchAtomScratch);
  }
  else
  {
    Atom = (unsigned __int16)pszSrc;
  }
  if ( !v13[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v13);
  }
  ClassPtr = InnerGetClassPtr(Atom, *(_QWORD *)(gptiCurrent + 376LL) + 312LL, a2);
  if ( !ClassPtr )
  {
    ClassPtr = InnerGetClassPtr(v10, v9 + 320, 0LL);
    if ( !ClassPtr )
    {
      v11 = 1411LL;
LABEL_11:
      UserSetLastError(v11);
      return 0LL;
    }
    v6 = 1;
  }
  if ( *(_DWORD *)(*(_QWORD *)ClassPtr + 88LL) )
  {
    v11 = 1412LL;
    goto LABEL_11;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)ClassPtr + 40LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)ClassPtr + 48LL);
  a3[2] = 0LL;
  if ( v6 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL));
  return 1LL;
}
