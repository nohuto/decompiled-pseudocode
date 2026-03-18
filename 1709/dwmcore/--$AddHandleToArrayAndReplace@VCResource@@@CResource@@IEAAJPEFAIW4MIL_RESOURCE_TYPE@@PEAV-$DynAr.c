/*
 * XREFs of ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800A9FCC
 * Callers:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18001D4E0 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800A9E50 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800AA098 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CResource::AddHandleToArrayAndReplace<CResource>(
        CResource *this,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  signed int v6; // ebx
  __int64 v7; // rdx
  struct CResource *Resource; // rax
  signed int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // eax
  signed int v17; // eax
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
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x1DEu);
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
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
        }
        else if ( v14 > *(_DWORD *)(a4 + 20) )
        {
          v17 = DynArrayImpl<1>::AddMultipleAndSet(a4, 8u, v12, &v18);
          v6 = v17;
          if ( v17 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v17, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)a4 + 8 * v13) = v18;
          *(_DWORD *)(a4 + 24) = v14;
        }
        if ( v6 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x1E4u);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070006, 0x1DAu);
    }
  }
  return (unsigned int)v6;
}
