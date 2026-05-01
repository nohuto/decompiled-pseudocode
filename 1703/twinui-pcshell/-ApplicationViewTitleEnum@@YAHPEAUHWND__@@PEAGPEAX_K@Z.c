/*
 * XREFs of ?ApplicationViewTitleEnum@@YAHPEAUHWND__@@PEAGPEAX_K@Z @ 0x18017C690
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800028C8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall ApplicationViewTitleEnum(HWND a1, char *a2, HANDLE a3, __int64 a4)
{
  unsigned int v5; // ebx
  char *v6; // rsi

  v5 = 1;
  if ( (unsigned __int64)a2 >= 0xC000 )
  {
    v6 = (char *)(a4 + 8);
    if ( !StrCmpNIW((PCWSTR)(a4 + 8), (PCWSTR)a2, *(_DWORD *)a4) )
    {
      StringCchCopyW(v6, 255LL, a2);
      return 0;
    }
  }
  return v5;
}
