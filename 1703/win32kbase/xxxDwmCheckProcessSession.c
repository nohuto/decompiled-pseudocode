/*
 * XREFs of xxxDwmCheckProcessSession @ 0x1C008BF30
 * Callers:
 *     NtUserCheckProcessSession @ 0x1C008BE10 (NtUserCheckProcessSession.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C008BF84 (LockProcessByClientIdEx.c)
 */

__int64 __fastcall xxxDwmCheckProcessSession(int a1)
{
  int v1; // ebx
  int v3; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v3 = 0;
  v1 = LockProcessByClientIdEx(a1, &Object, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 != gSessionId )
      v1 = -1073741823;
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v1;
}
