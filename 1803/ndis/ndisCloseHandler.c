/*
 * XREFs of ndisCloseHandler @ 0x1C005D8C4
 * Callers:
 *     NdisWdfCloseIrpHandler @ 0x1C00622E0 (NdisWdfCloseIrpHandler.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     ndisCleanupUserOpenContext @ 0x1C005D7EC (ndisCleanupUserOpenContext.c)
 *     ndisDummyHandler @ 0x1C00E81CC (ndisDummyHandler.c)
 */

__int64 __fastcall ndisCloseHandler(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  int v10; // ebp
  _FILE_OBJECT *FileObject; // rax
  _BYTE *FsContext; // rdx

  if ( a4 )
    *a4 = 0;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)a2 == 17 )
  {
    v10 = *(_DWORD *)(a2 + 120) & 0x80;
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(0x1Au, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, a3);
    FileObject = CurrentStackLocation->FileObject;
    FsContext = FileObject->FsContext;
    FileObject->FsContext = 0LL;
    ndisCleanupUserOpenContext(a2, FsContext);
    if ( v10 )
    {
      *a4 = 1;
    }
    else
    {
      a3->IoStatus.Status = 0;
      IofCompleteRequest(a3, 2);
    }
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(0x1Bu, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, a3);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qq(0x19u, &WPP_5cfddc9aaef33c7b7f0ecdd8ea162ffb_Traceguids, a2, a3);
    return ndisDummyHandler(a1, a2, a3);
  }
}
