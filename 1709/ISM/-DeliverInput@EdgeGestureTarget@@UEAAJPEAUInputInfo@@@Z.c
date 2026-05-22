/*
 * XREFs of ?DeliverInput@EdgeGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18002D620
 * Callers:
 *     ?DeliverInput@EdgeGestureTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x18002E290 (-DeliverInput@EdgeGestureTarget@@W7EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::DeliverInput(EdgeGestureTarget *this, struct InputInfo *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( a2 )
  {
    *((_BYTE *)a2 + 690) = 1;
    *((_DWORD *)this + 14) = *((_DWORD *)a2 + 17);
    *((_DWORD *)this + 15) = *((_DWORD *)a2 + 18);
    v5 = *((_QWORD *)this + 8);
    if ( !*(_QWORD *)(v5 + 200)
      || *(_QWORD *)(v5 + 208)
      && *(_DWORD *)(v5 + 216) == 1
      && (*(int (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 320) + 24LL))(*(_QWORD *)(v5 + 320)) < 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, struct InputInfo *))(**((_QWORD **)this + 9) + 24LL))(
             *((_QWORD *)this + 9),
             a2);
      v2 = v6;
      if ( v6 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 423, v6);
    }
  }
  else
  {
    v2 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 414, 87);
  }
  return v2;
}
