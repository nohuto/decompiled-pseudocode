/*
 * XREFs of ValidateHdesk @ 0x1C00845C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHdesk(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // ebx
  _DWORD *v6; // rax
  ULONG v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // [rsp+58h] [rbp+20h] BYREF

  v5 = ObReferenceObjectByHandle(a1, a3, (POBJECT_TYPE)ExDesktopObjectType, a2, (PVOID *)&v16, 0LL);
  v6 = v16;
  *a4 = v16;
  if ( v5 < 0 )
  {
    v12 = RtlNtStatusToDosError(v5);
    UserSetLastError(v12, v13, v14, v15);
    return (unsigned int)v5;
  }
  if ( *v6 == gSessionId && (v6[12] & 0xE) == 0 )
    return (unsigned int)v5;
  v8 = RtlNtStatusToDosError(-1073741816);
  UserSetLastError(v8, v9, v10, v11);
  ObfDereferenceObject(*a4);
  return 3221225480LL;
}
