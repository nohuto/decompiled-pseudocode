/*
 * XREFs of ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1402C968C
 * Callers:
 *     ?CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1402C8238 (-CreatePartitionTable@SC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C9BC4 (-WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 */

__int64 __fastcall SC_MBR::CreatePartitionTable(SC_MBR *this, struct _CREATE_DISK *a2)
{
  __int64 v4; // rbx
  DWORD Signature; // eax
  _QWORD v7[24]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = *(_QWORD *)(*(_QWORD *)this + 192LL);
  memset((void *)(v4 + 446), 0, 0x40uLL);
  *(_DWORD *)(v4 + 440) = 0;
  *(_WORD *)(v4 + 510) = -21931;
  Signature = a2->Mbr.Signature;
  v7[0] = 0LL;
  LODWORD(v7[1]) = Signature;
  return SC_MBR::WritePartitionTable(this, (struct SC_DISK_LAYOUT *)v7);
}
