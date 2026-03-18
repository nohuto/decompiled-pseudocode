/*
 * XREFs of ??1CBspNode@@UEAA@XZ @ 0x18021EED8
 * Callers:
 *     ??_ECBspNode@@UEAAPEAXI@Z @ 0x18021EF50 (--_ECBspNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  __int64 i; // rdi

  *(_QWORD *)this = &CBspNode::`vftable';
  ReleaseInterface<CD3DSurface>((__int64 *)this + 2);
  ReleaseInterface<CD3DSurface>((__int64 *)this + 3);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    ReleaseInterfaceNoNULL<CPolygon>(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * i));
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
