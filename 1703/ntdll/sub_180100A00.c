/*
 * XREFs of sub_180100A00 @ 0x180100A00
 * Callers:
 *     sub_180006F80 @ 0x180006F80 (sub_180006F80.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_1800F096C @ 0x1800F096C (sub_1800F096C.c)
 */

__int64 __fastcall sub_180100A00(_OWORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  int Section; // edi
  __int64 v7; // rcx
  size_t v8; // r8
  bool v9; // cc
  unsigned __int64 v11; // [rsp+50h] [rbp-29h]
  _QWORD v12[12]; // [rsp+60h] [rbp-19h] BYREF

  v11 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  Section = ZwCreateSection();
  if ( Section >= 0 )
  {
    Section = ZwMapViewOfSection();
    if ( Section >= 0 )
    {
      MEMORY[0] = *a1;
      MEMORY[0x10] = a1[1];
      MEMORY[0x20] = a1[2];
      memset(v12, 0, 0x58uLL);
      v7 = *((_QWORD *)a1 + 1);
      v12[0] = 0LL;
      v12[1] = v11;
      LODWORD(v12[3]) = 0x40000000;
      Section = sub_1800F096C(v7, (__int64)v12);
      if ( Section >= 0 )
      {
        v8 = v12[4];
        v9 = v12[4] <= a2;
        *a3 = v12[4];
        if ( v9 )
        {
          memmove(a1, 0LL, v8);
          return 0;
        }
        else
        {
          return (unsigned int)-1073741789;
        }
      }
    }
  }
  return (unsigned int)Section;
}
