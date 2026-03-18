/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18001D4E0
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18001EF50 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18000F454 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800A9FCC (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800B75F0 (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800B7660 (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  int v4; // r12d
  struct _LIST_ENTRY *v5; // rax
  __int64 v6; // r8
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int FirstItemSafe; // eax
  unsigned int v11; // eax
  int v13; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-40h]
  _QWORD v16[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+B0h] [rbp+50h] BYREF
  void *v19; // [rsp+B8h] [rbp+58h] BYREF

  v4 = 0;
  v5 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  v17 = 0LL;
  v6 = *((unsigned int *)this + 32);
  v16[1] = 0LL;
  v7 = 0;
  v16[0] = v5;
  v8 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v7 = v6 + 1;
  v9 = v8 < (unsigned int)v6 ? 0x80070216 : 0;
  if ( v8 < (unsigned int)v6 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v7 > *((_DWORD *)this + 31) )
  {
    v13 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 104, 8LL, v6, &v17);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v6) = v17;
    *((_DWORD *)this + 32) = v7;
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    v15 = 20;
    v14 = v9;
    goto LABEL_96;
  }
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v16, &v18, &v19, (unsigned int *)&v17);
  v9 = FirstItemSafe;
  if ( FirstItemSafe < 0 )
  {
    v15 = 23;
LABEL_73:
    v14 = FirstItemSafe;
LABEL_96:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v15);
    return v9;
  }
  if ( !FirstItemSafe )
  {
    while ( 1 )
    {
      if ( v18 <= 0x17B )
      {
        switch ( v18 )
        {
          case 0x17Bu:
            if ( (unsigned int)v17 < 0x18 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x76u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 124;
              goto LABEL_73;
            }
            break;
          case 0x175u:
            if ( (unsigned int)v17 < 0xC )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x27u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 45;
              goto LABEL_73;
            }
            break;
          case 0x176u:
            if ( (unsigned int)v17 < 0xC )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x34u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 58;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 59;
              goto LABEL_73;
            }
            break;
          case 0x177u:
            if ( (unsigned int)v17 < 0x1C )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x42u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 72;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 73;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 74;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 75;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 76;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 77;
              goto LABEL_73;
            }
            break;
          case 0x178u:
            if ( (unsigned int)v17 < 0x18 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x54u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 90;
              goto LABEL_73;
            }
            break;
          case 0x179u:
            if ( (unsigned int)v17 < 0xC )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x61u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 103;
              goto LABEL_73;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 104;
              goto LABEL_73;
            }
            break;
          case 0x17Au:
            if ( (unsigned int)v17 < 0x14 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x6Fu);
              return v9;
            }
            break;
          default:
LABEL_90:
            v9 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x21u);
            return v9;
        }
      }
      else
      {
        switch ( v18 )
        {
          case 0x17Cu:
            if ( (unsigned int)v17 < 0x24 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x83u);
              return v9;
            }
            break;
          case 0x17Du:
            if ( (unsigned int)v17 < 0x24 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x8Au);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 144;
              goto LABEL_73;
            }
            break;
          case 0x17Eu:
            if ( (unsigned int)v17 < 8 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x97u);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 157;
              goto LABEL_73;
            }
            break;
          case 0x17Fu:
            if ( (unsigned int)v17 < 4 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xA4u);
              return v9;
            }
            --v4;
            break;
          case 0x180u:
            if ( (unsigned int)v17 < 8 )
            {
              v9 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xADu);
              return v9;
            }
            FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(this, (__int64)a2);
            v9 = FirstItemSafe;
            if ( FirstItemSafe < 0 )
            {
              v15 = 179;
              goto LABEL_73;
            }
            ++v4;
            break;
          default:
            goto LABEL_90;
        }
      }
      FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v16, &v18, &v19, (unsigned int *)&v17);
      v9 = FirstItemSafe;
      if ( FirstItemSafe < 0 )
        break;
      if ( FirstItemSafe )
        goto LABEL_18;
    }
    v15 = 187;
    goto LABEL_73;
  }
LABEL_18:
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
