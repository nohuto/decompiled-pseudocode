/*
 * XREFs of ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x1402C9058
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C8624 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1402C875C (-CreatePartitionTable@SC_GPT@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C89CC (-ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402C8C8C (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140147C40 (RtlComputeCrc32.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1402C8718 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x1402C890C (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1402C95BC (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     PspQueueApcSpecialApc @ 0x14052A140 (PspQueueApcSpecialApc.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405F2108 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140716FB0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_GPT::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2, char a3)
{
  SC_DISK *v4; // rdx
  __int64 v6; // rbp
  int v7; // ecx
  unsigned int v8; // edx
  int v9; // r14d
  __int64 v10; // r15
  unsigned int v11; // r12d
  int Header; // edi
  int v13; // ecx
  unsigned int v14; // r14d
  unsigned int v15; // edx
  unsigned int v16; // r14d
  size_t v17; // r15
  char *v18; // rax
  char *v19; // r12
  unsigned __int64 v20; // r10
  __int64 v21; // r13
  __int64 v22; // rcx
  size_t v23; // r15
  UCHAR *v24; // rcx
  char *v25; // r15
  unsigned __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // r9
  UCHAR *v29; // r14
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // r8
  __int64 v34; // rax
  unsigned __int64 v35; // r8
  unsigned int v36; // eax
  __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rax
  __int128 v40; // xmm0
  __int64 v41; // rax
  __int64 v42; // rbx
  ULONG v43; // r8d
  __int64 v44; // rbx
  unsigned __int64 v46; // [rsp+20h] [rbp-58h]
  UCHAR *Buffer; // [rsp+28h] [rbp-50h]
  int v48; // [rsp+80h] [rbp+8h]
  int v49; // [rsp+88h] [rbp+10h]
  unsigned int v51; // [rsp+98h] [rbp+20h]

  v49 = 0;
  v4 = *this;
  v6 = *((_QWORD *)*this + 24);
  if ( a3 )
  {
    if ( *(_WORD *)(v6 + 510) == 0xAA55 )
      v49 = *(_DWORD *)(v6 + 440);
    v7 = 128;
    if ( *((_DWORD *)a2 + 10) > 0x80u )
      v7 = *((_DWORD *)a2 + 10);
    v8 = ((unsigned int)~(*((_DWORD *)v4 + 41) - 1) >> 7) & ((unsigned int)((v7 << 7) + *((_DWORD *)v4 + 41) - 1) >> 7);
    *((_DWORD *)a2 + 10) = v8;
  }
  else
  {
    v8 = *((_DWORD *)a2 + 10);
  }
  if ( !v8 )
  {
    v9 = 0;
    v10 = *((_QWORD *)*this + 24);
    v11 = ((*((_DWORD *)*this + 32) & 1) == 0) + 1;
    if ( ((*((_DWORD *)*this + 32) & 1) == 0) != -1 )
    {
      while ( 1 )
      {
        Header = SC_GPT::ReadHeader(this, v9, (struct GPT_HEADER *)v10);
        if ( Header >= 0 )
          break;
        if ( ++v9 >= v11 )
          return (unsigned int)Header;
      }
    }
    v8 = *(_DWORD *)(v10 + 80);
    *((_DWORD *)a2 + 10) = v8;
  }
  if ( *((_DWORD *)a2 + 1) <= v8 )
  {
    v13 = *((_DWORD *)*this + 43);
    v14 = ~(*((_DWORD *)*this + 41) - 1) & (*((_DWORD *)*this + 41) + (v8 << 7) - 1);
    v15 = (2 << v13) + v14;
    v16 = v14 >> v13;
    v51 = v16;
    v17 = v15;
    v18 = (char *)SC_ENV::Allocate(v15);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, v17);
      v20 = v16 + 2;
      v46 = v20;
      v21 = *((_QWORD *)*this + 22);
      v22 = 1 << *((_DWORD *)*this + 43);
      v23 = v17 - v22;
      v24 = (UCHAR *)&v19[v22];
      v25 = &v19[v23];
      Buffer = v24;
      if ( (*((_DWORD *)*this + 32) & 1) != 0 )
        v26 = v21 - 1;
      else
        v26 = v21 - v16 - 2;
      v27 = *(_QWORD *)GUID_NULL.Data4;
      v28 = 0LL;
      v48 = 0;
      if ( *((_DWORD *)a2 + 1) )
      {
        v29 = v24 + 32;
        v30 = *(_QWORD *)&GUID_NULL.Data1;
        while ( 1 )
        {
          v31 = 144 * v28;
          v32 = *((_QWORD *)a2 + 18 * v28 + 10) - v30;
          if ( !v32 )
            v32 = *(_QWORD *)((char *)a2 + v31 + 88) - v27;
          if ( v32 )
          {
            v33 = (_QWORD *)((char *)a2 + v31 + 96);
            v34 = *v33 - v30;
            if ( *v33 == v30 )
              v34 = v33[1] - v27;
            if ( !v34 )
            {
              SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + v31 + 96));
              LODWORD(v28) = v48;
              v20 = v46;
              v33 = (_QWORD *)((char *)a2 + v31 + 96);
            }
            *((_OWORD *)v29 - 2) = *(_OWORD *)((char *)a2 + v31 + 80);
            *((_OWORD *)v29 - 1) = *(_OWORD *)v33;
            v35 = *(_QWORD *)((char *)a2 + v31 + 56);
            v36 = *((_DWORD *)*this + 42);
            if ( v36 )
              v35 = (__int64)v35 / v36;
            *(_QWORD *)v29 = v35;
            v37 = *(_QWORD *)((char *)a2 + v31 + 64) - 1LL + *(_QWORD *)((char *)a2 + v31 + 56);
            v38 = *((_DWORD *)*this + 42);
            if ( v38 )
              v37 /= (__int64)v38;
            *((_QWORD *)v29 + 1) = v37;
            *((_QWORD *)v29 + 2) = *(_QWORD *)((char *)a2 + v31 + 112);
            *(_OWORD *)(v29 + 24) = *(_OWORD *)((char *)a2 + v31 + 120);
            *(_OWORD *)(v29 + 40) = *(_OWORD *)((char *)a2 + v31 + 136);
            *(_OWORD *)(v29 + 56) = *(_OWORD *)((char *)a2 + v31 + 152);
            *(_OWORD *)(v29 + 72) = *(_OWORD *)((char *)a2 + v31 + 168);
            *((_QWORD *)v29 + 11) = *(_QWORD *)((char *)a2 + v31 + 184);
            if ( v35 < v20 || v37 > v26 )
            {
              Header = -1073741811;
              goto LABEL_48;
            }
            v27 = *(_QWORD *)GUID_NULL.Data4;
            v29 += 128;
            v30 = *(_QWORD *)&GUID_NULL.Data1;
          }
          v28 = (unsigned int)(v28 + 1);
          v48 = v28;
          if ( (unsigned int)v28 >= *((_DWORD *)a2 + 1) )
          {
            v16 = v51;
            goto LABEL_39;
          }
        }
      }
      v30 = *(_QWORD *)&GUID_NULL.Data1;
LABEL_39:
      v39 = *((_QWORD *)a2 + 1) - v30;
      if ( !v39 )
        v39 = *((_QWORD *)a2 + 2) - v27;
      if ( !v39 )
      {
        SC_ENV::CreateGuid((struct _GUID *)((char *)a2 + 8));
        v20 = v46;
      }
      *(_QWORD *)v19 = 0x5452415020494645LL;
      *((_DWORD *)v19 + 2) = 0x10000;
      *((_DWORD *)v19 + 3) = 92;
      *((_QWORD *)v19 + 3) = 1LL;
      *((_QWORD *)v19 + 5) = v20;
      *((_QWORD *)v19 + 6) = v26;
      *((_QWORD *)v19 + 4) = v26 + v16 + 1LL;
      v40 = *(_OWORD *)((char *)a2 + 8);
      *((_QWORD *)v19 + 9) = 2LL;
      *(_OWORD *)(v19 + 56) = v40;
      *((_DWORD *)v19 + 20) = *((_DWORD *)a2 + 10);
      *((_DWORD *)v19 + 21) = 128;
      *((_DWORD *)v19 + 22) = RtlComputeCrc32(0, Buffer, v16 << *((_DWORD *)*this + 43));
      *((_DWORD *)v19 + 4) = RtlComputeCrc32(0, (PUCHAR)v19, 0x5Cu);
      Header = SC_DISK::WriteSectors(*this, v16 + 1, 1LL, v19);
      if ( Header >= 0 )
      {
        if ( (*((_DWORD *)*this + 32) & 1) != 0 )
          goto LABEL_46;
        *(_OWORD *)v25 = *(_OWORD *)v19;
        *((_OWORD *)v25 + 1) = *((_OWORD *)v19 + 1);
        *((_OWORD *)v25 + 2) = *((_OWORD *)v19 + 2);
        *((_OWORD *)v25 + 3) = *((_OWORD *)v19 + 3);
        *((_OWORD *)v25 + 4) = *((_OWORD *)v19 + 4);
        *((_QWORD *)v25 + 10) = *((_QWORD *)v19 + 10);
        *((_DWORD *)v25 + 22) = *((_DWORD *)v19 + 22);
        v41 = *((_QWORD *)v25 + 3);
        v42 = *((_QWORD *)v25 + 4);
        v43 = *((_DWORD *)v25 + 3);
        *((_DWORD *)v25 + 4) = 0;
        *((_QWORD *)v25 + 4) = v41;
        *((_QWORD *)v25 + 3) = v42;
        v44 = v42 - v16;
        *((_QWORD *)v25 + 9) = v44;
        *((_DWORD *)v25 + 4) = RtlComputeCrc32(0, (PUCHAR)v25, v43);
        Header = SC_DISK::WriteSectors(*this, v16 + 1, v44, Buffer);
        if ( Header >= 0 )
        {
LABEL_46:
          if ( a3 )
          {
            memset((void *)v6, 0, 0x200uLL);
            *(_DWORD *)(v6 + 440) = v49;
            *(_DWORD *)(v6 + 458) = -1;
            *(_BYTE *)(v6 + 446) = 0;
            *(_BYTE *)(v6 + 450) = -18;
            *(_DWORD *)(v6 + 454) = 1;
            MBR_ENTRY::ComputeChs((MBR_ENTRY *)(v6 + 446), (struct _DISK_GEOMETRY *)*this + 6);
            *(_WORD *)(v6 + 510) = -21931;
            Header = SC_DISK::WriteSectors(*this, 1, 0LL, 0LL);
          }
        }
      }
LABEL_48:
      PspQueueApcSpecialApc(v19);
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
