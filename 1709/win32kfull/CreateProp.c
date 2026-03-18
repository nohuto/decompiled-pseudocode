/*
 * XREFs of CreateProp @ 0x1C0097B78
 * Callers:
 *     NtUserSetProp @ 0x1C0097A50 (NtUserSetProp.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0097C60 (DesktopAlloc.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall CreateProp(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rdx
  unsigned int v4; // ecx
  _DWORD *v6; // rax
  _DWORD *v7; // rdi
  _DWORD *v8; // rax

  v1 = *(_DWORD **)(a1 + 184);
  if ( v1 )
  {
    if ( v1[1] != *v1 )
    {
LABEL_3:
      v3 = *(_QWORD *)(a1 + 184);
      v4 = *(_DWORD *)(v3 + 4);
      *(_DWORD *)(v3 + 4) = v4 + 1;
      return v3 + 16LL * v4 + 8;
    }
    v6 = (_DWORD *)DesktopAlloc(*(_QWORD *)(a1 + 24), (unsigned int)(16 * *v1 + 24), 10LL);
    v7 = v6;
    if ( v6 )
    {
      memmove(v6, *(const void **)(a1 + 184), 16LL * (unsigned int)(**(_DWORD **)(a1 + 184) - 1) + 24);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)(a1 + 184));
      *(_QWORD *)(a1 + 184) = v7;
      ++*v7;
      goto LABEL_3;
    }
  }
  else
  {
    v8 = (_DWORD *)DesktopAlloc(*(_QWORD *)(a1 + 24), 24LL, 10LL);
    *(_QWORD *)(a1 + 184) = v8;
    if ( v8 )
    {
      *v8 = 1;
      goto LABEL_3;
    }
  }
  return 0LL;
}
