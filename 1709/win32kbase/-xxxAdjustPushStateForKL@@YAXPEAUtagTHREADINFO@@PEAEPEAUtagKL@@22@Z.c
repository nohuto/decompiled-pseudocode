/*
 * XREFs of ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C012C71C
 * Callers:
 *     ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C012C810 (-xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z.c)
 * Callees:
 *     ?xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z @ 0x1C012C540 (-xxxAdjustPushState@@YAXPEAUtagTHREADINFO@@EEPEAUtagKL@@1@Z.c)
 */

void __fastcall xxxAdjustPushStateForKL(
        struct tagTHREADINFO *a1,
        unsigned __int8 *a2,
        struct tagKL *a3,
        struct tagKL *a4,
        struct tagKL *a5)
{
  __int64 v5; // rax
  _BYTE *i; // rbx
  unsigned __int8 v10; // r10
  unsigned __int8 v11; // r11

  v5 = *((_QWORD *)a3 + 6);
  if ( v5 )
  {
    if ( *((_QWORD *)a4 + 6) )
    {
      for ( i = ***(_BYTE ****)(v5 + 32); *i; i += 2 )
      {
        v10 = 0;
        v11 = 0;
        if ( ((unsigned __int8)(1 << (*i & 7)) & a2[(unsigned __int64)(unsigned __int8)*i >> 3]) == 0 )
        {
          switch ( *i )
          {
            case 0x10:
              v10 = -96;
              v11 = -95;
              break;
            case 0x11:
              v10 = -94;
              v11 = -93;
              break;
            case 0x12:
              v10 = -92;
              v11 = -91;
              break;
          }
          xxxAdjustPushState(a1, v10, v11, a4, a5);
          a2[(unsigned __int64)(unsigned __int8)*i >> 3] |= 1 << (*i & 7);
        }
      }
    }
  }
}
