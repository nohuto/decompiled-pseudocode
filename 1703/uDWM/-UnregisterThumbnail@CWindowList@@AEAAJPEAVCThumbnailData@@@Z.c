/*
 * XREFs of ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18003373C
 * Callers:
 *     ?UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z @ 0x180033910 (-UnregisterThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_UNREGISTERTHUMBNAIL@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003461C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z @ 0x180015EAC (-Remove@-$DynArray@PEAVCThumbnailData@@$0A@@@QEAAHAEBQEAVCThumbnailData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180019900 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180036750 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ??_GCDCompThumbnailData@@UEAAPEAXI@Z @ 0x18003C370 (--_GCDCompThumbnailData@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::UnregisterThumbnail(CWindowList *this, struct CVisual **a2)
{
  int v2; // edi
  struct CVisual *v5; // rcx
  struct CVisual *v6; // rdx
  struct CVisual *v7; // rdx
  CBaseObject *v8; // rcx
  struct CVisual *v9; // rcx
  struct CVisual *v10; // rax
  CBaseObject *v11; // rcx
  void *(__fastcall *v12)(CDCompThumbnailData *__hidden, unsigned int); // rax
  CBaseObject *v14; // rcx
  __int64 v15; // rsi
  struct CVisual *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  struct CThumbnailData *v20; // [rsp+48h] [rbp+10h] BYREF

  v20 = (struct CThumbnailData *)a2;
  v2 = 0;
  if ( *((_BYTE *)a2 + 34) )
  {
    v5 = a2[12];
    if ( v5 )
    {
      v6 = a2[13];
      if ( v6 )
      {
        VisualCollection::Remove((struct CVisual *)((char *)v5 + 32), v6);
        v14 = a2[13];
        if ( v14 )
        {
          CBaseObject::Release(v14);
          a2[13] = 0LL;
        }
      }
      v7 = a2[11];
      if ( v7 )
        VisualCollection::Remove((struct CVisual *)((char *)a2[12] + 32), v7);
      v8 = a2[12];
      if ( v8 )
      {
        CBaseObject::Release(v8);
        a2[12] = 0LL;
      }
    }
  }
  else
  {
    v15 = *((_QWORD *)a2[2] + 50);
    if ( v15 )
    {
      v16 = a2[11];
      if ( v16 )
      {
        v17 = *(_QWORD *)(v15 + 528);
        if ( v17 )
        {
          v18 = VisualCollection::Remove((VisualCollection *)(v17 + 32), v16);
          v2 = v18;
          if ( v18 >= 0 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v15 + 528) + 72LL) == (*(_QWORD *)(v15 + 472) != 0LL) )
            {
              v19 = CWindowData::NotifyRepresentationChanged(*(CWindowData **)(v15 + 720));
              v2 = v19;
              if ( v19 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x649u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x642u);
          }
        }
        if ( v2 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x12D2u);
          return (unsigned int)v2;
        }
      }
    }
  }
  DynArray<CThumbnailData *,0>::Remove((__int64 *)a2[2] + 60, (__int64 *)&v20);
  v9 = a2[3];
  if ( v9 )
    DynArray<CThumbnailData *,0>::Remove((__int64 *)v9 + 64, (__int64 *)&v20);
  v10 = a2[11];
  if ( v10 )
    *((_QWORD *)v10 + 46) = 0LL;
  v11 = a2[11];
  if ( v11 )
  {
    CBaseObject::Release(v11);
    a2[11] = 0LL;
  }
  v12 = *(void *(__fastcall **)(CDCompThumbnailData *__hidden, unsigned int))*a2;
  if ( v12 == CDCompThumbnailData::`scalar deleting destructor' )
    CDCompThumbnailData::`scalar deleting destructor'((CDCompThumbnailData *)a2, 1u);
  else
    v12((CDCompThumbnailData *)a2, 1u);
  DynArray<CThumbnailData *,0>::Remove((__int64 *)this + 44, (__int64 *)&v20);
  return (unsigned int)v2;
}
