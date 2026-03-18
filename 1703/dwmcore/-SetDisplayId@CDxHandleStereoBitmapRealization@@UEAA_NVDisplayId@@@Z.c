/*
 * XREFs of ?SetDisplayId@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x1801B64B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18007A1F0 (-SetDisplayId@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleStereoBitmapRealization::SetDisplayId(__int64 a1, int a2)
{
  char v4; // si
  __int64 v5; // rax

  v4 = CDxHandleBitmapRealization::SetDisplayId(a1, a2);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 424);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 252) = a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 448) + 24LL))(
        a1 + 448,
        (*(_QWORD *)(a1 + 424) + 112LL) & -(__int64)(*(_QWORD *)(a1 + 424) != 0LL));
    }
  }
  return v4;
}
