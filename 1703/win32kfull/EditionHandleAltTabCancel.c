/*
 * XREFs of EditionHandleAltTabCancel @ 0x1C0107F20
 * Callers:
 *     <none>
 * Callees:
 *     xxxCancelCoolSwitch @ 0x1C010B1D4 (xxxCancelCoolSwitch.c)
 */

__int64 __fastcall EditionHandleAltTabCancel(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        int a6,
        char a7)
{
  unsigned int v9; // ebx
  int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // [rsp+44h] [rbp+Ch]

  v14 = HIDWORD(a1);
  v9 = a1;
  if ( !gspwndAltTab )
    return 0LL;
  if ( a4 )
    return 0LL;
  if ( a5 <= 0x12u )
  {
    v11 = 328192;
    if ( _bittest(&v11, a5) )
      return 0LL;
  }
  xxxCancelCoolSwitch();
  if ( !a6 )
    return a5 == 27 && (a7 & 2) == 0;
  if ( !gpqForeground )
    return a5 == 27 && (a7 & 2) == 0;
  v12 = *(_QWORD *)(gpqForeground + 380LL);
  if ( !gbEnforceUIPI )
    return a5 == 27 && (a7 & 2) == 0;
  if ( v9 > (unsigned int)v12 )
    return a5 == 27 && (a7 & 2) == 0;
  if ( v9 == (_DWORD)v12 )
  {
    v13 = HIDWORD(v12);
    if ( v14 == (_DWORD)v13 || v14 == -1 || (_DWORD)v13 == -1 )
      return a5 == 27 && (a7 & 2) == 0;
  }
  if ( a2 )
    return a5 == 27 && (a7 & 2) == 0;
  EtwTraceUIPIInputError(a3, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
  return 1LL;
}
