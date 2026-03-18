/*
 * XREFs of WmipQueryGuidInfo @ 0x140742174
 * Callers:
 *     WmipIoControl @ 0x140579E20 (WmipIoControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall WmipQueryGuidInfo(__int64 a1)
{
  NTSTATUS v2; // ebx
  PVOID v3; // rdi
  __int64 v4; // rsi
  __int64 ***v5; // rsi
  __int64 **i; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = ObReferenceObjectByHandle(*(HANDLE *)a1, 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( v2 >= 0 )
  {
    v3 = Object;
    v4 = *((_QWORD *)Object + 7);
    if ( v4 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v5 = (__int64 ***)(v4 + 56);
      for ( i = *v5; i != (__int64 **)v5; i = (__int64 **)*i )
      {
        if ( ((_DWORD)i[2] & 4) != 0 )
        {
          *(_BYTE *)(a1 + 8) = 1;
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
    }
    else
    {
      v2 = -1073741055;
    }
    ObfDereferenceObject(v3);
  }
  return (unsigned int)v2;
}
