/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18005109C
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180055A80 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18005122C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        unsigned int *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // ebx
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v16; // eax
  struct CResource *v17; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = *a2;
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v17 = Resource;
    if ( Resource )
    {
      v11 = CResource::RegisterNotifier(this, Resource);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x1E0u);
      }
      else
      {
        v13 = *(_DWORD *)(a4 + 24);
        v14 = v13 + 1;
        v6 = v13 + 1 < v13 ? 0x80070216 : 0;
        if ( v13 + 1 < v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
        }
        else if ( v14 > *(_DWORD *)(a4 + 20) )
        {
          v16 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8LL, v12, &v17);
          v6 = v16;
          if ( v16 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a4 + 8LL * v13) = v17;
          *(_DWORD *)(a4 + 24) = v14;
        }
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1E6u);
          CResource::UnRegisterNotifierInternal(this, v17);
        }
        else
        {
          *a2 = *(_DWORD *)(a4 + 24) - 1;
        }
      }
    }
    else
    {
      v6 = -2147024890;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024890, 0x1DCu);
    }
  }
  return (unsigned int)v6;
}
