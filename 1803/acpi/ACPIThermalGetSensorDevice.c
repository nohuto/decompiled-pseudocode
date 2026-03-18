/*
 * XREFs of ACPIThermalGetSensorDevice @ 0x1C003C9E4
 * Callers:
 *     ACPIThermalStartDevice @ 0x1C00895C0 (ACPIThermalStartDevice.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0029B28 (ACPIInternalDecrementIrpReferenceCount.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     ACPIAmliEvaluateDsm @ 0x1C00747A8 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIThermalGetSensorDevice(_QWORD *a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  void **v7; // rax
  int v8; // eax
  volatile signed __int32 *v10; // [rsp+70h] [rbp-90h]
  void *FileHandle; // [rsp+78h] [rbp-88h]
  PVOID Object; // [rsp+80h] [rbp-80h]
  PVOID P[2]; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v14; // [rsp+98h] [rbp-68h]
  __int128 v15; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v16[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v17[48]; // [rsp+128h] [rbp+28h] BYREF

  v1 = a1[25];
  P[1] = a1;
  v3 = (_QWORD *)a1[89];
  P[0] = 0LL;
  FileHandle = 0LL;
  v10 = 0LL;
  v4 = AMLIGetNamedChild(v3, 1314083935);
  v14 = (volatile signed __int32 *)v4;
  if ( v4 )
  {
    v5 = AMLIEvalNameSpaceObject(v4, v16, 0, 0LL);
    v7 = (void **)v16;
  }
  else
  {
    if ( (*(_DWORD *)(v1 + 128) & 4) == 0 )
    {
      v5 = 0;
      *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 192);
      *(_QWORD *)(v1 + 216) = *(_QWORD *)(v1 + 200);
      goto LABEL_15;
    }
    memset(v17, 0, sizeof(v17));
    v6 = a1[89];
    v15 = THRM_EXTENSIONS_DSM_UUID;
    v5 = ACPIAmliEvaluateDsm(v6, (unsigned int)&v15, 0, 2, (__int64)v17, (__int64)P);
    v7 = (void **)P[0];
  }
  Object = v7;
  if ( v5 >= 0 )
  {
    if ( *((_WORD *)v7 + 1) == 2 )
    {
      v8 = AMLIGetNameSpaceObject(v7[4]);
      dword_1C00677B8 = 0;
      v5 = v8;
      pszDest = 0;
      FreeDataBuffs((__int64)Object, 1u);
      if ( v5 >= 0 )
        v5 = -1073741810;
    }
    else
    {
      dword_1C00677B8 = 0;
      pszDest = 0;
      v5 = -1072431095;
      FreeDataBuffs((__int64)v7, 1u);
    }
  }
  if ( v14 )
    AMLIDereferenceHandleEx(v14);
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
LABEL_15:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x52706341u);
  return (unsigned int)v5;
}
