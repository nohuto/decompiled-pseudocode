/*
 * XREFs of IopInitializeReserveIrps @ 0x1408530A0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x1400FFE44 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140384F80 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140384EA8 = 0;
    qword_140384EC0 = (__int64)&qword_140384EB8;
    qword_140384EB8 = (__int64)&qword_140384EB8;
    word_140384EB0 = 1;
    byte_140384EB2 = 6;
    dword_140384EB4 = 0;
    qword_140384EC8 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140384EC8 )
    {
      dword_140384ED0 = 0;
      qword_140384EE8 = (__int64)&qword_140384EE0;
      qword_140384EE0 = (__int64)&qword_140384EE0;
      word_140384ED8 = 1;
      byte_140384EDA = 6;
      dword_140384EDC = 0;
      qword_140384EF0 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140384EF0 )
      {
        dword_140384EF8 = 0;
        stru_140384F00.Header.WaitListHead.Blink = &stru_140384F00.Header.WaitListHead;
        v4 = 0;
        stru_140384F00.Header.WaitListHead.Flink = &stru_140384F00.Header.WaitListHead;
        LOWORD(stru_140384F00.Header.Lock) = 1;
        stru_140384F00.Header.Size = 6;
        stru_140384F00.Header.SignalState = 0;
        qword_140384F78 = 0LL;
        while ( 1 )
        {
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v3, 42, 0);
          v3 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v4 )
          {
            if ( v4 == 1 )
            {
              qword_140384F48 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140384F78;
              qword_140384F78 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_140384F20 = 0;
            qword_140384F40 = (__int64)&qword_140384F38;
            result = 1;
            qword_140384F38 = (__int64)&qword_140384F38;
            stru_140384F60.Header.WaitListHead.Blink = &stru_140384F60.Header.WaitListHead;
            stru_140384F60.Header.WaitListHead.Flink = &stru_140384F60.Header.WaitListHead;
            dword_140384F50 = 0;
            qword_140384F28 = 0LL;
            qword_140384F58 = 0LL;
            word_140384F30 = 1;
            byte_140384F32 = 6;
            dword_140384F34 = 0;
            LOWORD(stru_140384F60.Header.Lock) = 1;
            stru_140384F60.Header.Size = 6;
            stru_140384F60.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
