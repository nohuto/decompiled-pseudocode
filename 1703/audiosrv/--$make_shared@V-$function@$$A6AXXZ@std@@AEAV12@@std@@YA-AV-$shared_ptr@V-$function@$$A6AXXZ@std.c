/*
 * XREFs of ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x1800C1C14
 * Callers:
 *     ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C318C (-Initialize@WorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180045214 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall std::make_shared<std::function<void (void)>,std::function<void (void)> &>(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rbx

  v4 = operator new(0x50uLL);
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
    if ( v4 != (_DWORD *)-16LL )
      std::function<void (void)>::function<void (void)>((__int64)(v4 + 4), a2);
  }
  else
  {
    v4 = 0LL;
  }
  a1[1] = v4;
  *a1 = v4 + 4;
  return a1;
}
