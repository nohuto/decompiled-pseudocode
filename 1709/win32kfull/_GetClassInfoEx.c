/*
 * XREFs of _GetClassInfoEx @ 0x1C009DAA0
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C009D7C0 (NtUserGetClassInfoEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C0072FE0 (GetClassPtr.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     MapClientNeuterToClientPfn @ 0x1C00A0F3C (MapClientNeuterToClientPfn.c)
 *     GetCPD @ 0x1C00F5458 (GetCPD.c)
 *     MapServerToClientPfn @ 0x1C011F544 (MapServerToClientPfn.c)
 */

__int64 __fastcall GetClassInfoEx(__int64 a1, const wchar_t *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  int v8; // r15d
  __int64 v9; // r12
  __int64 ClassPtr; // rax
  __int64 v11; // rdx
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
  _BYTE v24[72]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, a2) < 0 )
      LOWORD(a2) = 0;
    else
      LOWORD(a2) = UserFindAtom(&gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
  v9 = hModClient;
  if ( !a1 )
    a1 = hModClient;
  ClassPtr = GetClassPtr((unsigned __int16)a2, *(_QWORD *)(gptiCurrent + 400LL));
  if ( !ClassPtr )
  {
    UserSetLastError(1411LL, v11);
    return 0LL;
  }
  v12 = *(_QWORD *)ClassPtr;
  v13 = *(_DWORD *)(*(_QWORD *)ClassPtr + 100LL) & 0x37BFF;
  *(_DWORD *)(a3 + 4) = v13;
  if ( *(_WORD *)(v12 + 12) && *(_WORD *)(gptiCurrent + 608LL) >= 0x400u )
    *(_DWORD *)(a3 + 4) = v13 & 0xFFFFBFFF;
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(v12 + 112);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(v12 + 80) + *(_DWORD *)(v12 + 116);
  if ( *(_WORD *)(gptiCurrent + 608LL) < 0x400u )
  {
    v22 = *(_QWORD *)(v12 + 120);
    if ( v22 == hModuleWin || v22 == v9 )
      *(_QWORD *)(a3 + 24) = v9;
    else
      *(_QWORD *)(a3 + 24) = v22;
  }
  else
  {
    if ( a1 == v9 )
      a1 = 0LL;
    *(_QWORD *)(a3 + 24) = a1;
  }
  v14 = *(__int64 **)(v12 + 128);
  if ( v14 )
    v15 = *v14;
  else
    v15 = 0LL;
  *(_QWORD *)(a3 + 32) = v15;
  v16 = *(__int64 **)(v12 + 136);
  if ( v16 )
    v17 = *v16;
  else
    v17 = 0LL;
  *(_QWORD *)(a3 + 40) = v17;
  *(_QWORD *)(a3 + 48) = *(_QWORD *)(v12 + 144);
  v18 = *(__int64 **)(v12 + 168);
  if ( v18 )
  {
    if ( (*((_DWORD *)v18 + 20) & 0x80u) != 0 )
    {
      *(_QWORD *)(a3 + 72) = 0LL;
      goto LABEL_21;
    }
    v19 = *v18;
  }
  else
  {
    v19 = 0LL;
  }
  *(_QWORD *)(a3 + 72) = v19;
LABEL_21:
  if ( (*(_BYTE *)(v12 + 34) & 1) != 0 )
  {
    *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(v12 + 104), a5);
  }
  else
  {
    v20 = MapClientNeuterToClientPfn(v12, 0LL, a5);
    *(_QWORD *)(a3 + 8) = v20;
    if ( v20 == *(_QWORD *)(v12 + 104) && a5 != ((*(unsigned __int16 *)(v12 + 34) >> 1) & 1) )
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
