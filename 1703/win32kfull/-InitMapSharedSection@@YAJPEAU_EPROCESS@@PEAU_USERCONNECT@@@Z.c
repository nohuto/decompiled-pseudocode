/*
 * XREFs of ?InitMapSharedSection@@YAJPEAU_EPROCESS@@PEAU_USERCONNECT@@@Z @ 0x1C00DF99C
 * Callers:
 *     NtUserProcessConnect @ 0x1C00DF5B0 (NtUserProcessConnect.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitMapSharedSection(struct _EPROCESS *a1, struct _USERCONNECT *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // r10
  _QWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD v11[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  v12 = 0LL;
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *(_QWORD *)(ProcessWin32Process + 704) )
  {
    v7 = *(_QWORD *)(PsGetProcessWin32Process(a1) + 704);
    v12 = v7;
  }
  else
  {
    v13 = 0LL;
    v11[0] = 0LL;
    result = MmMapViewOfSection(ghSectionShared, a1, &v12, 0LL, 0LL, v11, &v13, 2, 0x400000, 2);
    if ( (int)result < 0 )
      return result;
    v6 = PsGetProcessWin32Process(a1);
    if ( v6 )
      *(_QWORD *)(v6 + 704) = v12;
    v7 = v12;
  }
  *((_QWORD *)a2 + 5) = v7;
  v8 = 31LL;
  *((_QWORD *)a2 + 1) = v7 + gSharedInfo[0] - gpvSharedBase;
  *((_QWORD *)a2 + 2) = v7 + gSharedInfo[1] - gpvSharedBase;
  *((_DWORD *)a2 + 6) = gSharedInfo[2];
  *((_QWORD *)a2 + 4) = v7 + gSharedInfo[3] - gpvSharedBase;
  *((_DWORD *)a2 + 136) = gSharedInfo[67];
  *((_QWORD *)a2 + 69) = v7 + gSharedInfo[68] - gpvSharedBase;
  *((_DWORD *)a2 + 140) = gSharedInfo[69];
  *((_QWORD *)a2 + 71) = v7 + gSharedInfo[70] - gpvSharedBase;
  v9 = (_QWORD *)((char *)a2 + 56);
  do
  {
    *((_DWORD *)v9 - 2) = *(_DWORD *)((char *)v9 + gSharedInfo[0] - (_QWORD)a2 - 16);
    v10 = *(_QWORD *)((char *)v9 + gSharedInfo[0] - (_QWORD)a2 - 8);
    if ( v10 )
      *v9 = v7 + v10 - gpvSharedBase;
    else
      *v9 = 0LL;
    v9 += 2;
    --v8;
  }
  while ( v8 );
  return 0LL;
}
