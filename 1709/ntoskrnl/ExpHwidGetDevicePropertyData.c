/*
 * XREFs of ExpHwidGetDevicePropertyData @ 0x14054F2B8
 * Callers:
 *     ExpHwidAuthenticateHardwareId @ 0x14054EF30 (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x14054F0F0 (ExpHwidGetDeviceProperties.c)
 *     sub_14076275C @ 0x14076275C (sub_14076275C.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x14054F460 (IoGetDevicePropertyData.c)
 *     sub_14054F948 @ 0x14054F948 (sub_14054F948.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x14059CF4C (ExpHwidEnsurePropertyBufferLength.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1406C1E54 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall ExpHwidGetDevicePropertyData(PDEVICE_OBJECT Pdo, int a2, const DEVPROPKEY *a3, int a4, __int64 Type)
{
  char v5; // r14
  unsigned int v10; // edi
  __int64 v11; // rbx
  ULONG Size; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // r10d
  _WORD *v17; // r9
  ULONG v19; // eax
  int v20; // eax
  int v21; // eax
  ULONG RequiredSize; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  RequiredSize = 0;
  if ( a4 == 18 )
  {
    v10 = 2;
  }
  else
  {
    v10 = 4;
    if ( a4 != 8210 )
      v10 = 0;
  }
  v11 = Type;
  if ( *(unsigned __int16 *)(Type + 2) < v10
    && (v21 = ExpHwidEnsurePropertyBufferLength(Type, v10), v15 = (unsigned int)v21, v21 < 0) )
  {
LABEL_29:
    sub_14054F948(v11, v14, v15);
  }
  else
  {
    while ( 1 )
    {
      Size = *(unsigned __int16 *)(v11 + 2) - v10;
      v13 = Pdo
          ? IoGetDevicePropertyData(Pdo, a3, 0, 0, Size, *(PVOID *)(v11 + 8), &RequiredSize, (PDEVPROPTYPE)&Type)
          : PnpGetDeviceInterfacePropertyData(
              a2,
              (_DWORD)a3,
              0,
              a4,
              Size,
              *(_QWORD *)(v11 + 8),
              (__int64)&RequiredSize,
              (__int64)&Type);
      v15 = (unsigned int)v13;
      if ( v13 >= 0 )
        break;
      if ( v13 != -1073741789 )
        goto LABEL_14;
      if ( v5 )
        goto LABEL_29;
      v19 = RequiredSize;
      v14 = v10 + RequiredSize;
      RequiredSize = v14;
      if ( (unsigned int)v14 < v19 )
      {
        v15 = 3221225626LL;
        goto LABEL_14;
      }
      v20 = ExpHwidEnsurePropertyBufferLength(v11, v14);
      v15 = (unsigned int)v20;
      if ( v20 < 0 )
        goto LABEL_29;
      v5 = 1;
    }
    v16 = Type;
    if ( (_DWORD)Type != a4 )
    {
      v15 = 3221225508LL;
      goto LABEL_29;
    }
    if ( a4 == 18 || a4 == 8210 )
    {
      v14 = RequiredSize;
      if ( (RequiredSize & 1) != 0 )
      {
        v15 = 3221225476LL;
        goto LABEL_29;
      }
      v17 = (_WORD *)(*(_QWORD *)(v11 + 8) + 2 * ((unsigned __int64)RequiredSize >> 1));
      if ( RequiredSize < 2 || *(v17 - 1) )
      {
        *v17++ = 0;
        v16 = Type;
        v14 = RequiredSize + 2;
        RequiredSize += 2;
      }
      if ( v16 == 8210 && ((unsigned int)v14 < 4 || *(v17 - 2)) )
      {
        *v17 = 0;
        v16 = Type;
        v14 = RequiredSize + 2;
      }
    }
    else
    {
      v14 = RequiredSize;
    }
    *(_WORD *)v11 = v14;
    *(_DWORD *)(v11 + 4) = v16;
LABEL_14:
    if ( (int)v15 < 0 )
      goto LABEL_29;
  }
  return (unsigned int)v15;
}
