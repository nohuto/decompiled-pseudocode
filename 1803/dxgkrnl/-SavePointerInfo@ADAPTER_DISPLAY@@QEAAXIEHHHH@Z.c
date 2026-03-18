/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C0014C0C
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C009EEFC (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00AC42C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        char a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax

  v10 = a2;
  if ( a2 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 5114LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v11 = 3760 * v10;
  *(_BYTE *)(3760 * v10 + *((_QWORD *)this + 14) + 725) = a3;
  if ( a3 )
  {
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 728) = a4;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 732) = a5;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 680) = a6;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 684) = a7;
  }
}
