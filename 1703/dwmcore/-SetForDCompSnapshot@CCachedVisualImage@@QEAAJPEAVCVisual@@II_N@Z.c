/*
 * XREFs of ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801658EC
 * Callers:
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180164F10 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180165BAC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::SetForDCompSnapshot(
        CCachedVisualImage *this,
        struct CVisual *a2,
        int a3,
        int a4,
        bool a5)
{
  int v8; // edi

  v8 = CCachedVisualImage::SetRootVisual(this, a2);
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x8E1u);
  }
  else
  {
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_DWORD *)this + 42) = 2;
    *((_BYTE *)this + 325) = a5;
    *((float *)this + 25) = (float)a4;
    *((float *)this + 24) = (float)a3;
    *((double *)this + 15) = (float)a4;
    *((double *)this + 14) = (float)a3;
    CResource::NotifyOnChanged((_DWORD *)this + 4, 0LL, 0LL);
  }
  return (unsigned int)v8;
}
