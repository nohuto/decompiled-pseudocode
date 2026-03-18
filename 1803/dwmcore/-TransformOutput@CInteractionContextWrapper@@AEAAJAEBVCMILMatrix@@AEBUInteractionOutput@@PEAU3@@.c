/*
 * XREFs of ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1801D8368
 * Callers:
 *     ?GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x1801D71E0 (-GetBufferedOutputTransformed@CInteractionContextWrapper@@UEAAI_K0AEBVCMILMatrix@@PEAUInteractio.c)
 *     ?GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z @ 0x1801D7450 (-GetTransformedOutput@CInteractionContextWrapper@@UEAAJAEBVCMILMatrix@@PEAUInteractionOutput@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x1801C75EC (-Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z.c)
 *     ?GetMouseWheelDeviceRects@CInteractionContextWrapper@@SAJPEAUHMONITOR__@@PEAUtagRECT@@1@Z @ 0x1801D73A0 (-GetMouseWheelDeviceRects@CInteractionContextWrapper@@SAJPEAUHMONITOR__@@PEAUtagRECT@@1@Z.c)
 *     ?TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K_NPEAU2@@Z @ 0x18020E730 (-TransformOutput@CInteractionContextTransformHelper@@QEAAXAEBUInteractionOutput@@AEBUtagRECT@@1K.c)
 */

__int64 __fastcall CInteractionContextWrapper::TransformOutput(
        CInteractionContextWrapper *this,
        const struct CMILMatrix *a2,
        const struct InteractionOutput *a3,
        struct InteractionOutput *a4)
{
  HMONITOR v5; // rcx
  unsigned int MouseWheelDeviceRects; // ebx
  bool v9; // zf
  signed int LastError; // eax
  LONG v12; // xmm1_4
  LONG top; // xmm1_4
  struct tagRECT v15; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-20h] BYREF

  v5 = (HMONITOR)*((_QWORD *)this + 31);
  MouseWheelDeviceRects = 0;
  *(_QWORD *)&v15.left = 0LL;
  *(_QWORD *)&v15.right = 0LL;
  v9 = (*((_DWORD *)this + 60) & 0x180000) == 0;
  *(_QWORD *)&v16.left = 0LL;
  *(_QWORD *)&v16.right = 0LL;
  if ( v9 )
  {
    if ( (unsigned int)GetPointerDeviceRects(v5, &v15, &v16) )
    {
LABEL_7:
      CInteractionContextTransformHelper::TransformOutput(
        (CInteractionContextWrapper *)((char *)this + 336),
        a3,
        &v15,
        &v16,
        *((_DWORD *)this + 56),
        *((_BYTE *)this + 328),
        a4);
      v12 = *((_DWORD *)a4 + 11);
      v15.left = *((_DWORD *)a4 + 10);
      v15.top = v12;
      CMILMatrix::Transform(a2, (const struct MilPoint2F *)&v15, (struct MilPoint2F *)&v16, 1);
      top = v16.top;
      *((_DWORD *)a4 + 10) = v16.left;
      *((_DWORD *)a4 + 11) = top;
      *((_DWORD *)a4 + 1) = *((_DWORD *)a3 + 1);
      *(_DWORD *)a4 = *(_DWORD *)a3;
      *((_DWORD *)a4 + 5) = *((_DWORD *)a3 + 5);
      return MouseWheelDeviceRects;
    }
    LastError = GetLastError();
    MouseWheelDeviceRects = LastError;
    if ( LastError > 0 )
      MouseWheelDeviceRects = (unsigned __int16)LastError | 0x80070000;
  }
  else
  {
    MouseWheelDeviceRects = CInteractionContextWrapper::GetMouseWheelDeviceRects(v5, &v15, &v16);
  }
  if ( (MouseWheelDeviceRects & 0x80000000) == 0 )
    goto LABEL_7;
  return MouseWheelDeviceRects;
}
