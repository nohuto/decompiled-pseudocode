/*
 * XREFs of ?GetDesktopBrokerProcessHandle@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJPEAPEAX@Z @ 0x1801C6950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetDesktopBrokerProcessHandle(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        void **a2)
{
  unsigned int v2; // esi
  HANDLE CurrentProcess; // rdi
  HANDLE v5; // rbx
  HANDLE v6; // rax
  const char *v7; // r9
  unsigned int LastError; // eax
  char *v9; // rcx
  HANDLE v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE TargetHandle; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  TargetHandle = 0LL;
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  v6 = GetCurrentProcess();
  if ( DuplicateHandle(v6, v5, CurrentProcess, &TargetHandle, 0x100000u, 0, 0) )
  {
    v10 = TargetHandle;
    v9 = 0LL;
    TargetHandle = 0LL;
    *a2 = v10;
  }
  else
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x261,
                  (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                  v7);
    v9 = (char *)TargetHandle;
    v2 = LastError;
  }
  if ( (unsigned __int64)(v9 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v9);
  return v2;
}
