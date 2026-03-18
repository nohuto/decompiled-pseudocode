/*
 * XREFs of ?FreeBrushMemory@@YAXPEAVBRUSH@@@Z @ 0x1C003D910
 * Callers:
 *     bDeleteBrush @ 0x1C003CFE0 (bDeleteBrush.c)
 *     ?pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z @ 0x1C0043748 (-pbrAllocBrush@BRUSHMEMOBJ@@AEAAPEAVBRUSH@@H@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C0043810 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C00439A0 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 * Callees:
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C003FD60 (--$FreeIsolatedType@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C006255C (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

void __fastcall FreeBrushMemory(ULONG_PTR BugCheckParameter2)
{
  int v1; // edx

  v1 = *(_DWORD *)(BugCheckParameter2 + 144);
  if ( v1 )
  {
    if ( v1 != 1 )
      KeBugCheckEx(0x164u, 0x19uLL, BugCheckParameter2, 0LL, 0LL);
    if ( gpTypeIsolation[3] )
      NSInstrumentation::CTypeIsolation<49152,192>::Free(gpTypeIsolation[3], BugCheckParameter2);
  }
  else
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<40960,160>>(BugCheckParameter2);
  }
}
