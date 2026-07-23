/*
 * XREFs of sub_1800730D0 @ 0x1800730D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800024A8 @ 0x1800024A8 (sub_1800024A8.c)
 *     sub_180003410 @ 0x180003410 (sub_180003410.c)
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180005554 @ 0x180005554 (sub_180005554.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     sub_180073218 @ 0x180073218 (sub_180073218.c)
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwSetInformationThread @ 0x18009AC60 (ZwSetInformationThread.c)
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

void __fastcall __noreturn sub_1800730D0(__int64 BaseAddress)
{
  NTSTATUS v2; // eax
  BOOL v3; // esi
  int v4; // edi
  unsigned int v5; // ecx
  int v6; // edi
  void *v7; // rcx
  int v8; // eax
  void *v9; // rsi
  int v10; // eax
  int v11; // ecx
  int v12; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(BaseAddress + 24) = NtCurrentTeb()->ClientId.UniqueThread;
  *(_DWORD *)(BaseAddress + 40) = 0;
  v12 = 2;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &v12, 4u);
  while ( *(_DWORD *)(BaseAddress + 328) )
  {
    v2 = ZwWaitForSingleObject(
           *(HANDLE *)(BaseAddress + 128),
           0,
           (PLARGE_INTEGER)((BaseAddress + 344) & -(__int64)(*(_QWORD *)(BaseAddress + 344) != 0LL)));
    v3 = v2 == 258 || !v2 && (*(_BYTE *)(BaseAddress + 332) & 2) != 0;
    v4 = sub_180073218(BaseAddress, v3);
    v5 = *(_DWORD *)(BaseAddress + 332);
    if ( (v5 & 1) != 0 && v4 >= 0 && !v3 )
    {
      v8 = sub_180073218(BaseAddress, 1LL);
      v5 = *(_DWORD *)(BaseAddress + 332);
      v4 = v8;
    }
    if ( (v5 & 4) != 0 || (v5 & 1) != 0 )
    {
      sub_180003410(BaseAddress, 0);
      v9 = *(void **)(BaseAddress + 144);
      *(_QWORD *)(BaseAddress + 144) = 0LL;
      v10 = sub_1800064C0(BaseAddress, 0LL, 0, 0);
      *(_DWORD *)(BaseAddress + 40) = v10;
      v4 = v10;
      if ( v10 >= 0 )
      {
        ZwClose(v9);
        v11 = *(_DWORD *)(BaseAddress + 332);
        if ( (v11 & 1) != 0 )
        {
          sub_180005554(BaseAddress, 1, 0);
          v11 = *(_DWORD *)(BaseAddress + 332);
        }
      }
      else
      {
        v11 = *(_DWORD *)(BaseAddress + 332);
        *(_QWORD *)(BaseAddress + 144) = v9;
        if ( (v11 & 4) != 0 )
          v4 = 0;
      }
      v5 = v11 & 0xFFFFFFFE;
      *(_DWORD *)(BaseAddress + 332) = v5;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v5 &= ~0x10u;
      *(_DWORD *)(BaseAddress + 332) = v5;
      if ( *(_QWORD *)(BaseAddress + 144) )
      {
        sub_180003410(BaseAddress, 1);
        v5 = *(_DWORD *)(BaseAddress + 332);
      }
    }
    if ( (v5 & 6) != 0 )
    {
      *(_DWORD *)(BaseAddress + 332) = v5 & 0xFFFFFFF9;
      ZwSetEvent(*(HANDLE *)(BaseAddress + 136), 0LL);
    }
    if ( v4 < 0 )
      sub_1800024A8(BaseAddress);
  }
  sub_180073218(BaseAddress, 1LL);
  v6 = sub_180003410(BaseAddress, 0);
  ZwClose(*(HANDLE *)(BaseAddress + 144));
  *(_QWORD *)(BaseAddress + 144) = 0LL;
  if ( v6 > 0 )
    v6 = (unsigned __int16)v6 | 0xC0070000;
  v7 = *(void **)(BaseAddress + 136);
  *(_DWORD *)(BaseAddress + 40) = v6;
  ZwSetEvent(v7, 0LL);
  sub_180003970((unsigned int *)BaseAddress);
  RtlExitUserThread(0);
}
