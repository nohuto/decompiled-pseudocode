/*
 * XREFs of MmCreateSystemSection @ 0x140034178
 * Callers:
 *     MiCreateSectionForDriver @ 0x14045044C (MiCreateSectionForDriver.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1400CDE10 (MiSectionControlArea.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiCreateSection @ 0x14050C860 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSystemSection(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9,
        int a10)
{
  int v10; // r14d
  int i; // edi
  int Section; // esi
  __int64 v15; // rax
  __int64 v16; // rdi
  struct _FILE_OBJECT *v17; // rbx

  v10 = a10;
  for ( i = a4; ; a4 = i )
  {
    Section = MiCreateSection((unsigned int)&a8, a3, 0, a4, 16, a6, 0LL, 0, a7, 0LL, 0, v10);
    if ( Section >= 0 )
      break;
    if ( Section != -1073741740 )
      return (unsigned int)Section;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  *a1 = a8;
  v15 = MiSectionControlArea();
  v16 = v15;
  if ( v15 && *(_QWORD *)(v15 + 64) )
  {
    v17 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v15);
    CcZeroEndOfLastPage(v17);
    MiDereferenceControlAreaFile(v16, v17);
  }
  return (unsigned int)Section;
}
