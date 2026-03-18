/*
 * XREFs of EditionFreeIMEKeyboardLayouts @ 0x1C01190A0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C01190EC (xxxImmUnloadThreadsLayout.c)
 */

unsigned int __fastcall EditionFreeIMEKeyboardLayouts(__int64 a1)
{
  unsigned int result; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  struct tagTHREADINFO **v6; // [rsp+50h] [rbp+8h] BYREF

  result = *(_DWORD *)(a1 + 32);
  if ( (result & 4) == 0 )
  {
    result = GetThreadsWithPKL(&v6, (struct _TL *)v5, 0LL);
    if ( result )
    {
      xxxImmUnloadThreadsLayout(v6, result, 0LL, 2LL);
      return PopAndFreeAlwaysW32ThreadLock((__int64)v5, v2, v3, v4);
    }
  }
  return result;
}
