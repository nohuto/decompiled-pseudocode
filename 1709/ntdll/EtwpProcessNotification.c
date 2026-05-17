/*
 * XREFs of EtwpProcessNotification @ 0x180064060
 * Callers:
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 * Callees:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180063350 (EtwProcessPrivateLoggerRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

char __fastcall EtwpProcessNotification(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _BYTE *a5)
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
        v10 = *(_QWORD *)(PrivateLoggerNotificationEntry + 88);
        *a3 = v10;
        *(_QWORD *)(a2 + 24) = v10;
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 88);
        *a3 = v8;
        *(_QWORD *)(a2 + 24) = v8;
      }
      EtwpUpdateEnableInfoAndCallback(a1, a2);
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
