/*
 * XREFs of _GetUserObjectInformation @ 0x1C00F1074
 * Callers:
 *     NtUserGetObjectInformation @ 0x1C00F0ED0 (NtUserGetObjectInformation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     CheckHandleFlag @ 0x1C00F7214 (CheckHandleFlag.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall GetUserObjectInformation(HANDLE Handle, int a2, _DWORD *a3, unsigned int a4, int *a5)
{
  unsigned int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // eax
  POBJECT_TYPE *ObjectType; // r13
  __int64 v13; // rdx
  __int64 v14; // rdx
  int v15; // r14d
  int v16; // r14d
  const void **v17; // r14
  size_t v18; // r8
  __int64 v19; // rcx
  int v20; // r14d
  int v21; // r14d
  int v22; // r14d
  const void **v23; // r14
  void *v24; // rcx
  ULONG v25; // eax
  __int64 v27; // rcx
  PVOID v28; // [rsp+38h] [rbp-70h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const void **v30; // [rsp+50h] [rbp-58h]
  const void **v31; // [rsp+60h] [rbp-48h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+68h] [rbp-40h] BYREF

  v8 = 1;
  v9 = 0;
  v10 = 0;
  v11 = ObReferenceObjectByHandle(Handle, 0, 0LL, 1, &Object, 0LL);
  if ( v11 < 0 )
    goto LABEL_45;
  ObjectType = (POBJECT_TYPE *)ObGetObjectType(Object);
  ObfDereferenceObject(Object);
  if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v13 = 2LL;
    goto LABEL_5;
  }
  if ( ObjectType == ExDesktopObjectType )
  {
    v13 = 1LL;
LABEL_5:
    if ( (unsigned int)(a2 - 5) <= 1 && ObjectType != ExDesktopObjectType )
      goto LABEL_44;
    v11 = ObReferenceObjectByHandle(Handle, v13, (POBJECT_TYPE)ObjectType, 1, &v28, &HandleInformation);
    if ( v11 >= 0 )
    {
      v15 = a2 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          if ( !ObQueryNameInfo(v28) )
          {
            v17 = 0LL;
            v30 = 0LL;
LABEL_12:
            if ( v17 )
            {
              v18 = *(unsigned __int16 *)v17;
              v10 = v18 + 2;
              if ( (int)v18 + 2 <= a4 )
              {
                memmove(a3, v17[1], v18);
                *(_WORD *)((char *)a3 + *(unsigned __int16 *)v17) = 0;
LABEL_41:
                *a5 = v10;
                ObfDereferenceObject(v28);
                return v8;
              }
              goto LABEL_15;
            }
LABEL_38:
            v10 = 0;
            goto LABEL_41;
          }
          v17 = (const void **)(ObQueryNameInfo(v28) + 8);
LABEL_11:
          v30 = v17;
          goto LABEL_12;
        }
        v20 = v16 - 1;
        if ( !v20 )
        {
          v17 = (const void **)(ObjectType + 2);
          goto LABEL_11;
        }
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            if ( v22 != 1 )
            {
              v19 = 87LL;
              goto LABEL_16;
            }
            v10 = 4;
            if ( a4 >= 4 )
            {
              LOBYTE(v9) = v28 == (PVOID)grpdeskRitInput;
              *a3 = v9;
              goto LABEL_41;
            }
          }
          else
          {
            v10 = 4;
            if ( a4 >= 4 )
            {
              *a3 = *((_DWORD *)v28 + 34) >> 10;
              goto LABEL_41;
            }
          }
        }
        else
        {
          if ( ObjectType == (POBJECT_TYPE *)ExWindowStationObjectType )
            v23 = (const void **)v28;
          else
            v23 = (const void **)*((_QWORD *)v28 + 5);
          v31 = v23;
          v24 = (void *)v23[20];
          if ( !v24 )
            goto LABEL_38;
          v25 = RtlLengthSid(v24);
          v10 = v25;
          if ( v25 <= a4 )
          {
            memmove(a3, v23[20], v25);
            goto LABEL_41;
          }
        }
      }
      else
      {
        v10 = 12;
        if ( a4 >= 0xC )
        {
          *a3 = (HandleInformation.HandleAttributes >> 1) & 1;
          *(_QWORD *)(a3 + 1) = 0LL;
          if ( ObjectType == ExDesktopObjectType )
          {
            if ( (unsigned int)CheckHandleFlag(0LL) )
              a3[2] |= 1u;
          }
          else if ( (*((_DWORD *)v28 + 8) & 4) == 0 )
          {
            a3[2] = 1;
          }
          goto LABEL_41;
        }
      }
LABEL_15:
      v19 = 122LL;
LABEL_16:
      UserSetLastError(v19, v14);
      v8 = 0;
      goto LABEL_41;
    }
LABEL_45:
    v27 = RtlNtStatusToDosError(v11);
    goto LABEL_46;
  }
LABEL_44:
  v27 = 1LL;
LABEL_46:
  UserSetLastError(v27, v13);
  return 0LL;
}
