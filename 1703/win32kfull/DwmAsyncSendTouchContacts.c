/*
 * XREFs of DwmAsyncSendTouchContacts @ 0x1C024BD64
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 */

__int64 __fastcall DwmAsyncSendTouchContacts(PVOID Object, _OWORD *a2, __int64 a3, unsigned int a4)
{
  _OWORD *v6; // rbx
  unsigned int v8; // r14d
  char *v9; // rdi
  __int64 v10; // rcx
  signed __int64 v11; // rax
  __int128 v12; // xmm0

  v6 = a2;
  v8 = -1073741823;
  if ( Object && a2 && a4 )
  {
    v9 = (char *)PALLOCMEM2(40 * (a4 - 1) + 100, 1951225668LL, 1);
    if ( v9 )
    {
      *((_DWORD *)v9 + 10) = 1073741888;
      *(_QWORD *)(v9 + 52) = a3;
      *((_DWORD *)v9 + 11) = a4;
      *(_WORD *)v9 = 40 * a4 + 20;
      *((_WORD *)v9 + 2) = 0x8000;
      *((_WORD *)v9 + 1) = 40 * a4 + 100;
      *((_DWORD *)v9 + 12) = 40 * a4;
      if ( a4 )
      {
        v10 = a4;
        v11 = v9 - (char *)v6;
        do
        {
          v12 = *v6;
          v6 = (_OWORD *)((char *)v6 + 40);
          *(_OWORD *)((char *)v6 + v11 + 20) = v12;
          *(_OWORD *)((char *)v6 + v11 + 36) = *(_OWORD *)((char *)v6 - 24);
          *(_QWORD *)((char *)v6 + v11 + 52) = *((_QWORD *)v6 - 1);
          --v10;
        }
        while ( v10 );
      }
      v8 = LpcRequestPort(Object, v9);
      Win32FreePool(v9);
    }
    ObfDereferenceObject(Object);
  }
  return v8;
}
