/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x180057C30
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180055A80 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x180056FC0 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18005713C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800571B0 (-NotifyOnChanged@CRenderData@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180087C98 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180087D40 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  __int64 (__fastcall *v11)(__int64, unsigned int, __int64); // rax
  int v13; // eax
  int Handles; // eax
  int v15; // eax

  v9 = 0;
  CRenderData::DestroyRenderData(this);
  v10 = *((_DWORD *)a3 + 2);
  if ( v10 )
  {
    if ( a5 != v10 )
    {
      v9 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x4Eu);
      goto LABEL_12;
    }
    CDataStreamWriter::Reset((CRenderData *)((char *)this + 56));
    v13 = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 56), a4, a5);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x56u);
      goto LABEL_4;
    }
    Handles = CRenderData::GetHandles(this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Handles, 0x5Cu);
      goto LABEL_4;
    }
    v15 = CRenderData::CheckPrimitiveCount(this);
    v9 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x5Fu);
      goto LABEL_4;
    }
  }
  v11 = *(__int64 (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)this + 64LL);
  if ( v11 == CRenderData::NotifyOnChanged )
    CRenderData::NotifyOnChanged((__int64)this, 0, 0LL);
  else
    v11((__int64)this, 0, 0LL);
LABEL_4:
  if ( v9 < 0 )
LABEL_12:
    CRenderData::DestroyRenderData(this);
  return (unsigned int)v9;
}
