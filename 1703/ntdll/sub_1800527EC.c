/*
 * XREFs of sub_1800527EC @ 0x1800527EC
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800527EC(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
{
  char v5; // bl
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx

  v5 = 0;
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (unsigned __int16)((*(_WORD *)(a1 + 98) & 0x3FFF) - 2) <= 1u )
    {
      if ( *(__int16 *)(a2 + 78) < 0 )
      {
        v10 = *(_QWORD *)(qword_1801593B0 + 88);
        *a3 = v10;
        *(_QWORD *)(a2 + 24) = v10;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 88);
        *a3 = v8;
        *(_QWORD *)(a2 + 24) = v8;
      }
      sub_18001AF94(a1, a2);
      goto LABEL_6;
    }
  }
  else if ( *(_DWORD *)a2 == 4 )
  {
    if ( (unsigned __int16)((*(_WORD *)(a1 + 98) & 0x3FFF) - 2) <= 1u )
    {
      *a3 = *(_QWORD *)(a1 + 88);
      *a4 = EtwProcessPrivateLoggerRequest((char *)a2);
      v5 = 1;
      *a5 = 1;
    }
  }
  else
  {
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == *(_DWORD *)a2 )
    {
      v11 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a2 + 24) = v11;
      v12 = *(_QWORD *)(a1 + 56);
      *a3 = v11;
      *a4 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 48))(a2, v12);
LABEL_6:
      *a5 = 1;
      return v5;
    }
    if ( (*(_WORD *)(a1 + 98) & 0x3FFF) == 0xA
      && *(_DWORD *)a2 == 7
      && *(_DWORD *)(a2 + 36) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) )
    {
      *a4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 48))(a2, *(_QWORD *)(a1 + 56));
      *a5 = 1;
    }
  }
  return v5;
}
