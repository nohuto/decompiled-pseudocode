/*
 * XREFs of ClearHungFlag @ 0x1C0061BB8
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     InternalInvalidate3 @ 0x1C006AFA4 (InternalInvalidate3.c)
 *     xxxInternalDoSyncPaint @ 0x1C006EDA0 (xxxInternalDoSyncPaint.c)
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxHungAppDemon @ 0x1C0088D20 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C00A1684 (xxxSimpleDoSyncPaint.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C008B970 (DwmAsyncChildStyleChange.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00F72D0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall ClearHungFlag(struct tagWND *a1, __int16 a2)
{
  int v3; // ebp
  int v4; // esi
  int v5; // r14d
  int v6; // r15d
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  int v9; // r9d
  unsigned int v10; // edi
  __int64 v11; // rcx
  void *v12; // rax

  v3 = *((_DWORD *)a1 + 17);
  v4 = *((_DWORD *)a1 + 16);
  v5 = *((_DWORD *)a1 + 76);
  v6 = *((_BYTE *)a1 + 59) & 0x18;
  *((_BYTE *)a1 + HIBYTE(a2) + 56) &= ~(_BYTE)a2;
  result = IsWindowDesktopComposed(a1);
  if ( (_DWORD)result )
  {
    v10 = *((_DWORD *)a1 + 17);
    v11 = *((unsigned int *)a1 + 16);
    v8 = *((unsigned int *)a1 + 76);
    if ( v3 != v10 )
      goto LABEL_13;
    if ( v4 == (_DWORD)v11 && v5 == (_DWORD)v8 )
      goto LABEL_5;
    if ( v3 == v10 )
    {
      if ( v4 == (_DWORD)v11 )
      {
        result = v5 ^ (unsigned int)v8;
        if ( (result & 0x5C00300) == 0 )
          goto LABEL_5;
      }
      else
      {
        result = v4 ^ (unsigned int)v11;
        if ( (result & 0x4E27A9) == 0 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_13:
      result = v3 ^ v10;
      if ( (result & 0xB9CF0000) == 0 )
        goto LABEL_5;
    }
    v12 = (void *)ReferenceDwmApiPort(v11);
    result = DwmAsyncChildStyleChange(v12);
  }
LABEL_5:
  if ( (*((_BYTE *)a1 + 59) & 0x18) == 0 )
  {
    if ( v6 )
      return VWPLRemoveBase(gpvwplHungRedraw, v8, a1, v9, 0LL);
  }
  return result;
}
