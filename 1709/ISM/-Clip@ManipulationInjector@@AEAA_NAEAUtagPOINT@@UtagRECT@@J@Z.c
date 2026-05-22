/*
 * XREFs of ?Clip@ManipulationInjector@@AEAA_NAEAUtagPOINT@@UtagRECT@@J@Z @ 0x1800C2178
 * Callers:
 *     ?StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z @ 0x1800C0BC0 (-StartManipulation@ManipulationInjector@@AEAAXW4INTERACTION_TYPE@@UtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C0FF0 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C1440 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?ComputeSafeDelta@ManipulationInjector@@AEAA?AUtagPOINT@@IU2@UtagRECT@@@Z @ 0x1800C2634 (-ComputeSafeDelta@ManipulationInjector@@AEAA-AUtagPOINT@@IU2@UtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::Clip(ManipulationInjector *this, struct tagPOINT *a2, struct tagRECT *a3, int a4)
{
  __int64 v4; // rax
  char v6; // bl
  LONG v7; // edx
  int v9; // ecx
  LONG v10; // edx
  LONG v11; // ecx

  v4 = (__int64)*a2;
  v6 = 0;
  v7 = a4 + a3->left;
  if ( (int)v4 >= v7 )
  {
    v9 = a3->right - a4;
    if ( (int)v4 < v9 )
      goto LABEL_6;
    a2->x = v9 - 1;
  }
  else
  {
    a2->x = v7;
  }
  v6 = 1;
LABEL_6:
  v10 = a4 + a3->top;
  if ( a2->y < v10 )
  {
    v6 = 1;
    a2->y = v10;
LABEL_11:
    if ( *((_BYTE *)this + 13) )
      DbgPrint("Clipped: original (%d, %d) clipped (%d, %d)\n", v4, HIDWORD(v4), a2->x, a2->y);
    return v6;
  }
  v11 = a3->bottom - a4;
  if ( a2->y >= v11 )
  {
    v6 = 1;
    a2->y = v11 - 1;
  }
  if ( v6 )
    goto LABEL_11;
  return v6;
}
