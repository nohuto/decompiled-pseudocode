/*
 * XREFs of WmipQuerySetExecuteSI @ 0x14051ECEC
 * Callers:
 *     IoWMIQuerySingleInstance @ 0x14051E700 (IoWMIQuerySingleInstance.c)
 *     WmipIoControl @ 0x140579E20 (WmipIoControl.c)
 *     IoWMIExecuteMethod @ 0x1405E8340 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x140740700 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x140740810 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x140742240 (WmipQuerySingleMultiple.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14051F050 (WmipSendWmiIrp.c)
 *     WmipForwardWmiIrp @ 0x14051F140 (WmipForwardWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x14051F40C (WmipPrepareWnodeSI.c)
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
  unsigned int *v7; // r12
  PVOID v10; // rsi
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r13
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  ULONG_PTR *p_Information; // rax
  _QWORD *v22; // r14
  __int64 v23; // r15
  int v25; // eax
  ULONG_PTR *v26; // r15
  char v27; // [rsp+30h] [rbp-B1h] BYREF
  char v28[3]; // [rsp+31h] [rbp-B0h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-ADh] BYREF
  PVOID v30; // [rsp+38h] [rbp-A9h]
  unsigned int *v31; // [rsp+40h] [rbp-A1h]
  PVOID P; // [rsp+48h] [rbp-99h] BYREF
  _BYTE v33[16]; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v34[128]; // [rsp+60h] [rbp-81h] BYREF

  v7 = a7;
  v30 = Object;
  v10 = Object;
  v31 = a7;
  v11 = *((_DWORD *)DesiredAccessForFunction + a4);
  if ( Object )
  {
    v12 = ObReferenceObjectByPointer(Object, v11, WmipGuidObjectType, AccessMode);
  }
  else
  {
    v12 = ObReferenceObjectByHandle(*(HANDLE *)(a5 + 16), v11, WmipGuidObjectType, AccessMode, &P, 0LL);
    v10 = P;
    v30 = P;
  }
  v13 = v12;
  if ( v12 < 0 )
    return (unsigned int)v13;
  v29 = 16;
  P = v34;
  v13 = WmipPrepareWnodeSI((_DWORD)v10, a5, (unsigned int)&v29, (unsigned int)&P, (__int64)v28, (__int64)&v27);
  if ( v13 >= 0 )
  {
    if ( v27 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      Irp->IoStatus.Information = 48LL;
    }
    else if ( v28[0] )
    {
      if ( a4 == 3 || (v13 = -1073741162, a4 == 9) )
        v13 = -1073741161;
      v15 = v29;
      v16 = 0LL;
      v17 = P;
      if ( v29 )
      {
        while ( 1 )
        {
          v18 = v17[v16];
          v19 = *(unsigned int *)(v18 + 80);
          *(_DWORD *)(a5 + 4) = v19;
          if ( Irp )
          {
            v20 = WmipForwardWmiIrp(Irp, a6, a5);
            p_Information = &Irp->IoStatus.Information;
          }
          else
          {
            LOBYTE(v18) = a4;
            v20 = WmipSendWmiIrp(v18, v19, a5 + 24, a6, a5, &P);
            p_Information = (ULONG_PTR *)v33;
          }
          if ( v20 >= 0 )
            *v31 = *(_DWORD *)p_Information;
          if ( (unsigned int)(v20 + 1073741163) > 1 )
            break;
          v16 = (unsigned int)(v16 + 1);
          if ( (unsigned int)v16 >= (unsigned int)v15 )
            goto LABEL_18;
        }
        v13 = v20;
LABEL_18:
        if ( (_DWORD)v15 )
        {
          v22 = v17;
          v23 = v15;
          do
          {
            WmipUnreferenceEntry(&WmipISChunkInfo, *v22++);
            --v23;
          }
          while ( v23 );
        }
      }
      if ( v17 != (_QWORD *)v34 && v17 )
        ExFreePoolWithTag(v17, 0);
      v10 = v30;
      v7 = v31;
    }
    else
    {
      if ( Irp )
      {
        v25 = WmipForwardWmiIrp(Irp, a6, a5);
        v26 = &Irp->IoStatus.Information;
      }
      else
      {
        LOBYTE(v14) = a4;
        v25 = WmipSendWmiIrp(v14, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &P);
        v26 = (ULONG_PTR *)v33;
      }
      v13 = v25;
      if ( v25 < 0 )
      {
LABEL_26:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_27;
      }
      *a7 = *(_DWORD *)v26;
    }
    if ( v13 >= 0 && *v7 > a6 )
      v13 = -1073741811;
    goto LABEL_26;
  }
LABEL_27:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v13;
}
