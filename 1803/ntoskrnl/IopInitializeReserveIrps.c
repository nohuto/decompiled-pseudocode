/*
 * XREFs of IopInitializeReserveIrps @ 0x1408C4968
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     IopAllocateIrpWithExtension @ 0x140006144 (IopAllocateIrpWithExtension.c)
 */

char __fastcall IopInitializeReserveIrps(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  IRP *IrpWithExtension; // rax
  char result; // al

  byte_1403C8340 = 42;
  LOBYTE(a2) = 42;
  IopReserveIrps = (PIRP)IopAllocateIrpWithExtension(a1, a2);
  if ( IopReserveIrps )
  {
    dword_1403C8268 = 0;
    qword_1403C8280 = (__int64)&qword_1403C8278;
    qword_1403C8278 = (__int64)&qword_1403C8278;
    LOBYTE(v2) = 42;
    word_1403C8270 = 1;
    byte_1403C8272 = 6;
    dword_1403C8274 = 0;
    qword_1403C8288 = (PIRP)IopAllocateIrpWithExtension(v3, v2);
    if ( qword_1403C8288 )
    {
      dword_1403C8290 = 0;
      qword_1403C82A8 = (__int64)&qword_1403C82A0;
      qword_1403C82A0 = (__int64)&qword_1403C82A0;
      LOBYTE(v4) = 42;
      word_1403C8298 = 1;
      byte_1403C829A = 6;
      dword_1403C829C = 0;
      qword_1403C82B0 = (PIRP)IopAllocateIrpWithExtension(v5, v4);
      if ( qword_1403C82B0 )
      {
        dword_1403C82B8 = 0;
        stru_1403C82C0.Header.WaitListHead.Blink = &stru_1403C82C0.Header.WaitListHead;
        v8 = 0;
        stru_1403C82C0.Header.WaitListHead.Flink = &stru_1403C82C0.Header.WaitListHead;
        LOWORD(stru_1403C82C0.Header.Lock) = 1;
        stru_1403C82C0.Header.Size = 6;
        stru_1403C82C0.Header.SignalState = 0;
        qword_1403C8338 = 0LL;
        while ( 1 )
        {
          LOBYTE(v6) = 42;
          IrpWithExtension = (IRP *)IopAllocateIrpWithExtension(v7, v6);
          v7 = (__int64)IrpWithExtension;
          if ( !IrpWithExtension )
            break;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              qword_1403C8308 = IrpWithExtension;
            }
            else
            {
              *(_QWORD *)&IrpWithExtension->Type = qword_1403C8338;
              qword_1403C8338 = IrpWithExtension;
            }
          }
          else
          {
            Irp = IrpWithExtension;
          }
          if ( (unsigned int)++v8 >= 8 )
          {
            dword_1403C82E0 = 0;
            qword_1403C8300 = (__int64)&qword_1403C82F8;
            result = 1;
            qword_1403C82F8 = (__int64)&qword_1403C82F8;
            stru_1403C8320.Header.WaitListHead.Blink = &stru_1403C8320.Header.WaitListHead;
            stru_1403C8320.Header.WaitListHead.Flink = &stru_1403C8320.Header.WaitListHead;
            dword_1403C8310 = 0;
            qword_1403C82E8 = 0LL;
            qword_1403C8318 = 0LL;
            word_1403C82F0 = 1;
            byte_1403C82F2 = 6;
            dword_1403C82F4 = 0;
            LOWORD(stru_1403C8320.Header.Lock) = 1;
            stru_1403C8320.Header.Size = 6;
            stru_1403C8320.Header.SignalState = 0;
            return result;
          }
        }
      }
    }
  }
  return 0;
}
