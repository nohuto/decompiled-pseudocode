/*
 * XREFs of CreateProp @ 0x1C0042B34
 * Callers:
 *     NtUserSetProp @ 0x1C0042A00 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C0043520 (InternalSetProp.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0042C20 (DesktopAlloc.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall CreateProp(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rdx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  _DWORD *v7; // rax

  v1 = *(_DWORD **)(a1 + 184);
  if ( v1 )
  {
    if ( v1[1] != *v1 )
    {
LABEL_3:
      v3 = *(_QWORD *)(a1 + 184);
      return v3 + 16LL * (unsigned int)(*(_DWORD *)(v3 + 4))++ + 8;
    }
    v5 = (_DWORD *)DesktopAlloc(*(_QWORD *)(a1 + 24), (unsigned int)(16 * *v1 + 24), 10LL);
    v6 = v5;
    if ( v5 )
    {
      memmove(v5, *(const void **)(a1 + 184), 16LL * (unsigned int)(**(_DWORD **)(a1 + 184) - 1) + 24);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 184));
      *(_QWORD *)(a1 + 184) = v6;
      ++*v6;
      goto LABEL_3;
    }
  }
  else
  {
    v7 = (_DWORD *)DesktopAlloc(*(_QWORD *)(a1 + 24), 24LL, 10LL);
    *(_QWORD *)(a1 + 184) = v7;
    if ( v7 )
    {
      *v7 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
