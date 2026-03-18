/*
 * XREFs of ValidateHwinsta @ 0x1C00889D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHwinsta(void *a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, PVOID *a4)
{
  int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // ebx
  ULONG v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // [rsp+58h] [rbp+20h] BYREF

  v5 = ObReferenceObjectByHandle(a1, a3, ExWindowStationObjectType, a2, (PVOID *)&v17, 0LL);
  v6 = v17;
  v7 = v5;
  *a4 = v17;
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9, v10, v11, v12);
  }
  else if ( *v6 != gSessionId )
  {
    v7 = -1073741816;
    v13 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v13, v14, v15, v16);
    ObfDereferenceObject(*a4);
  }
  return v7;
}
