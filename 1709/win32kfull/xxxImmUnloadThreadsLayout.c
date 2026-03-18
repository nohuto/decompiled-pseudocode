/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C01190EC
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C01190A0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01190EC (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00CDBB0 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01190EC (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     xxxImmUnloadLayout @ 0x1C01C22E8 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r9
  int v9; // esi
  int v10; // ebx
  __int64 *v11; // rbp
  __int64 v12; // r8
  int v13; // eax
  int v14; // ecx
  __int64 result; // rax
  int v16; // ecx
  __int64 *v17; // rdi
  int v18; // ebx
  __int64 *v19; // rbp
  __int64 v20; // rsi
  char v21; // [rsp+20h] [rbp-2E8h]
  unsigned int v22; // [rsp+24h] [rbp-2E4h]
  unsigned int v23; // [rsp+24h] [rbp-2E4h]
  int v24; // [rsp+28h] [rbp-2E0h]
  __int64 *v26; // [rsp+30h] [rbp-2D8h]
  __int64 *v27; // [rsp+38h] [rbp-2D0h]
  __int64 v28; // [rsp+38h] [rbp-2D0h]
  __int64 v29; // [rsp+40h] [rbp-2C8h] BYREF
  _BYTE v30[648]; // [rsp+48h] [rbp-2C0h] BYREF

  v4 = a4;
  v22 = a4;
  v6 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v29 = a3;
  v9 = 0;
  v10 = 0;
  if ( v6 > 0 )
  {
    v11 = a1;
    v27 = (__int64 *)v30;
    do
    {
      if ( v10 >= 16 )
        break;
      v12 = *v11;
      if ( (*(_DWORD *)(*v11 + 464) & 1) == 0 )
      {
        if ( *(_QWORD *)(v12 + 752) )
        {
          v7 = *(_QWORD *)(v12 + 416);
          if ( v7 )
          {
            if ( v22 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v7 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v11, &v30[40 * v10++ + 8], v12, v8);
              *v27 = *v11;
              v27 += 5;
            }
          }
        }
      }
      ++v9;
      ++v11;
    }
    while ( v9 < v6 );
    v4 = v22;
  }
  v13 = v9 + 1;
  if ( v10 != 16 )
    v13 = v9;
  if ( v13 < v6 )
    return xxxImmUnloadThreadsLayout(&a1[v13], (unsigned int)(v6 - v13), &v29, v4);
  v14 = 1;
  LOBYTE(v7) = v4 != 2;
  if ( v4 != 2 )
    v14 = v4;
  result = v10 - 1LL;
  v23 = v14;
  v16 = v10 - 1;
  v24 = v10 - 1;
  v28 = result;
  while ( 1 )
  {
    v21 = v7;
    v17 = &v29;
    v18 = v16;
    v26 = &v29;
    do
    {
      if ( v18 >= 0 )
      {
        v19 = &v17[5 * result + 1];
        v20 = (__int64)&v17[4 * v18 + 2 + v18];
        do
        {
          if ( (*(_DWORD *)(*v19 + 464) & 1) == 0 )
          {
            xxxImmUnloadLayout(*v19, v23);
            LOBYTE(v7) = v21;
          }
          if ( (_BYTE)v7 )
          {
            PopAndFreeW32ThreadLock(v20, v7);
            LOBYTE(v7) = v21;
          }
          v20 -= 40LL;
          v19 -= 5;
          --v18;
        }
        while ( v18 >= 0 );
        v17 = v26;
      }
      v17 = (__int64 *)*v17;
      v18 = 15;
      v26 = v17;
      result = 15LL;
    }
    while ( v17 );
    if ( (_BYTE)v7 )
      break;
    v16 = v24;
    LOBYTE(v7) = 1;
    result = v28;
    v23 = 2;
  }
  return result;
}
