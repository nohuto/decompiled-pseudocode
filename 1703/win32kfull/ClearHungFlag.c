/*
 * XREFs of ClearHungFlag @ 0x1C005EE68
 * Callers:
 *     xxxHungAppDemon @ 0x1C0049F40 (xxxHungAppDemon.c)
 *     xxxBeginPaint @ 0x1C005DAD0 (xxxBeginPaint.c)
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     InternalInvalidate3 @ 0x1C0066B30 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C00686A0 (xxxInternalDoSyncPaint.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00CC88C (xxxSimpleDoSyncPaint.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C001C6B0 (DwmAsyncChildStyleChange.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E548C (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, __int16 a2)
{
  int v3; // ebp
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edi
  __int64 v12; // rcx
  int v13; // esi
  void *v14; // rax

  v3 = *((_DWORD *)a1 + 17);
  v4 = *((_DWORD *)a1 + 16);
  v5 = *((_DWORD *)a1 + 76);
  v6 = *((_BYTE *)a1 + 59) & 0x18;
  *((_BYTE *)a1 + HIBYTE(a2) + 56) &= ~(_BYTE)a2;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    v11 = *((_DWORD *)a1 + 17);
    v12 = *((unsigned int *)a1 + 16);
    v8 = *((unsigned int *)a1 + 76);
    if ( v3 != v11 )
      goto LABEL_13;
    if ( v4 == (_DWORD)v12 && v5 == (_DWORD)v8 )
      goto LABEL_5;
    if ( v3 == v11 )
    {
      if ( v4 == (_DWORD)v12 )
      {
        result = v5 ^ (unsigned int)v8;
        if ( (result & 0x5C00300) == 0 )
          goto LABEL_5;
        v13 = -268435456;
        v11 = *((_DWORD *)a1 + 76);
      }
      else
      {
        result = v4 ^ (unsigned int)v12;
        if ( (result & 0x4E27A9) == 0 )
          goto LABEL_5;
        v13 = -20;
        v11 = *((_DWORD *)a1 + 16);
      }
    }
    else
    {
LABEL_13:
      result = v3 ^ (unsigned int)v11;
      if ( (result & 0xB9CF0000) == 0 )
        goto LABEL_5;
      v13 = -16;
    }
    v14 = (void *)ReferenceDwmApiPort(v12, v8, v9, v10);
    result = DwmAsyncChildStyleChange(v14, *(_QWORD *)a1, v13, v11);
  }
LABEL_5:
  if ( (*((_BYTE *)a1 + 59) & 0x18) == 0 )
  {
    if ( v6 )
      return VWPLRemoveBase(gpvwplHungRedraw, v8, a1, v10, 0LL);
  }
  return result;
}
