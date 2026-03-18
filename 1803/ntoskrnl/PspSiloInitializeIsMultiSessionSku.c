/*
 * XREFs of PspSiloInitializeIsMultiSessionSku @ 0x140779A1C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     ExIsMultiSessionSku @ 0x1406533B4 (ExIsMultiSessionSku.c)
 */

__int64 __fastcall PspSiloInitializeIsMultiSessionSku(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int IsMultiSessionSku; // edi
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 1256);
  v2 = PsAttachSiloToCurrentThread(a1);
  IsMultiSessionSku = ExIsMultiSessionSku(&v5);
  PsDetachSiloFromCurrentThread(v2);
  if ( IsMultiSessionSku >= 0 )
    *(_BYTE *)(*(_QWORD *)(v1 + 1104) + 28LL) = v5;
  return (unsigned int)IsMultiSessionSku;
}
