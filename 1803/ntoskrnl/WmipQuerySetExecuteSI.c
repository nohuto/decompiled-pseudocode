/*
 * XREFs of WmipQuerySetExecuteSI @ 0x14051B0F8
 * Callers:
 *     WmipIoControl @ 0x14051ACC0 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x1405DD3C0 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x1407A2410 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1407A2740 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1407A2850 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x1407A4320 (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140073920 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x14051B374 (WmipUnreferenceEntry.c)
 *     WmipPrepareWnodeSI @ 0x14051B448 (WmipPrepareWnodeSI.c)
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x1405DCF88 (WmipSendWmiIrp.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        PVOID Object,
        PIRP Irp,
        KPROCESSOR_MODE AccessMode,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  PVOID v10; // r13
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v21; // r15
  _QWORD *v22; // r14
  int v24; // eax
  ULONG_PTR *v25; // r15
  char v26; // [rsp+30h] [rbp-A1h] BYREF
  char v27[3]; // [rsp+31h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-9Dh] BYREF
  unsigned int *v29; // [rsp+38h] [rbp-99h]
  PVOID P; // [rsp+40h] [rbp-91h] BYREF
  char v31; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v32[128]; // [rsp+50h] [rbp-81h] BYREF

  v7 = a7;
  v29 = a7;
  v10 = Object;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  if ( Object )
  {
    v12 = ObReferenceObjectByPointer(Object, v11, WmipGuidObjectType, AccessMode);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, AccessMode, &P, 0LL);
    v10 = P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v28 = 16;
  P = v32;
  v13 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v28, (unsigned int)&P, (__int64)v27, (__int64)&v26);
  if ( v13 >= 0 )
  {
    if ( v26 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      Irp->IoStatus.Information = 48LL;
    }
    else if ( v27[0] )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v15 = P;
      v16 = 0LL;
      if ( v28 )
      {
        while ( 1 )
        {
          v17 = v15[v16];
          v18 = *(unsigned int *)(v17 + 80);
          *(_DWORD *)(a5 + 4) = v18;
          if ( Irp )
          {
            v19 = WmipForwardWmiIrp(Irp, a6, a5);
            p_Information = &Irp->IoStatus.Information;
          }
          else
          {
            LOBYTE(v17) = a4;
            v19 = WmipSendWmiIrp(v17, v18, a5 + 24, a6, a5, &P);
            p_Information = (ULONG_PTR *)&v31;
          }
          if ( v19 >= 0 )
            *v29 = *(_DWORD *)p_Information;
          if ( (unsigned int)(v19 + 1073741163) > 1 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= v28 )
            goto LABEL_18;
        }
        v13 = v19;
LABEL_18:
        v21 = v28;
        v22 = v15;
        do
        {
          WmipUnreferenceEntry(&WmipISChunkInfo, *v22++);
          --v21;
        }
        while ( v21 );
      }
      if ( v15 != (_QWORD *)v32 && v15 )
        ExFreePoolWithTag(v15, 0);
      v7 = v29;
    }
    else
    {
      if ( Irp )
      {
        v24 = WmipForwardWmiIrp(Irp, a6, a5);
        v25 = &Irp->IoStatus.Information;
      }
      else
      {
        LOBYTE(v14) = a4;
        v24 = WmipSendWmiIrp(v14, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &P);
        v25 = (ULONG_PTR *)&v31;
      }
      v13 = v24;
      if ( v24 < 0 )
      {
LABEL_25:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_26;
      }
      *a7 = *(_DWORD *)v25;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_25;
  }
LABEL_26:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v13;
}
