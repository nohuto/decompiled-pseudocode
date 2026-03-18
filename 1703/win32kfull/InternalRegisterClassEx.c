/*
 * XREFs of InternalRegisterClassEx @ 0x1C003573C
 * Callers:
 *     _RegisterClassEx @ 0x1C00356AC (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C0036E20 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C00FCD80 (RegisterIconTitleClass.c)
 * Callees:
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C0035BC8 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0035C2C (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     _InnerGetClassPtr @ 0x1C0035E44 (_InnerGetClassPtr.c)
 *     MapClientToServerPfn @ 0x1C003701C (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C003940C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C003ACB4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C0106BB8 (AllocateUnicodeString.c)
 */

_QWORD *__fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3)
{
  __int64 v5; // r15
  int v6; // ebx
  __int64 v7; // rcx
  unsigned __int16 Atom; // r10
  unsigned __int16 v9; // r10
  __int64 v10; // r11
  struct tagDESKTOP *v11; // r12
  unsigned int v12; // edx
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  int v16; // r8d
  __int16 v17; // r15
  __int64 v18; // rax
  int v19; // r15d
  __int64 v20; // rcx
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  unsigned int v24; // r8d
  const WCHAR *v25; // rdx
  int v26; // r15d
  _BYTE *v27; // rax
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  __int64 v31; // rcx
  unsigned int v32; // ecx
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  int v36; // edx
  struct tagDESKTOP *v37[2]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD *v38; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  _STRING v40; // [rsp+50h] [rbp-48h] BYREF
  int v41; // [rsp+A0h] [rbp+8h]
  int v43; // [rsp+B8h] [rbp+20h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v43 = 0;
  v41 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 && v5 == hModuleWin && *(_WORD *)(gptiCurrent + 552LL) >= 0x400u )
    goto LABEL_53;
  v7 = *(_QWORD *)(a1 + 80);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    Atom = UserFindAtom(v7);
  else
    Atom = v7;
  if ( Atom
    && !v6
    && (InnerGetClassPtr(Atom, *(_QWORD *)(gptiCurrent + 376LL) + 312LL, v5)
     || (*(_DWORD *)(a1 + 4) & 0x4000) != 0 && InnerGetClassPtr(v9, v10 + 320, 0LL)) )
  {
    v31 = 1410LL;
LABEL_46:
    UserSetLastError(v31);
    return 0LL;
  }
  v11 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 )
    v11 = *(struct tagDESKTOP **)(gptiCurrent + 408LL);
  v37[0] = v11;
  v12 = (a3 & 8) + 168;
  v13 = v12 + *(_DWORD *)(a1 + 16);
  if ( v13 < v12 )
  {
LABEL_53:
    v31 = 87LL;
    goto LABEL_46;
  }
  v14 = ClassAlloc(v11, v13, a3);
  v15 = v14;
  v38 = v14;
  if ( !v14 )
    return 0LL;
  LockObjectAssignment(v14 + 2, v11);
  v15[8] = v15;
  *(_OWORD *)((char *)v15 + 92) = *(_OWORD *)(a1 + 4);
  *(_OWORD *)((char *)v15 + 108) = *(_OWORD *)(a1 + 20);
  *(_OWORD *)((char *)v15 + 124) = *(_OWORD *)(a1 + 36);
  *(_OWORD *)((char *)v15 + 140) = *(_OWORD *)(a1 + 52);
  *(_QWORD *)((char *)v15 + 156) = *(_QWORD *)(a1 + 68);
  *((_DWORD *)v15 + 41) = *(_DWORD *)(a1 + 76);
  v16 = *(_DWORD *)(a1 + 88);
  *((_DWORD *)v15 + 20) = v16;
  *((_WORD *)v15 + 17) = a3;
  *((_WORD *)v15 + 6) = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 92) != 1 )
      v16 = *((_DWORD *)v15 + 27);
    *(_WORD *)(gpsi + 2LL * ((a2 & 0x3FFFu) - 666) + 328) = v16 + 400;
  }
  v17 = *((_WORD *)v15 + 17);
  if ( (v17 & 1) == 0 )
  {
    v18 = MapClientToServerPfn(v15[12]);
    if ( v18 )
    {
      v32 = 0;
      *((_WORD *)v15 + 17) = v17 & 0xFFFC | 1;
      v15[12] = v18;
      v33 = &unk_1C02DEA10;
      while ( v18 != *v33 )
      {
        ++v32;
        v33 += 6;
        if ( v32 >= 8 )
          goto LABEL_16;
      }
      v34 = 6LL * v32;
      v35 = *((_DWORD *)v15 + 27);
      v36 = dword_1C02DEA18[2 * v34];
      if ( v35 >= v36 )
      {
        *((_DWORD *)v15 + 20) = v36;
        *((_DWORD *)v15 + 27) = v35 - dword_1C02DEA18[2 * v34];
      }
    }
  }
LABEL_16:
  v19 = (a3 >> 6) & 1;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v15 + 16, v19) )
  {
LABEL_69:
    v38 = (_QWORD *)v15[2];
    v15[2] = 0LL;
    ClassFree(v11, v15);
    UnlockObjectAssignment(&v38);
    return 0LL;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v15 + 15, v19) )
  {
LABEL_68:
    HMAssignmentUnlock(v15 + 16);
    goto LABEL_69;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v15 + 20, v19) )
  {
LABEL_67:
    HMAssignmentUnlock(v15 + 15);
    goto LABEL_68;
  }
  v20 = *(_QWORD *)(a1 + 64);
  if ( (v20 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v43 = 1;
    v21 = UserAddAtomEx(v20, 0LL, 2LL);
  }
  else
  {
    v21 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), v20);
  }
  if ( !v21 )
  {
LABEL_66:
    HMAssignmentUnlock(v15 + 20);
    goto LABEL_67;
  }
  *((_WORD *)v15 + 5) = v21;
  v22 = *(_QWORD *)(a1 + 80);
  if ( (v22 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v41 = 1;
    v23 = UserAddAtomEx(v22, 0LL, 2LL);
  }
  else
  {
    v23 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), v22);
  }
  if ( !v23 )
  {
LABEL_64:
    if ( v43 )
      UserDeleteAtom(*((unsigned __int16 *)v15 + 5));
    goto LABEL_66;
  }
  *((_WORD *)v15 + 4) = v23;
  v25 = *(const WCHAR **)(a1 + 64);
  if ( ((unsigned __int64)v25 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, v25);
    v26 = DestinationString.Length + 1;
  }
  else
  {
    v26 = 7;
  }
  v27 = ClassAlloc(v11, v26, v24);
  v15[19] = v27;
  if ( !v27 )
  {
LABEL_62:
    if ( v41 )
      UserDeleteAtom(*((unsigned __int16 *)v15 + 4));
    goto LABEL_64;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v40.Length = 0;
    v40.MaximumLength = v26;
    v40.Buffer = (PCHAR)v15[19];
    RtlUnicodeStringToAnsiString(&v40, &DestinationString, 0);
  }
  else
  {
    *v27 = 35;
    RtlIntegerToChar(*(unsigned __int16 *)(a1 + 64), 0xAu, v26 - 1, (PCHAR)(v15[19] + 1LL));
  }
  v28 = (const WCHAR *)v15[18];
  if ( !v28 || ((unsigned __int64)v28 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_31;
  RtlInitUnicodeString(&DestinationString, v28);
  if ( !DestinationString.Length )
  {
    v15[18] = 0LL;
    goto LABEL_31;
  }
  if ( !(unsigned int)AllocateUnicodeString(v37, &DestinationString) )
  {
    ClassFree(v11, (void *)v15[19]);
    goto LABEL_62;
  }
  v15[18] = v37[1];
LABEL_31:
  v29 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( (*((_DWORD *)v15 + 23) & 0x4000) == 0 && (a3 & 1) == 0 )
  {
    *v15 = *(_QWORD *)(v29 + 312);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 312LL) = v15;
  }
  else
  {
    *v15 = *(_QWORD *)(v29 + 320);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 320LL) = v15;
  }
  return v15;
}
