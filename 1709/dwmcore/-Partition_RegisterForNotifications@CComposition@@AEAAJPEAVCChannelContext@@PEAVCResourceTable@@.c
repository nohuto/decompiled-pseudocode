/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180128838
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x18007E3DC (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800AAB4C (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  unsigned int v5; // eax
  char *v6; // rcx
  __int64 v8; // r8
  struct CChannelContext **v9; // rdx
  unsigned int v10; // edx
  unsigned int v11; // eax
  signed int v12; // ebx
  signed int v13; // eax
  struct CChannelContext **v14; // rdx
  int v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+34h] [rbp-1Ch]
  __int64 v18; // [rsp+3Ch] [rbp-14h]
  __int64 v19; // [rsp+44h] [rbp-Ch]
  CMILRefCountBase *v20; // [rsp+68h] [rbp+18h] BYREF
  struct CResourceTable *v21; // [rsp+70h] [rbp+20h]

  v21 = a3;
  v20 = a2;
  v5 = 0;
  v6 = (char *)this + 408;
  if ( *((_DWORD *)a4 + 1) )
  {
    v8 = *((unsigned int *)v6 + 6);
    if ( (_DWORD)v8 )
    {
      v9 = *(struct CChannelContext ***)v6;
      do
      {
        if ( a2 == *v9 )
          break;
        ++v5;
        ++v9;
      }
      while ( v5 < (unsigned int)v8 );
    }
    if ( v5 == *((_DWORD *)this + 108) )
    {
      v10 = (unsigned int)v21;
      v11 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v10 = v8 + 1;
      v12 = v11 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v11 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xB5u);
      }
      else if ( v10 > *((_DWORD *)v6 + 5) )
      {
        v13 = DynArrayImpl<1>::AddMultipleAndSet((__int64)v6, 8u, v8, &v20);
        v12 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8 * v8) = v20;
        *((_DWORD *)v6 + 6) = v10;
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x4CEu);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)v20 + 2);
        v16 = 5;
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        HIDWORD(v17) = *((_DWORD *)this + 86);
        LODWORD(v18) = HIDWORD(v17);
        CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v16, v8);
      }
    }
  }
  else
  {
    v14 = *(struct CChannelContext ***)v6;
    if ( *((_DWORD *)v6 + 6) )
    {
      do
      {
        if ( a2 == *v14 )
          break;
        ++v5;
        ++v14;
      }
      while ( v5 < *((_DWORD *)v6 + 6) );
    }
    if ( v5 < *((_DWORD *)this + 108)
      && (unsigned int)DynArray<CChannelContext *,1>::Remove((__int64 *)v6, (__int64 *)&v20) )
    {
      CMILRefCountBase::Release(v20);
    }
  }
  return 0LL;
}
