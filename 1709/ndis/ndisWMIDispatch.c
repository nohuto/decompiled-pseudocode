/*
 * XREFs of ndisWMIDispatch @ 0x1C00B7BFC
 * Callers:
 *     ndisWMIIrpDispatch @ 0x1C00B7BE0 (ndisWMIIrpDispatch.c)
 *     NdisWdfDeviceWmiHandler @ 0x1C00E9C70 (NdisWdfDeviceWmiHandler.c)
 * Callees:
 *     ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C001F638 (-ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisDummyHandler @ 0x1C00AC1B8 (ndisDummyHandler.c)
 *     ndisWmiEnableEvents @ 0x1C00B60B8 (ndisWmiEnableEvents.c)
 *     ndisWmiRegister @ 0x1C00B6C4C (ndisWmiRegister.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B6DF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00B7E2C (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00C526C (ndisWmiQueryAllData.c)
 *     ndisWmiDisableEvents @ 0x1C00CA7BC (ndisWmiDisableEvents.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v4; // r14d
  _UNICODE_STRING *FileName; // r12
  unsigned int LowPart; // r13d
  int *Parameters; // r15
  unsigned int MinorFunction; // r9d
  int AllData; // eax
  int v13; // ebx
  unsigned __int64 v14; // rax
  struct NDIS_SETUP_DEVICE_EXTENSION *v16; // rax
  __int64 v17; // r8
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  unsigned __int16 v19; // cx
  struct _NDIS_MINIPORT_BLOCK *v20; // [rsp+20h] [rbp-38h]
  char v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LODWORD(v22) = 0;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (int *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( a1 && **(_BYTE **)(a1 + 64) == 23 )
  {
    v16 = ExtensionFromDevice((struct _DEVICE_OBJECT *)a1);
    ++*(_BYTE *)(v17 + 67);
    *(_QWORD *)(v17 + 184) = CurrentStackLocation + 1;
    NextDeviceObject = v16->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, a3);
  }
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_qq(0x49u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, a2, a3);
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, a2, a3);
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    NextDeviceObject = a2->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, a3);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5 )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_q(0x51u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiDisableEvents(a2, FileName);
      goto LABEL_15;
    }
    if ( !CurrentStackLocation->MinorFunction )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_q(0x4Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiQueryAllData(a2, (__int64)&v22, v21);
      goto LABEL_15;
    }
    if ( MinorFunction == 1 )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_q(0x4Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiQuerySingleInstance(a2, (__int64)Parameters, LowPart, (unsigned int *)&v22, v20);
      goto LABEL_15;
    }
    if ( MinorFunction == 2 )
    {
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_q(0x4Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiChangeSingleInstance(a2);
      goto LABEL_15;
    }
    if ( MinorFunction != 3 )
    {
      if ( MinorFunction == 4 )
      {
        if ( (unsigned __int8)byte_1C0098759 >= 4u )
          WPP_SF_q(0x50u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiEnableEvents((__int64)a2, FileName);
        goto LABEL_15;
      }
      goto LABEL_37;
    }
    if ( (unsigned __int8)byte_1C0098759 >= 4u )
    {
      WPP_SF_q(0x4Eu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
      {
        WPP_SF_q(0x41u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        if ( (unsigned __int8)byte_1C0098759 >= 4u )
        {
          v19 = 66;
LABEL_57:
          WPP_SF_q(v19, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        }
      }
    }
LABEL_58:
    v13 = -1073741637;
    goto LABEL_17;
  }
  if ( MinorFunction != 6 )
  {
    if ( MinorFunction != 7 )
    {
      if ( MinorFunction == 8 )
      {
        if ( (unsigned __int8)byte_1C0098759 >= 4u )
          WPP_SF_q(0x4Au, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiRegister((__int64)a2, (__int64)FileName, Parameters, LowPart, (unsigned int *)&v22);
        goto LABEL_15;
      }
      if ( MinorFunction == 9 )
      {
        if ( (unsigned __int8)byte_1C0098759 >= 4u )
          WPP_SF_q(0x4Fu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiExecuteMethod(a2, Parameters, LowPart, &v22);
LABEL_15:
        v13 = AllData;
        goto LABEL_16;
      }
LABEL_37:
      if ( (unsigned __int8)byte_1C0098759 >= 4u )
        WPP_SF_qD(0x54u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2, MinorFunction);
      v13 = -1073741808;
      goto LABEL_17;
    }
    if ( (unsigned __int8)byte_1C0098759 >= 4u )
    {
      v19 = 83;
      goto LABEL_57;
    }
    goto LABEL_58;
  }
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_q(0x52u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
  v13 = -1073741637;
LABEL_16:
  if ( v13 != 259 )
  {
LABEL_17:
    a3->IoStatus.Status = v13;
    if ( v13 == -1073741789 )
    {
      v14 = (unsigned int)v22;
    }
    else
    {
      if ( v13 >= 0 )
        v4 = v22;
      v14 = v4;
    }
    a3->IoStatus.Information = v14;
    IofCompleteRequest(a3, 0);
    goto LABEL_22;
  }
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
LABEL_22:
  if ( (unsigned __int8)byte_1C0098759 >= 4u )
    WPP_SF_qD(0x55u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2, v13);
  return v13;
}
