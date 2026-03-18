/*
 * XREFs of InitializeWin32KSyscallFilter @ 0x1C007ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00670EC (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     ?CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z @ 0x1C007EE14 (-CreateWin32KFilterBitmap@@YAJKQEAPEBDHKPEAE@Z.c)
 */

__int64 InitializeWin32KSyscallFilter()
{
  unsigned int v0; // ebx
  unsigned int W32pServiceLimitFilter; // eax
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  int v5; // r8d
  int Win32KFilterBitmap; // eax
  PVOID v7; // rax
  int v8; // r8d
  int v9; // eax
  PVOID v10; // rax
  int v11; // r8d

  v0 = 0;
  W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
  v2 = (W32pServiceLimitFilter >> 3) + 1;
  if ( (W32pServiceLimitFilter & 7) == 0 )
    v2 = W32pServiceLimitFilter >> 3;
  if ( !gWin32KFilterBitArraySet1 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v2, 0x46696C74u);
    gWin32KFilterBitArraySet1 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_19;
    Win32KFilterBitmap = CreateWin32KFilterBitmap(
                           0x1F5u,
                           (const char **const)&Win32KSyscallList1,
                           v5,
                           v2,
                           (unsigned __int8 *)PoolWithTag);
    v0 = Win32KFilterBitmap;
    if ( Win32KFilterBitmap )
    {
      if ( Win32KFilterBitmap != 127 )
        goto LABEL_6;
      v0 = 0;
    }
  }
  if ( !gWin32KFilterBitArraySet2 )
  {
    v7 = ExAllocatePoolWithTag((POOL_TYPE)512, v2, 0x46696C74u);
    gWin32KFilterBitArraySet2 = v7;
    if ( !v7 )
      goto LABEL_19;
    v9 = CreateWin32KFilterBitmap(0x101u, (const char **const)&Win32KSyscallList2, v8, v2, (unsigned __int8 *)v7);
    v0 = v9;
    if ( v9 )
    {
      if ( v9 != 127 )
        goto LABEL_6;
      v0 = 0;
    }
  }
  if ( gWin32KFilterBitArraySet3 )
    goto LABEL_6;
  v10 = ExAllocatePoolWithTag((POOL_TYPE)512, v2, 0x46696C74u);
  gWin32KFilterBitArraySet3 = v10;
  if ( !v10 )
  {
LABEL_19:
    v0 = -1073741801;
    goto LABEL_20;
  }
  v0 = CreateWin32KFilterBitmap(0x12u, (const char **const)&Win32KSyscallList3, v11, v2, (unsigned __int8 *)v10);
  if ( !v0 )
    return v0;
  if ( v0 == 127 )
    v0 = 0;
LABEL_6:
  if ( v0 )
LABEL_20:
    FreeWin32KSyscallFilter();
  return v0;
}
