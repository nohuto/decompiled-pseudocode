/*
 * XREFs of _SetUserObjectInformation @ 0x1C01B5C84
 * Callers:
 *     NtUserSetObjectInformation @ 0x1C01EBC00 (NtUserSetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

__int64 __fastcall SetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  POBJECT_TYPE *ObjectType; // rdi
  ACCESS_MASK v13; // edx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BYTE v19[4]; // [rsp+30h] [rbp-58h] BYREF
  int v20; // [rsp+34h] [rbp-54h]
  PVOID Object; // [rsp+48h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-38h] BYREF
  PVOID v23; // [rsp+58h] [rbp-30h] BYREF

  v8 = 1;
  v20 = 1;
  v9 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v9 >= 0 )
  {
    ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
    ObfDereferenceObject(Object);
    if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
    {
      v13 = 16;
    }
    else
    {
      if ( ObjectType != ExDesktopObjectType )
      {
        v11 = 1LL;
        goto LABEL_18;
      }
      v13 = 128;
    }
    v9 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v23, &HandleInformation);
    if ( v9 >= 0 )
    {
      if ( a2 == 1 )
      {
        if ( a4 >= 0xC )
        {
          v19[0] = *a3 != 0;
          v19[1] = HandleInformation.HandleAttributes & 1;
          LOBYTE(v15) = 1;
          ObSetHandleAttributes(Handle, v19, v15);
          if ( ObjectType == ExDesktopObjectType )
          {
            v8 = SetHandleFlag(Handle, 0LL, a3[2] & 1);
            v20 = v8;
            if ( !v8 )
              UserSetLastError(8LL, v17);
          }
          goto LABEL_16;
        }
        v16 = 13LL;
      }
      else
      {
        v16 = 87LL;
      }
      UserSetLastError(v16, v14);
      v8 = 0;
      v20 = 0;
LABEL_16:
      ObfDereferenceObject(v23);
      return v8;
    }
  }
  v11 = RtlNtStatusToDosError(v9);
LABEL_18:
  UserSetLastError(v11, v10);
  return 0LL;
}
