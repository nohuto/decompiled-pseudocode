/*
 * XREFs of ??1ReferenceCounted@@UEAA@XZ @ 0x1C0008530
 * Callers:
 *     ??1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ @ 0x1C0043DDC (--1DMMVIDEOPRESENTSOURCESET@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ @ 0x1C0043E4C (--1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ.c)
 *     ??_GReferenceCounted@@UEAAPEAXI@Z @ 0x1C0044670 (--_GReferenceCounted@@UEAAPEAXI@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00DE5D8 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x1C01DBD0C (--1DMMVIDEOPRESENTTARGET@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ReferenceCounted::~ReferenceCounted(ReferenceCounted *this, __int64 a2)
{
  __int64 v3; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  if ( *((_DWORD *)this + 2) )
  {
    v3 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v3 + 24) = *((int *)this + 2);
    WdLogEvent5_WdError(v3);
  }
}
