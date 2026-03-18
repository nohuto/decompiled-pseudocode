/*
 * XREFs of ?ProcessSegmentCountUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTCOUNTUPDATE@@@Z @ 0x18012DF90
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180071020 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::ProcessSegmentCountUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_SEGMENTCOUNTUPDATE *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  int v6; // esi
  unsigned int v8; // r12d
  unsigned int v9; // ebp
  unsigned int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  struct CResourceTable *v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v3 = 0;
  v4 = 0LL;
  v6 = *((_DWORD *)a3 + 2) - *((_DWORD *)this + 52);
  if ( v6 >= 0 )
  {
    v14 = DynArrayImpl<0>::Grow((__int64)this + 184, 0x14u, v6, 0, 0LL);
    v3 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x95u);
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v8 = *((_DWORD *)this + 24);
  v9 = 0;
  if ( !v8 )
  {
LABEL_9:
    *((_DWORD *)this + 52) = *((_DWORD *)a3 + 2);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    goto LABEL_11;
  }
  v10 = *((_DWORD *)this + 52) - *((_DWORD *)a3 + 2);
  v11 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + *((_QWORD *)this + 9));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 104) + 8LL))(*(_QWORD *)(v12 + 104));
    v16 = *(struct CResourceTable **)(v12 + 104);
    v4 = (__int64)v16;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, v10);
    v3 = v13;
    if ( v13 < 0 )
      break;
    ReleaseInterface<IBitmapLock>((__int64 *)&v16);
    ++v9;
    v11 += 8LL;
    if ( v9 >= v8 )
    {
      v4 = (__int64)v16;
      goto LABEL_9;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8Eu);
LABEL_11:
  ReleaseInterfaceNoNULL<CD2DPencil>(v4);
  return v3;
}
