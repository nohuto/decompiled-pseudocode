/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C000504C
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C0015410 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0020CE0 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C0034A58 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C0034ACC (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00A49FC (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C01D92F4 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01F460C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v2 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v2 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v2);
  }
}
