/*
 * XREFs of InternalRegisterClassEx @ 0x1C0073DB8
 * Callers:
 *     _RegisterClassEx @ 0x1C0075704 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C0075794 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1C0108AB4 (RegisterIconTitleClass.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _InnerGetClassPtr @ 0x1C0073240 (_InnerGetClassPtr.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C007425C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00742C0 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     MapClientToServerPfn @ 0x1C00761A0 (MapClientToServerPfn.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00F20FC (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00F22F0 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     AllocateUnicodeString @ 0x1C0111828 (AllocateUnicodeString.c)
 */

_QWORD *__fastcall InternalRegisterClassEx(__int64 a1, __int64 a2, unsigned int a3)
{
  __int16 v3; // r13
  __int64 v5; // r15
  int v6; // ebx
  __int64 v7; // rcx
  __int16 Atom; // r10
  __int16 v9; // r10
  __int64 v10; // r11
  struct tagDESKTOP *v11; // r12
  unsigned int v12; // ecx
  _QWORD *v13; // rax
  _QWORD *v14; // rbx
  int v15; // r8d
  __int16 v16; // r15
  __int64 v17; // rax
  int v18; // r15d
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  unsigned int v23; // r8d
  const WCHAR *v24; // rdx
  int v25; // r15d
  _BYTE *v26; // rax
  const WCHAR *v27; // rdx
  __int64 v28; // rax
  __int64 v30; // rcx
  unsigned int v31; // ecx
  _QWORD *v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  int v35; // edx
  _QWORD v36[2]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v37; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v38; // [rsp+40h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-58h] BYREF
  _STRING v40; // [rsp+60h] [rbp-48h] BYREF
  int v41; // [rsp+B0h] [rbp+8h]
  int v43; // [rsp+C8h] [rbp+20h]

  v3 = a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v43 = 0;
  v41 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 && v5 == hModuleWin && *(_WORD *)(gptiCurrent + 608LL) >= 0x400u )
    goto LABEL_53;
  v7 = *(_QWORD *)(a1 + 80);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    Atom = UserFindAtom(v7);
  else
    Atom = v7;
  if ( Atom
    && !v6
    && (InnerGetClassPtr(Atom, (__int64 **)(*(_QWORD *)(gptiCurrent + 400LL) + 320LL), v5)
     || (*(_DWORD *)(a1 + 4) & 0x4000) != 0 && InnerGetClassPtr(v9, (__int64 **)(v10 + 328), 0LL)) )
  {
    v30 = 1410LL;
LABEL_46:
    UserSetLastError(v30, a2);
    return 0LL;
  }
  v11 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 464LL) & 4) == 0 )
    v11 = *(struct tagDESKTOP **)(gptiCurrent + 432LL);
  a2 = a3 & 8 | 0xB0;
  v12 = a2 + *(_DWORD *)(a1 + 16);
  if ( v12 < (unsigned int)a2 )
  {
LABEL_53:
    v30 = 87LL;
    goto LABEL_46;
  }
  v13 = ClassAlloc(v11, v12, a3);
  v14 = v13;
  v36[0] = v13;
  if ( !v13 )
    return 0LL;
  LockObjectAssignment(v13 + 2, v11);
  v14[8] = v14;
  *(_OWORD *)((char *)v14 + 100) = *(_OWORD *)(a1 + 4);
  *(_OWORD *)((char *)v14 + 116) = *(_OWORD *)(a1 + 20);
  *(_OWORD *)((char *)v14 + 132) = *(_OWORD *)(a1 + 36);
  *(_OWORD *)((char *)v14 + 148) = *(_OWORD *)(a1 + 52);
  *(_QWORD *)((char *)v14 + 164) = *(_QWORD *)(a1 + 68);
  *((_DWORD *)v14 + 43) = *(_DWORD *)(a1 + 76);
  v15 = *(_DWORD *)(a1 + 88);
  *((_DWORD *)v14 + 20) = v15;
  *((_WORD *)v14 + 17) = a3;
  *((_WORD *)v14 + 6) = v3;
  if ( v3 )
  {
    if ( *(_DWORD *)(a1 + 92) != 1 )
      v15 = *((_DWORD *)v14 + 29);
    *(_WORD *)(gpsi + 2LL * ((v3 & 0x3FFFu) - 666) + 328) = v15 + 400;
  }
  v16 = *((_WORD *)v14 + 17);
  if ( (v16 & 1) == 0 )
  {
    v17 = MapClientToServerPfn(v14[13]);
    if ( v17 )
    {
      v31 = 0;
      *((_WORD *)v14 + 17) = v16 & 0xFFFC | 1;
      v14[13] = v17;
      v32 = &unk_1C02D89F0;
      while ( v17 != *v32 )
      {
        ++v31;
        v32 += 6;
        if ( v31 >= 8 )
          goto LABEL_16;
      }
      v33 = 6LL * v31;
      v34 = *((_DWORD *)v14 + 29);
      v35 = dword_1C02D89F8[2 * v33];
      if ( v34 >= v35 )
      {
        *((_DWORD *)v14 + 20) = v35;
        *((_DWORD *)v14 + 29) = v34 - dword_1C02D89F8[2 * v33];
      }
    }
  }
LABEL_16:
  v18 = (a3 >> 6) & 1;
  v38 = v14 + 17;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v14 + 17, v18) )
  {
LABEL_69:
    v37 = (_QWORD *)v14[2];
    v14[2] = 0LL;
    ClassFree(v11, v14);
    UnlockObjectAssignment(&v37);
    return 0LL;
  }
  v37 = v14 + 16;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v14 + 16, v18) )
  {
LABEL_68:
    HMAssignmentUnlock(v38);
    goto LABEL_69;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v14 + 21, v18) )
  {
LABEL_67:
    HMAssignmentUnlock(v14 + 16);
    goto LABEL_68;
  }
  v19 = *(_QWORD *)(a1 + 64);
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v43 = 1;
    v20 = UserAddAtomEx(v19, 0LL, 2LL);
  }
  else
  {
    v20 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 400LL), v19);
  }
  if ( !v20 )
  {
LABEL_66:
    HMAssignmentUnlock(v14 + 21);
    goto LABEL_67;
  }
  *((_WORD *)v14 + 5) = v20;
  v21 = *(_QWORD *)(a1 + 80);
  if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v41 = 1;
    v22 = UserAddAtomEx(v21, 0LL, 2LL);
  }
  else
  {
    v22 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 400LL), v21);
  }
  if ( !v22 )
  {
LABEL_64:
    if ( v43 )
      UserDeleteAtom(*((unsigned __int16 *)v14 + 5));
    goto LABEL_66;
  }
  *((_WORD *)v14 + 4) = v22;
  v24 = *(const WCHAR **)(a1 + 64);
  if ( ((unsigned __int64)v24 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, v24);
    v25 = DestinationString.Length + 1;
  }
  else
  {
    v25 = 7;
  }
  v26 = ClassAlloc(v11, v25, v23);
  v14[20] = v26;
  if ( !v26 )
  {
LABEL_62:
    if ( v41 )
      UserDeleteAtom(*((unsigned __int16 *)v14 + 4));
    goto LABEL_64;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v40.Length = 0;
    v40.MaximumLength = v25;
    v40.Buffer = (PCHAR)v14[20];
    RtlUnicodeStringToAnsiString(&v40, &DestinationString, 0);
  }
  else
  {
    *v26 = 35;
    RtlIntegerToChar(*(unsigned __int16 *)(a1 + 64), 0xAu, v25 - 1, (PCHAR)(v14[20] + 1LL));
  }
  v27 = (const WCHAR *)v14[19];
  if ( !v27 || ((unsigned __int64)v27 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_31;
  RtlInitUnicodeString(&DestinationString, v27);
  if ( !DestinationString.Length )
  {
    v14[19] = 0LL;
    goto LABEL_31;
  }
  if ( !(unsigned int)AllocateUnicodeString(v36, &DestinationString) )
  {
    ClassFree(v11, (void *)v14[20]);
    goto LABEL_62;
  }
  v14[19] = v36[1];
LABEL_31:
  v28 = *(_QWORD *)(gptiCurrent + 400LL);
  if ( (*((_DWORD *)v14 + 25) & 0x4000) == 0 && (a3 & 1) == 0 )
  {
    *v14 = *(_QWORD *)(v28 + 320);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 320LL) = v14;
  }
  else
  {
    *v14 = *(_QWORD *)(v28 + 328);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 400LL) + 328LL) = v14;
  }
  return v14;
}
