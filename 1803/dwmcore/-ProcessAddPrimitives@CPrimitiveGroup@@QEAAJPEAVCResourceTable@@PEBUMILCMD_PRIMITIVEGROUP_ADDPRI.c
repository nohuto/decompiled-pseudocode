/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180097F7C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x1800975E0 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800978F4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180097C88 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qxqq @ 0x18019F714 (McTemplateU0qxqq.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        CMILCOMBase **this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v6; // edi
  int v7; // edx
  int v8; // ecx
  CMILCOMBase *Resource; // r14
  char (__fastcall *v10)(CPrimitiveGroup *); // rax
  char IsEmptyDrawing; // al
  CMILCOMBase *v12; // rcx
  char v13; // bp
  char (__fastcall *v14)(CPrimitiveGroup *); // rax
  char v15; // al
  unsigned int v17; // [rsp+20h] [rbp-28h]

  v6 = 0;
  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x83u);
  if ( !Resource )
  {
    v17 = 184;
LABEL_17:
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, v17);
    return v6;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    v17 = 189;
    goto LABEL_17;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0qxqq(v8, v7, *((_DWORD *)a2 + 12), (_DWORD)this, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
  v10 = (char (__fastcall *)(CPrimitiveGroup *))*((_QWORD *)*this + 24);
  if ( v10 == CPrimitiveGroup::IsEmptyDrawing )
    IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)this);
  else
    IsEmptyDrawing = v10((CPrimitiveGroup *)this);
  v12 = this[53];
  v13 = IsEmptyDrawing;
  if ( v12 )
    CMILCOMBase::InternalRelease(v12);
  this[53] = Resource;
  CMILCOMBase::InternalAddRef(Resource);
  *((_DWORD *)this + 108) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 109) = *((_DWORD *)a3 + 4);
  this[63] = 0LL;
  this[64] = 0LL;
  this[65] = 0LL;
  this[66] = 0LL;
  CPrimitiveGroup::ReleasePrimitiveCaches((CPrimitiveGroup *)this, 1);
  CPrimitiveGroup::ResolveSharedMemoryBuffer((CPrimitiveGroup *)this);
  v14 = (char (__fastcall *)(CPrimitiveGroup *))*((_QWORD *)*this + 24);
  if ( v14 == CPrimitiveGroup::IsEmptyDrawing )
    v15 = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)this);
  else
    v15 = v14((CPrimitiveGroup *)this);
  if ( v13 != v15 )
    (*((void (__fastcall **)(CMILCOMBase **, __int64))*this + 8))(this, 3LL);
  return v6;
}
