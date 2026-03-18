/*
 * XREFs of ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x18000189C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180001670 (-GetID2D1InkAndInkStyle@CD2DInk@@QEAAJPEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInk::ProcessBasicStateUpdate(
        CInk *this,
        struct CResourceTable *a2,
        const struct MILCMD_INK_BASICSTATEUPDATE *a3)
{
  unsigned int v3; // esi
  char *v5; // rbp
  __int64 v6; // rdx
  float *v7; // rax
  double *v8; // rcx
  double v9; // xmm0_8
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 v13; // r14
  int ID2D1InkAndInkStyle; // eax
  struct ID2D1InkStyle *v15; // rbx
  struct ID2D1Ink *v16; // [rsp+60h] [rbp+8h] BYREF
  struct ID2D1InkStyle *v17; // [rsp+68h] [rbp+10h] BYREF

  v3 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)a3 + 6) )
    *((_DWORD *)this + 49) = 1;
  else
    *((_DWORD *)this + 49) = 0;
  v5 = (char *)this + 200;
  v6 = 6LL;
  v7 = (float *)((char *)this + 200);
  v8 = (double *)((char *)a3 + 28);
  do
  {
    v9 = *v8++;
    *v7++ = v9;
    --v6;
  }
  while ( v6 );
  v10 = 0;
  v11 = *((_DWORD *)this + 24);
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 5);
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 4);
  *((_DWORD *)this + 35) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 2);
  if ( v11 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(*(CD2DInk **)(v13 + *((_QWORD *)this + 9)), &v16, &v17);
      v3 = ID2D1InkAndInkStyle;
      if ( ID2D1InkAndInkStyle < 0 )
        break;
      v15 = v17;
      (*(void (__fastcall **)(struct ID2D1InkStyle *, _QWORD))(*(_QWORD *)v17 + 48LL))(
        v17,
        *((unsigned int *)this + 49));
      (*(void (__fastcall **)(struct ID2D1InkStyle *, char *))(*(_QWORD *)v15 + 32LL))(v15, v5);
      ReleaseInterface<IBitmapLock>(&v16);
      ReleaseInterface<IBitmapLock>(&v17);
      ++v10;
      v13 += 8LL;
      if ( v10 >= v11 )
        goto LABEL_6;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ID2D1InkAndInkStyle, 0x4Cu);
  }
  else
  {
LABEL_6:
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  ReleaseInterfaceNoNULL<ID2D1Ink>(v16);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v17);
  return v3;
}
