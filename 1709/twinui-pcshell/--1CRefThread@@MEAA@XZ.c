/*
 * XREFs of ??1CRefThread@@MEAA@XZ @ 0x1800DE448
 * Callers:
 *     ??_ECRefThread@@MEAAPEAXI@Z @ 0x1800DE4B0 (--_ECRefThread@@MEAAPEAXI@Z.c)
 *     ??_GCDuiRefThread@@MEAAPEAXI@Z @ 0x1800DE680 (--_GCDuiRefThread@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRefThread::~CRefThread(CRefThread *this)
{
  CRefThread *v2; // rcx
  CRefThread *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CRefThread::`vftable';
  **((_DWORD **)this + 1) = 1000;
  GetProcessReference(&v3);
  v2 = v3;
  if ( v3 == this )
  {
    SetProcessReference(0LL);
    v2 = v3;
  }
  v3 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(CRefThread *))(*(_QWORD *)v2 + 16LL))(v2);
  **((_DWORD **)this + 1) = 0;
}
