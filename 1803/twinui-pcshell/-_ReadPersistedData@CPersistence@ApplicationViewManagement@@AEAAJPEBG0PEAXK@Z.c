/*
 * XREFs of ?_ReadPersistedData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEAXK@Z @ 0x18008E7FC
 * Callers:
 *     ?RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ @ 0x18001B87C (-RuntimeClassInitialize@CWinRTApplicationView@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ @ 0x1800250F4 (-RuntimeClassInitialize@CApplicationViewBase@@QEAAJXZ.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_75666d3f525b2f2bac154c43ea5df633___ @ 0x18008E794 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_75666d3f525b2f2bac154.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x180142830 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

unsigned int __fastcall ApplicationViewManagement::CPersistence::_ReadPersistedData(
        HKEY *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        void *a4,
        DWORD a5)
{
  HKEY v5; // rcx
  unsigned int v6; // ebx
  unsigned int result; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = *this;
  if ( !v5 )
  {
    v8 = -2144927145;
    v9 = 106LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
      (const char *)v8);
    return v8;
  }
  v6 = a5;
  v12 = a5;
  result = RegGetValueW(v5, a2, a3, 8u, 0LL, a4, &v12);
  if ( result == 2 )
    return -2147024894;
  if ( result )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x78,
             (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\persistence.cpp",
             (const char *)result,
             v10);
  if ( v6 != v12 )
  {
    v8 = -2147024883;
    v9 = 122LL;
    goto LABEL_9;
  }
  return result;
}
