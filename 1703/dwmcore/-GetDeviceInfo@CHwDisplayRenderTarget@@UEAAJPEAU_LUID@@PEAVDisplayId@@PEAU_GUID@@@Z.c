/*
 * XREFs of ?GetDeviceInfo@CHwDisplayRenderTarget@@UEAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x18003AAA0
 * Callers:
 *     ?GetDeviceInfo@CHwDisplayRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z @ 0x1800D6440 (-GetDeviceInfo@CHwDisplayRenderTarget@@WLA@EAAJPEAU_LUID@@PEAVDisplayId@@PEAU_GUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetDeviceInfo(
        CHwDisplayRenderTarget *this,
        struct _LUID *a2,
        struct DisplayId *a3,
        struct _GUID *a4)
{
  int v5; // ebx
  __int64 (__fastcall *v9)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **); // rax
  __int64 v10; // rax
  int v11; // edi
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v9 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *, struct CD3DDeviceLevel1 **))(*(_QWORD *)this + 208LL);
  if ( v9 == CHwDisplayRenderTarget::GetDeviceNoRef )
  {
    v10 = *((_QWORD *)this + 23);
    v11 = 0;
    v14 = v10;
  }
  else
  {
    v13 = v9(this, (struct CD3DDeviceLevel1 **)&v14);
    v11 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x34Bu);
      goto LABEL_5;
    }
    v10 = v14;
  }
  *a2 = *(struct _LUID *)(v10 + 712);
  v5 = *((_DWORD *)this + 29);
  if ( a4 )
    *a4 = *(struct _GUID *)(v10 + 1128);
LABEL_5:
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1DEu);
  }
  else if ( a3 )
  {
    *(_DWORD *)a3 = v5;
  }
  return (unsigned int)v11;
}
