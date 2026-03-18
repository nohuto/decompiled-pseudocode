/*
 * XREFs of ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180084350
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18008428C (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 * Callees:
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800348C0 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x180083304 (-FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C203C (-GetFirstItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 *     ?GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z @ 0x1800C20AC (-GetNextItemSafe@CDataBlockReader@@QEAAJPEAIPEAPEAX0@Z.c)
 */

__int64 __fastcall CRenderData::GetHandles(CRenderData *this, struct CResourceTable *a2)
{
  struct _LIST_ENTRY *v4; // rax
  __int64 v5; // r8
  unsigned int v6; // edx
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // r12d
  int FirstItemSafe; // eax
  bool v11; // zf
  int v12; // eax
  _DWORD *v14; // rsi
  int v15; // eax
  _DWORD *v16; // rsi
  _DWORD *v17; // rsi
  int v18; // r9d
  unsigned int v19; // [rsp+20h] [rbp-40h]
  _QWORD v20[6]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+50h] BYREF
  void *v23; // [rsp+B8h] [rbp+58h] BYREF

  v4 = CDataStreamWriter::FlushData((CRenderData *)((char *)this + 56));
  v21 = 0LL;
  v5 = *((unsigned int *)this + 32);
  v20[1] = 0LL;
  v6 = 0;
  v20[0] = v4;
  v7 = v5 + 1;
  if ( (int)v5 + 1 >= (unsigned int)v5 )
    v6 = v5 + 1;
  v8 = v7 < (unsigned int)v5 ? 0x80070216 : 0;
  if ( v7 < (unsigned int)v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xB5u);
  }
  else if ( v6 > *((_DWORD *)this + 31) )
  {
    v15 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 104, 8LL, v5, &v21);
    v8 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v5) = v21;
    *((_DWORD *)this + 32) = v6;
  }
  if ( v8 < 0 )
  {
    v19 = 25;
    v18 = v8;
    goto LABEL_96;
  }
  v9 = 0;
  FirstItemSafe = CDataBlockReader::GetFirstItemSafe((CDataBlockReader *)v20, &v22, &v23, (unsigned int *)&v21);
  v8 = FirstItemSafe;
  v11 = FirstItemSafe == 0;
  if ( FirstItemSafe < 0 )
  {
    v19 = 33;
    goto LABEL_75;
  }
  while ( 1 )
  {
    if ( !v11 )
    {
      v12 = 0;
      if ( v8 != 1 )
        v12 = v8;
      v8 = v12;
      if ( !v9 )
        return (unsigned int)v8;
      v19 = 229;
      goto LABEL_73;
    }
    if ( v22 > 0x154 )
      break;
    switch ( v22 )
    {
      case 0x154u:
        if ( (unsigned int)v21 < 0x24 )
        {
          v19 = 166;
          goto LABEL_73;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          60LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 170;
          goto LABEL_75;
        }
LABEL_53:
        *((_BYTE *)this + 136) = 1;
        break;
      case 0x14Eu:
        if ( (unsigned int)v21 < 0xC )
        {
          v19 = 115;
          goto LABEL_73;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          60LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 118;
          goto LABEL_75;
        }
        break;
      case 0x14Fu:
        if ( (unsigned int)v21 < 0x1C )
        {
          v19 = 126;
          goto LABEL_73;
        }
        v17 = v23;
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          70LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 130;
          goto LABEL_75;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          v17 + 2,
                          51LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 131;
          goto LABEL_75;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          v17 + 3,
                          51LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 132;
          goto LABEL_75;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          v17 + 4,
                          50LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 133;
          goto LABEL_75;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          v17 + 5,
                          50LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 134;
          goto LABEL_75;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          v17 + 6,
                          50LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 135;
          goto LABEL_75;
        }
        break;
      case 0x150u:
        if ( (unsigned int)v21 < 0xC )
        {
          v19 = 183;
          goto LABEL_73;
        }
        v16 = v23;
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          1LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 187;
          goto LABEL_75;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          v16 + 2,
                          60LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 188;
          goto LABEL_75;
        }
        break;
      case 0x151u:
        if ( (unsigned int)v21 >= 0x14 )
          break;
        v19 = 143;
LABEL_73:
        v8 = -2003303421;
        v18 = -2003303421;
        goto LABEL_96;
      case 0x152u:
        if ( (unsigned int)v21 < 8 )
        {
          v19 = 196;
          goto LABEL_73;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          31LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 200;
          goto LABEL_75;
        }
        break;
      case 0x153u:
        if ( (unsigned int)v21 < 0x24 )
        {
          v19 = 152;
          goto LABEL_73;
        }
        goto LABEL_53;
      default:
LABEL_71:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2Fu);
        break;
    }
LABEL_17:
    FirstItemSafe = CDataBlockReader::GetNextItemSafe((CDataBlockReader *)v20, &v22, &v23, (unsigned int *)&v21);
    v8 = FirstItemSafe;
    v11 = FirstItemSafe == 0;
    if ( FirstItemSafe < 0 )
    {
      v19 = 210;
      goto LABEL_75;
    }
  }
  if ( v22 == 341 )
  {
    if ( (unsigned int)v21 < 0x18 )
    {
      v19 = 54;
      goto LABEL_73;
    }
    FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                      this,
                      (_DWORD *)v23 + 1,
                      75LL,
                      (__int64)this + 104,
                      (__int64)a2);
    v8 = FirstItemSafe;
    if ( FirstItemSafe < 0 )
    {
      v19 = 58;
      goto LABEL_75;
    }
    goto LABEL_17;
  }
  if ( v22 != 342 )
  {
    switch ( v22 )
    {
      case 0x157u:
        if ( (unsigned int)v21 < 0x18 )
        {
          v19 = 83;
          goto LABEL_73;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          60LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 87;
          goto LABEL_75;
        }
        break;
      case 0x158u:
        if ( (unsigned int)v21 < 8 )
        {
          v19 = 97;
          goto LABEL_73;
        }
        FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                          this,
                          (_DWORD *)v23 + 1,
                          62LL,
                          (__int64)this + 104,
                          (__int64)a2);
        v8 = FirstItemSafe;
        if ( FirstItemSafe < 0 )
        {
          v19 = 101;
          goto LABEL_75;
        }
        ++v9;
        break;
      case 0x159u:
        --v9;
        break;
      default:
        goto LABEL_71;
    }
    goto LABEL_17;
  }
  if ( (unsigned int)v21 < 0xC )
  {
    v19 = 68;
    goto LABEL_73;
  }
  v14 = v23;
  FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                    this,
                    (_DWORD *)v23 + 1,
                    75LL,
                    (__int64)this + 104,
                    (__int64)a2);
  v8 = FirstItemSafe;
  if ( FirstItemSafe >= 0 )
  {
    FirstItemSafe = CResource::AddHandleToArrayAndReplace<CResource>(
                      this,
                      v14 + 2,
                      70LL,
                      (__int64)this + 104,
                      (__int64)a2);
    v8 = FirstItemSafe;
    if ( FirstItemSafe < 0 )
    {
      v19 = 73;
      goto LABEL_75;
    }
    goto LABEL_17;
  }
  v19 = 72;
LABEL_75:
  v18 = FirstItemSafe;
LABEL_96:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, v19);
  return (unsigned int)v8;
}
