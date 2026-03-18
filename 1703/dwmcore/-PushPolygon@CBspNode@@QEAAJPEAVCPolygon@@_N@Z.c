/*
 * XREFs of ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801BFF2C
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801B31A8 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801BFF2C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x180176CCC (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ??2CBspNode@@SAPEAX_K@Z @ 0x1801B3070 (--2CBspNode@@SAPEAX_K@Z.c)
 *     ?AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z @ 0x1801BFE70 (-AddPolygon@CBspNode@@AEAAJPEAVCPolygon@@@Z.c)
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x1801BFF2C (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 */

__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, bool a3)
{
  int v5; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  char *v9; // rax
  bool v10; // cl
  bool v11; // si
  char *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-20h]
  struct CPolygon *v15; // [rsp+30h] [rbp-10h] BYREF
  int v16; // [rsp+60h] [rbp+20h] BYREF
  bool v17; // [rsp+70h] [rbp+30h]
  struct CPolygon *v18; // [rsp+78h] [rbp+38h] BYREF

  v17 = a3;
  v18 = 0LL;
  v15 = 0LL;
  v16 = 0;
  if ( *((_DWORD *)this + 14) )
  {
    v7 = CPolygon::CompareAndSplit(**((CPolygon ***)this + 4), a2, (enum D2DVectorHelper::Relation *)&v16, &v18, &v15);
    v6 = v7;
    if ( v7 < 0 )
    {
      v14 = 146;
      goto LABEL_33;
    }
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v18 = a2;
      }
      else if ( v16 == 2 )
      {
        v15 = a2;
      }
    }
    else
    {
      v8 = CBspNode::AddPolygon(this, a2);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x98u);
        goto LABEL_36;
      }
    }
    if ( v18 )
    {
      if ( !*((_QWORD *)this + 2) )
      {
        v9 = (char *)CBspNode::operator new();
        if ( v9 )
        {
          *(_QWORD *)v9 = &CMILRefCountBase::`vftable';
          *(_QWORD *)v9 = &CBspNode::`vftable';
          *((_DWORD *)v9 + 2) = 0;
          *((_QWORD *)v9 + 4) = v9 + 64;
          *((_QWORD *)v9 + 5) = v9 + 64;
          v10 = v17;
          *((_DWORD *)v9 + 12) = 4;
          *(_QWORD *)(v9 + 52) = 4LL;
          v9[96] = v10;
          _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
        }
        else
        {
          v9 = 0LL;
        }
        *((_QWORD *)this + 2) = v9;
        if ( !v9 )
        {
          v6 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xABu);
          goto LABEL_34;
        }
      }
      v11 = v17;
      v7 = CBspNode::PushPolygon(*((CBspNode **)this + 2), v18, v17);
      v6 = v7;
      if ( v7 < 0 )
      {
        v14 = 173;
        goto LABEL_33;
      }
    }
    else
    {
      v11 = v17;
    }
    if ( !v15 )
      goto LABEL_34;
    if ( !*((_QWORD *)this + 3) )
    {
      v12 = (char *)CBspNode::operator new();
      if ( v12 )
      {
        *(_QWORD *)v12 = &CMILRefCountBase::`vftable';
        *(_QWORD *)v12 = &CBspNode::`vftable';
        *((_DWORD *)v12 + 2) = 0;
        *((_QWORD *)v12 + 4) = v12 + 64;
        *((_QWORD *)v12 + 5) = v12 + 64;
        *((_DWORD *)v12 + 12) = 4;
        *(_QWORD *)(v12 + 52) = 4LL;
        v12[96] = v11;
        _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      }
      else
      {
        v12 = 0LL;
      }
      *((_QWORD *)this + 3) = v12;
      if ( !v12 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xB5u);
        goto LABEL_34;
      }
    }
    v7 = CBspNode::PushPolygon(*((CBspNode **)this + 3), v15, v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
LABEL_34:
      if ( v16 == 3 )
      {
        ReleaseInterfaceNoNULL<CPolygon>((__int64)v18);
        ReleaseInterfaceNoNULL<CPolygon>((__int64)v15);
      }
      goto LABEL_36;
    }
    v14 = 183;
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v14);
    goto LABEL_34;
  }
  v5 = CBspNode::AddPolygon(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
    return (unsigned int)v6;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Au);
LABEL_36:
  if ( v6 < 0 )
  {
    ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 2);
    ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 3);
  }
  return (unsigned int)v6;
}
