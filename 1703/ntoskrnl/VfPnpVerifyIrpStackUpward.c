/*
 * XREFs of VfPnpVerifyIrpStackUpward @ 0x14077E420
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ViErrorReport1 @ 0x140251260 (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x1402512E4 (ViErrorReport10.c)
 *     PpvUtilIsPdo @ 0x140763C38 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x140772CB8 (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x140772D18 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140772DB8 (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x140772F40 (IovUtilIsWdmStack.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14077E6DC (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackUpward(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v10; // rbp
  __int64 v11; // r12
  const void *v12; // rsi
  int v13; // ebx
  int v14; // ecx
  int v15; // r14d
  unsigned int v16; // ecx
  void *LowerDeviceObject; // rax
  _QWORD *v18; // rbx
  _QWORD *BottomDeviceObject; // rcx
  BOOL IsPdo; // ebx
  PVOID v21; // rdx
  const void *v22; // r9

  result = IovUtilIsWdmStack(*(_QWORD **)(a2 + 40));
  if ( !(_DWORD)result )
    return result;
  v10 = *(const void **)a1;
  v11 = *(_QWORD *)(a1 + 240);
  v12 = *(const void **)(a4 + 40);
  v13 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !a5 )
    goto LABEL_19;
  result = *(unsigned int *)(a4 + 4);
  v14 = *(_DWORD *)(a1 + 56) & 0x20;
  v15 = *(_DWORD *)(a4 + 4) & 0x10000000;
  if ( (int)result >= 0 )
  {
    if ( v15 )
    {
LABEL_18:
      result = ViPnpVerifyMinorWasProcessedProperly(
                 (_DWORD)v10,
                 a2,
                 0,
                 (unsigned int)(v13 != -1073741637) + 1,
                 (__int64)v12,
                 0);
      goto LABEL_19;
    }
    if ( *(_BYTE *)(a2 + 1) != 8 )
    {
      if ( v14 )
      {
        v16 = 557;
LABEL_16:
        result = ViErrorReport1(v16, *(const void **)(a4 + 40), v10);
        goto LABEL_17;
      }
      result = v13 + 0x80000000;
      if ( (int)result < 0 || v13 == -1073741637 )
      {
        result = (unsigned int)VfIoSwitchedOffNoReboot;
        if ( !VfIoSwitchedOffNoReboot )
        {
          if ( v13 < 0 )
          {
            if ( v13 != -1073741637 )
              goto LABEL_17;
            v16 = 559;
          }
          else
          {
            v16 = 558;
          }
          goto LABEL_16;
        }
      }
    }
  }
LABEL_17:
  if ( v15 )
    goto LABEL_18;
LABEL_19:
  if ( v13 == -1073741637 && (*(_DWORD *)(a3 + 4) & 0x2000000) == 0 && *(_DWORD *)(a3 + 96) != -1073741637 )
  {
    result = ViErrorReport1(0x216u, v12, v10);
    *(_DWORD *)(a3 + 4) |= 0x2000000u;
  }
  if ( *(_BYTE *)(a2 + 1) == 23 )
  {
    LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(*(_QWORD *)(a2 + 40));
    if ( LowerDeviceObject )
    {
      ObfDereferenceObject(LowerDeviceObject);
      goto LABEL_30;
    }
    v18 = *(_QWORD **)(a2 + 40);
    BottomDeviceObject = IovUtilGetBottomDeviceObject(v18);
    if ( BottomDeviceObject == v18 )
    {
      IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObject);
      ObfDereferenceObject(v21);
      if ( IsPdo )
        goto LABEL_30;
    }
    else
    {
      ObfDereferenceObject(BottomDeviceObject);
    }
    ViErrorReport10(0x241u, v12, *(const void **)(v11 + 64), *(const void **)(a2 + 40));
LABEL_30:
    result = IovUtilIsDeviceObjectMarked(*(_QWORD *)(a2 + 40), 0);
    if ( (_DWORD)result )
      return ViErrorReport10(0x242u, v12, *(const void **)(v11 + 64), v22);
  }
  return result;
}
