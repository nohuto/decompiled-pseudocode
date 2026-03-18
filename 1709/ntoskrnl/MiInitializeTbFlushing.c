/*
 * XREFs of MiInitializeTbFlushing @ 0x1408493FC
 * Callers:
 *     MiInitSystem @ 0x140828E58 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140849448 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x14084971C (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_140388568 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_140388568 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_140388568 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_140388568 == 2048 );
  }
  return result;
}
