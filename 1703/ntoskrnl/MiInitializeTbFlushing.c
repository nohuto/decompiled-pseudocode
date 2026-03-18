/*
 * XREFs of MiInitializeTbFlushing @ 0x140802C7C
 * Callers:
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     MiInitializeTbFlush @ 0x140802CC8 (MiInitializeTbFlush.c)
 *     KeGetTbSize @ 0x140802F88 (KeGetTbSize.c)
 */

__int64 MiInitializeTbFlushing()
{
  __int64 TbSize; // rbx
  __int64 result; // rax

  TbSize = KeGetTbSize();
  if ( !TbSize )
    TbSize = 2048LL;
  qword_14036C218 = -1LL;
  result = MiInitializeTbFlush(TbSize);
  if ( qword_14036C218 == TbSize )
  {
    do
    {
      if ( TbSize == 2048 )
        break;
      qword_14036C218 = -1LL;
      TbSize = 2048LL;
      result = MiInitializeTbFlush(2048LL);
    }
    while ( qword_14036C218 == 2048 );
  }
  return result;
}
