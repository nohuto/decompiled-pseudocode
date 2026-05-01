/*
 * XREFs of ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801C4FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1801C4B10 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
        RTL_SRWLOCK *a1,
        __int64 *a2,
        int a3,
        int a4,
        __int64 a5)
{
  RTL_SRWLOCK *v5; // rsi
  __int64 v10; // xmm0_8
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+28h] [rbp-48h]
  int v16; // [rsp+2Ch] [rbp-44h]
  __int64 v17; // [rsp+30h] [rbp-40h]
  int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+44h] [rbp-2Ch]
  HANDLE v20[2]; // [rsp+50h] [rbp-20h]
  HANDLE hObject; // [rsp+60h] [rbp-10h]
  char v22; // [rsp+68h] [rbp-8h]

  v5 = a1 + 10;
  AcquireSRWLockExclusive(a1 + 10);
  v10 = *a2;
  v11 = *((_DWORD *)a2 + 2);
  v16 = a3;
  v14 = v10;
  v15 = v11;
  v17 = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v18 = 0;
  *(_OWORD *)v20 = 0LL;
  v19 = 1LL;
  hObject = 0LL;
  v22 = 1;
  v12 = Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::RegisterHostComponentPair(
          (Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *)a1,
          (struct Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)&v14,
          a4);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  if ( (unsigned __int64)v20[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v20[1]);
  if ( (unsigned __int64)v20[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v20[0]);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return v12;
}
