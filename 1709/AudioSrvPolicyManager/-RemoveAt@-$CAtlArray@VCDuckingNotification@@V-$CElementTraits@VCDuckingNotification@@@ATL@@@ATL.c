/*
 * XREFs of ?RemoveAt@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18000A544
 * Callers:
 *     ??1CDuckingManager@@UEAA@XZ @ 0x180007114 (--1CDuckingManager@@UEAA@XZ.c)
 *     ?RemoveInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x180009F70 (-RemoveInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 *     ?AddInterface@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z @ 0x18000A100 (-AddInterface@-$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAJVCDuckingNotification@@@Z.c)
 * Callees:
 *     ?CallDestructors@?$CAtlArray@VCDuckingNotification@@V?$CElementTraits@VCDuckingNotification@@@ATL@@@ATL@@CAXPEAVCDuckingNotification@@_K@Z @ 0x18000AAAC (-CallDestructors@-$CAtlArray@VCDuckingNotification@@V-$CElementTraits@VCDuckingNotification@@@AT.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000B358 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800275D0 (_invalid_parameter_noinfo.c)
 */

void *__fastcall ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::RemoveAt(
        void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  void *v4; // rsi
  __int64 v5; // r14
  void *result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  char *v11; // rbx
  size_t v12; // rsi
  char *v13; // rcx

  v2 = a2 + 1;
  if ( a2 + 1 < a2 || a2 == -1LL || (v4 = a1[1], v2 > (unsigned __int64)v4) )
    ATL::AtlThrowImpl(-2147024809);
  v5 = 32 * a2;
  result = (void *)ATL::CAtlArray<CDuckingNotification,ATL::CElementTraits<CDuckingNotification>>::CallDestructors(
                     (char *)*a1 + 32 * a2,
                     1LL);
  v10 = (__int64)v4 - v2;
  if ( v10 )
  {
    result = *a1;
    v11 = (char *)*a1 + 32 * v2;
    v12 = 32 * v10;
    v13 = (char *)*a1 + v5;
    if ( v12 )
    {
      if ( !v13 || !v11 )
      {
        *(_DWORD *)_o__errno(v13, v7, v8, v9) = 22;
        invalid_parameter_noinfo();
        ATL::AtlThrowImpl(-2147024809);
      }
      result = memmove(v13, v11, v12);
    }
  }
  a1[1] = (char *)a1[1] - 1;
  return result;
}
