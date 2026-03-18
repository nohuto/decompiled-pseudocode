/*
 * XREFs of NtUserBroadcastThemeChangeEvent @ 0x1C0118D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 */

__int64 __fastcall NtUserBroadcastThemeChangeEvent(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 i; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 j; // rbx
  char v10; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v10);
  for ( i = gppiList; i; i = *(_QWORD *)(i + 352) )
  {
    for ( j = *(_QWORD *)(i + 296); j; j = *(_QWORD *)(j + 640) )
    {
      if ( *(_DWORD *)(j + 868) )
      {
        PostEventMessageEx((struct tagTHREADINFO *)j, *(_QWORD *)(j + 408), 0x19u, 0LL, 0, a1, a2, 0LL);
        v4 = 1;
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v10);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v4;
}
