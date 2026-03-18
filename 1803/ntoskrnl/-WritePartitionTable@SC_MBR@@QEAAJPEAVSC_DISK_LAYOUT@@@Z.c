/*
 * XREFs of ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C9BC4
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x1402C8624 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x1402C968C (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x1402C9A90 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x14015D128 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1402C8718 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x1402C9578 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x1402C95BC (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140716FB0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_MBR::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2)
{
  __int8 *v2; // r10
  unsigned int v4; // edx
  const __m128i *v6; // r14
  int v7; // edi
  int v8; // esi
  char v9; // bp
  unsigned int v10; // eax
  __int8 *v11; // rdi
  __int8 *v12; // r15
  unsigned int v13; // r13d
  __int64 v14; // r8
  char v15; // cl
  int v16; // r9d
  int v17; // eax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // r8
  int Sectors; // eax
  unsigned int v24; // [rsp+20h] [rbp-68h]
  unsigned __int64 v25; // [rsp+24h] [rbp-64h]
  int v26; // [rsp+2Ch] [rbp-5Ch]
  struct _GUID v27; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  v4 = 0;
  v25 = 0LL;
  v24 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 24);
  v7 = 0;
  v8 = 0;
  *(_QWORD *)&v27.Data1 = 0LL;
  v9 = 0;
  *(_QWORD *)v27.Data4 = 0LL;
  v10 = *((_DWORD *)a2 + 2);
  if ( !v10 )
  {
    SC_ENV::CreateGuid(&v27);
    v4 = 0;
    v10 = *(_DWORD *)&v27.Data4[4] ^ *(_DWORD *)v27.Data4 ^ *(_DWORD *)&v27.Data2 ^ v27.Data1;
    *((_DWORD *)a2 + 2) = v10;
    v2 = 0LL;
  }
  if ( v6[27].m128i_i32[2] != v10 )
  {
    v6[27].m128i_i32[2] = v10;
    v9 = 1;
    *((_DWORD *)a2 + 3) = MBR_HEADER::CheckSum(v6);
  }
  while ( 2 )
  {
    v26 = v7;
    v11 = &v6[27].m128i_i8[14];
    v12 = v2;
    v13 = (unsigned int)v2;
    do
    {
      if ( v4 >= *((_DWORD *)a2 + 1) )
        break;
      v14 = 18LL * v4;
      v15 = *((_BYTE *)a2 + 144 * v4 + 80);
      if ( v15 == 5 || v15 == 15 )
      {
        if ( v12 )
          return (unsigned int)-1073741823;
        v16 = HIDWORD(v25);
        v12 = v11;
      }
      else
      {
        v16 = v25;
      }
      v17 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 36 * v4 + 23) = 0;
      *((_DWORD *)a2 + 36 * v4 + 22) = v17;
      *((_QWORD *)a2 + 18 * v4 + 12) = *((_QWORD *)a2 + 18 * v4 + 7);
      if ( *((_BYTE *)a2 + 144 * v4 + 76) != (_BYTE)v2 )
      {
        if ( v15 )
        {
          *v11 = *((_BYTE *)a2 + 144 * v4 + 81) != 0 ? 0x80 : 0;
          v11[4] = *((_BYTE *)a2 + 144 * v4 + 80);
          v18 = *((_QWORD *)a2 + 18 * v4 + 7);
          v19 = *((_DWORD *)*this + 42);
          if ( v19 )
            v18 /= (__int64)v19;
          *((_DWORD *)v11 + 2) = v18 - v16;
          v20 = *((_QWORD *)a2 + v14 + 8);
          if ( *((_DWORD *)*this + 42) )
            v20 /= (__int64)*((unsigned int *)*this + 42);
          *((_DWORD *)v11 + 3) = v20;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)v11, (struct _DISK_GEOMETRY *)*this + 6);
          v4 = v24;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_QWORD *)v11 = 0LL;
          *((_QWORD *)v11 + 1) = 0LL;
        }
        v9 = 1;
      }
      ++v4;
      ++v13;
      v11 += 16;
      v24 = v4;
    }
    while ( v13 < 4 );
    if ( v9 )
    {
      v8 = SC_DISK::WriteSectors(*this, 1, (unsigned int)v25, 0LL);
      if ( v8 < 0 )
        return (unsigned int)v8;
      v9 = 0;
    }
    if ( v12 )
    {
      v7 = *((_DWORD *)v12 + 2);
      LODWORD(v25) = v7 + HIDWORD(v25);
      v21 = (unsigned int)(v7 + HIDWORD(v25));
      if ( v26 )
        v7 = v26;
      HIDWORD(v25) = v7;
      Sectors = SC_DISK::ReadSectors(*this, 1, v21, 0LL);
      v2 = 0LL;
      v8 = Sectors;
      if ( Sectors >= 0 )
      {
        v4 = v24;
        v6[31].m128i_i16[7] = -21931;
        continue;
      }
    }
    break;
  }
  return (unsigned int)v8;
}
