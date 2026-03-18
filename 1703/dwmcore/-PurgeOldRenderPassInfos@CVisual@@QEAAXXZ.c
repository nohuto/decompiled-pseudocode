/*
 * XREFs of ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180160C54
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069620 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800CD928 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CF70C (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180160DDC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CVisual::PurgeOldRenderPassInfos(CVisual *this)
{
  _BYTE *v1; // r15
  struct _LIST_ENTRY *v2; // rdi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  CVisual *v4; // rcx
  unsigned int v5; // r10d
  unsigned int v6; // r11d
  struct _LIST_ENTRY *v7; // rsi
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v9; // r14d
  unsigned int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // rdx
  struct _LIST_ENTRY **p_Blink; // [rsp+38h] [rbp-29h] BYREF
  void *v16[2]; // [rsp+48h] [rbp-19h] BYREF
  int v17; // [rsp+58h] [rbp-9h]
  __int64 v18; // [rsp+5Ch] [rbp-5h]
  _BYTE v19[48]; // [rsp+68h] [rbp+7h] BYREF

  v1 = v19;
  v16[1] = v19;
  v16[0] = v19;
  v17 = 5;
  v2 = 0LL;
  v18 = 5LL;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v7 = RenderPassInfoList;
  if ( !RenderPassInfoList )
    goto LABEL_22;
  Flink = RenderPassInfoList->Flink;
  if ( RenderPassInfoList->Flink == RenderPassInfoList )
    goto LABEL_22;
  v9 = (unsigned int)p_Blink;
  while ( 1 )
  {
    p_Blink = &Flink[-6].Blink;
    v10 = v5 + 1;
    if ( v5 + 1 >= v5 )
      v9 = v5 + 1;
    if ( v10 < v5 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10 < v5 ? 0x80070216 : 0, 0xB5u);
    }
    else
    {
      if ( v9 <= v6 )
      {
        v11 = v5;
        v5 = v9;
        *(_QWORD *)&v1[8 * v11] = p_Blink;
        HIDWORD(v18) = v9;
        goto LABEL_13;
      }
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v16, 8u, 1, &p_Blink);
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC0u);
    }
    v5 = HIDWORD(v18);
LABEL_13:
    Flink = Flink->Flink;
    if ( p_Blink[4] > v2 )
      v2 = p_Blink[4];
    if ( Flink == v7 )
      break;
    v6 = v18;
    v1 = v16[0];
  }
  if ( v5 > 1 )
  {
    v13 = 0LL;
    do
    {
      v14 = *((_QWORD *)v16[0] + v13);
      if ( *(_QWORD *)(v14 + 32) < (unsigned __int64)v2 )
      {
        CVisual::ReleaseMoveRenderPassInfoForContext(
          v4,
          *(struct CDrawingContext **)(v14 + 80),
          *((struct CMoveRenderPassInfo **)v16[0] + v13));
        v5 = HIDWORD(v18);
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < v5 );
  }
LABEL_22:
  HIDWORD(v18) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)v16, 8u);
  DynArrayImpl<1>::~DynArrayImpl<1>(v16);
}
