/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18002E1BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18002D5D0 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800CCE98 (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
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
  int v11; // ebx
  int v12; // eax
  struct CChannelContext **v14; // rdx
  int v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+34h] [rbp-1Ch]
  __int64 v17; // [rsp+3Ch] [rbp-14h]
  __int64 v18; // [rsp+44h] [rbp-Ch]
  CMILRefCountBase *v19; // [rsp+68h] [rbp+18h] BYREF

  v19 = a2;
  v5 = 0;
  v6 = (char *)this + 432;
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
    if ( v5 == *((_DWORD *)this + 114) )
    {
      v10 = v8 + 1;
      v11 = (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xB5u);
      }
      else if ( v10 <= *((_DWORD *)v6 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v6 + 8 * v8) = v19;
        *((_DWORD *)v6 + 6) = v10;
      }
      else
      {
        v12 = DynArrayImpl<1>::AddMultipleAndSet(v6, 8LL, v8, &v19);
        v11 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xC0u);
      }
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4A8u);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)v19 + 2);
        v15 = 5;
        v16 = 0LL;
        v17 = 0LL;
        v18 = 0LL;
        HIDWORD(v16) = *((_DWORD *)this + 92);
        LODWORD(v17) = HIDWORD(v16);
        CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v15, v8);
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
    if ( v5 < *((_DWORD *)this + 114) && (unsigned int)DynArray<CChannelContext *,1>::Remove(v6, &v19) )
      CMILRefCountBase::Release(v19);
  }
  return 0LL;
}
