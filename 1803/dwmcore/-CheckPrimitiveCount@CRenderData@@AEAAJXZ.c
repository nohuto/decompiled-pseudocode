/*
 * XREFs of ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x180056FC0
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x180057C30 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180087C1C (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C18B0 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C1920 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CRenderData::CheckPrimitiveCount(CRenderData *this)
{
  unsigned int v2; // edi
  int FirstItemSafe; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-58h]
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+10h] BYREF
  void *v10; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v7[1] = 0LL;
  v7[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v7, &v8, &v10, &v9);
  v4 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v6 = 354;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, FirstItemSafe, v6);
  }
  else
  {
    if ( !FirstItemSafe )
    {
      while ( v2 <= 1 )
      {
        switch ( v8 )
        {
          case 0x1B2u:
          case 0x1B9u:
            ++v2;
            goto LABEL_5;
          case 0x1B3u:
          case 0x1B5u:
          case 0x1B6u:
          case 0x1B8u:
          case 0x1BAu:
          case 0x1BBu:
            v2 = 2;
            goto LABEL_5;
          case 0x1B7u:
          case 0x1BCu:
          case 0x1BDu:
LABEL_5:
            FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v7, &v8, &v10, &v9);
            v4 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v6 = 386;
              goto LABEL_14;
            }
            if ( FirstItemSafe )
              goto LABEL_7;
            break;
          default:
            v4 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x169u);
            return v4;
        }
      }
    }
LABEL_7:
    v4 = 0;
    *((_BYTE *)this + 136) = v2 <= 1;
  }
  return v4;
}
