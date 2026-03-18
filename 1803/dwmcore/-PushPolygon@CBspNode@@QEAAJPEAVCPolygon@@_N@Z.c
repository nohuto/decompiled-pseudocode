/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x180211688 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801AE6E0 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x180211550 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x18021EF94 (-AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x18021F04C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, bool a3)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // rcx
  _DWORD *v10; // rax
  bool v11; // al
  bool v12; // si
  CBspNode *v13; // rcx
  volatile signed __int32 *v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-20h]
  struct CPolygon *v17; // [rsp+30h] [rbp-10h] BYREF
  int v18; // [rsp+60h] [rbp+20h] BYREF
  bool v19; // [rsp+70h] [rbp+30h]
  struct CPolygon *v20; // [rsp+78h] [rbp+38h] BYREF

  v19 = a3;
  v20 = 0LL;
  v17 = 0LL;
  v18 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v7 = CPolygon::CompareAndSplit(**((CPolygon ***)this + 4), a2, (enum D2DVectorHelper::Relation *)&v18, &v20, &v17);
    v6 = v7;
    if ( v7 < 0 )
    {
      v16 = 146;
      goto LABEL_33;
    }
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        v20 = a2;
      }
      else if ( v18 == 2 )
      {
        v17 = a2;
      }
    }
    else
    {
      v8 = CBspNode::AddPolygon(this, a2);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x98u);
        goto LABEL_36;
      }
    }
    if ( v20 )
    {
      v9 = (_DWORD *)*((_QWORD *)this + 2);
      if ( !v9 )
      {
        v10 = CBspNode::operator new();
        v9 = v10;
        if ( v10 )
        {
          *(_QWORD *)v10 = &CMILRefCountBase::`vftable';
          *(_QWORD *)v10 = &CBspNode::`vftable';
          v10[2] = 0;
          v10[14] = 0;
          *((_QWORD *)v10 + 4) = v10 + 16;
          *((_QWORD *)v10 + 5) = v10 + 16;
          v11 = v19;
          v9[12] = 4;
          v9[13] = 4;
          *((_BYTE *)v9 + 96) = v11;
          _InterlockedIncrement(v9 + 2);
        }
        else
        {
          v9 = 0LL;
        }
        *((_QWORD *)this + 2) = v9;
        if ( !v9 )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xABu);
          goto LABEL_34;
        }
      }
      v12 = v19;
      v7 = CBspNode::PushPolygon((CBspNode *)v9, v20, v19);
      v6 = v7;
      if ( v7 < 0 )
      {
        v16 = 173;
        goto LABEL_33;
      }
    }
    else
    {
      v12 = v19;
    }
    if ( !v17 )
      goto LABEL_34;
    v13 = (CBspNode *)*((_QWORD *)this + 3);
    if ( !v13 )
    {
      v14 = (volatile signed __int32 *)CBspNode::operator new();
      v13 = (CBspNode *)v14;
      if ( v14 )
      {
        *(_QWORD *)v14 = &CMILRefCountBase::`vftable';
        *(_QWORD *)v14 = &CBspNode::`vftable';
        *((_DWORD *)v14 + 2) = 0;
        *((_DWORD *)v14 + 14) = 0;
        *((_QWORD *)v14 + 4) = v14 + 16;
        *((_QWORD *)v14 + 5) = v14 + 16;
        *((_DWORD *)v14 + 12) = 4;
        *((_DWORD *)v14 + 13) = 4;
        *((_BYTE *)v14 + 96) = v12;
        _InterlockedIncrement(v14 + 2);
      }
      else
      {
        v13 = 0LL;
      }
      *((_QWORD *)this + 3) = v13;
      if ( !v13 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xB5u);
        goto LABEL_34;
      }
    }
    v7 = CBspNode::PushPolygon(v13, v17, v12);
    v6 = v7;
    if ( v7 >= 0 )
    {
LABEL_34:
      if ( v18 == 3 )
      {
        ReleaseInterfaceNoNULL<CPolygon>((__int64)v20);
        ReleaseInterfaceNoNULL<CPolygon>((__int64)v17);
      }
      goto LABEL_36;
    }
    v16 = 183;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v16);
    goto LABEL_34;
  }
  v5 = CBspNode::AddPolygon(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return (unsigned int)v6;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x8Au);
LABEL_36:
  if ( v6 < 0 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)this + 2);
    ReleaseInterface<CD3DSurface>((__int64 *)this + 3);
  }
  return (unsigned int)v6;
}
