/*
 * XREFs of SetDpiDepSysMet @ 0x1C00622A0
 * Callers:
 *     InitLoadResources @ 0x1C0062000 (InitLoadResources.c)
 * Callees:
 *     <none>
 */

void *__fastcall SetDpiDepSysMet(int a1, int a2)
{
  __int64 v2; // rbx
  void *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx

  v2 = a1;
  if ( a2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 19LL, a2, a1, 0LL, 0LL, 0LL, 0);
    a2 = 1;
  }
  result = (void *)*((unsigned int *)gpsi + v2 + 567);
  *((_DWORD *)gpsi + v2 + 567) = a2;
  if ( a2 != (_DWORD)result )
  {
    v4 = 4 * v2 + 2508;
    v5 = 16LL;
    do
    {
      result = gpsi;
      *(_DWORD *)((char *)gpsi + v4) = -1;
      v4 += 120LL;
      --v5;
    }
    while ( v5 );
  }
  return result;
}
