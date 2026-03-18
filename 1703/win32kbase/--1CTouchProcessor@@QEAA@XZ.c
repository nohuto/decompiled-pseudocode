/*
 * XREFs of ??1CTouchProcessor@@QEAA@XZ @ 0x1C006DF04
 * Callers:
 *     InputUnInitialize @ 0x1C0069278 (InputUnInitialize.c)
 *     ??_GCPTPProcessor@@AEAAPEAXI@Z @ 0x1C012ADB0 (--_GCPTPProcessor@@AEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ @ 0x1C006E050 (-CleanupCoalesceInfo@CTouchProcessor@@AEAAXXZ.c)
 */

void __fastcall CTouchProcessor::~CTouchProcessor(CTouchProcessor *this)
{
  struct _ERESOURCE *v2; // rcx

  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CTouchProcessor::CleanupCoalesceInfo(this);
  if ( *((_QWORD *)this + 26) )
  {
    Win32FreePool(*((_QWORD *)this + 26));
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    ExFreePoolWithTag(*((PVOID *)this + 25), 0);
    *((_QWORD *)this + 25) = 0LL;
  }
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  CBaseProcessor::~CBaseProcessor(this);
}
