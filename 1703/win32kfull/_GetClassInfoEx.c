/*
 * XREFs of _GetClassInfoEx @ 0x1C0039584
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C0039810 (NtUserGetClassInfoEx.c)
 * Callees:
 *     GetClassPtr @ 0x1C0035DD0 (GetClassPtr.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     MapClientNeuterToClientPfn @ 0x1C003AEB8 (MapClientNeuterToClientPfn.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetCPD @ 0x1C00E2DF8 (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C0115F9C (MapServerToClientPfn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GetClassInfoEx(__int64 a1, const wchar_t *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  int v8; // r15d
  unsigned __int16 Atom; // r11
  __int64 v10; // r12
  __int64 ClassPtr; // rax
  __int64 v12; // rdi
  int v13; // eax
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // rcx
  __int64 CPD; // rax
  _BYTE v24[8]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v25; // [rsp+30h] [rbp-48h]

  v8 = 0;
  v25 = gptiCurrent;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, a2) < 0 )
      Atom = 0;
    else
      Atom = UserFindAtom(&gawchAtomScratch);
  }
  else
  {
    Atom = (unsigned __int16)a2;
  }
  if ( !v24[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v24);
  }
  v10 = hModClient;
  if ( !a1 )
    a1 = hModClient;
  ClassPtr = GetClassPtr(Atom, *(_QWORD *)(gptiCurrent + 376LL), a1);
  if ( !ClassPtr )
  {
    UserSetLastError(1411LL);
    return 0LL;
  }
  v12 = *(_QWORD *)ClassPtr;
  v13 = *(_DWORD *)(*(_QWORD *)ClassPtr + 92LL) & 0x37BFF;
  *(_DWORD *)(a3 + 4) = v13;
  if ( *(_WORD *)(v12 + 12) && *(_WORD *)(gptiCurrent + 552LL) >= 0x400u )
    *(_DWORD *)(a3 + 4) = v13 & 0xFFFFBFFF;
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v12 + 104);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(v12 + 80) + *(_DWORD *)(v12 + 108);
  if ( *(_WORD *)(gptiCurrent + 552LL) < 0x400u )
  {
    v22 = *(_QWORD *)(v12 + 112);
    if ( v22 == hModuleWin || v22 == v10 )
      *(_QWORD *)(a3 + 24) = v10;
    else
      *(_QWORD *)(a3 + 24) = v22;
  }
  else
  {
    if ( a1 == v10 )
      a1 = 0LL;
    *(_QWORD *)(a3 + 24) = a1;
  }
  v14 = *(__int64 **)(v12 + 120);
  if ( v14 )
    v15 = *v14;
  else
    v15 = 0LL;
  *(_QWORD *)(a3 + 32) = v15;
  v16 = *(__int64 **)(v12 + 128);
  if ( v16 )
    v17 = *v16;
  else
    v17 = 0LL;
  *(_QWORD *)(a3 + 40) = v17;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v12 + 136);
  v18 = *(__int64 **)(v12 + 160);
  if ( v18 )
  {
    if ( (*((_DWORD *)v18 + 20) & 0x80u) != 0 )
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      goto LABEL_23;
    }
    v19 = *v18;
  }
  else
  {
    v19 = 0LL;
  }
  *(_QWORD *)(a3 + 72) = v19;
LABEL_23:
  if ( (*(_BYTE *)(v12 + 34) & 1) != 0 )
  {
    *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(v12 + 96), a5);
  }
  else
  {
    v20 = MapClientNeuterToClientPfn(v12, 0LL, a5);
    *(_QWORD *)(a3 + 8) = v20;
    if ( v20 == *(_QWORD *)(v12 + 96) && a5 != ((*(unsigned __int16 *)(v12 + 34) >> 1) & 1) )
      v8 = 2 - (a5 != 0);
  }
  if ( v8 )
  {
    CPD = GetCPD(v12, v8 | 0x10u, *(_QWORD *)(a3 + 8));
    if ( CPD )
      *(_QWORD *)(a3 + 8) = CPD;
  }
  if ( a5 )
    *a4 = *(_QWORD *)(v12 + 40);
  else
    *a4 = *(_QWORD *)(v12 + 48);
  return *(unsigned __int16 *)(v12 + 10);
}
