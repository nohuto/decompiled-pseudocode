/*
 * XREFs of ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0
 * Callers:
 *     ?WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x14026842C (-WritePartitionTable@PC_DISK@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140268C58 (-CreatePartitionTable@PC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z @ 0x140268EC4 (-ReadPartitionTable@PC_GPT@@QEAAJPEAPEAU_DRIVE_LAYOUT_INFORMATION_EX@@@Z.c)
 *     ?SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140269138 (-SetPartition@PC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140134030 (RtlComputeCrc32.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1402687B4 (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140268E04 (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z @ 0x14026994C (-WriteSectors@PC_DISK@@QEAAJK_KPEAX@Z.c)
 *     PspQueueApcSpecialApc @ 0x14044FB60 (PspQueueApcSpecialApc.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x1405C263C (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 *     ?CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z @ 0x140687038 (-CreateGuid@PC_ENVIRONMENT@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall PC_GPT::WritePartitionTable(PC_DISK **this, struct _DRIVE_LAYOUT_INFORMATION_EX *a2, char a3)
{
  PC_DISK *v4; // rdx
  __int64 v6; // rbp
  DWORD MaxPartitionCount; // ecx
  int v8; // r14d
  __int64 v9; // r15
  int Header; // edi
  DWORD v11; // edx
  DWORD v12; // edx
  int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  char *Pool; // rax
  char *v17; // r15
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  char *v21; // r13
  unsigned __int64 v22; // r9
  UCHAR *v23; // r12
  __int64 v24; // rcx
  UCHAR *v25; // r14
  __int64 v26; // rdi
  __int64 v27; // rax
  UUID *v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r10
  __int64 v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // rax
  __int64 v35; // rcx
  ULONG v36; // r8d
  unsigned __int64 v38; // [rsp+20h] [rbp-68h]
  unsigned __int64 v39; // [rsp+28h] [rbp-60h]
  UCHAR *v40; // [rsp+30h] [rbp-58h]
  int v41; // [rsp+90h] [rbp+8h]
  int v42; // [rsp+98h] [rbp+10h]
  unsigned int v44; // [rsp+A8h] [rbp+20h]

  v42 = 0;
  v4 = *this;
  v6 = *((_QWORD *)*this + 6);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v42 = *(_DWORD *)(v6 + 440);
    MaxPartitionCount = 128;
    if ( a2->Gpt.MaxPartitionCount > 0x80 )
      MaxPartitionCount = a2->Gpt.MaxPartitionCount;
    a2->Gpt.MaxPartitionCount = ((unsigned int)~(*((_DWORD *)v4 + 7) - 1) >> 7) & ((*((_DWORD *)v4 + 7)
                                                                                  + (MaxPartitionCount << 7)
                                                                                  - 1) >> 7);
  }
  if ( !a2->Gpt.MaxPartitionCount )
  {
    v8 = 0;
    v9 = *((_QWORD *)*this + 6);
    while ( 1 )
    {
      Header = PC_GPT::ReadHeader(this, v8, (struct GPT_HEADER *)v9);
      if ( Header >= 0 )
        break;
      if ( (unsigned int)++v8 >= 2 )
        return (unsigned int)Header;
    }
    a2->Gpt.MaxPartitionCount = *(_DWORD *)(v9 + 80);
  }
  v11 = a2->Gpt.MaxPartitionCount;
  if ( a2->PartitionCount <= v11 )
  {
    v12 = v11 << 7;
    v13 = *((_DWORD *)*this + 10);
    v14 = (~(*((_DWORD *)*this + 7) - 1) & (*((_DWORD *)*this + 7) + v12 - 1)) >> v13;
    v15 = (2 << v13) + (~(*((_DWORD *)*this + 7) - 1) & (*((_DWORD *)*this + 7) + v12 - 1));
    v44 = v14;
    Pool = (char *)PC_ENVIRONMENT::AllocatePool(v15, v12, 0x54506350u);
    v17 = Pool;
    if ( Pool )
    {
      memset(Pool, 0, v15);
      v18 = 0LL;
      v41 = 0;
      v19 = *(_QWORD *)VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data4;
      v20 = 1 << *((_DWORD *)*this + 10);
      v39 = v14 + 2;
      v21 = &v17[v15 - v20];
      v22 = *((_QWORD *)*this + 4) - v14 - 2LL;
      v23 = (UCHAR *)&v17[v20];
      v24 = *(_QWORD *)&VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data1;
      v40 = v23;
      v38 = v22;
      if ( a2->PartitionCount )
      {
        v25 = v23 + 48;
        while ( 1 )
        {
          v26 = v18;
          v27 = *(_QWORD *)&a2->PartitionEntry[v18].Mbr.PartitionType - v24;
          if ( !v27 )
            v27 = *(_QWORD *)a2->PartitionEntry[v18].Gpt.PartitionType.Data4 - v19;
          if ( v27 )
          {
            v28 = (UUID *)((char *)a2 + 144 * v18);
            v29 = *(_QWORD *)&v28[6].Data1 - v24;
            if ( !v29 )
              v29 = *(_QWORD *)v28[6].Data4 - v19;
            if ( !v29 )
            {
              PC_ENVIRONMENT::CreateGuid(v28 + 6);
              LODWORD(v18) = v41;
              v22 = v38;
            }
            *((_OWORD *)v25 - 3) = *(_OWORD *)&a2->PartitionEntry[v26].Mbr.PartitionType;
            *((UUID *)v25 - 2) = v28[6];
            v30 = a2->PartitionEntry[v26].StartingOffset.QuadPart >> *((_DWORD *)*this + 10);
            *((_QWORD *)v25 - 2) = v30;
            v31 = (a2->PartitionEntry[v26].PartitionLength.QuadPart + a2->PartitionEntry[v26].StartingOffset.QuadPart
                                                                    - 1) >> *((_DWORD *)*this + 10);
            *((_QWORD *)v25 - 1) = v31;
            *(_QWORD *)v25 = a2->PartitionEntry[v26].Gpt.Attributes;
            *(_OWORD *)(v25 + 8) = *(_OWORD *)a2->PartitionEntry[v26].Gpt.Name;
            *(_OWORD *)(v25 + 24) = *(_OWORD *)&a2->PartitionEntry[v26].Gpt.Name[8];
            *(_OWORD *)(v25 + 40) = *(_OWORD *)&a2->PartitionEntry[v26].Gpt.Name[16];
            *(_OWORD *)(v25 + 56) = *(_OWORD *)&a2->PartitionEntry[v26].Gpt.Name[24];
            *((_QWORD *)v25 + 9) = *(_QWORD *)&a2->PartitionEntry[v26].Gpt.Name[32];
            if ( v30 < v39 || v31 > v22 )
            {
              Header = -1073741811;
              goto LABEL_39;
            }
            v19 = *(_QWORD *)VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data4;
            v25 += 128;
            v24 = *(_QWORD *)&VIRTUAL_STORAGE_TYPE_VENDOR_UNKNOWN.Data1;
          }
          v18 = (unsigned int)(v18 + 1);
          v41 = v18;
          if ( (unsigned int)v18 >= a2->PartitionCount )
          {
            v14 = v44;
            v23 = v40;
            break;
          }
        }
      }
      v32 = *(_QWORD *)&a2->Mbr - v24;
      if ( !v32 )
        v32 = *(_QWORD *)a2->Gpt.DiskId.Data4 - v19;
      if ( !v32 )
      {
        PC_ENVIRONMENT::CreateGuid(&a2->Gpt.DiskId);
        v22 = v38;
      }
      *((_DWORD *)v17 + 2) = 0x10000;
      *(_QWORD *)v17 = 0x5452415020494645LL;
      *((_DWORD *)v17 + 3) = 92;
      *((_QWORD *)v17 + 3) = 1LL;
      *((_QWORD *)v17 + 4) = *((_QWORD *)*this + 4) - 1LL;
      *((_QWORD *)v17 + 5) = v39;
      *((_QWORD *)v17 + 6) = v22;
      v33 = *(_OWORD *)&a2->Mbr.Signature;
      *((_QWORD *)v17 + 9) = 2LL;
      *(_OWORD *)(v17 + 56) = v33;
      *((_DWORD *)v17 + 20) = a2->Gpt.MaxPartitionCount;
      *((_DWORD *)v17 + 21) = 128;
      *((_DWORD *)v17 + 22) = RtlComputeCrc32(0, v23, v14 << *((_DWORD *)*this + 10));
      *((_DWORD *)v17 + 4) = RtlComputeCrc32(0, (PUCHAR)v17, 0x5Cu);
      *(_OWORD *)v21 = *(_OWORD *)v17;
      *((_OWORD *)v21 + 1) = *((_OWORD *)v17 + 1);
      *((_OWORD *)v21 + 2) = *((_OWORD *)v17 + 2);
      *((_OWORD *)v21 + 3) = *((_OWORD *)v17 + 3);
      *((_OWORD *)v21 + 4) = *((_OWORD *)v17 + 4);
      *((_QWORD *)v21 + 10) = *((_QWORD *)v17 + 10);
      *((_DWORD *)v21 + 22) = *((_DWORD *)v17 + 22);
      v34 = *((_QWORD *)v21 + 3);
      v35 = *((_QWORD *)v21 + 4);
      v36 = *((_DWORD *)v21 + 3);
      *((_QWORD *)v21 + 3) = v35;
      *((_QWORD *)v21 + 4) = v34;
      *((_DWORD *)v21 + 4) = 0;
      *((_QWORD *)v21 + 9) = v35 - v14;
      *((_DWORD *)v21 + 4) = RtlComputeCrc32(0, (PUCHAR)v21, v36);
      Header = PC_DISK::WriteSectors(*this, v14 + 1, *((_QWORD *)v17 + 3), v17);
      if ( Header >= 0 )
      {
        Header = PC_DISK::WriteSectors(*this, v14 + 1, *((_QWORD *)v21 + 9), v23);
        if ( Header >= 0 )
        {
          if ( a3 )
          {
            memset((void *)v6, 0, 0x200uLL);
            *(_DWORD *)(v6 + 440) = v42;
            *(_DWORD *)(v6 + 458) = -1;
            *(_BYTE *)(v6 + 446) = 0;
            *(_BYTE *)(v6 + 450) = -18;
            *(_DWORD *)(v6 + 454) = 1;
            MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)((char *)*this + 8));
            *(_WORD *)(v6 + 510) = -21931;
            Header = PC_DISK::WriteSectors(*this, 1u, 0LL, 0LL);
          }
        }
      }
LABEL_39:
      PspQueueApcSpecialApc(v17);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Header;
}
