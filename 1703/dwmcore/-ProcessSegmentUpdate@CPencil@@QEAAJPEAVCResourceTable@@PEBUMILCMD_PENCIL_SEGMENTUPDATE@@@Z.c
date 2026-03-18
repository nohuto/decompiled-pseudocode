/*
 * XREFs of ?ProcessSegmentUpdate@CPencil@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PENCIL_SEGMENTUPDATE@@@Z @ 0x18012E170
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPencil::ProcessSegmentUpdate(
        CPencil *this,
        struct CResourceTable *a2,
        const struct MILCMD_PENCIL_SEGMENTUPDATE *a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  __int64 v5; // rdi
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rbx
  bool v15; // cf
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  struct CResourceTable *v20; // [rsp+68h] [rbp+10h] BYREF

  v20 = a2;
  v3 = 0;
  v4 = *((_DWORD *)a3 + 7);
  v5 = 0LL;
  v6 = 0;
  v8 = 5LL * *((unsigned int *)a3 + 2);
  v10 = *((_QWORD *)this + 23);
  *(_OWORD *)(v10 + 4 * v8) = *(_OWORD *)((char *)a3 + 12);
  *(_DWORD *)(v10 + 4 * v8 + 16) = v4;
  v11 = *((_DWORD *)this + 24);
  if ( v11 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + *((_QWORD *)this + 9));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v13 + 104) + 8LL))(*(_QWORD *)(v13 + 104));
      v5 = *(_QWORD *)(v13 + 104);
      v14 = *((unsigned int *)a3 + 2);
      v20 = (struct CResourceTable *)v5;
      v15 = (unsigned int)v14 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 88LL))(v5);
      v16 = *((_QWORD *)this + 23);
      if ( v15 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v5 + 80LL))(
                v5,
                (unsigned int)v14,
                v16 + 20 * v14,
                1LL);
        v3 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xBCu);
          goto LABEL_11;
        }
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, v16 + 20 * v14, 1LL);
        v3 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC3u);
          goto LABEL_11;
        }
      }
      ReleaseInterface<IBitmapLock>((__int64 *)&v20);
      ++v6;
      v12 += 8LL;
      if ( v6 >= v11 )
      {
        v5 = (__int64)v20;
        break;
      }
    }
  }
  CResource::NotifyOnChanged(this, 0LL, 0LL);
LABEL_11:
  ReleaseInterfaceNoNULL<CD2DPencil>(v5);
  return v3;
}
