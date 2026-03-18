/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18008428C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x180083340 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18008336C (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180084350 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x1800846E8 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800849B8 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        void **this,
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

  v9 = 0;
  CRenderData::DestroyRenderData((CRenderData *)this);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
    goto LABEL_6;
  if ( a5 != v10 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x48u);
    goto LABEL_10;
  }
  CDataStreamWriter::Reset(this + 7);
  *((_BYTE *)this + 136) = 0;
  v11 = CDataStreamWriter::AddBlockData((CDataStreamWriter *)(this + 7), a4, a5);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x51u);
  }
  else
  {
    Handles = CRenderData::GetHandles((CRenderData *)this, a2);
    v9 = Handles;
    if ( Handles < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Handles, 0x57u);
    }
    else
    {
      v13 = CRenderData::CheckPrimitiveCount((CRenderData *)this);
      v9 = v13;
      if ( v13 >= 0 )
      {
LABEL_6:
        CResource::NotifyOnChanged(this, 0LL, 0LL);
        goto LABEL_7;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x5Au);
    }
  }
LABEL_7:
  if ( v9 < 0 )
LABEL_10:
    CRenderData::DestroyRenderData((CRenderData *)this);
  return (unsigned int)v9;
}
