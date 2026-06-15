/*
 * XREFs of ?Initialize@WorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C0C00
 * Callers:
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800C1F24 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18000C88C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002B220 (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18005B1D0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWorkFifo::WorkItem::Initialize(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  _DWORD *v5; // rbx
  std::_Ref_count_base *v6; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v5 = operator new(0x50uLL);
    if ( v5 )
    {
      v5[2] = 1;
      v5[3] = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
      if ( v5 != (_DWORD *)-16LL )
        std::function<void (void)>::function<void (void)>((_QWORD *)v5 + 2, (__int64)a2);
    }
    else
    {
      v5 = 0LL;
    }
    v6 = (std::_Ref_count_base *)a1[1];
    a1[1] = v5;
    *a1 = v5 + 4;
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  catch ( std::bad_alloc )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
      (const char *)0x8007000ELL);
    std::_Func_class<void,>::_Tidy(a2, v8);
    return 2147942414LL;
  }
  std::_Func_class<void,>::_Tidy(a2, v4);
  return 0LL;
}
