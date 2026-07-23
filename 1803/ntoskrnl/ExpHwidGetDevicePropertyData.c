/*
 * XREFs of ExpHwidGetDevicePropertyData @ 0x1405D44D0
 * Callers:
 *     ExpHwidAuthenticateHardwareId @ 0x1405D415C (ExpHwidAuthenticateHardwareId.c)
 *     ExpHwidGetDeviceProperties @ 0x1405D4308 (ExpHwidGetDeviceProperties.c)
 *     sub_1407CA23C @ 0x1407CA23C (sub_1407CA23C.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 *     sub_1405D4774 @ 0x1405D4774 (sub_1405D4774.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x1405E9214 (ExpHwidEnsurePropertyBufferLength.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x140727E88 (PnpGetDeviceInterfacePropertyData.c)
 */

__int64 __fastcall ExpHwidGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        __int64 a2,
        const DEVPROPKEY *a3,
        int a4,
        __int64 Type)
{
  char v5; // r14
  unsigned int v10; // edi
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r10d
  _WORD *v16; // r9
  ULONG v18; // eax
  int v19; // eax
  int v20; // eax
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
    && (v20 = ExpHwidEnsurePropertyBufferLength(Type, v10), v14 = (unsigned int)v20, v20 < 0) )
  {
LABEL_29:
    sub_1405D4774(v11, v13, v14);
  }
  else
  {
    while ( 1 )
    {
      v12 = Pdo
          ? IoGetDevicePropertyData(
              Pdo,
              a3,
              0,
              0,
              *(unsigned __int16 *)(v11 + 2) - v10,
              *(PVOID *)(v11 + 8),
              &RequiredSize,
              (PDEVPROPTYPE)&Type)
          : PnpGetDeviceInterfacePropertyData(a2, a3, 0LL);
      v14 = (unsigned int)v12;
      if ( v12 >= 0 )
        break;
      if ( v12 != -1073741789 )
        goto LABEL_14;
      if ( v5 )
        goto LABEL_29;
      v18 = RequiredSize;
      v13 = v10 + RequiredSize;
      RequiredSize = v13;
      if ( (unsigned int)v13 < v18 )
      {
        v14 = 3221225626LL;
        goto LABEL_14;
      }
      v19 = ExpHwidEnsurePropertyBufferLength(v11, v13);
      v14 = (unsigned int)v19;
      if ( v19 < 0 )
        goto LABEL_29;
      v5 = 1;
    }
    v15 = Type;
    if ( (_DWORD)Type != a4 )
    {
      v14 = 3221225508LL;
      goto LABEL_29;
    }
    if ( a4 == 18 || a4 == 8210 )
    {
      v13 = RequiredSize;
      if ( (RequiredSize & 1) != 0 )
      {
        v14 = 3221225476LL;
        goto LABEL_29;
      }
      v16 = (_WORD *)(*(_QWORD *)(v11 + 8) + 2 * ((unsigned __int64)RequiredSize >> 1));
      if ( RequiredSize < 2 || *(v16 - 1) )
      {
        *v16++ = 0;
        v15 = Type;
        v13 = RequiredSize + 2;
        RequiredSize += 2;
      }
      if ( v15 == 8210 && ((unsigned int)v13 < 4 || *(v16 - 2)) )
      {
        *v16 = 0;
        v15 = Type;
        v13 = RequiredSize + 2;
      }
    }
    else
    {
      v13 = RequiredSize;
    }
    *(_WORD *)v11 = v13;
    *(_DWORD *)(v11 + 4) = v15;
LABEL_14:
    if ( (int)v14 < 0 )
      goto LABEL_29;
  }
  return (unsigned int)v14;
}
