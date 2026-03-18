/*
 * XREFs of ?WaitForWork@CHolographicClient@@UEAAKPEAXK@Z @ 0x1801C3A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DWORD __fastcall CHolographicClient::WaitForWork(CHolographicClient *this, void *a2, DWORD a3)
{
  __int64 v3; // rax
  HANDLE Handles[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 24);
  Handles[1] = a2;
  Handles[0] = *(HANDLE *)(v3 + 48);
  return WaitForMultipleObjects((a2 != 0LL) + 1, Handles, 0, a3);
}
