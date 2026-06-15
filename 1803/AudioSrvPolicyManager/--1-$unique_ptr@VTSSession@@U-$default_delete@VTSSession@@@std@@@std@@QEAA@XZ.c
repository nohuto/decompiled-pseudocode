/*
 * XREFs of ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x180027900
 * Callers:
 *     _TSSession::Create_::_1_::dtor$1 @ 0x180037679 (_TSSession--Create_--_1_--dtor$1.c)
 * Callees:
 *     ??1TSSession@@QEAA@XZ @ 0x180024108 (--1TSSession@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<TSSession>::~unique_ptr<TSSession>(TSSession **a1)
{
  TSSession *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    TSSession::~TSSession(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x138);
  }
}
