/*
 * XREFs of ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x18002CAF4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall CAnimation::ProcessAddTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_ADDTIMEEVENTS *a3,
        const void *a4,
        unsigned int a5)
{
  char *v5; // rdi
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r8
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // eax

  v5 = (char *)this + 152;
  v6 = *((unsigned int *)this + 44);
  v7 = a5;
  v8 = a5 >> 4;
  v9 = v6 + v8;
  if ( (int)v6 + (int)v8 >= (unsigned int)v6 )
    v7 = v6 + v8;
  v10 = v9 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v9 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xB5u);
  }
  else if ( v7 <= *((_DWORD *)v5 + 5) )
  {
    memcpy_0((void *)(*(_QWORD *)v5 + 16 * v6), a4, 16 * v8);
    *((_DWORD *)v5 + 6) = v7;
  }
  else
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(v5, 16LL, v8, a4);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
  }
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1F3u);
  return (unsigned int)v10;
}
