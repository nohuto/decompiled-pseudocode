/*
 * XREFs of ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x18001A684
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall CAnimation::ProcessAddTimeEvents(
        CAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANIMATION_ADDTIMEEVENTS *a3,
        const void *a4,
        unsigned int a5)
{
  char *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r8
  unsigned int v8; // esi
  int v9; // ebx
  int v10; // eax

  v5 = (char *)this + 152;
  v6 = *((unsigned int *)this + 44);
  v7 = a5 >> 4;
  v8 = v6 + v7;
  v9 = (int)v6 + (int)v7 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( (int)v6 + (int)v7 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 <= *((_DWORD *)this + 43) )
  {
    memcpy_0((void *)(*(_QWORD *)v5 + 16 * v6), a4, 16 * v7);
    *((_DWORD *)v5 + 6) = v8;
  }
  else
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(v5, 16LL, v7, a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
  }
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x1F3u);
  return (unsigned int)v9;
}
