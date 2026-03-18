/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0146080
 * Callers:
 *     <none>
 * Callees:
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00037E8 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000FEE4 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001555C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *i; // rcx
  char v5; // al
  char v6; // al
  bool v7; // zf
  __int64 v8; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v9);
    v3 = v2;
    if ( !v2 )
      break;
    v2[1] = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v2 + 88LL))(v2) )
      *((_DWORD *)v3 + 4) |= 2u;
    for ( i = (_QWORD *)v3[4]; i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 55);
      *((_QWORD *)this + 55) = i;
    }
  }
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CApplicationChannel *)((char *)this + 600),
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
  v5 = *((_BYTE *)this + 240);
  if ( *((_DWORD *)this + 165) )
  {
    v5 |= 0x20u;
    *((_BYTE *)this + 240) = v5;
  }
  if ( *((_DWORD *)this + 166) )
    *((_BYTE *)this + 240) = v5 | 0x40;
  v6 = *((_BYTE *)this + 241);
  if ( (v6 & 4) != 0 )
  {
    v6 |= 2u;
    *((_BYTE *)this + 241) = v6;
  }
  v7 = (*((_BYTE *)this + 240) & 1) == 0;
  *((_BYTE *)this + 241) = v6 | 8;
  *((_DWORD *)this + 6) = 0;
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 21);
    if ( !v8 || !*(_QWORD *)(v8 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0LL);
  }
}
