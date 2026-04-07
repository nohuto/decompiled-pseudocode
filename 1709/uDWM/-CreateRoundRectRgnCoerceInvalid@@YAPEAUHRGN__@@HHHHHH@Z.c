/*
 * XREFs of ?CreateRoundRectRgnCoerceInvalid@@YAPEAUHRGN__@@HHHHHH@Z @ 0x180069A4C
 * Callers:
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x18006CA74 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

HRGN __fastcall CreateRoundRectRgnCoerceInvalid(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r9d
  int v7; // ebx
  int v9; // r10d
  int v10; // eax
  int v11; // ecx
  int v12; // r9d
  int v13; // eax
  int v14; // r8d
  bool v15; // cc
  int v16; // edx

  v6 = a4 + 1;
  v7 = 0x7FFFFFF;
  v9 = a2;
  v10 = -134217728;
  v11 = -134217728;
  if ( v6 > -134217728 )
    v10 = v6;
  v12 = 0x7FFFFFF;
  if ( v10 < 0x7FFFFFF )
    v12 = v10;
  v13 = a3 + 1;
  v14 = 0x7FFFFFF;
  if ( v13 > -134217728 )
    v11 = v13;
  if ( v11 < 0x7FFFFFF )
    v14 = v11;
  v15 = a2 <= -134217728;
  v16 = 0x7FFFFFF;
  if ( v15 )
    v9 = -134217728;
  if ( v9 < 0x7FFFFFF )
    v16 = v9;
  if ( a1 <= -134217728 )
    a1 = -134217728;
  if ( a1 < 0x7FFFFFF )
    v7 = a1;
  return CreateRoundRectRgn(v7, v16, v14, v12, a5, a6);
}
