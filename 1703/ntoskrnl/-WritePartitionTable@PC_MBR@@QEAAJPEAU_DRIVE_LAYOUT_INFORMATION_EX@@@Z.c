/*
 * XREFs of ?WritePartitionTable@PC_MBR@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268A20
 * Callers:
 *     ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C (-WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268884 (-CreatePartitionTable@PC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140268934 (-SetPartition@PC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14016206C (-ReadSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR@@QEAAKXZ @ 0x140162288 (-CheckSum@MBR@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1402687B4 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14026994C (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x140687038 (-CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall PC_MBR::WritePartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX *a2)
{
  __int8 *v2; // r11
  DWORD v4; // edx
  PC_DISK **v5; // r9
  const __m128i *v6; // rbp
  unsigned int v7; // r15d
  int v8; // esi
  char v9; // r14
  DWORD Signature; // eax
  __int8 *v11; // r13
  __int8 *v12; // rdi
  unsigned int v13; // r12d
  BYTE PartitionType; // cl
  unsigned int v15; // r10d
  DWORD v16; // eax
  unsigned int v17; // ecx
  int Sectors; // eax
  DWORD v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+24h] [rbp-64h]
  UUID Uuid; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  v4 = 0;
  v21 = 0;
  v5 = this;
  v20 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 6);
  v7 = 0;
  v8 = 0;
  v9 = 0;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  if ( !a2->Mbr.Signature )
  {
    PC_ENVIRONMENT::CreateGuid(&Uuid);
    v4 = 0;
    v5 = this;
    v2 = 0LL;
    a2->Mbr.Signature = Uuid.Data1 ^ *(_DWORD *)&Uuid.Data4[4] ^ *(_DWORD *)Uuid.Data4 ^ *(_DWORD *)&Uuid.Data2;
  }
  Signature = a2->Mbr.Signature;
  if ( v6[27].m128i_i32[2] != Signature )
  {
    v6[27].m128i_i32[2] = Signature;
    v9 = 1;
    a2->Mbr.CheckSum = MBR::CheckSum(v6);
  }
  while ( 2 )
  {
    v11 = v2;
    v12 = &v6[27].m128i_i8[14];
    v13 = (unsigned int)v2;
    do
    {
      if ( v4 >= a2->PartitionCount )
        break;
      PartitionType = a2->PartitionEntry[v4].Mbr.PartitionType;
      if ( PartitionType == 5 || PartitionType == 15 )
      {
        if ( v11 )
          return (unsigned int)-1073741823;
        v11 = v12;
        v15 = v7;
      }
      else
      {
        v15 = v21;
      }
      v16 = a2->Mbr.Signature;
      *(_DWORD *)&a2->PartitionEntry[v4].Gpt.PartitionType.Data4[4] = 0;
      a2->PartitionEntry[v4].Mbr.PartitionId.Data1 = v16;
      *(_QWORD *)&a2->PartitionEntry[v4].Gpt.PartitionId.Data1 = a2->PartitionEntry[v4].StartingOffset.QuadPart;
      if ( a2->PartitionEntry[v4].RewritePartition != (_BYTE)v2 )
      {
        if ( PartitionType )
        {
          *v12 = a2->PartitionEntry[v4].Mbr.BootIndicator != 0 ? 0x80 : 0;
          v12[4] = a2->PartitionEntry[v4].Mbr.PartitionType;
          *((_DWORD *)v12 + 2) = (a2->PartitionEntry[v4].StartingOffset.QuadPart >> *((_DWORD *)*v5 + 10)) - v15;
          *((_DWORD *)v12 + 3) = a2->PartitionEntry[v4].PartitionLength.QuadPart >> *((_DWORD *)*v5 + 10);
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)v12, (struct _DISK_GEOMETRY *)((char *)*v5 + 8));
          v4 = v20;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_QWORD *)v12 = 0LL;
          *((_QWORD *)v12 + 1) = 0LL;
        }
        v9 = 1;
      }
      v5 = this;
      ++v4;
      ++v13;
      v20 = v4;
      v12 += 16;
    }
    while ( v13 < 4 );
    if ( v9 )
    {
      v8 = PC_DISK::WriteSectors(*this, 1u, v21, 0LL);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v9 = 0;
    }
    if ( v11 )
    {
      v17 = *((_DWORD *)v11 + 2) + v7;
      if ( !v7 )
        v7 = *((_DWORD *)v11 + 2);
      v21 = v17;
      Sectors = PC_DISK::ReadSectors(*this, 1, v17, 0LL);
      v2 = 0LL;
      v8 = Sectors;
      if ( Sectors >= 0 )
      {
        v4 = v20;
        v5 = this;
        v6[31].m128i_i16[7] = -21931;
        continue;
      }
    }
    break;
  }
  return (unsigned int)v8;
}
