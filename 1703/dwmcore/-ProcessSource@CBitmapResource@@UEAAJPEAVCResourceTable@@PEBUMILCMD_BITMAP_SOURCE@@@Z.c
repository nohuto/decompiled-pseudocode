/*
 * XREFs of ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAP_SOURCE@@@Z @ 0x18007CF50
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800C6190 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAP_SOURCE *a3)
{
  struct IBitmapSource **v3; // rdi
  unsigned int v6; // ebx
  int (__fastcall ***v7)(_QWORD, GUID *, struct IBitmapSource **); // rcx
  int BitmapFromWICBitmapSource; // eax
  int v9; // eax
  __int64 v10; // rcx
  int BitmapFromMemory; // eax
  int v13; // eax
  _DWORD v14[6]; // [rsp+40h] [rbp-18h] BYREF

  v3 = (struct IBitmapSource **)((char *)this + 80);
  v6 = 0;
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
  v7 = (int (__fastcall ***)(_QWORD, GUID *, struct IBitmapSource **))*((_QWORD *)a3 + 1);
  if ( v7 )
  {
    if ( (**v7)(v7, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, v3) < 0 )
    {
      BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(*((struct IWICBitmapSource **)a3 + 1), v3);
      v6 = BitmapFromWICBitmapSource;
      if ( BitmapFromWICBitmapSource < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromWICBitmapSource, 0x59u);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)*v3 + 48LL))(
               *v3,
               (char *)this + 72,
               (char *)this + 76);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x5Bu);
      }
    }
  }
  else
  {
    v14[2] = 0;
    v14[0] = 87;
    v14[1] = 1;
    BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                         1u,
                         1u,
                         (const struct PixelFormatInfo *)v14,
                         4u,
                         4u,
                         &byte_180241BB8,
                         0LL,
                         v3);
    v6 = BitmapFromMemory;
    if ( BitmapFromMemory < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromMemory, 0x71u);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)*v3 + 48LL))(
              *v3,
              (char *)this + 72,
              (char *)this + 76);
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x73u);
    }
  }
  v10 = *((_QWORD *)a3 + 1);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  CResource::NotifyOnChanged((_DWORD *)this + 4, 0LL, 0LL);
  return v6;
}
