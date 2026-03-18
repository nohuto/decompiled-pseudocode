/*
 * XREFs of ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800AB374
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_CHANNEL_SYNCFLUSH *a4)
{
  unsigned int v4; // edx
  char *v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // eax
  signed int v8; // ebx
  signed int v9; // eax
  struct CChannelContext *v11; // [rsp+48h] [rbp+10h] BYREF
  const struct MILCMD_CHANNEL_SYNCFLUSH *v12; // [rsp+58h] [rbp+20h]

  v12 = a4;
  v11 = a2;
  v4 = (unsigned int)a4;
  v5 = (char *)this + 376;
  v6 = *((unsigned int *)this + 100);
  v7 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v4 = v6 + 1;
  v8 = v7 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v7 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
  }
  else if ( v4 <= *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v5 + 8 * v6) = v11;
    *((_DWORD *)v5 + 6) = v4;
  }
  else
  {
    v9 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v5, 8u, (__int64)v5, &v11);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x76Fu);
  else
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  return (unsigned int)v8;
}
