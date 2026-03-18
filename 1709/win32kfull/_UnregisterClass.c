/*
 * XREFs of _UnregisterClass @ 0x1C0073050
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0072EE0 (NtUserUnregisterClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _InnerGetClassPtr @ 0x1C0073240 (_InnerGetClassPtr.c)
 *     DestroyClass @ 0x1C00F2194 (DestroyClass.c)
 */

__int64 __fastcall UnregisterClass(wchar_t *a1, __int64 a2, _QWORD *a3)
{
  int v5; // r15d
  __int64 v6; // r8
  __int64 v7; // rdx
  wchar_t *v8; // rax
  int v9; // r10d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 ClassPtr; // r8
  __int64 v13; // r10
  __int64 v14; // rcx
  _BYTE v16[64]; // [rsp+58h] [rbp-40h] BYREF

  v5 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v16);
  if ( ((unsigned __int64)a1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v6 = 2147483646LL;
    v7 = 256LL;
    v8 = &gawchAtomScratch;
    v9 = 0;
    v10 = 0LL;
    while ( v7 )
    {
      if ( !v6 || !*a1 )
        goto LABEL_7;
      *v8++ = *a1++;
      --v7;
      --v6;
      ++v10;
    }
    --v8;
    v9 = -2147483643;
LABEL_7:
    *v8 = 0;
    if ( v9 < 0 )
      LOWORD(a1) = 0;
    else
      LOWORD(a1) = UserFindAtom(&gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v16);
  ClassPtr = InnerGetClassPtr((unsigned __int16)a1, *(_QWORD *)(gptiCurrent + 400LL) + 320LL);
  if ( !ClassPtr )
  {
    ClassPtr = InnerGetClassPtr((unsigned __int16)a1, v13 + 328);
    if ( !ClassPtr )
    {
      v14 = 1411LL;
LABEL_15:
      UserSetLastError(v14, v11);
      return 0LL;
    }
    v5 = 1;
  }
  if ( *(_DWORD *)(*(_QWORD *)ClassPtr + 96LL) )
  {
    v14 = 1412LL;
    goto LABEL_15;
  }
  *a3 = *(_QWORD *)(*(_QWORD *)ClassPtr + 40LL);
  a3[1] = *(_QWORD *)(*(_QWORD *)ClassPtr + 48LL);
  a3[2] = 0LL;
  if ( v5 )
    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 12LL) &= ~0x2000u;
  DestroyClass(*(struct tagPROCESSINFO **)(gptiCurrent + 400LL));
  return 1LL;
}
