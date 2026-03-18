/*
 * XREFs of ?ProcessBasicStateUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_BASICSTATEUPDATE@@@Z @ 0x18012DE30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18005B2C0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18016FFBC (-SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 */

__int64 __fastcall CPencil::ProcessBasicStateUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_BASICSTATEUPDATE *a3)
{
  __int64 v3; // rdi
  unsigned int v7; // ebp
  unsigned int v8; // edx
  struct CResource *v9; // rax
  int v10; // eax
  unsigned int v11; // edx
  struct CResource *ResourceWithoutType; // rax
  int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  *(_OWORD *)((char *)this + 228) = *(_OWORD *)((char *)a3 + 8);
  v7 = 0;
  *(_OWORD *)((char *)this + 244) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)this + 65) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 66) = *((_DWORD *)a3 + 11);
  *((_OWORD *)this + 9) = *(_OWORD *)((char *)a3 + 52);
  *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 72);
  v8 = *((_DWORD *)a3 + 12);
  if ( v8
    && (v9 = CResourceTable::GetResourceWithoutType(a2, v8),
        v10 = CPencil::SetPaperTextureBitmap(this, v9, (struct CCompositionSurfaceBitmap **)this + 17),
        v7 = v10,
        v10 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x38u);
  }
  else
  {
    v11 = *((_DWORD *)a3 + 17);
    if ( v11
      && (ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v11),
          v13 = CPencil::SetPaperTextureBitmap(
                  this,
                  ResourceWithoutType,
                  (struct CCompositionSurfaceBitmap **)this + 20),
          v7 = v13,
          v13 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3Du);
    }
    else
    {
      if ( *((_DWORD *)this + 24) )
      {
        v14 = *((unsigned int *)this + 24);
        v7 = 0;
        do
        {
          v15 = *(_QWORD *)(v3 + *((_QWORD *)this + 9));
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v15 + 104) + 8LL))(*(_QWORD *)(v15 + 104));
          v17 = *(_QWORD *)(v15 + 104);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17);
          ReleaseInterface<IBitmapLock>(&v17);
          v3 += 8LL;
          --v14;
        }
        while ( v14 );
        v3 = v17;
      }
      CResource::NotifyOnChanged(this, 0LL, 0LL);
    }
  }
  ReleaseInterfaceNoNULL<CD2DPencil>(v3);
  return v7;
}
