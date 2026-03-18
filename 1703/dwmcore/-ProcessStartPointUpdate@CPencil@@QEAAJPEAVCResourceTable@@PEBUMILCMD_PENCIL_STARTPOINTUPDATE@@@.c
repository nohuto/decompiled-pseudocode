/*
 * XREFs of ?ProcessStartPointUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_STARTPOINTUPDATE@@@Z @ 0x18012E0B4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::ProcessStartPointUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_STARTPOINTUPDATE *a3)
{
  char *v3; // r14
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  struct CResourceTable *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (char *)this + 216;
  *((_DWORD *)this + 56) = *((_DWORD *)a3 + 4);
  v4 = 0LL;
  *((_DWORD *)this + 54) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 55) = *((_DWORD *)a3 + 3);
  if ( *((_DWORD *)this + 24) )
  {
    v6 = *((unsigned int *)this + 24);
    do
    {
      v7 = *(_QWORD *)(v4 + *((_QWORD *)this + 9));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 104) + 8LL))(*(_QWORD *)(v7 + 104));
      v9 = *(struct CResourceTable **)(v7 + 104);
      (*(void (__fastcall **)(struct CResourceTable *, char *))(*(_QWORD *)v9 + 32LL))(v9, v3);
      ReleaseInterface<IBitmapLock>((__int64 *)&v9);
      v4 += 8LL;
      --v6;
    }
    while ( v6 );
    v4 = (__int64)v9;
  }
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  ReleaseInterfaceNoNULL<CD2DPencil>(v4);
  return 0LL;
}
