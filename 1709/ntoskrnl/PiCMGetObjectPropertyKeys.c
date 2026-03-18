/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x1406D064C
 * Callers:
 *     PiCMHandleIoctl @ 0x140525E40 (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x140525C50 (PiCMReturnBufferResultData.c)
 *     PiCMReleaseObjectInputData @ 0x140530DB0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x140531014 (PiCMCaptureObjectInputData.c)
 *     _PnpGetObjectPropertyKeys @ 0x140781FAC (_PnpGetObjectPropertyKeys.c)
 */

__int64 __fastcall PiCMGetObjectPropertyKeys(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  PVOID PoolWithTag; // rsi
  signed int ObjectPropertyKeys; // ebx
  int v11; // edi
  SIZE_T v12; // rdx
  unsigned __int64 v13; // rbx
  signed int v14; // eax
  unsigned __int64 v16; // rdx
  char v17[4]; // [rsp+50h] [rbp-30h] BYREF
  int v18; // [rsp+54h] [rbp-2Ch]
  int v19; // [rsp+58h] [rbp-28h]
  __int64 v20; // [rsp+60h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-14h]
  int v22; // [rsp+70h] [rbp-10h]
  int v23; // [rsp+C8h] [rbp+48h]

  PoolWithTag = 0LL;
  v23 = 0;
  *a6 = 0;
  ObjectPropertyKeys = PiCMCaptureObjectInputData(a1, a2, a5, v17);
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_30;
  if ( !v20 || v18 || v21 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_36;
  }
  if ( !a3 || a4 < 0x14 )
  {
    ObjectPropertyKeys = -1073741811;
    goto LABEL_27;
  }
  if ( (v19 & 0x7FFF0000) != 0 )
    goto LABEL_8;
  if ( v19 < 0 )
  {
    v11 = (unsigned __int16)v19 < 0xBu ? (unsigned __int16)v19 : 0;
    goto LABEL_19;
  }
  switch ( (unsigned __int16)v19 )
  {
    case 1u:
      v11 = 1;
LABEL_19:
      if ( !v11 )
        goto LABEL_20;
      break;
    case 2u:
      v11 = 2;
      break;
    case 3u:
      v11 = 4;
      break;
    case 4u:
      v11 = 3;
      break;
    default:
LABEL_8:
      v11 = 0;
LABEL_20:
      ObjectPropertyKeys = -1073741811;
      break;
  }
  if ( ObjectPropertyKeys < 0 )
  {
LABEL_27:
    v14 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v23, 0, 0LL, 0, v22, a3, a4, a6);
    goto LABEL_28;
  }
  v12 = 0LL;
  if ( a4 - 20 >= 0x14 )
    v12 = a4 - 20;
  if ( (_DWORD)v12 )
  {
    v13 = (unsigned int)v12;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x34706E50u);
    if ( !PoolWithTag )
    {
      ObjectPropertyKeys = -1073741670;
      goto LABEL_27;
    }
    v16 = v13 / 0x14;
  }
  else
  {
    LODWORD(v16) = 0;
  }
  v23 = v16;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, v20, v11, 0);
LABEL_36:
  if ( ObjectPropertyKeys < 0 )
    goto LABEL_27;
  v14 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * v23, 0, PoolWithTag, 20 * v23, v22, a3, a4, a6);
LABEL_28:
  ObjectPropertyKeys = v14;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_30:
  PiCMReleaseObjectInputData((__int64)v17);
  return (unsigned int)ObjectPropertyKeys;
}
