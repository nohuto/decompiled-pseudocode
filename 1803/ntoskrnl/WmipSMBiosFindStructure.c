/*
 * XREFs of WmipSMBiosFindStructure @ 0x1407A3664
 * Callers:
 *     WmipSMBiosHideMachine @ 0x1407A3708 (WmipSMBiosHideMachine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WmipSMBiosFindStructure(char a1, unsigned int a2, _QWORD *a3, _DWORD *a4, _BYTE *a5, int a6)
{
  _BYTE *v6; // r10
  unsigned __int64 v7; // r11
  int v8; // ebx
  int v9; // eax
  _WORD *i; // r10
  _WORD *v12; // rcx

  v6 = a5;
  v7 = (unsigned __int64)&a5[a6];
  v8 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= v7 )
      return 3221225524LL;
    if ( *v6 == a1 && v8 + 1 > a2 )
      break;
    v9 = v8 + 1;
    if ( *v6 != a1 )
      v9 = v8;
    v8 = v9;
    for ( i = &v6[(unsigned __int8)v6[1]]; (unsigned __int64)i < v7 && *i; i = (_WORD *)((char *)i + 1) )
      ;
    v6 = i + 1;
  }
  v12 = &v6[(unsigned __int8)v6[1]];
  *a3 = v6;
  while ( (unsigned __int64)v12 < v7 && *v12 )
    v12 = (_WORD *)((char *)v12 + 1);
  *a4 = (_DWORD)v12 - (_DWORD)v6 + 2;
  return 0LL;
}
