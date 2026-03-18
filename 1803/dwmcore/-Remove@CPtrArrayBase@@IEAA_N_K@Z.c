/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B9558
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveAllLights@CVisual@@QEAAXXZ @ 0x18004E184 (-RemoveAllLights@CVisual@@QEAAXXZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18004E420 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E814 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004E984 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B8E94 (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18014B010 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152100 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 */

bool __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, __int64 a2)
{
  __int64 v2; // rbx
  bool result; // al
  __int64 v4; // r9
  unsigned __int64 *v5; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // r10
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  __int64 v14; // rbx

  v2 = *(_QWORD *)this;
  result = 0;
  v4 = *(_QWORD *)this & 2LL;
  v5 = (unsigned __int64 *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v4 )
    v8 = *v5;
  else
    v8 = *(_QWORD *)this & 1LL;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      if ( a2 == (v2 & 0xFFFFFFFFFFFFFFFCuLL) )
        goto LABEL_21;
    }
    else
    {
      v9 = 0LL;
      v10 = v5 + 2;
      v11 = 0LL;
      do
      {
        if ( a2 == v10[v11] )
          break;
        v9 = (unsigned int)(v9 + 1);
        v11 = (unsigned int)v9;
      }
      while ( (unsigned int)v9 < v8 );
      if ( v9 < v8 )
      {
        if ( v4 )
          v12 = *v5;
        else
          v12 = v2 & 1;
        if ( v9 >= v12 )
          return 1;
        if ( v12 != 1 )
        {
          v13 = v12 - 1;
          if ( v13 == 1 )
          {
            v14 = v10[-v9 + 1];
            operator delete(v5);
            *(_QWORD *)this = v14 | 1;
          }
          else
          {
            if ( v9 < v13 )
              memmove(&v10[v9], &v10[v9 + 1], 8 * (v13 - v9));
            *v5 = v13;
          }
          return 1;
        }
LABEL_21:
        *(_QWORD *)this = 0LL;
        return 1;
      }
    }
  }
  return result;
}
