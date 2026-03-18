/*
 * XREFs of ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x18002DE6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SYNCFLUSH *a4)
{
  _QWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // edx
  int v7; // ebx
  int v8; // eax
  struct CChannelContext *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v4 = (_QWORD *)((char *)this + 400);
  v5 = *((_DWORD *)this + 106);
  v6 = v5 + 1;
  v7 = v5 + 1 < v5 ? 0x80070216 : 0;
  if ( v5 + 1 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 <= *((_DWORD *)this + 105) )
  {
    *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 106)) = v10;
    *((_DWORD *)this + 106) = v6;
  }
  else
  {
    v8 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 400, 8LL, v4, &v10);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
  }
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x754u);
  else
    _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
  return (unsigned int)v7;
}
