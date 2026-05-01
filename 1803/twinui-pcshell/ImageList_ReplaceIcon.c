/*
 * XREFs of ImageList_ReplaceIcon @ 0x1801017D4
 * Callers:
 *     CreateBitmapFromIcon @ 0x18026F380 (CreateBitmapFromIcon.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x18010187C (_GetProcFromComCtl32.c)
 */

int __stdcall ImageList_ReplaceIcon(HIMAGELIST himl, int i, HICON hicon)
{
  __int64 (__fastcall *v3)(HIMAGELIST, __int64, HICON); // rax

  v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_180437580;
  if ( qword_180437580 == -1 )
  {
    GetProcFromComCtl32(&qword_180437580, "ImageList_ReplaceIcon");
    v3 = (__int64 (__fastcall *)(HIMAGELIST, __int64, HICON))qword_180437580;
  }
  if ( v3 )
    return v3(himl, 0xFFFFFFFFLL, hicon);
  else
    return -1;
}
