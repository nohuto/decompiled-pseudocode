/*
 * XREFs of ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F5144
 * Callers:
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x1800224FC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 * Callees:
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180022E5C (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F4EFC (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 */

__int64 __fastcall CDesktopPositioner::_GetDefaultRect(
        IUnknown *a1,
        const struct tagRECT *a2,
        int a3,
        struct tagRECT *a4)
{
  int DefaultSizeForRect; // ebx
  __int64 v8; // rdx
  struct tagSIZE v10; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  DefaultSizeForRect = CDesktopPositioner::_GetDefaultSizeForRect(a1, a3, a2, &v10);
  if ( DefaultSizeForRect < 0 )
  {
    v8 = 1029LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DefaultSizeForRect);
    return (unsigned int)DefaultSizeForRect;
  }
  DefaultSizeForRect = CDesktopPositioner::_GetOffsetRectFromSize((CDesktopPositioner *)a1, a2, 0LL, v10, a4);
  if ( DefaultSizeForRect < 0 )
  {
    v8 = 1040LL;
    goto LABEL_3;
  }
  return 0LL;
}
