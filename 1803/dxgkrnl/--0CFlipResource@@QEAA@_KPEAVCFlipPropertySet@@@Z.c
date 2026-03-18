/*
 * XREFs of ??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z @ 0x1C0051DFC
 * Callers:
 *     ?Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C0051F80 (-Create@CPoolBufferResource@@SAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourc.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C0052234 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 * Callees:
 *     <none>
 */

CFlipResource *__fastcall CFlipResource::CFlipResource(CFlipResource *this, __int64 a2, struct CFlipPropertySet *a3)
{
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &CFlipResource::`vftable';
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a2;
  if ( a3 )
    ++*((_DWORD *)a3 + 2);
  *((_QWORD *)this + 2) = (char *)this + 8;
  *((_QWORD *)this + 1) = (char *)this + 8;
  return this;
}
