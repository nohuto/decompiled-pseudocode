/*
 * XREFs of HeadlessDispatch @ 0x1401716E0
 * Callers:
 *     BgkDisplayStringEx @ 0x140231594 (BgkDisplayStringEx.c)
 *     BvgaDisplayString @ 0x1402319D0 (BvgaDisplayString.c)
 *     BvgaSetTextColor @ 0x140231C00 (BvgaSetTextColor.c)
 *     BvgaSolidColorFill @ 0x140231C50 (BvgaSolidColorFill.c)
 *     KiBugCheckDebugBreak @ 0x140243B30 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140243D14 (KiDisplayBlueScreen.c)
 *     KiHeadlessDisplayString @ 0x1402441A8 (KiHeadlessDisplayString.c)
 *     EtwpInitializeActivityIdSeed @ 0x1406225B0 (EtwpInitializeActivityIdSeed.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     HdlspDispatch @ 0x140838E10 (HdlspDispatch.c)
 */

__int64 __fastcall HeadlessDispatch(__int64 a1, __int64 a2, __int64 a3, void *a4, size_t *a5)
{
  int v6; // eax

  if ( !HeadlessGlobals || !HeadlessGlobals[1] )
  {
    if ( (_DWORD)a1 == 21 || (_DWORD)a1 == 1 )
      return 3221225473LL;
    if ( (unsigned int)a1 <= 0x10 )
    {
      v6 = 79876;
      if ( _bittest(&v6, a1) )
      {
        if ( !a4 || !a5 )
          return 3221225485LL;
        memset(a4, 0, *a5);
      }
    }
    return 0LL;
  }
  return HdlspDispatch(a1);
}
