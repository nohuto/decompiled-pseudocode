/*
 * XREFs of ?ReadPartitionTable@SC_GPT@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140292E90
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140292924 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140293150 (-SetPartition@SC_GPT@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ?ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z @ 0x140292CA8 (-ReadEntries@SC_GPT@@AEAAJPEAVGPT_HEADER@@PEAPEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140292DCC (-ReadHeader@SC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z @ 0x140293524 (-WritePartitionTable@SC_GPT@@QEAAJPEAVSC_DISK_LAYOUT@@E@Z.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405C9558 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_GPT::ReadPartitionTable(SC_GPT *this, struct SC_DISK_LAYOUT **a2)
{
  struct _GPT_ENTRY *v2; // r14
  int Header; // ebp
  char v4; // r13
  unsigned int v5; // edi
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  unsigned int v11; // r8d
  SIZE_T v12; // r15
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // r11
  unsigned int v16; // r10d
  char *v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // ecx
  struct _GPT_ENTRY *v23; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  Header = 0;
  v23 = 0LL;
  v4 = 0;
  v5 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)this + 192LL);
  *a2 = 0LL;
  v9 = ((*(_DWORD *)(*(_QWORD *)this + 128LL) & 1) == 0) + 1;
  if ( ((*(_DWORD *)(*(_QWORD *)this + 128LL) & 1) == 0) == -1 )
  {
LABEL_7:
    v10 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)this + 128LL) & 1) == 0 && !v5 && *(_QWORD *)(v8 + 32) != *(_QWORD *)(v10 + 176) - 1LL )
    {
      v4 = 1;
      v11 = (~(*(_DWORD *)(v10 + 164) - 1) & (unsigned int)(*(_DWORD *)(v8 + 80) * *(_DWORD *)(v8 + 84)
                                                          + *(_DWORD *)(v10 + 164)
                                                          - 1)) >> *(_DWORD *)(v10 + 172);
      *(_QWORD *)(v8 + 40) = v11 + 2;
      *(_QWORD *)(v8 + 48) = *(_QWORD *)(*(_QWORD *)this + 176LL) - v11 - 2LL;
    }
    v12 = (unsigned int)(144 * *(_DWORD *)(v8 + 80) + 48);
    v13 = (char *)SC_ENV::Allocate(v12);
    v14 = v13;
    if ( v13 )
    {
      memset(v13, 0, v12);
      v15 = 0LL;
      *(_DWORD *)v14 = 1;
      v16 = 0;
      *(_OWORD *)(v14 + 8) = *(_OWORD *)(v8 + 56);
      *((_QWORD *)v14 + 3) = *(_QWORD *)(v8 + 40) << *(_DWORD *)(*(_QWORD *)this + 172LL);
      *((_QWORD *)v14 + 4) = (*(_QWORD *)(v8 + 48) - *(_QWORD *)(v8 + 40) + 1LL) << *(_DWORD *)(*(_QWORD *)this + 172LL);
      for ( *((_DWORD *)v14 + 10) = *(_DWORD *)(v8 + 80); v16 < *(_DWORD *)(v8 + 80); ++v16 )
      {
        v17 = (char *)v2 + 128 * (unsigned __int64)v16;
        v18 = *(_QWORD *)v17 - *(_QWORD *)&GUID_NULL.Data1;
        if ( *(_QWORD *)v17 == *(_QWORD *)&GUID_NULL.Data1 )
          v18 = *((_QWORD *)v17 + 1) - *(_QWORD *)GUID_NULL.Data4;
        if ( v18 )
        {
          v19 = 18 * v15;
          *(_DWORD *)&v14[8 * v19 + 48] = 1;
          *(_QWORD *)&v14[8 * v19 + 56] = *((_QWORD *)v17 + 4) << *(_DWORD *)(*(_QWORD *)this + 172LL);
          v20 = *((_QWORD *)v17 + 5) - *((_QWORD *)v17 + 4) + 1LL;
          v21 = *(_DWORD *)(*(_QWORD *)this + 172LL);
          *(_DWORD *)&v14[8 * v19 + 72] = -1;
          *(_QWORD *)&v14[8 * v19 + 64] = v20 << v21;
          v15 = (unsigned int)(v15 + 1);
          *(_OWORD *)&v14[8 * v19 + 80] = *(_OWORD *)v17;
          *(_OWORD *)&v14[8 * v19 + 96] = *((_OWORD *)v17 + 1);
          *(_QWORD *)&v14[8 * v19 + 112] = *((_QWORD *)v17 + 6);
          *(_OWORD *)&v14[8 * v19 + 120] = *(_OWORD *)(v17 + 56);
          *(_OWORD *)&v14[8 * v19 + 136] = *(_OWORD *)(v17 + 72);
          *(_OWORD *)&v14[8 * v19 + 152] = *(_OWORD *)(v17 + 88);
          *(_OWORD *)&v14[8 * v19 + 168] = *(_OWORD *)(v17 + 104);
          *(_QWORD *)&v14[8 * v19 + 184] = *((_QWORD *)v17 + 15);
        }
      }
      *((_DWORD *)v14 + 1) = v15;
      if ( v4 )
        SC_GPT::WritePartitionTable(this, (struct SC_DISK_LAYOUT *)v14, 0);
      *a2 = (struct SC_DISK_LAYOUT *)v14;
    }
    else
    {
      Header = -1073741670;
    }
  }
  else
  {
    do
    {
      Header = SC_GPT::ReadHeader((SC_DISK **)this, v5, (struct GPT_HEADER *)v8);
      if ( Header >= 0 )
      {
        Header = SC_GPT::ReadEntries(this, (struct GPT_HEADER *)v8, &v23);
        if ( Header >= 0 )
          goto LABEL_6;
      }
      ++v5;
    }
    while ( v5 < v9 );
    if ( Header >= 0 )
    {
LABEL_6:
      v2 = v23;
      goto LABEL_7;
    }
    v2 = v23;
  }
  if ( v2 )
    PspQueueApcSpecialApc(v2);
  return (unsigned int)Header;
}
