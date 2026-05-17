/*
 * XREFs of LdrpGetImportDescriptorForSnap @ 0x180079880
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x18002EEF8 (LdrpMapAndSnapDependency.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 *     RtlImageNtHeaderEx @ 0x180028970 (RtlImageNtHeaderEx.c)
 *     LdrpCheckPagesForTampering @ 0x180089CF4 (LdrpCheckPagesForTampering.c)
 *     LdrpMapCleanModuleView @ 0x1800D69B4 (LdrpMapCleanModuleView.c)
 */

unsigned __int64 __fastcall LdrpGetImportDescriptorForSnap(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  unsigned __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(v1 + 48), 1, 1u, &v7, &v8);
  v4 = v8;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == LdrpImageEntry && ((*((_QWORD *)&xmmword_18016F360 + 1) >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v8);
    if ( ((unsigned __int8)LdrpCheckPagesForTampering(v8 + 144, 8LL)
       || (unsigned __int8)LdrpCheckPagesForTampering(v4, v7))
      && (int)LdrpMapCleanModuleView(a1) >= 0 )
    {
      v6 = RtlpImageDirectoryEntryToDataEx(*(_QWORD *)(a1 + 184), 1, 1u, &v7, &v8);
      v4 = v8;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
