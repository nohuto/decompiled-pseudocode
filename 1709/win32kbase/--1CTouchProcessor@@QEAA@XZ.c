/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C0007214
 * Callers:
 *     InputUnInitialize @ 0x1C0004D90 (InputUnInitialize.c)
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C012A508 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 * Callees:
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C00073D0 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 *     ??1CBaseProcessor@@QEAA@XZ @ 0x1C0008658 (--1CBaseProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(PVOID *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _ERESOURCE *v4; // rcx

  *this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo((CTouchProcessor *)this);
  if ( this[29] )
  {
    Win32FreePool(this[29], v2, v3);
    this[29] = 0LL;
    this[29] = 0LL;
  }
  v4 = (struct _ERESOURCE *)this[28];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    ExFreePoolWithTag(this[28], 0);
    this[28] = 0LL;
  }
  *this = &CBaseProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor((CBaseProcessor *)this);
}
