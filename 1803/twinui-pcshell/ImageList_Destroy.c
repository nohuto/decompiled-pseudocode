/*
 * XREFs of ImageList_Destroy @ 0x180101788
 * Callers:
 *     CreateBitmapFromIcon @ 0x18026F380 (CreateBitmapFromIcon.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x18010187C (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_180437588;
  if ( qword_180437588 == -1 )
  {
    GetProcFromComCtl32(&qword_180437588, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_180437588;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
