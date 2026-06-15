/*
 * XREFs of __scrt_unhandled_exception_filter @ 0x14001D860
 * Callers:
 *     <none>
 * Callees:
 *     _o_terminate_0 @ 0x14001DC3E (_o_terminate_0.c)
 */

__int64 __fastcall _scrt_unhandled_exception_filter(_QWORD *a1)
{
  _DWORD *v1; // rax
  int v2; // ecx

  v1 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a1 == -529697949 && v1[6] == 4 )
  {
    v2 = v1[8];
    if ( (unsigned int)(v2 - 429065504) <= 2 || v2 == 26820608 )
    {
      o_terminate_0();
      __debugbreak();
    }
  }
  return 0LL;
}
