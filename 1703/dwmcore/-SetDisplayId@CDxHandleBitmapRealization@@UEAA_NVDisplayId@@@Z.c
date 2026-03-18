/*
 * XREFs of ?SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18007A1F0
 * Callers:
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180036CE4 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?SetDisplayId@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x1801B64B0 (-SetDisplayId@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::SetDisplayId(__int64 a1, int a2)
{
  char v2; // si
  __int64 v5; // rax

  v2 = 0;
  if ( a2 == DisplayId::Invalid )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    v2 = 1;
  }
  else if ( a2 != *(_DWORD *)(a1 + 416) )
  {
    v5 = *(_QWORD *)(a1 + 408);
    v2 = 1;
    if ( v5 )
    {
      *(_DWORD *)(v5 + 252) = a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL))(
        a1 + 16,
        (*(_QWORD *)(a1 + 408) + 112LL) & -(__int64)(*(_QWORD *)(a1 + 408) != 0LL));
    }
  }
  *(_DWORD *)(a1 + 416) = a2;
  return v2;
}
