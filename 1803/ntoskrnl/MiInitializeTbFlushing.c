/*
 * XREFs of MiInitializeTbFlushing @ 0x14089D730
 * Callers:
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x14089D77C (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x14089DA58 (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_1403CB708 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_1403CB708 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_1403CB708 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_1403CB708 == 2048 );
  }
  return result;
}
