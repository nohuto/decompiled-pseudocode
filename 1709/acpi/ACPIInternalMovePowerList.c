/*
 * XREFs of ACPIInternalMovePowerList @ 0x1C0004E5C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C004A090 (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     <none>
 */

void __fastcall ACPIInternalMovePowerList(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v5; // rcx
  int v6; // edx
  bool v7; // zf
  int v8; // eax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  int v12; // eax

  v2 = (_QWORD *)*a1;
  while ( v2 != a1 )
  {
    v5 = v2;
    v2 = (_QWORD *)*v2;
    if ( !*((_DWORD *)v5 + 12) )
    {
      v6 = *(_DWORD *)(v5[5] + 692LL);
      v7 = v6 == 0;
      if ( v6 <= 0 )
        goto LABEL_4;
      v12 = *((_DWORD *)v5 + 14);
      if ( (v12 & 0x2000000) != 0 )
      {
        v7 = v6 == 0;
LABEL_4:
        if ( v7 )
        {
          v8 = *((_DWORD *)v5 + 14);
          if ( (v8 & 0x2000000) != 0 )
          {
            *((_DWORD *)v5 + 14) = v8 & 0xFDFFFFFF;
            _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
          }
        }
        goto LABEL_7;
      }
      *((_DWORD *)v5 + 14) = v12 | 0x2000000;
      _InterlockedIncrement(&AcpiPowerCurrentPagingPathTransitions);
    }
LABEL_7:
    _InterlockedExchange((volatile __int32 *)v5 + 52, 3);
  }
  v9 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v10 = *(_QWORD **)(a2 + 8);
    v11 = (_QWORD *)a1[1];
    *v11 = a2;
    *(_QWORD *)(a2 + 8) = v11;
    v9[1] = v10;
    *v10 = v9;
    a1[1] = a1;
    *a1 = a1;
  }
}
