/*
 * XREFs of EditionLLMouseWheelHook @ 0x1C01A0050
 * Callers:
 *     <none>
 * Callees:
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 */

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // r15d
  __int64 v6; // r12
  char v8; // si
  __int64 v9; // rcx
  __int64 Valid; // rax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  v6 = (unsigned int)a2;
  v8 = *(_BYTE *)(a1 + 12) & 1;
  if ( (unsigned int)IsDwmInputThread(a1, a2, a3, a4) )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  Valid = PhkFirstValid(v9, 14);
  if ( Valid )
  {
    v11 = *(_QWORD *)(gptiCurrent + 1248LL);
    *(_QWORD *)(gptiCurrent + 1248LL) = a1;
    v12 = xxxCallHook2(Valid, 0, v6, (int *)a1, &v18);
    *(_QWORD *)(gptiCurrent + 1248LL) = v11;
    if ( v12 )
      return 1LL;
    if ( v4 )
    {
      if ( v8 )
      {
        if ( gpqForeground )
        {
          v14 = *(_QWORD *)(gpqForeground + 380LL);
          v15 = *a3;
          if ( gbEnforceUIPI )
          {
            if ( (unsigned int)v15 <= (unsigned int)v14 )
            {
              if ( (_DWORD)v15 != (_DWORD)v14
                || (v16 = HIDWORD(v15), v17 = HIDWORD(v14), (_DWORD)v16 != (_DWORD)v17)
                && (_DWORD)v16 != -1
                && (_DWORD)v17 != -1 )
              {
                if ( !*((_DWORD *)a3 + 2) )
                {
                  EtwTraceUIPIInputError(gptiCurrent, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 380LL), 1);
                  return 1LL;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
