/*
 * XREFs of ?WritePartitionTable@SC_MBR@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x14029408C
 * Callers:
 *     ?WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z @ 0x140292AE4 (-WritePartitionTable@SC_DISK@@QEAAJPEAVSC_DISK_LAYOUT@@@Z.c)
 *     ?CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z @ 0x140293B5C (-CreatePartitionTable@SC_MBR@@QEAAJPEAU_CREATE_DISK@@@Z.c)
 *     ?SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z @ 0x140293F58 (-SetPartition@SC_MBR@@QEAAJKPEAU_SET_PARTITION_INFORMATION_EX@@@Z.c)
 * Callees:
 *     ?ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x1401468B4 (-ReadSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z @ 0x140292BD8 (-WriteSectors@SC_DISK@@QEAAJK_KPEAX@Z.c)
 *     ?CheckSum@MBR_HEADER@@QEAAKXZ @ 0x140293A48 (-CheckSum@MBR_HEADER@@QEAAKXZ.c)
 *     ?ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z @ 0x140293A8C (-ComputeChs@MBR_ENTRY@@QEAAXPEAU_DISK_GEOMETRY@@@Z.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x1406B24E0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_MBR::WritePartitionTable(SC_DISK **this, struct SC_DISK_LAYOUT *a2)
{
  __int8 *v2; // r10
  unsigned int v4; // edx
  const __m128i *v6; // r14
  int v7; // esi
  char v8; // bp
  __int32 v9; // eax
  __int8 *v10; // r13
  __int8 *v11; // rdi
  unsigned int v12; // r12d
  __int64 v13; // r8
  char v14; // cl
  int v15; // r9d
  int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // rax
  unsigned int v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // edx
  int Sectors; // eax
  unsigned int v26; // [rsp+20h] [rbp-68h]
  unsigned __int64 v27; // [rsp+24h] [rbp-64h]
  struct _GUID v28; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0LL;
  v4 = 0;
  v27 = 0LL;
  v26 = 0;
  v6 = (const __m128i *)*((_QWORD *)*this + 24);
  v7 = 0;
  v8 = 0;
  *(_QWORD *)&v28.Data1 = 0LL;
  *(_QWORD *)v28.Data4 = 0LL;
  if ( !*((_DWORD *)a2 + 2) )
  {
    SC_ENV::CreateGuid(&v28);
    v4 = 0;
    *((_DWORD *)a2 + 2) = v28.Data1 ^ *(_DWORD *)&v28.Data4[4] ^ *(_DWORD *)v28.Data4 ^ *(_DWORD *)&v28.Data2;
    v2 = 0LL;
  }
  v9 = *((_DWORD *)a2 + 2);
  if ( v6[27].m128i_i32[2] != v9 )
  {
    v6[27].m128i_i32[2] = v9;
    v8 = 1;
    *((_DWORD *)a2 + 3) = MBR_HEADER::CheckSum(v6);
  }
  while ( 2 )
  {
    v10 = v2;
    v11 = &v6[27].m128i_i8[14];
    v12 = (unsigned int)v2;
    do
    {
      if ( v4 >= *((_DWORD *)a2 + 1) )
        break;
      v13 = 18LL * v4;
      v14 = *((_BYTE *)a2 + 144 * v4 + 80);
      if ( v14 == 5 || v14 == 15 )
      {
        if ( v10 )
          return (unsigned int)-1073741823;
        v15 = HIDWORD(v27);
        v10 = v11;
      }
      else
      {
        v15 = v27;
      }
      v16 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 36 * v4 + 23) = 0;
      *((_DWORD *)a2 + 36 * v4 + 22) = v16;
      *((_QWORD *)a2 + 18 * v4 + 12) = *((_QWORD *)a2 + 18 * v4 + 7);
      if ( *((_BYTE *)a2 + 144 * v4 + 76) != (_BYTE)v2 )
      {
        if ( v14 )
        {
          *v11 = *((_BYTE *)a2 + 144 * v4 + 81) != 0 ? 0x80 : 0;
          v11[4] = *((_BYTE *)a2 + 144 * v4 + 80);
          v17 = *((_QWORD *)a2 + 18 * v4 + 7);
          v18 = *((_DWORD *)*this + 42);
          if ( v18 )
            v17 /= (__int64)v18;
          *((_DWORD *)v11 + 2) = v17 - v15;
          v19 = *((_QWORD *)a2 + v13 + 8);
          v20 = *((_DWORD *)*this + 42);
          if ( v20 )
            v19 /= (__int64)v20;
          *((_DWORD *)v11 + 3) = v19;
          MBR_ENTRY::ComputeChs((MBR_ENTRY *)v11, (struct _DISK_GEOMETRY *)*this + 6);
          v4 = v26;
          LOBYTE(v2) = 0;
        }
        else
        {
          *(_QWORD *)v11 = 0LL;
          *((_QWORD *)v11 + 1) = 0LL;
        }
        v8 = 1;
      }
      ++v4;
      ++v12;
      v11 += 16;
      v26 = v4;
    }
    while ( v12 < 4 );
    if ( v8 )
    {
      v7 = SC_DISK::WriteSectors(*this, 1, (unsigned int)v27, 0LL);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v8 = 0;
    }
    if ( v10 )
    {
      v21 = HIDWORD(v27);
      v22 = *((_DWORD *)v10 + 2);
      v23 = v22 + HIDWORD(v27);
      if ( !HIDWORD(v27) )
        v21 = *((_DWORD *)v10 + 2);
      LODWORD(v27) = v22 + HIDWORD(v27);
      HIDWORD(v27) = v21;
      Sectors = SC_DISK::ReadSectors(*this, 1, v23, 0LL);
      v2 = 0LL;
      v7 = Sectors;
      if ( Sectors >= 0 )
      {
        v4 = v26;
        v6[31].m128i_i16[7] = -21931;
        continue;
      }
    }
    break;
  }
  return (unsigned int)v7;
}
