/*
 * XREFs of ??1CThreadRefHost@@UEAA@XZ @ 0x1800CA590
 * Callers:
 *     ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x1800CA610 (--_GCThreadRefHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CThreadRefHost::~CThreadRefHost(CThreadRefHost *this)
{
  __int64 v2; // rcx
  struct tagMSG Msg; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)this = &CThreadRefHost::`vftable';
  SHSetThreadRef(0LL);
  v2 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  while ( *((_DWORD *)this + 2) )
  {
    if ( GetMessageW(&Msg, 0LL, 0, 0) )
    {
      TranslateMessage(&Msg);
      DispatchMessageW(&Msg);
    }
  }
}
