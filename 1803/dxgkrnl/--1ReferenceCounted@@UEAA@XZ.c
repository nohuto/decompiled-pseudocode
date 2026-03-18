/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C0004674
 * Callers:
 *     ??_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z @ 0x1C000BAB0 (--_GDXGK_GAMMA_RAMP@@UEAAPEAXI@Z.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0027DA0 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C0043748 (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C00437BC (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00BC478 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ @ 0x1C0110F98 (--1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C0220F74 (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this)
{
  __int64 v2; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v2 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v2 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v2);
  }
}
