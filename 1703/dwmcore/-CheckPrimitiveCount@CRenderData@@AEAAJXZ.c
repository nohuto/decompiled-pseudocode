/*
 * XREFs of ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x1800846E8
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18008428C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180083304 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C203C (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C20AC (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CRenderData::CheckPrimitiveCount(CRenderData *this)
{
  unsigned int v2; // esi
  int FirstItemSafe; // eax
  unsigned int v4; // ebx
  unsigned int v6; // [rsp+20h] [rbp-58h]
  _QWORD v7[9]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+10h] BYREF
  void *v10; // [rsp+90h] [rbp+18h] BYREF

  v2 = 0;
  v7[0] = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  v7[1] = 0LL;
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v7, &v8, &v10, &v9);
  v4 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v6 = 732;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, FirstItemSafe, v6);
  }
  else
  {
    if ( !FirstItemSafe )
    {
      while ( 1 )
      {
        if ( v2 > 1 )
          goto LABEL_14;
        if ( v8 == 334 )
          break;
        if ( v8 <= 0x14F )
          goto LABEL_17;
        if ( v8 <= 0x151 )
          break;
        if ( v8 == 338 )
        {
          v2 = 2;
        }
        else
        {
          if ( v8 <= 0x157 )
            break;
          if ( v8 > 0x159 )
          {
LABEL_17:
            v4 = -2003303421;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2E3u);
            return v4;
          }
        }
LABEL_12:
        FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v7, &v8, &v10, &v9);
        v4 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v6 = 766;
          goto LABEL_20;
        }
        if ( FirstItemSafe )
          goto LABEL_14;
      }
      ++v2;
      goto LABEL_12;
    }
LABEL_14:
    v4 = 0;
    *((_BYTE *)this + 137) = v2 <= 1;
  }
  return v4;
}
