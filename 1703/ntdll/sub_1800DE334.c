/*
 * XREFs of sub_1800DE334 @ 0x1800DE334
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DD4D0 (RtlReportExceptionEx.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 * Callees:
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1800A5800 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1800A5C40 (ZwCreateSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_1800DE334(_QWORD *a1, _QWORD *a2)
{
  int Section; // ebx
  _QWORD v6[5]; // [rsp+58h] [rbp-28h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( a1 )
    *a1 = 0LL;
  if ( a2 )
    *a2 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v6[0] = 0LL;
      *(_OWORD *)&v6[3] = 0LL;
      LODWORD(v6[2]) = 2;
      v6[1] = 0LL;
      Section = ZwCreateSection();
      if ( Section >= 0 )
      {
        Section = ZwMapViewOfSection();
        if ( Section >= 0 )
        {
          memset(0LL, 0, 0xF8uLL);
          *a1 = 0LL;
          Section = 0;
          *a2 = 0LL;
        }
      }
    }
    else
    {
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)Section;
}
