/*
 * XREFs of ??1TriggerTypeTriggerSetupMapping@@QEAA@XZ @ 0x180061010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TriggerTypeTriggerSetupMapping::~TriggerTypeTriggerSetupMapping(
        TriggerTypeTriggerSetupMapping *this,
        __int64 a2)
{
  char *v2; // rbx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rbx
  char *v7; // rcx
  char *v8; // rcx

  v2 = (char *)this + 40;
  v4 = (char *)*((_QWORD *)this + 8);
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v4 + 32LL))(v4, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
  v5 = (char *)*((_QWORD *)v2 + 3);
  if ( v5 )
  {
    LOBYTE(a2) = v5 != v2;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
    *((_QWORD *)v2 + 3) = 0LL;
  }
  v6 = (char *)this + 8;
  v7 = (char *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v8 = (char *)*((_QWORD *)this + 4);
  if ( v8 )
  {
    LOBYTE(a2) = v8 != v6;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v8 + 32LL))(v8, a2);
    *((_QWORD *)this + 4) = 0LL;
  }
}
