/*
 * XREFs of InternalSetClipboardData @ 0x1C00C5D58
 * Callers:
 *     _SetClipboardData @ 0x1C00C5CC8 (_SetClipboardData.c)
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00C6290 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01F415C (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C00C5738 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall InternalSetClipboardData(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v7; // esi
  struct tagCLIP *ClipFormat; // rax
  struct tagCLIP *v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v19[512]; // [rsp+20h] [rbp-228h] BYREF

  v7 = a2;
  if ( !*(_QWORD *)(a1 + 48) || !(_DWORD)a2 )
  {
    UserSetLastError(1418LL, a2);
    return 0LL;
  }
  ClipFormat = (struct tagCLIP *)FindClipFormat(a1, a2, 2LL);
  v10 = ClipFormat;
  if ( !ClipFormat )
  {
    v11 = *(_QWORD *)(a1 + 96);
    if ( v11 )
    {
      v12 = 32LL * *(unsigned int *)(a1 + 104);
      if ( v12 > 0xFFFFFFFF || (int)v12 + 32 < (unsigned int)v12 )
      {
        v14 = 0LL;
        goto LABEL_9;
      }
      v13 = UserReAllocPool(v11, (unsigned int)v12, (unsigned int)(v12 + 32), 1650684757LL);
    }
    else
    {
      v13 = Win32AllocPool(32LL, 1650684757LL);
    }
    v14 = v13;
LABEL_9:
    if ( v14 )
    {
      *(_QWORD *)(a1 + 96) = v14;
      if ( (unsigned int)UserGetAtomName((unsigned __int16)v7, v19, 256LL) )
      {
        UserAddAtomEx(v19, 0LL, 2LL);
        v15 = *(unsigned int *)(a1 + 104);
        v10 = (struct tagCLIP *)(32 * v15 + v14);
        *(_DWORD *)(a1 + 104) = v15 + 1;
        *(_DWORD *)v10 = v7;
        goto LABEL_12;
      }
    }
    return 0LL;
  }
  UT_FreeCBFormat(ClipFormat);
LABEL_12:
  *((_QWORD *)v10 + 1) = a3;
  *((_DWORD *)v10 + 4) = a4;
  v16 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v15) + 832);
  *((_DWORD *)v10 + 5) = v16;
  *((_DWORD *)v10 + 6) = *(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 836);
  if ( a5 )
  {
    *(_DWORD *)(a1 + 32) |= 0x40u;
    if ( (*(_DWORD *)(a1 + 32) & 0x80u) == 0 )
      ++*(_DWORD *)(a1 + 112);
  }
  v17 = *(_QWORD *)(a1 + 80);
  if ( !v17 || *(_QWORD *)(v17 + 16) != gptiCurrent )
  {
    if ( a5 )
      ++*(_DWORD *)(a1 + 108);
  }
  return 1LL;
}
