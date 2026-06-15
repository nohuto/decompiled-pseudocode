/*
 * XREFs of ?GetAt@?$CSimpleStringT@G$0A@@ATL@@QEBAGH@Z @ 0x18007DF64
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007DFC4 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppInstanceId@@QEAAJPEBG@Z @ 0x18007E3F0 (-Initialize@CAppInstanceId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18005F724 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CSimpleStringT<unsigned short,0>::GetAt(unsigned __int16 **a1)
{
  if ( *((int *)*a1 - 4) < 0 )
    ATL::AtlThrowImpl(-2147024809);
  return **a1;
}
