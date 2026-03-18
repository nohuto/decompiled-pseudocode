/*
 * XREFs of ?SavePointerInfo@ADAPTER_DISPLAY@@QEAAXIEHHHH@Z @ 0x1C000AD3C
 * Callers:
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z @ 0x1C009E878 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@H@Z.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXIIE@Z @ 0x1C00F8758 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::SavePointerInfo(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ebp
  char v8; // di
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax

  v7 = a4;
  v8 = a3;
  v10 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 4601LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v11 = 3208 * v10;
  *(_BYTE *)(3208 * v10 + *((_QWORD *)this + 14) + 724) = v8;
  if ( v8 )
  {
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 728) = v7;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 732) = a5;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 680) = a6;
    *(_DWORD *)(v11 + *((_QWORD *)this + 14) + 684) = a7;
  }
}
