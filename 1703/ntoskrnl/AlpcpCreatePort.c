/*
 * XREFs of AlpcpCreatePort @ 0x140475F08
 * Callers:
 *     AlpcpCreateConnectionPort @ 0x140445648 (AlpcpCreateConnectionPort.c)
 *     AlpcpAcceptConnectPort @ 0x140475588 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1404768A4 (AlpcpCreateClientPort.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 */

__int64 __fastcall AlpcpCreatePort(int a1, int a2, void **a3)
{
  int Object; // ebx

  Object = ObCreateObjectEx(a1, (_DWORD)AlpcPortObjectType, a2, (_BYTE)a1);
  if ( Object >= 0 )
    memset(*a3, 0, 0x1D8uLL);
  return (unsigned int)Object;
}
