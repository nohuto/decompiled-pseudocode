/*
 * XREFs of _GetKeyNameText @ 0x1C0130250
 * Callers:
 *     <none>
 * Callees:
 *     InternalMapVirtualKeyEx @ 0x1C0028EF0 (InternalMapVirtualKeyEx.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     wcsncpycch @ 0x1C007AF54 (wcsncpycch.c)
 */

__int64 __fastcall GetKeyNameText(unsigned int a1, _WORD *a2, int a3)
{
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rcx
  __int64 result; // rax
  char v8; // al
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // eax
  signed int v14; // eax
  __int16 v15; // cx
  _WORD **v16; // rax
  _WORD *v17; // rdx

  v4 = a1;
  v5 = (unsigned __int64)a1 >> 16;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( a3 < 1 )
    return 0LL;
  if ( (v4 & 0x2000000) != 0 )
  {
    v8 = v5;
    if ( (_BYTE)v5 == 54 )
      v8 = 42;
    LOBYTE(v5) = v8;
    if ( (v4 & 0x1000000) != 0 && (v8 == 29 || v8 == 56) )
      v4 &= ~0x1000000u;
    v4 &= ~0x2000000u;
  }
  v9 = *(_QWORD *)(ThreadWin32Thread + 392);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD **)(*(_QWORD *)(v9 + 48) + 32LL);
  if ( (v4 & 0x1000000) != 0 )
    v11 = v10[4];
  else
    v11 = v10[3];
  if ( v11 )
  {
    while ( *(_BYTE *)v11 )
    {
      if ( (_BYTE)v5 == *(_BYTE *)v11 )
      {
        v12 = *(_QWORD *)(v11 + 8);
        if ( v12 )
        {
          result = (unsigned int)wcsncpycch(a2, v12, a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
      }
      v11 += 16LL;
    }
  }
  v13 = InternalMapVirtualKeyEx((unsigned __int8)v5, 1, (__int64)v10);
  if ( !v13 )
    return 0LL;
  v14 = InternalMapVirtualKeyEx(v13, 2, (__int64)v10);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  if ( v14 < 0 )
  {
    v16 = (_WORD **)v10[5];
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *v16;
        if ( !*v16 )
          break;
        if ( *v17 == v15 )
        {
          result = (unsigned int)wcsncpycch(a2, (__int64)(v17 + 1), a3) - 1;
          a2[(int)result] = 0;
          return result;
        }
        ++v16;
      }
    }
  }
  *a2 = v15;
  if ( a3 >= 2 )
    a2[1] = 0;
  return 1LL;
}
