/*
 * XREFs of ?Transport_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TRANSPORT_SYNCFLUSH@@@Z @ 0x18005C4E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Transport_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_TRANSPORT_SYNCFLUSH *a4)
{
  unsigned int v4; // edx
  char *v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // eax
  struct CChannelContext *v11; // [rsp+48h] [rbp+10h] BYREF
  const struct MILCMD_TRANSPORT_SYNCFLUSH *v12; // [rsp+58h] [rbp+20h]

  v12 = a4;
  v11 = a2;
  v4 = (unsigned int)a4;
  v5 = (char *)this + 424;
  v6 = *((unsigned int *)this + 112);
  v7 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v4 = v6 + 1;
  v8 = v7 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v7 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v4 <= *((_DWORD *)v5 + 5) )
  {
    *(_QWORD *)(*(_QWORD *)v5 + 8 * v6) = v11;
    *((_DWORD *)v5 + 6) = v4;
  }
  else
  {
    v9 = DynArrayImpl<1>::AddMultipleAndSet(v5, 8LL, v5, &v11);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC0u);
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7C7u);
  else
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
  return (unsigned int)v8;
}
