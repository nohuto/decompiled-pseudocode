/*
 * XREFs of ?OnChanged@CSharedSection@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800584E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSharedSection::OnChanged(__int64 a1)
{
  LPVOID v2; // rdi
  void *v3; // rcx
  const void *v4; // rcx

  v2 = 0LL;
  v3 = *(void **)(a1 + 56);
  if ( v3 )
  {
    v2 = MapViewOfFile(v3, 2u, 0, 0, *(unsigned int *)(a1 + 64));
    CloseHandle(*(HANDLE *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v4 = *(const void **)(a1 + 72);
  if ( v4 )
    UnmapViewOfFile(v4);
  *(_QWORD *)(a1 + 72) = v2;
  return 0LL;
}
