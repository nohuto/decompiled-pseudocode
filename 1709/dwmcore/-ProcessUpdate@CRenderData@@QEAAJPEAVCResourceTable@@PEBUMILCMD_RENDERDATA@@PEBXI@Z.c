/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18001EF50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18000F8DC (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F908 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18001D4E0 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18001E300 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18001E47C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int v9; // edi
  int v10; // eax
  int v11; // eax
  int Handles; // eax
  int v13; // eax
  void (__fastcall *v14)(CRenderData *, _QWORD, _QWORD); // rax

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v10 = *((_DWORD *)a3 + 2);
  if ( v10 )
  {
    if ( a5 != v10 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x46u);
      goto LABEL_12;
    }
    CDataStreamWriter::Reset((CRenderData *)((char *)this + 56));
    v11 = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 56), a4, a5);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x4Eu);
      goto LABEL_8;
    }
    Handles = CRenderData::GetHandles(this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Handles, 0x54u);
      goto LABEL_8;
    }
    v13 = CRenderData::CheckPrimitiveCount(this);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x57u);
      goto LABEL_8;
    }
  }
  v14 = *(void (__fastcall **)(CRenderData *, _QWORD, _QWORD))(*(_QWORD *)this + 64LL);
  if ( (char *)v14 == (char *)CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  else
    v14(this, 0LL, 0LL);
LABEL_8:
  if ( v9 < 0 )
LABEL_12:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
