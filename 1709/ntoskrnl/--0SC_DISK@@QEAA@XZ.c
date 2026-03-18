/*
 * XREFs of ??0SC_DISK@@QEAA@XZ @ 0x140146BD0
 * Callers:
 *     IoVerifyPartitionTable @ 0x1405C9300 (IoVerifyPartitionTable.c)
 *     IoCreateDisk @ 0x1406B25B0 (IoCreateDisk.c)
 *     IoReadDiskSignature @ 0x1406B2660 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1406B2760 (IoReadPartitionTable.c)
 *     IoReadPartitionTableEx @ 0x1406B2940 (IoReadPartitionTableEx.c)
 *     IoSetPartitionInformation @ 0x1406B29F0 (IoSetPartitionInformation.c)
 *     IoSetPartitionInformationEx @ 0x1406B2AE0 (IoSetPartitionInformationEx.c)
 *     IoWritePartitionTable @ 0x1406B2BA0 (IoWritePartitionTable.c)
 *     IoWritePartitionTableEx @ 0x1406B2D10 (IoWritePartitionTableEx.c)
 * Callees:
 *     <none>
 */

SC_DISK *__fastcall SC_DISK::SC_DISK(SC_DISK *this)
{
  SC_DISK *result; // rax

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  *(GUID *)((char *)this + 8) = GUID_NULL;
  *((_QWORD *)this + 11) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0uLL;
  *((_QWORD *)this + 12) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0uLL;
  *((_QWORD *)this + 13) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0uLL;
  *(_QWORD *)this = &SC_DISK::`vftable';
  result = this;
  *(_OWORD *)((char *)this + 72) = 0uLL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_OWORD *)this + 9) = 0uLL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 2;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  return result;
}
