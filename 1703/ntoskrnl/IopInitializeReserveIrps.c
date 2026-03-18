/*
 * XREFs of IopInitializeReserveIrps @ 0x140821E04
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x14012BFC8 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_140368F40 = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, 42, 0);
  if ( IopReserveIrps )
  {
    dword_140368E68 = 0;
    qword_140368E80 = (__int64)&qword_140368E78;
    qword_140368E78 = (__int64)&qword_140368E78;
    word_140368E70 = 1;
    byte_140368E72 = 6;
    dword_140368E74 = 0;
    qword_140368E88 = (PIRP)IopAllocateIrpWithExtension(v1, 42, 0);
    if ( qword_140368E88 )
    {
      dword_140368E90 = 0;
      qword_140368EA8 = (__int64)&qword_140368EA0;
      qword_140368EA0 = (__int64)&qword_140368EA0;
      word_140368E98 = 1;
      byte_140368E9A = 6;
      dword_140368E9C = 0;
      qword_140368EB0 = (PIRP)IopAllocateIrpWithExtension(v2, 42, 0);
      if ( qword_140368EB0 )
      {
        dword_140368EB8 = 0;
        qword_140368ED0 = (__int64)&qword_140368EC8;
        v4 = 0;
        qword_140368EC8 = (__int64)&qword_140368EC8;
        word_140368EC0 = 1;
        byte_140368EC2 = 6;
        dword_140368EC4 = 0;
        qword_140368F38 = 0LL;
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
              qword_140368F08 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_140368F38;
              qword_140368F38 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v4 >= 8 )
          {
            dword_140368EE0 = 0;
            qword_140368F00 = (__int64)&qword_140368EF8;
            result = 1;
            qword_140368EF8 = (__int64)&qword_140368EF8;
            qword_140368F30 = (__int64)&qword_140368F28;
            qword_140368F28 = (__int64)&qword_140368F28;
            dword_140368F10 = 0;
            qword_140368EE8 = 0LL;
            qword_140368F18 = 0LL;
            word_140368EF0 = 1;
            byte_140368EF2 = 6;
            dword_140368EF4 = 0;
            word_140368F20 = 1;
            byte_140368F22 = 6;
            dword_140368F24 = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
