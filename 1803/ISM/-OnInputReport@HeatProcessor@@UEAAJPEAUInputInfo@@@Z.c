/*
 * XREFs of ?OnInputReport@HeatProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180039780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnInputReport(HeatProcessor *this, struct InputInfo *a2)
{
  __int64 v2; // rcx
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  int v7; // [rsp+38h] [rbp-10h]

  if ( *(_DWORD *)a2 == 2048 )
  {
    v2 = *((_QWORD *)this + 7);
    if ( v2 )
    {
      v4[0] = *((_DWORD *)a2 + 1);
      v5 = *((_QWORD *)a2 + 2);
      v4[1] = *((_DWORD *)a2 + 2);
      v6 = *((_QWORD *)a2 + 66);
      v7 = *((_DWORD *)a2 + 130);
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v2 + 48LL))(v2, v4);
    }
  }
  return 0LL;
}
