/*
 * XREFs of ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18005C880
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18005BB24 (-NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Remove@?$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z @ 0x1800B1AAC (-Remove@-$DynArray@PEAVCChannelContext@@$00@@QEAAHAEBQEAVCChannelContext@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Partition_RegisterForNotifications(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_REGISTERFORNOTIFICATIONS *a4)
{
  unsigned int v4; // eax
  char *v7; // r8
  struct CChannelContext **v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // edx
  unsigned int v11; // eax
  int v12; // ebx
  int v13; // eax
  char *v15; // rcx
  struct CChannelContext **v16; // rdx
  int v17; // [rsp+30h] [rbp-20h] BYREF
  __int64 v18; // [rsp+34h] [rbp-1Ch]
  __int64 v19; // [rsp+3Ch] [rbp-14h]
  __int64 v20; // [rsp+44h] [rbp-Ch]
  CMILRefCountBase *v21; // [rsp+68h] [rbp+18h] BYREF
  struct CResourceTable *v22; // [rsp+70h] [rbp+20h]

  v22 = a3;
  v21 = a2;
  v4 = 0;
  if ( *((_DWORD *)a4 + 1) )
  {
    v7 = (char *)this + 456;
    v8 = (struct CChannelContext **)*((_QWORD *)this + 57);
    if ( *((_DWORD *)v7 + 6) )
    {
      do
      {
        if ( a2 == *v8 )
          break;
        ++v4;
        ++v8;
      }
      while ( v4 < *((_DWORD *)v7 + 6) );
    }
    if ( v4 == *((_DWORD *)this + 120) )
    {
      v9 = *((unsigned int *)v7 + 6);
      v10 = (unsigned int)v22;
      v11 = v9 + 1;
      if ( (int)v9 + 1 >= (unsigned int)v9 )
        v10 = v9 + 1;
      v12 = v11 < (unsigned int)v9 ? 0x80070216 : 0;
      if ( v11 < (unsigned int)v9 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xB5u);
      }
      else if ( v10 <= *((_DWORD *)v7 + 5) )
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8 * v9) = v21;
        *((_DWORD *)v7 + 6) = v10;
      }
      else
      {
        v13 = DynArrayImpl<1>::AddMultipleAndSet(v7, 8LL, v7, &v21);
        v12 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
      }
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x536u);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)v21 + 2);
        v17 = 5;
        v18 = 0LL;
        v19 = 0LL;
        v20 = 0LL;
        HIDWORD(v18) = *((_DWORD *)this + 96);
        LODWORD(v19) = HIDWORD(v18);
        CComposition::NotifyHelper(this, (struct MIL_MESSAGE *)&v17);
      }
    }
  }
  else
  {
    v15 = (char *)this + 456;
    v16 = *(struct CChannelContext ***)v15;
    if ( *((_DWORD *)v15 + 6) )
    {
      do
      {
        if ( a2 == *v16 )
          break;
        ++v4;
        ++v16;
      }
      while ( v4 < *((_DWORD *)v15 + 6) );
    }
    if ( v4 < *((_DWORD *)this + 120) && (unsigned int)DynArray<CChannelContext *,1>::Remove(v15, &v21) )
      CMILRefCountBase::Release(v21);
  }
  return 0LL;
}
