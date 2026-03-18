/*
 * XREFs of HvHiveStartFileBacked @ 0x140496704
 * Callers:
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     SetFailureLocation @ 0x140221604 (SetFailureLocation.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpTraceHiveMountStart @ 0x1404966AC (CmpTraceHiveMountStart.c)
 *     HvpFillFileName @ 0x1404968A0 (HvpFillFileName.c)
 *     CmpTraceHiveMountStop @ 0x140496910 (CmpTraceHiveMountStop.c)
 *     HvpHeaderCheckSum @ 0x140496AEC (HvpHeaderCheckSum.c)
 *     HvLoadHive @ 0x140496B18 (HvLoadHive.c)
 */

__int64 __fastcall HvHiveStartFileBacked(
        ULONG_PTR a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _OWORD *a9,
        _OWORD *a10,
        _BYTE *a11,
        _DWORD *a12,
        __int64 a13)
{
  __int64 v15; // rdx
  unsigned int v16; // ebp
  int v17; // eax
  __int64 v18; // rbx
  __int64 Hive; // rbx
  __int64 v20; // rcx
  char *v22; // rax
  char *v23; // rsi
  int v24; // ebp
  int v25; // eax

  if ( *(_DWORD *)a1 != -1092567328 )
    __fastfail(5u);
  if ( (a3 & 0xFF617CEC) != 0 )
    __fastfail(5u);
  if ( a4 > 2 )
    __fastfail(5u);
  v15 = a6;
  if ( a6 - 1 > 7 )
    __fastfail(5u);
  v16 = a3 & 0xFFFDFFFF;
  if ( !a2 )
    v16 = a3;
  *(_DWORD *)(a1 + 160) = v16;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 24) = *a5;
    *(_QWORD *)(a1 + 32) = a5[1];
    *(_QWORD *)(a1 + 40) = a5[3];
    *(_QWORD *)(a1 + 48) = a5[4];
  }
  if ( a4 )
  {
    v17 = 4;
    if ( a4 == 1 )
      v17 = 1;
    *(_DWORD *)(a1 + 164) = v17;
  }
  else
  {
    *(_DWORD *)(a1 + 164) = 0;
  }
  *(_DWORD *)(a1 + 132) = 4096;
  *(_QWORD *)(a1 + 8) = HvpGetCellPaged;
  *(_DWORD *)(a1 + 136) = a6;
  *(_QWORD *)(a1 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(a1 + 208) = 2;
  v18 = MEMORY[0xFFFFF78000000014];
  if ( a2 )
  {
    LOBYTE(v15) = 1;
    v22 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(
                    *(unsigned int *)(a1 + 132),
                    v15,
                    825314627LL);
    v23 = v22;
    if ( !v22 )
    {
      LODWORD(Hive) = -1073741670;
      SetFailureLocation(a13, 0, 24, -1073741670, 16);
      return (unsigned int)Hive;
    }
    memset(v22, 0, *(unsigned int *)(a1 + 132));
    *((_DWORD *)v23 + 7) = 0;
    *((_DWORD *)v23 + 9) = -1;
    *((_DWORD *)v23 + 10) = 0;
    *(_DWORD *)v23 = 1718052210;
    *((_DWORD *)v23 + 1) = 1;
    *((_DWORD *)v23 + 2) = 1;
    *((_DWORD *)v23 + 8) = 1;
    *((_DWORD *)v23 + 11) = 1;
    HvpFillFileName(v23, a8);
    *((_DWORD *)v23 + 36) = 0;
    v24 = v16 & 0x80000;
    if ( v24 )
      *((_DWORD *)v23 + 36) = 2;
    *((_DWORD *)v23 + 5) = 1;
    v25 = v24 != 0 ? 6 : 3;
    *((_DWORD *)v23 + 6) = v25;
    *(_DWORD *)(a1 + 212) = v25;
    *((_DWORD *)v23 + 41) = 1836346738;
    *(_QWORD *)(v23 + 12) = v18;
    if ( a9 )
    {
      *((_OWORD *)v23 + 7) = *a9;
      *((_OWORD *)v23 + 8) = *a9;
    }
    if ( a10 )
      *(_OWORD *)(v23 + 148) = *a10;
    *((_DWORD *)v23 + 127) = HvpHeaderCheckSum(v23);
    *(_QWORD *)(a1 + 64) = v23;
    *(_DWORD *)(a1 + 180) = 1;
    *(_DWORD *)(a1 + 168) = 1;
    *(_DWORD *)(a1 + 172) = 1;
    *(_BYTE *)(a1 + 190) = 1;
    if ( a12 )
      *a12 = 825314627;
  }
  else
  {
    CmpTraceHiveMountStart();
    Hive = (unsigned int)HvLoadHive(a1);
    CmpTraceHiveMountStop(Hive);
    if ( (int)Hive < 0 )
    {
      SetFailureLocation(a13, 0, 24, Hive, 64);
      return (unsigned int)Hive;
    }
    if ( (_DWORD)Hive == 1073741833 && a11 )
      *a11 = 1;
    if ( a12 )
      *a12 = 825445699;
    v20 = *(_QWORD *)(a1 + 64);
    if ( (*(_DWORD *)(v20 + 144) & 1) != 0 )
    {
      HvMarkBaseBlockDirty(a1);
      if ( a11 )
        *a11 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) &= ~1u;
      v20 = *(_QWORD *)(a1 + 64);
    }
    HvpFillFileName(v20, a8);
  }
  LODWORD(Hive) = 0;
  return (unsigned int)Hive;
}
