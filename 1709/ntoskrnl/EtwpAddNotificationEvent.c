/*
 * XREFs of EtwpAddNotificationEvent @ 0x1404EF9A0
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     EtwpAddDataSource @ 0x1404EFA48 (EtwpAddDataSource.c)
 */

__int64 __fastcall EtwpAddNotificationEvent(void *a1, char a2)
{
  NTSTATUS v3; // eax
  PVOID v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  volatile signed __int64 *v7; // rdx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v3 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  v4 = Object;
  v5 = v3;
  if ( v3 >= 0 )
  {
    v6 = EtwpAddDataSource(KeGetCurrentThread()->ApcState.Process);
    v7 = (volatile signed __int64 *)v6;
    if ( v6 )
    {
      if ( a2 )
        v7 = (volatile signed __int64 *)(v6 + 8);
      if ( _InterlockedCompareExchange64(v7, (signed __int64)Object, 0LL) )
        v5 = -1073740008;
      else
        v4 = 0LL;
    }
    else
    {
      v5 = -1073741801;
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return v5;
}
