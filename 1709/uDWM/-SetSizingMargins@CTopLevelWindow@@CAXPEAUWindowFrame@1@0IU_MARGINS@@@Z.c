/*
 * XREFs of ?SetSizingMargins@CTopLevelWindow@@CAXPEAUWindowFrame@1@0IU_MARGINS@@@Z @ 0x18003AA10
 * Callers:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003A200 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CTopLevelWindow::SetSizingMargins(
        struct CTopLevelWindow::WindowFrame *a1,
        struct CTopLevelWindow::WindowFrame *a2,
        unsigned int a3,
        struct _MARGINS *a4)
{
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdx
  struct _MARGINS **v8; // rax
  _QWORD v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v4 = (_QWORD *)((char *)a2 + 16 * a3 + 1496);
  v5 = 2LL;
  v6 = a1 - a2;
  do
  {
    v7 = 2LL;
    v9[0] = *(_QWORD *)((char *)v4 + v6);
    v9[1] = *v4;
    v8 = (struct _MARGINS **)v9;
    do
    {
      if ( *v8 )
        (*v8)[2] = *a4;
      ++v8;
      --v7;
    }
    while ( v7 );
    ++v4;
    --v5;
  }
  while ( v5 );
}
