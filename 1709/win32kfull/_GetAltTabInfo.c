/*
 * XREFs of _GetAltTabInfo @ 0x1C01D0154
 * Callers:
 *     NtUserGetAltTabInfo @ 0x1C01E4950 (NtUserGetAltTabInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01CF1B4 (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     TextCopy @ 0x1C023B16C (TextCopy.c)
 */

__int64 __fastcall GetAltTabInfo(int a1, __int64 a2, CHAR *a3, ULONG a4, int a5)
{
  __int64 v8; // rdi
  struct tagSwitchWndInfo *v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  ULONG BytesInMultiByteString[6]; // [rsp+30h] [rbp-18h] BYREF

  v8 = a1;
  if ( gspwndAltTab && (v9 = Getpswi((struct tagWND *)gspwndAltTab)) != 0LL )
  {
    v12 = *((unsigned int *)v9 + 10);
    *(_DWORD *)(a2 + 4) = v12;
    *(_DWORD *)(a2 + 8) = *((_DWORD *)v9 + 14);
    *(_DWORD *)(a2 + 12) = *((_DWORD *)v9 + 15);
    *(_DWORD *)(a2 + 16) = *((_DWORD *)v9 + 17);
    *(_DWORD *)(a2 + 20) = *((_DWORD *)v9 + 18);
    *(_DWORD *)(a2 + 24) = *((_DWORD *)v9 + 29);
    *(_DWORD *)(a2 + 28) = *((_DWORD *)v9 + 29);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)v9 + 84);
    if ( a4 && (int)v8 >= 0 )
    {
      if ( (int)v8 < *((_DWORD *)v9 + 10)
        && (_mm_lfence(),
            LOBYTE(v12) = 1,
            (v13 = HMValidateHandleNoSecure(*(_QWORD *)(*((_QWORD *)v9 + 2) + 8 * v8 + 32), v12, v10, v11)) != 0) )
      {
        if ( a5 )
        {
          RtlUnicodeToMultiByteN(a3, a4 - 1, BytesInMultiByteString, *(PCWCH *)(v13 + 240), *(_DWORD *)(v13 + 232));
          if ( BytesInMultiByteString[0] >= a4 )
          {
            *a3 = 0;
            return 0LL;
          }
          a3[BytesInMultiByteString[0]] = 0;
        }
        else
        {
          TextCopy(v13 + 232, a3, a4);
        }
      }
      else if ( a5 )
      {
        *a3 = 0;
      }
      else
      {
        *(_WORD *)a3 = 0;
      }
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(1168LL, a2);
    return 0LL;
  }
}
