/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002EED0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C00270E4 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C0032AE4 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C008186C (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  bool v4; // zf
  __int64 v5; // rax
  _QWORD *i; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v7);
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
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 232LL));
  if ( *((_DWORD *)this + 165) )
    *((_BYTE *)this + 240) |= 0x20u;
  if ( *((_DWORD *)this + 166) )
    *((_BYTE *)this + 240) |= 0x40u;
  v4 = (*((_BYTE *)this + 240) & 1) == 0;
  *((_DWORD *)this + 6) = 0;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 21);
    if ( !v5 || !*(_QWORD *)(v5 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0LL);
  }
}
