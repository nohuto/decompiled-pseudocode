/*
 * XREFs of RaidDmaFlushDmaBuffers @ 0x1C002F1B4
 * Callers:
 *     RaidAdapterExecuteXrb @ 0x1C00069E8 (RaidAdapterExecuteXrb.c)
 *     RaUnitStartIo @ 0x1C0007D00 (RaUnitStartIo.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidDmaFlushDmaBuffers(int *a1, __int64 a2, char a3)
{
  __int64 v3; // r10
  __int64 v4; // rax
  void (__fastcall *v5)(_QWORD); // rax

  v3 = a2;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( *(_QWORD *)a1 )
      {
        v4 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
        if ( v4 )
        {
          if ( a1[7] >= 3 && (v5 = *(void (__fastcall **)(_QWORD))(v4 + 240)) != 0LL )
          {
            v5(*(_QWORD *)a1);
          }
          else
          {
            LOBYTE(a2) = a3;
            KeFlushIoBuffers(v3, a2);
          }
        }
      }
    }
  }
}
