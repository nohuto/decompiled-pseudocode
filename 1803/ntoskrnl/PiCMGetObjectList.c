/*
 * XREFs of PiCMGetObjectList @ 0x14050C2C8
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14050A2B4 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x14050C488 (PiCMReleaseObjectInputData.c)
 *     _PnpGetObjectList @ 0x14050C4B8 (_PnpGetObjectList.c)
 *     PiCMCaptureObjectInputData @ 0x14050CA48 (PiCMCaptureObjectInputData.c)
 */

__int64 __fastcall PiCMGetObjectList(__int64 a1, __int64 a2, _DWORD *a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  PVOID PoolWithTag; // rsi
  signed int ObjectList; // ebx
  int v11; // r8d
  int v12; // ecx
  int v13; // r9d
  int v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  signed int v17; // eax
  _BYTE v19[4]; // [rsp+50h] [rbp-30h] BYREF
  int v20; // [rsp+54h] [rbp-2Ch]
  int v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+68h] [rbp-18h]
  int v24; // [rsp+6Ch] [rbp-14h]
  int v25; // [rsp+70h] [rbp-10h]

  v6 = a6;
  LODWORD(a6) = 0;
  PoolWithTag = 0LL;
  *v6 = 0;
  ObjectList = PiCMCaptureObjectInputData(a1, a2, a5, v19);
  if ( ObjectList < 0 )
    goto LABEL_24;
  if ( v22 || v23 || v20 || v24 )
  {
    ObjectList = -1073741811;
    goto LABEL_20;
  }
  if ( !a3 || a4 < 0x14 )
  {
LABEL_47:
    ObjectList = -1073741811;
    goto LABEL_26;
  }
  v12 = v21;
  v13 = 1;
  v14 = 0;
  if ( v21 <= 6 )
  {
    if ( v21 == 6 )
    {
      v14 = 6;
      goto LABEL_13;
    }
    v12 = v21 - 1;
    if ( v21 == 1 )
    {
      v14 = 1;
      ObjectList = -1073741637;
      goto LABEL_13;
    }
    v12 = v21 - 2;
    if ( v21 == 2 )
    {
      v14 = 2;
      goto LABEL_13;
    }
    v12 = v21 - 3;
    if ( v21 == 3 )
    {
      v14 = 4;
      goto LABEL_13;
    }
    v12 = v21 - 4;
    if ( v21 == 4 )
    {
      v14 = 3;
      goto LABEL_13;
    }
    if ( v21 == 5 )
    {
      v14 = 5;
      goto LABEL_13;
    }
  }
  else
  {
    switch ( v21 )
    {
      case 65537:
        v12 = 7;
LABEL_11:
        v14 = PiDrvDbCtx != 0 ? v12 : 0;
        goto LABEL_12;
      case 65538:
        v12 = 8;
        goto LABEL_11;
      case 65539:
        v12 = 9;
        goto LABEL_11;
    }
    v12 = v21 - 65540;
    if ( v21 == 65540 )
    {
      v12 = 10;
      goto LABEL_11;
    }
    if ( v21 == 65541 )
    {
      v12 = 11;
      goto LABEL_11;
    }
  }
LABEL_12:
  if ( !v14 )
    goto LABEL_47;
LABEL_13:
  if ( ObjectList < 0 )
    goto LABEL_26;
  v15 = 0;
  if ( a4 - 20 >= 2 )
    v15 = a4 - 20;
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectList = -1073741670;
      goto LABEL_26;
    }
    v16 = v15 >> 1;
  }
  else
  {
    v16 = 0;
  }
  LODWORD(a6) = v16;
  ObjectList = PnpGetObjectList(v12, v14, v11, v13, (__int64)PoolWithTag, v16, (__int64)&a6, 0);
LABEL_20:
  if ( ObjectList >= 0 )
  {
    v17 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, PoolWithTag, 2 * (int)a6, v25, a3, a4, v6);
    goto LABEL_22;
  }
LABEL_26:
  v17 = PiCMReturnBufferResultData(ObjectList, 2 * (int)a6, 0, 0LL, 0, v25, a3, a4, v6);
LABEL_22:
  ObjectList = v17;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_24:
  PiCMReleaseObjectInputData(v19);
  return (unsigned int)ObjectList;
}
