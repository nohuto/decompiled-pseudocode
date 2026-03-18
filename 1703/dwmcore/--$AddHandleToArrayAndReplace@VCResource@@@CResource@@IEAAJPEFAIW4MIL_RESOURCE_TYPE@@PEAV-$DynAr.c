/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800348C0
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180084350 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180034FA4 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v17; // eax
  struct CResource *v18; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  v7 = (unsigned int)*a2;
  if ( (_DWORD)v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource(a5, v7, a3);
    v18 = Resource;
    if ( Resource )
    {
      v11 = CResource::RegisterNotifier(this, Resource);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1AAu);
      }
      else
      {
        v13 = *(unsigned int *)(a4 + 24);
        v14 = (unsigned int)v18;
        v15 = v13 + 1;
        if ( (int)v13 + 1 >= (unsigned int)v13 )
          v14 = v13 + 1;
        v6 = v15 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v15 < (unsigned int)v13 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB5u);
        }
        else if ( v14 > *(_DWORD *)(a4 + 20) )
        {
          v17 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8LL, v12, &v18);
          v6 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a4 + 8 * v13) = v18;
          *(_DWORD *)(a4 + 24) = v14;
        }
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1B0u);
          CResource::UnRegisterNotifierInternal(this, v18);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x1A6u);
    }
  }
  return (unsigned int)v6;
}
