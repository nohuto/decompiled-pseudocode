/*
 * XREFs of sub_1800FD750 @ 0x1800FD750
 * Callers:
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwOpenKey @ 0x1800A5540 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1800A5940 (ZwEnumerateKey.c)
 */

__int64 __fastcall sub_1800FD750(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // rbp
  ULONG v6; // ebx
  NTSTATUS v7; // esi
  unsigned __int64 v8; // rdx
  __int16 v9; // ax
  __int64 v10; // rdx
  void *v11; // rcx
  _WORD v12[2]; // [rsp+50h] [rbp+0h] BYREF

  v2 = (unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v2 + 4) = 0;
  *(_WORD *)v2 = -1;
  if ( !a1 )
    return 3221225485LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(v2 + 16),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages\\PendingDelete");
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = ((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                      + 16;
  *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 48;
  *(_QWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
  *(_DWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 64;
  *(_OWORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  if ( ZwOpenKey((PHANDLE)(v2 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v2 + 32)) >= 0 )
  {
    v6 = 0;
    do
    {
      v7 = ZwEnumerateKey(
             *(HANDLE *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8),
             v6,
             KeyBasicInformation,
             (PVOID)(v2 + 96),
             0x200u,
             (PULONG)(v2 + 4));
      if ( v7 >= 0 )
      {
        v8 = *(unsigned int *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
        if ( v8 + 24 < 0x1FE )
        {
          *(_WORD *)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70 + 2 * (v8 >> 1)) = 0;
          if ( (int)sub_180044C70(
                      a1,
                      (const WCHAR *)(v2 + 112),
                      0,
                      (_WORD *)((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL)) >= 0 )
          {
            v9 = *(_WORD *)v2;
            if ( *(_WORD *)v2 != 0xFFFF && v9 != a2 )
            {
              v10 = 28LL * v9;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) &= ~0x20u;
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v10) |= 0x8000u;
            }
          }
        }
      }
      ++v6;
    }
    while ( v7 != -2147483622 );
    v11 = *(void **)(((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    if ( v11 )
      ZwClose(v11);
  }
  return 0LL;
}
