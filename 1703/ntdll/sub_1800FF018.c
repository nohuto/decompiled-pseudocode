/*
 * XREFs of sub_1800FF018 @ 0x1800FF018
 * Callers:
 *     sub_1800FEF2C @ 0x1800FEF2C (sub_1800FEF2C.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 */

__int64 __fastcall sub_1800FF018(__int64 a1)
{
  int i; // eax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // ebx
  signed __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 v9; // [rsp+50h] [rbp-39h]
  _QWORD v10[16]; // [rsp+60h] [rbp-29h] BYREF
  signed __int64 v11; // [rsp+F8h] [rbp+6Fh]

  v11 = 0x10000LL;
  for ( i = ZwCreateSection(); ; i = ZwCreateSection() )
  {
    v5 = i;
    if ( i < 0 )
      break;
    memset(v10, 0, 0x58uLL);
    v3 = *(_QWORD *)(a1 + 8);
    v10[0] = 0LL;
    v10[1] = v11;
    LODWORD(v10[3]) = 0x20000000;
    v4 = sub_1800F096C(v3, (__int64)v10);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v6 = 0LL;
      v9 = 0LL;
      if ( v11 > 0 )
      {
        while ( (unsigned __int64)v6 < v10[4] )
        {
          v5 = ZwMapViewOfSection();
          if ( v5 < 0 )
            return (unsigned int)v5;
          v7 = (unsigned __int64)(v9 + 0x10000) <= v10[4] ? 0x10000LL : v10[4] - v9;
          v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 16))(0LL, v7, *(_QWORD *)(a1 + 24));
          if ( v5 < 0 )
            return (unsigned int)v5;
          ZwUnmapViewOfSection();
          v6 = v9 + 0x10000;
          v9 = v6;
          if ( v6 >= v11 )
            break;
        }
      }
      return 0;
    }
    if ( v4 != -1073741789 )
      return (unsigned int)v5;
    ZwClose();
    v11 = (v10[4] + 0xFFFFLL) & 0xFFFFFFFFFFFF0000uLL;
  }
  return (unsigned int)v5;
}
