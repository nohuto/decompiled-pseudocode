/*
 * XREFs of sub_180051300 @ 0x180051300
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_180050D48 @ 0x180050D48 (sub_180050D48.c)
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 *     sub_1800514A0 @ 0x1800514A0 (sub_1800514A0.c)
 *     sub_1800518CC @ 0x1800518CC (sub_1800518CC.c)
 *     sub_18005203C @ 0x18005203C (sub_18005203C.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwSetInformationThread @ 0x1800A54A0 (ZwSetInformationThread.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

void __fastcall __noreturn sub_180051300(__int64 a1)
{
  HANDLE UniqueThread; // rdx
  int v3; // eax
  BOOL v4; // esi
  int v5; // eax
  __int64 v6; // rdx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  signed int v11; // edi
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rsi
  int v16; // eax
  int v17; // [rsp+40h] [rbp+8h] BYREF

  UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 24) = UniqueThread;
  v17 = 2;
  ZwSetInformationThread(-2LL, 3LL, &v17);
  while ( *(_DWORD *)(a1 + 328) )
  {
    v3 = ZwWaitForSingleObject(*(_QWORD *)(a1 + 128), 0LL, (a1 + 344) & -(__int64)(*(_QWORD *)(a1 + 344) != 0LL));
    v4 = v3 == 258 || !v3 && (*(_BYTE *)(a1 + 332) & 2) != 0;
    v5 = sub_1800514A0(a1, v4);
    v7 = v5;
    if ( (*(_BYTE *)(a1 + 332) & 1) != 0 && v5 >= 0 && !v4 )
      v7 = sub_1800514A0(a1, 1LL);
    v8 = *(_DWORD *)(a1 + 332);
    if ( (v8 & 4) != 0 || (v8 & 1) != 0 )
    {
      sub_1800518CC(a1, 0LL);
      v15 = *(_QWORD *)(a1 + 144);
      *(_QWORD *)(a1 + 144) = 0LL;
      v16 = sub_1800531B0(a1, 0LL, 0LL, 0LL);
      *(_DWORD *)(a1 + 40) = v16;
      v7 = v16;
      if ( v16 >= 0 )
      {
        ZwClose(v15);
        if ( (*(_BYTE *)(a1 + 332) & 1) != 0 )
          sub_18005203C(a1, 1LL, 0LL);
      }
      else
      {
        v14 = (*(_BYTE *)(a1 + 332) & 4) == 0;
        *(_QWORD *)(a1 + 144) = v15;
        if ( !v14 )
          v7 = 0;
      }
      *(_DWORD *)(a1 + 332) &= ~1u;
    }
    v9 = *(_DWORD *)(a1 + 332);
    if ( (v9 & 0x10) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 144) == 0LL;
      *(_DWORD *)(a1 + 332) = v9 & 0xFFFFFFEF;
      if ( !v14 )
      {
        LOBYTE(v6) = 1;
        sub_1800518CC(a1, v6);
      }
    }
    v10 = *(_DWORD *)(a1 + 332);
    if ( (v10 & 6) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 136);
      *(_DWORD *)(a1 + 332) = v10 & 0xFFFFFFF9;
      ZwSetEvent(v13, 0LL);
    }
    if ( v7 < 0 )
      sub_180050D48(a1);
  }
  sub_1800514A0(a1, 1LL);
  v11 = sub_1800518CC(a1, 0LL);
  ZwClose(*(_QWORD *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  if ( v11 > 0 )
    v11 = (unsigned __int16)v11 | 0xC0070000;
  v12 = *(_QWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 40) = v11;
  ZwSetEvent(v12, 0LL);
  sub_1800076D8(a1);
  RtlExitUserThread(0);
}
