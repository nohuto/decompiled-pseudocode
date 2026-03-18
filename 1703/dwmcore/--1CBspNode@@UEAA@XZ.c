/*
 * XREFs of ??1CBspNode@@UEAA@XZ @ 0x1801BFDDC
 * Callers:
 *     ??_ECBspNode@@UEAAPEAXI@Z @ 0x1801BFE40 (--_ECBspNode@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B5384 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ??$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z @ 0x1800CA690 (--$ReleaseInterface@VClipPlaneInfoRef@@@@YAXAEAPEAVClipPlaneInfoRef@@@Z.c)
 */

void __fastcall CBspNode::~CBspNode(CBspNode *this)
{
  __int64 i; // rdi

  *(_QWORD *)this = &CBspNode::`vftable';
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 2);
  ReleaseInterface<ClipPlaneInfoRef>((__int64 *)this + 3);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 14); i = (unsigned int)(i + 1) )
    ReleaseInterfaceNoNULL<CPolygon>(*(_QWORD *)(*((_QWORD *)this + 4) + 8 * i));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 4);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
