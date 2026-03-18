/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180055A80
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x180057C30 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x18005109C (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180087C1C (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C18B0 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C1920 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800CD2B8 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  int v4; // r12d
  struct _LIST_ENTRY *v5; // rax
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // ebx
  int FirstItemSafe; // eax
  unsigned int v11; // eax
  unsigned int *v13; // rsi
  int v14; // eax
  unsigned int *v15; // rsi
  unsigned int *v16; // rsi
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-40h]
  _QWORD v19[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+50h] BYREF
  void *v22; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  v19[1] = 0LL;
  v20 = 0LL;
  v19[0] = v5;
  v7 = *((_DWORD *)this + 32);
  v8 = v7 + 1;
  v9 = v7 + 1 < v7 ? 0x80070216 : 0;
  if ( v7 + 1 < v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)this + 31) )
  {
    v14 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 104, 8LL, v6, &v20);
    v9 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 13) + 8LL * v7) = v20;
    *((_DWORD *)this + 32) = v8;
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    v18 = 20;
    v17 = v9;
    goto LABEL_94;
  }
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v19, &v21, &v22, (unsigned int *)&v20);
  v9 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v18 = 23;
LABEL_72:
    v17 = FirstItemSafe;
LABEL_94:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v18);
    return v9;
  }
  if ( !FirstItemSafe )
  {
    while ( 1 )
    {
      if ( v21 <= 0x1B8 )
      {
        switch ( v21 )
        {
          case 0x1B8u:
            if ( (unsigned int)v20 < 0x18 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x76u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x56u,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 124;
              goto LABEL_72;
            }
            break;
          case 0x1B2u:
            if ( (unsigned int)v20 < 0xC )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x27u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x4Eu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 45;
              goto LABEL_72;
            }
            break;
          case 0x1B3u:
            if ( (unsigned int)v20 < 0xC )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x34u);
              return v9;
            }
            v13 = (unsigned int *)v22;
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x56u,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 58;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v13 + 2,
                              0x3Cu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 59;
              goto LABEL_72;
            }
            break;
          case 0x1B4u:
            if ( (unsigned int)v20 < 0x1C )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x42u);
              return v9;
            }
            v16 = (unsigned int *)v22;
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x3Cu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 72;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v16 + 2,
                              0x15u,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 73;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v16 + 3,
                              0x15u,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 74;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v16 + 4,
                              0x2Fu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 75;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v16 + 5,
                              0x2Fu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 76;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v16 + 6,
                              0x2Fu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 77;
              goto LABEL_72;
            }
            break;
          case 0x1B5u:
            if ( (unsigned int)v20 < 0x18 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x54u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x4Eu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 90;
              goto LABEL_72;
            }
            break;
          case 0x1B6u:
            if ( (unsigned int)v20 < 0xC )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x61u);
              return v9;
            }
            v15 = (unsigned int *)v22;
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x3Du,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 103;
              goto LABEL_72;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              v15 + 2,
                              0x4Eu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 104;
              goto LABEL_72;
            }
            break;
          case 0x1B7u:
            if ( (unsigned int)v20 < 0x14 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x6Fu);
              return v9;
            }
            break;
          default:
            goto LABEL_88;
        }
      }
      else
      {
        switch ( v21 )
        {
          case 0x1B9u:
            if ( (unsigned int)v20 < 0x24 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x83u);
              return v9;
            }
            break;
          case 0x1BAu:
            if ( (unsigned int)v20 < 0x24 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x8Au);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x4Eu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 144;
              goto LABEL_72;
            }
            break;
          case 0x1BBu:
            if ( (unsigned int)v20 < 8 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x97u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x97u,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 157;
              goto LABEL_72;
            }
            break;
          case 0x1BCu:
            if ( (unsigned int)v20 < 4 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xA4u);
              return v9;
            }
            --v4;
            break;
          case 0x1BDu:
            if ( (unsigned int)v20 < 8 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xADu);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                              this,
                              (unsigned int *)v22 + 1,
                              0x8Eu,
                              (__int64)this + 104,
                              (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v18 = 179;
              goto LABEL_72;
            }
            ++v4;
            break;
          default:
LABEL_88:
            v9 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x21u);
            return v9;
        }
      }
      FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v19, &v21, &v22, (unsigned int *)&v20);
      v9 = FirstItemSafe;
      if ( FirstItemSafe < 0 )
        break;
      if ( FirstItemSafe )
        goto LABEL_16;
    }
    v18 = 187;
    goto LABEL_72;
  }
LABEL_16:
  v11 = 0;
  if ( v9 != 1 )
    v11 = v9;
  v9 = v11;
  if ( v4 )
  {
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xC9u);
  }
  return v9;
}
