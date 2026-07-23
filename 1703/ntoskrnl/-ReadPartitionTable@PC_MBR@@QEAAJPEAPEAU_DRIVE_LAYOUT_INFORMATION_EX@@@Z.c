/*
 * XREFs of ?ReadPartitionTable@PC_MBR@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140161C58
 * Callers:
 *     ?ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140162218 (-ReadPartitionTable@PC_DISK@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140268934 (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140161F84 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14016206C (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR@@QEAAKXZ @ 0x140162288 (-CheckSum@MBR@@QEAAKXZ.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x1405C263C (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 */

__int64 __fastcall PC_MBR::ReadPartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX **a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r15d
  unsigned int v4; // edi
  unsigned int v5; // r12d
  struct _DRIVE_LAYOUT_INFORMATION_EX *Pool; // rax
  struct _DRIVE_LAYOUT_INFORMATION_EX *v7; // rbx
  LARGE_INTEGER v8; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r13
  unsigned __int8 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  char v17; // al
  char v18; // r12
  unsigned int v20; // r8d
  struct _DRIVE_LAYOUT_INFORMATION_EX *v21; // rsi
  unsigned int v22; // [rsp+20h] [rbp-58h]
  int Sectors; // [rsp+24h] [rbp-54h]
  char v26; // [rsp+90h] [rbp+18h]
  unsigned int v27; // [rsp+98h] [rbp+20h]

  v27 = 0;
  v26 = 0;
  Sectors = 0;
  v2 = *((_QWORD *)*this + 6);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v22 = 0;
  *a2 = 0LL;
  Pool = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(0x270u, (unsigned __int8)a2, 0x54506350u);
  v7 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x270uLL);
  v7->PartitionStyle = 0;
  v7->Mbr.Signature = *(_DWORD *)(v2 + 440);
  v7->Mbr.CheckSum = MBR::CheckSum((MBR *)v2);
  if ( *(_WORD *)(v2 + 510) != 0xAA55 )
    goto LABEL_15;
  v9 = (unsigned __int8 *)(v2 + 450);
  while ( 2 )
  {
    v10 = 0LL;
    v11 = v9;
    v12 = 4LL;
    while ( 1 )
    {
      v13 = v3;
      if ( *v11 == 15 || *v11 == 5 )
      {
        if ( v10 )
        {
          v18 = 1;
          v26 = 1;
          goto LABEL_12;
        }
        v10 = v11 - 4;
        v5 = v27;
      }
      if ( MBR_ENTRY::Validate((MBR_ENTRY *)(v11 - 4), v5, *((_QWORD *)*this + 4)) )
      {
        v7->PartitionEntry[v3].PartitionStyle = PARTITION_STYLE_MBR;
        v7->PartitionEntry[v3].StartingOffset.QuadPart = (*((unsigned int *)v11 + 1) + (unsigned __int64)v5) << *((_DWORD *)*this + 10);
        v14 = *((unsigned int *)v11 + 2);
        v15 = *((_DWORD *)*this + 10);
        v7->PartitionEntry[v3].PartitionNumber = -1;
        v8.QuadPart = v14 << v15;
        v7->PartitionEntry[v3].PartitionLength = v8;
        v7->PartitionEntry[v3].Mbr.PartitionType = *v11;
        v7->PartitionEntry[v3].Mbr.BootIndicator = *(v11 - 4) == 0x80;
        if ( *v11 > 0xFu || (v16 = 32801, v17 = 0, !_bittest(&v16, *v11)) )
          v17 = 1;
        v18 = v26;
        ++v3;
        v7->PartitionEntry[v13].Mbr.RecognizedPartition = v17;
        v7->PartitionEntry[v13].Mbr.HiddenSectors = *((_DWORD *)v11 + 1);
        v7->PartitionEntry[v13].Mbr.PartitionId.Data1 = v7->Mbr.Signature;
        *(_QWORD *)&v7->PartitionEntry[v13].Gpt.PartitionId.Data1 = v7->PartitionEntry[v13].StartingOffset.QuadPart;
        *(_DWORD *)&v7->PartitionEntry[v13].Gpt.PartitionType.Data4[4] = 0;
      }
      else
      {
        v18 = 1;
        v26 = 1;
      }
LABEL_12:
      v11 += 16;
      if ( !--v12 )
        break;
      v5 = v22;
    }
    v4 = Sectors;
    if ( !v18 && v10 )
    {
      v20 = v27;
      v5 = *((_DWORD *)v10 + 2) + v27;
      if ( !v27 )
        v20 = *((_DWORD *)v10 + 2);
      v27 = v20;
      v22 = v5;
      v21 = (struct _DRIVE_LAYOUT_INFORMATION_EX *)PC_ENVIRONMENT::AllocatePool(144 * v3 + 624, v8.LowPart, 0x54506350u);
      if ( v21 )
      {
        memmove(v21, v7, (int)(144 * v3 + 48));
        memset(&v21->PartitionEntry[v3], 0, 0x240uLL);
        PspQueueApcSpecialApc(v7);
        v7 = v21;
        Sectors = PC_DISK::ReadSectors(*this, 1u, v5, 0LL);
        v4 = Sectors;
        if ( Sectors >= 0 )
        {
          v9 = (unsigned __int8 *)(v2 + 450);
          if ( *(_WORD *)(v2 + 510) != 0xAA55 )
            goto LABEL_15;
          continue;
        }
      }
      else
      {
        v4 = -1073741670;
      }
      if ( v7 )
        PspQueueApcSpecialApc(v7);
    }
    else
    {
LABEL_15:
      v7->PartitionCount = (v3 + 3) & 0xFFFFFFFC;
      *a2 = v7;
    }
    return v4;
  }
}
