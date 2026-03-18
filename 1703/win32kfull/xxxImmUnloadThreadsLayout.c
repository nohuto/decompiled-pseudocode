/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C010F60C
 * Callers:
 *     EditionFreeIMEKeyboardLayouts @ 0x1C010F5C0 (EditionFreeIMEKeyboardLayouts.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010F60C (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C003BB98 (LockW32Thread.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C010F60C (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     xxxImmUnloadLayout @ 0x1C01BE7C8 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int v7; // esi
  int v8; // ebx
  __int64 *v9; // rbp
  __int64 v10; // r8
  int v11; // eax
  int v12; // ecx
  bool v13; // dl
  __int64 result; // rax
  int v15; // ecx
  __int64 *v16; // rdi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 *v19; // rbp
  __int64 v20; // rsi
  bool v21; // [rsp+20h] [rbp-2E8h]
  unsigned int v23; // [rsp+24h] [rbp-2E4h]
  int v24; // [rsp+28h] [rbp-2E0h]
  __int64 *v26; // [rsp+30h] [rbp-2D8h]
  __int64 *v27; // [rsp+38h] [rbp-2D0h]
  __int64 v28; // [rsp+38h] [rbp-2D0h]
  __int64 v29; // [rsp+40h] [rbp-2C8h] BYREF
  _BYTE v30[648]; // [rsp+48h] [rbp-2C0h] BYREF

  v4 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v29 = a3;
  v7 = 0;
  v8 = 0;
  if ( a2 > 0 )
  {
    v9 = a1;
    v27 = (__int64 *)v30;
    do
    {
      if ( v8 >= 16 )
        break;
      v10 = *v9;
      if ( (*(_DWORD *)(*v9 + 440) & 1) == 0 )
      {
        if ( *(_QWORD *)(v10 + 696) )
        {
          v18 = *(_QWORD *)(v10 + 392);
          if ( v18 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v18 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v9, &v30[40 * v8++ + 8]);
              *v27 = *v9;
              v27 += 5;
            }
          }
        }
      }
      ++v7;
      ++v9;
    }
    while ( v7 < a2 );
    v4 = a4;
  }
  v11 = v7 + 1;
  if ( v8 != 16 )
    v11 = v7;
  if ( v11 < a2 )
    return xxxImmUnloadThreadsLayout(&a1[v11], (unsigned int)(a2 - v11), &v29, v4);
  v12 = 1;
  v13 = v4 != 2;
  if ( v4 != 2 )
    v12 = v4;
  result = v8 - 1LL;
  v23 = v12;
  v15 = v8 - 1;
  v24 = v8 - 1;
  v28 = result;
  while ( 1 )
  {
    v21 = v13;
    v16 = &v29;
    v17 = v15;
    v26 = &v29;
    do
    {
      if ( v17 >= 0 )
      {
        v19 = &v16[5 * result + 1];
        v20 = (__int64)&v16[4 * v17 + 2 + v17];
        do
        {
          if ( (*(_DWORD *)(*v19 + 440) & 1) == 0 )
          {
            xxxImmUnloadLayout(*v19, v23);
            v13 = v21;
          }
          if ( v13 )
          {
            PopAndFreeW32ThreadLock(v20);
            v13 = v21;
          }
          v20 -= 40LL;
          v19 -= 5;
          --v17;
        }
        while ( v17 >= 0 );
        v16 = v26;
      }
      v16 = (__int64 *)*v16;
      v17 = 15;
      v26 = v16;
      result = 15LL;
    }
    while ( v16 );
    if ( v13 )
      break;
    v15 = v24;
    v13 = 1;
    result = v28;
    v23 = 2;
  }
  return result;
}
