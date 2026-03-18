/*
 * XREFs of ?ReadPartitionTable@SC_MBR@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140293C6C
 * Callers:
 *     ?ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z @ 0x140292924 (-ReadPartitionTable@SC_DISK@@QEAAJPEAPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140293F58 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1401468B4 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140293A48 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?Validate@MBR_ENTRY@@QEAAEK_K@Z @ 0x140294044 (-Validate@MBR_ENTRY@@QEAAEK_K@Z.c)
 *     PspQueueApcSpecialApc @ 0x140453160 (PspQueueApcSpecialApc.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1405C9558 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 */

__int64 __fastcall SC_MBR::ReadPartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT **a2)
{
  unsigned __int8 *v2; // r13
  unsigned int v3; // r12d
  const __m128i *v4; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // edi
  char *v7; // rax
  char *v8; // rbx
  unsigned __int8 *v9; // rax
  unsigned __int8 *v10; // r14
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  char v15; // al
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // ecx
  char v19; // al
  unsigned int v20; // eax
  unsigned int v21; // r14d
  char *v22; // rsi
  int Sectors; // [rsp+20h] [rbp-68h]
  __int64 v25; // [rsp+28h] [rbp-60h]
  char v28; // [rsp+A0h] [rbp+18h]
  unsigned int v29; // [rsp+A8h] [rbp+20h]
  unsigned int v30; // [rsp+A8h] [rbp+20h]

  v2 = 0LL;
  v28 = 0;
  Sectors = 0;
  v3 = 0;
  v29 = 0;
  v4 = (const __m128i *)*((_QWORD *)*this + 24);
  v5 = 0;
  v6 = 0;
  *a2 = 0LL;
  v7 = (char *)SC_ENV::Allocate(0x270uLL);
  v8 = v7;
  if ( !v7 )
    return (unsigned int)-1073741670;
  memset(v7, 0, 0x270uLL);
  *(_DWORD *)v8 = 0;
  *((_DWORD *)v8 + 2) = v4[27].m128i_i32[2];
  *((_DWORD *)v8 + 3) = MBR_HEADER::CheckSum(v4);
  if ( v4[31].m128i_i16[7] != -21931 )
    goto LABEL_27;
  v9 = &v4[28].m128i_u8[2];
  while ( 2 )
  {
    v10 = v9;
    v11 = v29;
    v25 = 4LL;
    v12 = 4LL;
    do
    {
      v13 = 18LL * v5;
      if ( *v10 == 5 || *v10 == 15 )
      {
        if ( v2 )
        {
          v15 = 1;
          v28 = 1;
          goto LABEL_19;
        }
        v2 = v10 - 4;
        v14 = v3;
      }
      else
      {
        v14 = v11;
      }
      v30 = v14;
      if ( MBR_ENTRY::Validate((MBR_ENTRY *)(v10 - 4), v14, *((_QWORD *)*this + 22)) )
      {
        *(_DWORD *)&v8[144 * v5 + 48] = 0;
        *(_QWORD *)&v8[144 * v5 + 56] = (v30 + (unsigned __int64)*((unsigned int *)v10 + 1)) << *((_DWORD *)*this + 43);
        v16 = *((unsigned int *)v10 + 2);
        v17 = *((_DWORD *)*this + 43);
        *(_DWORD *)&v8[144 * v5 + 72] = -1;
        *(_QWORD *)&v8[144 * v5 + 64] = v16 << v17;
        v8[144 * v5 + 80] = *v10;
        v8[144 * v5 + 81] = *(v10 - 4) == 0x80;
        if ( *v10 > 0xFu || (v18 = 32801, v19 = 0, !_bittest(&v18, *v10)) )
          v19 = 1;
        v8[144 * v5++ + 82] = v19;
        *(_DWORD *)&v8[8 * v13 + 84] = *((_DWORD *)v10 + 1);
        *(_DWORD *)&v8[8 * v13 + 88] = *((_DWORD *)v8 + 2);
        *(_QWORD *)&v8[8 * v13 + 96] = *(_QWORD *)&v8[8 * v13 + 56];
        v15 = v28;
        *(_DWORD *)&v8[8 * v13 + 92] = 0;
      }
      else
      {
        v15 = 1;
        v28 = 1;
      }
      v12 = v25;
LABEL_19:
      v10 += 16;
      v25 = --v12;
    }
    while ( v12 );
    v6 = Sectors;
    if ( v15 || !v2 )
    {
LABEL_27:
      *((_DWORD *)v8 + 1) = (v5 + 3) & 0xFFFFFFFC;
      *a2 = (struct SC_DISK_LAYOUT *)v8;
    }
    else
    {
      v20 = *((_DWORD *)v2 + 2);
      v2 = 0LL;
      v21 = v20 + v3;
      if ( !v3 )
        v3 = v20;
      v29 = v21;
      v22 = (char *)SC_ENV::Allocate(144 * v5 + 624);
      if ( v22 )
      {
        memmove(v22, v8, (int)(144 * v5 + 48));
        memset(&v22[144 * v5 + 48], 0, 0x240uLL);
        PspQueueApcSpecialApc(v8);
        v8 = v22;
        Sectors = SC_DISK::ReadSectors(*this, 1, v21, 0LL);
        v6 = Sectors;
        if ( Sectors >= 0 )
        {
          v9 = &v4[28].m128i_u8[2];
          if ( v4[31].m128i_i16[7] != -21931 )
            goto LABEL_27;
          continue;
        }
      }
      else
      {
        v6 = -1073741670;
      }
      if ( v8 )
        PspQueueApcSpecialApc(v8);
    }
    return v6;
  }
}
