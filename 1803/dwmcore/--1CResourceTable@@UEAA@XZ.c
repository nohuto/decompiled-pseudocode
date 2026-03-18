/*
 * XREFs of ??1CResourceTable@@UEAA@XZ @ 0x18002D134
 * Callers:
 *     ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18002D030 (--_ECResourceTable@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z @ 0x18001F744 (--$ReleaseInterface@VCConnection@@@@YAXAEAPEAVCConnection@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResourceTable::~CResourceTable(CMILRefCountBase **this)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  CMILRefCountBase *v4; // rcx
  _QWORD *v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  void (*v9)(void); // rax

  *this = (CMILRefCountBase *)&CResourceTable::`vftable';
  v2 = (_QWORD **)(this + 8);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v5 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v6 = v3 - 1;
    v5[1] = v2;
    v7 = *v6;
    v8 = (unsigned __int64)(v6 + 1) & -(__int64)(v6 != 0LL);
    v6[1] = v8;
    v9 = *(void (**)(void))(v7 + 8);
    v6[2] = v8;
    v9();
  }
  ReleaseInterface<CConnection>(this + 7);
  v4 = this[5];
  this[2] = (CMILRefCountBase *)&HANDLE_TABLE::`vftable';
  operator delete(v4);
  *this = (CMILRefCountBase *)&CMILRefCountBase::`vftable';
}
