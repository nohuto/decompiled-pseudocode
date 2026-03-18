/*
 * XREFs of ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1402C8718
 * Callers:
 *     ?VerifyPartitionTable@SC_GPT@@QEAAJE@Z @ 0x1402C8D74 (-VerifyPartitionTable@SC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1402C9058 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C9BC4 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_RAW@@QEAAJXZ @ 0x1402CA064 (-CreatePartitionTable@SC_RAW@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SC_DISK::WriteSectors(SC_DISK *this, int a2, __int64 a3, void *a4)
{
  if ( !a4 )
    a4 = (void *)*((_QWORD *)this + 24);
  return (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, void *))(*(_QWORD *)this + 64LL))(
           this,
           a3 << *((_DWORD *)this + 43),
           (unsigned int)(a2 << *((_DWORD *)this + 43)),
           a4);
}
