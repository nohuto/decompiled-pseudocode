/*
 * XREFs of ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268C58
 * Callers:
 *     ?CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268350 (-CreatePartitionTable@PC_DISK@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 */

__int64 __fastcall PC_GPT::CreatePartitionTable(PC_GPT *this, struct _CREATE_DISK *a2)
{
  __int128 v4; // xmm0
  DWORD MaxPartitionCount; // eax
  struct _DRIVE_LAYOUT_INFORMATION_EX v7; // [rsp+20h] [rbp-D8h] BYREF

  memset(&v7.PartitionCount, 0, 0xBCuLL);
  v4 = *(_OWORD *)&a2->Mbr.Signature;
  MaxPartitionCount = a2->Gpt.MaxPartitionCount;
  v7.PartitionCount = 0;
  v7.PartitionStyle = 1;
  *(_OWORD *)&v7.Mbr.Signature = v4;
  v7.Gpt.MaxPartitionCount = MaxPartitionCount;
  return PC_GPT::WritePartitionTable(this, &v7, 1u);
}
